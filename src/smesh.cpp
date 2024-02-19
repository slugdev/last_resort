#include "smath.h"

float smath::v_dot(
	const float v0[3],
	const float v1[3])
{
	return v0[0] * v1[0] + v0[1] * v1[1] + v0[2] * v1[2];
}

float smath::v_normalize(
	const float point1[3],
    float out[3])
{
	float dsq = sqrt(point1[0] * point1[0] + point1[1] * point1[1] + point1[2] * point1[2]);
	if (dsq != 0)
	{
		out[0] = point1[0] / dsq;
		out[1] = point1[1] / dsq;
		out[2] = point1[2] / dsq;
	}
	else
	{
		out[0] = 0;
		out[1] = 0;
		out[2] = 0;
	}
	return dsq;
}

void smath::v_sub(
	const float v0[3],
	const float v1[3],
	float out[3])
{
	out[0] = v0[0] - v1[0];
	out[1] = v0[1] - v1[1];
	out[2] = v0[2] - v1[2];
}

void smath::v_add(
	const float point1[3],
	const float point2[3],
	float out[3])
{
	out[0] = point1[0] + point2[0];
	out[1] = point1[1] + point2[1];
	out[2] = point1[2] + point2[2];
}

void smath::v_cross(
	const float v0[3],
	const float v1[3],
	float out[3])
{
	out[0] = v0[1] * v1[2] - v0[2] * v1[1];
	out[1] = v0[2] * v1[0] - v0[0] * v1[2];
	out[2] = v0[0] * v1[1] - v0[1] * v1[0];
}

float smath::v_det(float a[3], float b[3], float c[3])
{
return a[0]*(v0[1] * v1[2] - v0[2] * v1[1])-
	a[1]*(v0[0] * v1[2] - v0[2] * v1[0]) +
	a[2]*(v0[0] * v1[1] - v0[1] * v1[0]);
}

void smath::v_scale(
	const float v0[3],
	const float s,
	float out[3])
{
	out[0] = v0[0] * s;
	out[1] = v0[1] * s;
	out[2] = v0[2] * s;
}

void smath::v_mat_mult_d(
	const float mat[16],
	const double v0[3],
	double out[3])
{
	// m0 m4 m8  m12
	// m1 m5 m9  m13
	// m2 m6 m10 m14
	// m3 m7 m11 m15

	out[0] = mat[0] * v0[0] + mat[4] * v0[1] + mat[8] * v0[2] + mat[12];
	out[1] = mat[1] * v0[0] + mat[5] * v0[1] + mat[9] * v0[2] + mat[13];
	out[2] = mat[2] * v0[0] + mat[6] * v0[1] + mat[10] * v0[2] + mat[14];
}

void smath::v_mat_mult_d(
	const float mat[16],
	const float v0[3],
	double out[3])
{
	// m0 m4 m8  m12
	// m1 m5 m9  m13
	// m2 m6 m10 m14
	// m3 m7 m11 m15

	out[0] = mat[0] * v0[0] + mat[4] * v0[1] + mat[8] * v0[2] + mat[12];
	out[1] = mat[1] * v0[0] + mat[5] * v0[1] + mat[9] * v0[2] + mat[13];
	out[2] = mat[2] * v0[0] + mat[6] * v0[1] + mat[10] * v0[2] + mat[14];
}

void smath::v_mat_mult_d_dir(
	const float mat[16],
	const float v0[3],
	double out[3])
{
	// m0 m4 m8  m12
	// m1 m5 m9  m13
	// m2 m6 m10 m14
	// m3 m7 m11 m15

	out[0] = mat[0] * v0[0] + mat[4] * v0[1] + mat[8] * v0[2];
	out[1] = mat[1] * v0[0] + mat[5] * v0[1] + mat[9] * v0[2];
	out[2] = mat[2] * v0[0] + mat[6] * v0[1] + mat[10] * v0[2] ;
}

