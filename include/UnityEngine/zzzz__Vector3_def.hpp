#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
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
// Type: UnityEngine::Vector3
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8993))
// CS Name: ::UnityEngine::Vector3
struct CORDL_TYPE Vector3 {
public:
  // Declarations
  /// @brief Field zeroVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_zeroVector, put = setStaticF_zeroVector))::UnityEngine::Vector3 zeroVector;

  /// @brief Field oneVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_oneVector, put = setStaticF_oneVector))::UnityEngine::Vector3 oneVector;

  /// @brief Field upVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_upVector, put = setStaticF_upVector))::UnityEngine::Vector3 upVector;

  /// @brief Field downVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_downVector, put = setStaticF_downVector))::UnityEngine::Vector3 downVector;

  /// @brief Field leftVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_leftVector, put = setStaticF_leftVector))::UnityEngine::Vector3 leftVector;

  /// @brief Field rightVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_rightVector, put = setStaticF_rightVector))::UnityEngine::Vector3 rightVector;

  /// @brief Field forwardVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_forwardVector, put = setStaticF_forwardVector))::UnityEngine::Vector3 forwardVector;

  /// @brief Field backVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_backVector, put = setStaticF_backVector))::UnityEngine::Vector3 backVector;

  /// @brief Field positiveInfinityVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_positiveInfinityVector, put = setStaticF_positiveInfinityVector))::UnityEngine::Vector3 positiveInfinityVector;

  /// @brief Field negativeInfinityVector, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_negativeInfinityVector, put = setStaticF_negativeInfinityVector))::UnityEngine::Vector3 negativeInfinityVector;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_normalized))::UnityEngine::Vector3 normalized;

  __declspec(property(get = get_magnitude)) float_t magnitude;

  __declspec(property(get = get_sqrMagnitude)) float_t sqrMagnitude;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector3>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector3>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector3>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector3>* i___System__IEquatable_1___UnityEngine__Vector3_();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  static inline void setStaticF_zeroVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_zeroVector();

  static inline void setStaticF_oneVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_oneVector();

  static inline void setStaticF_upVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_upVector();

  static inline void setStaticF_downVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_downVector();

  static inline void setStaticF_leftVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_leftVector();

  static inline void setStaticF_rightVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_rightVector();

  static inline void setStaticF_forwardVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_forwardVector();

  static inline void setStaticF_backVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_backVector();

  static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_positiveInfinityVector();

  static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_negativeInfinityVector();

  /// @brief Method Lerp, addr 0x2cdfb70, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x2cdfbac, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method SmoothDamp, addr 0x2cdfbd4, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ByRef<::UnityEngine::Vector3> currentVelocity, float_t smoothTime);

