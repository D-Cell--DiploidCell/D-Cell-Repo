//テクスチャ同士の当り判定
//tex1_x,tex2_x テクスチャのｘ座標
//tex1_y,tex2_y テクスチャのｙ座標
//tex1_xsize,tex2_xsize テクスチャのｘ軸での大きさ（幅）
//tex1_ysize,tex2_ysize テクスチャのｙ軸での大きさ（高さ）
bool Texture_on_Texture(float tex1_x, float tex1_y, float tex1_xsize, float tex1_ysize,
	float tex2_x, float tex2_y, float tex2_xsize, float tex2_ysize){
	if (tex1_x + tex1_xsize >= tex2_x&& tex1_x <= tex2_x + tex2_xsize){
		if (tex1_y + tex1_ysize >= tex2_y && tex1_y <= tex2_y + tex2_ysize){
			return true;
		}
	}
	return false;
}
