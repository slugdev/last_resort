
namespace smath {
	float v_dot(
		const float v0[3],
		const float v1[3]);

	float v_normalize(
		const float point1[3],
		float out[3]);

	void v_sub(
		const float v0[3],
		const float v1[3],
		float out[3]);

	void v_add(
		const float point1[3],
		const float point2[3],
		float out[3]);

	void v_cross(
		const float v0[3],
		const float v1[3],
		float out[3]);

	void v_scale(
		const float v0[3],
		const float s,
		float out[3]);

	void v_mat_mult_d(
		const float mat[16],
		const double v0[3],
		double out[3]);

	void v_mat_mult_d(
		const float mat[16],
		const float v0[3],
		double out[3]);

	void v_mat_mult_d_dir(
		const float mat[16],
		const float v0[3],
		double out[3]);

	void v_mat_mult(
		const float mat[16],
		const double v0[3],
		float out[3]);

	void v_mat_mult(
		const float mat[16],
		const float v0[3],
		float out[3]);

	void v_mat_mult_dir(
		const float mat[16],
		const float v0[3],
		float out[3]);

	bool box_ray_intersect(
		const float or [3],
		const float dir[3],
		const float minB_in[3],
		const float maxB_in[3],
		float coord[3],
		float inflate);
}