void smath::v_mat_mult(
	const float mat[16],
	const double v0[3],
	float out[3])
{
	// m0 m4 m8  m12
	// m1 m5 m9  m13
	// m2 m6 m10 m14
	// m3 m7 m11 m15

	out[0] = mat[0] * float(v0[0]) + mat[4] * float(v0[1]) + mat[8] * float(v0[2]) + mat[12];
	out[1] = mat[1] * float(v0[0]) + mat[5] * float(v0[1]) + mat[9] * float(v0[2]) + mat[13];
	out[2] = mat[2] * float(v0[0]) + mat[6] * float(v0[1]) + mat[10] * float(v0[2]) + mat[14];
}


void smath::v_mat_mult(
	const float mat[16],
	const float v0[3],
	float out[3])
{
	// m0 m4 m8  m12
	// m1 m5 m9  m13
	// m2 m6 m10 m14
	// m3 m7 m11 m15

	out[0] = mat[0] * v0[0] + mat[4] * v0[1] + mat[8] * v0[2] + mat[12];
	out[1] = mat[1] * v0[0] + mat[5] * v0[1] + mat[9] * v0[2] + mat[13];
	out[2] = mat[2] * v0[0] + mat[6] * v0[1] + mat[10] * v0[2] + mat[14];
}

void smath::v_mat_mult_dir(
	const float mat[16],
	const float v0[3],
	float out[3])
{
	// m0 m4 m8  m12
	// m1 m5 m9  m13
	// m2 m6 m10 m14
	// m3 m7 m11 m15

	out[0] = mat[0] * v0[0] + mat[4] * v0[1] + mat[8] * v0[2];
	out[1] = mat[1] * v0[0] + mat[5] * v0[1] + mat[9] * v0[2];
	out[2] = mat[2] * v0[0] + mat[6] * v0[1] + mat[10] * v0[2];
}

bool smath::aabb_ray_intersect(
	const float or [3],
	const float dir[3],
	const float minB_in[3],
	const float maxB_in[3],
	float coord[3],
	float inflate)
{
	float minB[3] = { minB_in[0],minB_in[1],minB_in[2] };
	float maxB[3] = { maxB_in[0],maxB_in[1],maxB_in[2] };

	if (inflate > 0)
	{
		minB[0] = minB[0] - inflate;
		minB[1] = minB[1] - inflate;
		minB[2] = minB[2] - inflate;

		maxB[0] = maxB[0] + inflate;
		maxB[0] = maxB[0] + inflate;
		maxB[0] = maxB[0] + inflate;
	}
	bool inside = true;
	char quadrant[3];
	int whichPlane;
	float maxT[3];
	float candidatePlane[3];

	// Find candidate planes; this loop can be avoided if
	//rays cast all from the eye(assume perpsective view)
	for (int i = 0; i < 3; i++)
	{
		if (or [i] < minB[i])
		{
			quadrant[i] = 1;
			candidatePlane[i] = minB[i];
			inside = false;
		}
		else if (or [i] > maxB[i])
		{
			quadrant[i] = 0;
			candidatePlane[i] = maxB[i];
			inside = false;
		}
		else
		{
			quadrant[i] = 2;
		}
	}

	// Ray origin inside bounding box 
	if (inside)
	{
		coord[0] = or [0];
		coord[1] = or [1];
		coord[2] = or [2];

		return true;
	}

	// Calculate T distances to candidate planes 
	for (int i = 0; i < 3; i++)
	{
		if (quadrant[i] != 2 && dir[i] != 0.)
			maxT[i] = (candidatePlane[i] - or [i]) / dir[i];
		else
			maxT[i] = -1;
	}

	// Get largest of the maxT's for final choice of intersection 
	whichPlane = 0;
	for (int i = 1; i < 3; i++)
	{
		if (maxT[whichPlane] < maxT[i])
			whichPlane = i;
	}

	// Check final candidate actually inside box 
	if (maxT[whichPlane] < 0.)
		return false;

	for (int i = 0; i < 3; i++)
	{
		if (whichPlane != i)
		{
			coord[i] = or [i] + maxT[whichPlane] * dir[i];
			if (coord[i] < minB[i] || coord[i] > maxB[i])
				return false;
		}
		else
		{
			coord[i] = candidatePlane[i];
		}
	}

	return true;
}
