//�e�N�X�`�����m�̓��蔻��
//tex1_x,tex2_x �e�N�X�`���̂����W
//tex1_y,tex2_y �e�N�X�`���̂����W
//tex1_xsize,tex2_xsize �e�N�X�`���̂����ł̑傫���i���j
//tex1_ysize,tex2_ysize �e�N�X�`���̂����ł̑傫���i�����j
bool Texture_on_Texture(float tex1_x, float tex1_y, float tex1_xsize, float tex1_ysize,
	float tex2_x, float tex2_y, float tex2_xsize, float tex2_ysize){
	if (tex1_x + tex1_xsize >= tex2_x&& tex1_x <= tex2_x + tex2_xsize){
		if (tex1_y + tex1_ysize >= tex2_y && tex1_y <= tex2_y + tex2_ysize){
			return true;
		}
	}
	return false;
}
