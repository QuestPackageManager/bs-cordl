#pragma once
// IWYU pragma private; include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct Vector3;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector3);
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Vector3
struct CORDL_TYPE Vector3 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief Field backVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_backVector, put = setStaticF_backVector)) ::UnityEngine::Vector3 backVector;

  /// @brief Field downVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_downVector, put = setStaticF_downVector)) ::UnityEngine::Vector3 downVector;

  /// @brief Field forwardVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_forwardVector, put = setStaticF_forwardVector)) ::UnityEngine::Vector3 forwardVector;

  /// @brief Field leftVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_leftVector, put = setStaticF_leftVector)) ::UnityEngine::Vector3 leftVector;

  __declspec(property(get = get_magnitude)) float_t magnitude;

  /// @brief Field negativeInfinityVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_negativeInfinityVector, put = setStaticF_negativeInfinityVector)) ::UnityEngine::Vector3 negativeInfinityVector;

  __declspec(property(get = get_normalized)) ::UnityEngine::Vector3 normalized;

  /// @brief Field oneVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_oneVector, put = setStaticF_oneVector)) ::UnityEngine::Vector3 oneVector;

  /// @brief Field positiveInfinityVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_positiveInfinityVector, put = setStaticF_positiveInfinityVector)) ::UnityEngine::Vector3 positiveInfinityVector;

  /// @brief Field rightVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_rightVector, put = setStaticF_rightVector)) ::UnityEngine::Vector3 rightVector;

  __declspec(property(get = get_sqrMagnitude)) float_t sqrMagnitude;

  /// @brief Field upVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_upVector, put = setStaticF_upVector)) ::UnityEngine::Vector3 upVector;

  /// @brief Field zeroVector, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_zeroVector, put = setStaticF_zeroVector)) ::UnityEngine::Vector3 zeroVector;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector3>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector3>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Angle, addr 0x48a0dc0, size 0x11c, virtual false, abstract: false, final false
  static inline float_t Angle(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method Cross, addr 0x48a07e0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Distance, addr 0x48a0edc, size 0xa0, virtual false, abstract: false, final false
  static inline float_t Distance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method Dot, addr 0x48a0bd4, size 0x18, virtual false, abstract: false, final false
  static inline float_t Dot(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Equals, addr 0x48a0850, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x48a08e8, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector3 other);

  /// @brief Method GetHashCode, addr 0x48a0808, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Lerp, addr 0x48a0644, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x48a0680, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method Magnitude, addr 0x48a0f7c, size 0x80, virtual false, abstract: false, final false
  static inline float_t Magnitude(::UnityEngine::Vector3 vector);

  /// @brief Method Max, addr 0x48a10b8, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Min, addr 0x48a109c, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Min(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Normalize, addr 0x48a0950, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3 value);

  /// @brief Method Normalize, addr 0x48a0a20, size 0xe8, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method OrthoNormalize, addr 0x48a0600, size 0x44, virtual false, abstract: false, final false
  static inline void OrthoNormalize(::ByRef<::UnityEngine::Vector3> normal, ::ByRef<::UnityEngine::Vector3> tangent);

  /// @brief Method OrthoNormalize2, addr 0x48a05bc, size 0x44, virtual false, abstract: false, final false
  static inline void OrthoNormalize2(::ByRef<::UnityEngine::Vector3> a, ::ByRef<::UnityEngine::Vector3> b);

  /// @brief Method Project, addr 0x48a0bec, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Project(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 onNormal);

  /// @brief Method ProjectOnPlane, addr 0x48a0ce8, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal);

  /// @brief Method Reflect, addr 0x48a0918, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Reflect(::UnityEngine::Vector3 inDirection, ::UnityEngine::Vector3 inNormal);

  /// @brief Method Scale, addr 0x48a07b0, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Scale(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method Scale, addr 0x48a07c0, size 0x20, virtual false, abstract: false, final false
  inline void Scale(::UnityEngine::Vector3 scale);

  /// @brief Method Slerp, addr 0x48a04e4, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method Slerp_Injected, addr 0x48a0558, size 0x64, virtual false, abstract: false, final false
  static inline void Slerp_Injected(::ByRef<::UnityEngine::Vector3> a, ::ByRef<::UnityEngine::Vector3> b, float_t t, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method ToString, addr 0x48a144c, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x48a145c, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x48a1468, size 0x1c8, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x48a07a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method .ctor, addr 0x48a0798, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

  static inline ::UnityEngine::Vector3 getStaticF_backVector();

  static inline ::UnityEngine::Vector3 getStaticF_downVector();

  static inline ::UnityEngine::Vector3 getStaticF_forwardVector();

  static inline ::UnityEngine::Vector3 getStaticF_leftVector();

  static inline ::UnityEngine::Vector3 getStaticF_negativeInfinityVector();

  static inline ::UnityEngine::Vector3 getStaticF_oneVector();

  static inline ::UnityEngine::Vector3 getStaticF_positiveInfinityVector();

  static inline ::UnityEngine::Vector3 getStaticF_rightVector();

  static inline ::UnityEngine::Vector3 getStaticF_upVector();

  static inline ::UnityEngine::Vector3 getStaticF_zeroVector();

  /// @brief Method get_Item, addr 0x48a06a8, size 0x78, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_back, addr 0x48a11b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_back();

  /// @brief Method get_down, addr 0x48a1250, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_down();

  /// @brief Method get_forward, addr 0x48a116c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_left, addr 0x48a129c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_left();

  /// @brief Method get_magnitude, addr 0x48a0ffc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_normalized, addr 0x48a0b08, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normalized();

  /// @brief Method get_one, addr 0x48a1120, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_one();

  /// @brief Method get_positiveInfinity, addr 0x48a1334, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_positiveInfinity();

  /// @brief Method get_right, addr 0x48a12e8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_sqrMagnitude, addr 0x48a107c, size 0x20, virtual false, abstract: false, final false
  inline float_t get_sqrMagnitude();

  /// @brief Method get_up, addr 0x48a1204, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_zero, addr 0x48a10d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector3>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector3>* i___System__IEquatable_1___UnityEngine__Vector3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x48a1380, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Addition(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method op_Division, addr 0x48a13d4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Division(::UnityEngine::Vector3 a, float_t d);

  /// @brief Method op_Equality, addr 0x48a13e4, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method op_Inequality, addr 0x48a1418, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method op_Multiply, addr 0x48a13b0, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Vector3 a, float_t d);

  /// @brief Method op_Multiply, addr 0x48a13c0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(float_t d, ::UnityEngine::Vector3 a);

  /// @brief Method op_Subtraction, addr 0x48a1390, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Subtraction(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method op_UnaryNegation, addr 0x48a13a0, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_UnaryNegation(::UnityEngine::Vector3 a);

  static inline void setStaticF_backVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_downVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_forwardVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_leftVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_oneVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_rightVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_upVector(::UnityEngine::Vector3 value);

  static inline void setStaticF_zeroVector(::UnityEngine::Vector3 value);

  /// @brief Method set_Item, addr 0x48a0720, size 0x78, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr Vector3(float_t x, float_t y, float_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10821 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kEpsilon{ static_cast<float_t>(1e-5f) };

  /// @brief Field kEpsilonNormalSqrt offset 0xffffffff size 0x4
  static constexpr float_t kEpsilonNormalSqrt{ static_cast<float_t>(1e-15f) };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Vector3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, z) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector3, 0xc>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector3, "UnityEngine", "Vector3");
