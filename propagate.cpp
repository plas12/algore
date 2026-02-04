void propagate(int node, int start, int end){
	if(lazy[node] == 0){
		return;
	}
	
	tree[node] += lazy[node] * (end - start + 1);
	
	if(start != end){
		lazy[node * 2] += lazy[node];
		lazy[node * 2 + 1] += lazy[node];
	}
	
	lazy[node] = 0;
}

void update(int node, int start, int end, int l, int r, long long val){
	propagate(node, start, end);
	
	if(r < start || end < l){
		return;
	}
	
	if(l <= start && end <= r){
		lazy[node] += val;
		propagate(node, start, end);
		return;
	}
	
	int mid = (start + end) / 2;
	
	update(node * 2, start, mid, l, r, val);
	update(node * 2 + 1, mid + 1, end, l, r, val);
	
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long quary(int node, int start, int end, int l, int r){
	if(r < start || end < l){
		return 0;
	}
	
	propagate(node, start, end);
	
	if(l <= start && end <= r){
		return tree[node];
	}
	
	int mid = (start + end) / 2;
	
	long long left = query(node * 2, start, mid, l, r);
	long long right = query(node * 2 + 1, mid + 1, end, l, r);
	
	return left + right;
}