  /// @brief Method SmoothDamp, addr 0x2cdfc60, size 0x23c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SmoothDamp(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ByRef<::UnityEngine::Vector3> currentVelocity, float_t smoothTime, float_t maxSpeed,
                                                  float_t deltaTime);

  /// @brief Method get_Item, addr 0x2cdfe9c, size 0x7c, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x2cdff18, size 0x7c, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method .ctor, addr 0x2cdff94, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

  /// @brief Method .ctor, addr 0x2cdffa0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method Scale, addr 0x2cdffac, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Scale(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method Scale, addr 0x2cdffbc, size 0x20, virtual false, abstract: false, final false
  inline void Scale(::UnityEngine::Vector3 scale);

  /// @brief Method Cross, addr 0x2cdffdc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method GetHashCode, addr 0x2ce0004, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2ce004c, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2ce00e4, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector3 other);

  /// @brief Method Reflect, addr 0x2ce0114, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Reflect(::UnityEngine::Vector3 inDirection, ::UnityEngine::Vector3 inNormal);

  /// @brief Method Normalize, addr 0x2ce014c, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3 value);

  /// @brief Method Normalize, addr 0x2ce021c, size 0xe8, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method get_normalized, addr 0x2ce0304, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normalized();

  /// @brief Method Dot, addr 0x2ce03d0, size 0x18, virtual false, abstract: false, final false
  static inline float_t Dot(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Project, addr 0x2ce03e8, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Project(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 onNormal);

  /// @brief Method ProjectOnPlane, addr 0x2ce04e4, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal);

  /// @brief Method Angle, addr 0x2ce05bc, size 0x11c, virtual false, abstract: false, final false
  static inline float_t Angle(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method Distance, addr 0x2ce06d8, size 0xa0, virtual false, abstract: false, final false
  static inline float_t Distance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method ClampMagnitude, addr 0x2ce0778, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClampMagnitude(::UnityEngine::Vector3 vector, float_t maxLength);

  /// @brief Method Magnitude, addr 0x2ce082c, size 0x80, virtual false, abstract: false, final false
  static inline float_t Magnitude(::UnityEngine::Vector3 vector);

  /// @brief Method get_magnitude, addr 0x2ce08ac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method SqrMagnitude, addr 0x2ce092c, size 0x18, virtual false, abstract: false, final false
  static inline float_t SqrMagnitude(::UnityEngine::Vector3 vector);

  /// @brief Method get_sqrMagnitude, addr 0x2ce0944, size 0x20, virtual false, abstract: false, final false
  inline float_t get_sqrMagnitude();

  /// @brief Method Min, addr 0x2ce0964, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Min(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Max, addr 0x2ce0980, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method get_zero, addr 0x2ce099c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_zero();

  /// @brief Method get_one, addr 0x2ce09e8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_one();

  /// @brief Method get_forward, addr 0x2ce0a34, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_back, addr 0x2ce0a80, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_back();

  /// @brief Method get_up, addr 0x2ce0acc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_down, addr 0x2ce0b18, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_down();

  /// @brief Method get_left, addr 0x2ce0b64, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_left();

  /// @brief Method get_right, addr 0x2ce0bb0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_positiveInfinity, addr 0x2ce0bfc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_positiveInfinity();

  /// @brief Method op_Addition, addr 0x2ce0c48, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Addition(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method op_Subtraction, addr 0x2ce0c58, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Subtraction(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method op_UnaryNegation, addr 0x2ce0c68, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_UnaryNegation(::UnityEngine::Vector3 a);

  /// @brief Method op_Multiply, addr 0x2ce0c78, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Vector3 a, float_t d);

  /// @brief Method op_Multiply, addr 0x2ce0c88, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(float_t d, ::UnityEngine::Vector3 a);

  /// @brief Method op_Division, addr 0x2ce0c9c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Division(::UnityEngine::Vector3 a, float_t d);

  /// @brief Method op_Equality, addr 0x2ce0cac, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method op_Inequality, addr 0x2ce0ce0, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method ToString, addr 0x2ce0d14, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2ce0ee8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x2ce0d20, size 0x1c8, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method Slerp, addr 0x2ce0ef0, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method OrthoNormalize2, addr 0x2ce0fc8, size 0x44, virtual false, abstract: false, final false
  static inline void OrthoNormalize2(ByRef<::UnityEngine::Vector3> a, ByRef<::UnityEngine::Vector3> b);

  /// @brief Method OrthoNormalize, addr 0x2ce100c, size 0x44, virtual false, abstract: false, final false
  static inline void OrthoNormalize(ByRef<::UnityEngine::Vector3> normal, ByRef<::UnityEngine::Vector3> tangent);

  /// @brief Method RotateTowards, addr 0x2ce1050, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 RotateTowards(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, float_t maxRadiansDelta, float_t maxMagnitudeDelta);

  /// @brief Method Slerp_Injected, addr 0x2ce0f64, size 0x64, virtual false, abstract: false, final false
  static inline void Slerp_Injected(ByRef<::UnityEngine::Vector3> a, ByRef<::UnityEngine::Vector3> b, float_t t, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method RotateTowards_Injected, addr 0x2ce10cc, size 0x6c, virtual false, abstract: false, final false
  static inline void RotateTowards_Injected(ByRef<::UnityEngine::Vector3> current, ByRef<::UnityEngine::Vector3> target, float_t maxRadiansDelta, float_t maxMagnitudeDelta,
                                            ByRef<::UnityEngine::Vector3> ret);

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr Vector3(float_t x, float_t y, float_t z) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3();

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field kEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kEpsilon{ 0.00001 };

  /// @brief Field kEpsilonNormalSqrt offset 0xffffffff size 0x4
  static constexpr float_t kEpsilonNormalSqrt{ 0.000000000000001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector3, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3, z) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector3, "UnityEngine", "Vector3");
