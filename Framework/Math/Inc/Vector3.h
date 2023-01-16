#pragma once

namespace GNSEngine::Math
{
	struct Vector3
	{
		float x, y, z;

		//noexecpt, never throw and exception
		//constexpr, 
		constexpr Vector3()noexcept :Vector3(0.0f){}
		constexpr Vector3(float value)noexcept :Vector3(value, value, value){}
		constexpr Vector3(float x, float y, float z)noexcept :x(x), y(y), z(z){}

		//Commonly used vectors
		const static Vector3 Zero;
		const static Vector3 One;
		const static Vector3 XAxis;
		const static Vector3 YAxis;
		const static Vector3 ZAxis;

		// Constant Operators
		constexpr Vector3 operator-() const { return{}; }
		constexpr Vector3 operator+(const Vector3 v)const { return{}; }
		constexpr Vector3 operator-(const Vector3 v)const { return{}; }
		constexpr Vector3 operator*(float s)const { return{}; }
		constexpr Vector3 operator/(float s)const { return{}; }

		//Self operators
		Vector3& operator+=(const Vector3& v) { return*this; }
		Vector3& operator-=(const Vector3& v) { return*this; }
		Vector3& operator*=(const float s) { return*this; }
		Vector3& operator/=(const float s) { return*this; }

	};
}

