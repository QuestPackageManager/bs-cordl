#pragma once
// IWYU pragma private; include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Vector2;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector2);
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Vector2
struct CORDL_TYPE Vector2 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief Field downVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_downVector, put = setStaticF_downVector)) ::UnityEngine::Vector2 downVector;

  /// @brief Field leftVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftVector, put = setStaticF_leftVector)) ::UnityEngine::Vector2 leftVector;

  __declspec(property(get = get_magnitude)) float_t magnitude;

  /// @brief Field negativeInfinityVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_negativeInfinityVector, put = setStaticF_negativeInfinityVector)) ::UnityEngine::Vector2 negativeInfinityVector;

  __declspec(property(get = get_normalized)) ::UnityEngine::Vector2 normalized;

  /// @brief Field oneVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_oneVector, put = setStaticF_oneVector)) ::UnityEngine::Vector2 oneVector;

  /// @brief Field positiveInfinityVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_positiveInfinityVector, put = setStaticF_positiveInfinityVector)) ::UnityEngine::Vector2 positiveInfinityVector;

  /// @brief Field rightVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rightVector, put = setStaticF_rightVector)) ::UnityEngine::Vector2 rightVector;

  __declspec(property(get = get_sqrMagnitude)) float_t sqrMagnitude;

  /// @brief Field upVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_upVector, put = setStaticF_upVector)) ::UnityEngine::Vector2 upVector;

  /// @brief Field zeroVector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_zeroVector, put = setStaticF_zeroVector)) ::UnityEngine::Vector2 zeroVector;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector2>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector2>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Angle, addr 0x48b05a0, size 0xf4, virtual false, abstract: false, final false
  static inline float_t Angle(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to);

  /// @brief Method ClampMagnitude, addr 0x48b081c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ClampMagnitude(::UnityEngine::Vector2 vector, float_t maxLength);

  /// @brief Method Distance, addr 0x48b0798, size 0x84, virtual false, abstract: false, final false
  static inline float_t Distance(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method Dot, addr 0x48b0510, size 0x10, virtual false, abstract: false, final false
  static inline float_t Dot(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs);

  /// @brief Method Equals, addr 0x48b0450, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x48b04d8, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector2 other);

  /// @brief Method GetHashCode, addr 0x48b041c, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Lerp, addr 0x48b0098, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x48b00c8, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LerpUnclamped(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, float_t t);

  /// @brief Method Max, addr 0x48b08d4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Max(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs);

  /// @brief Method Min, addr 0x48b08c0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Min(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs);

  /// @brief Method Normalize, addr 0x48b0104, size 0xc4, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method Perpendicular, addr 0x48b04fc, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 inDirection);

  /// @brief Method Scale, addr 0x48b00e4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Scale(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method Scale, addr 0x48b00f0, size 0x14, virtual false, abstract: false, final false
  inline void Scale(::UnityEngine::Vector2 scale);

  /// @brief Method SignedAngle, addr 0x48b0694, size 0x104, virtual false, abstract: false, final false
  static inline float_t SignedAngle(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to);

  /// @brief Method SqrMagnitude, addr 0x48b08b0, size 0x10, virtual false, abstract: false, final false
  static inline float_t SqrMagnitude(::UnityEngine::Vector2 a);

  /// @brief Method ToString, addr 0x48b0278, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x48b0288, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x48b0294, size 0x188, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x48b0090, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  static inline ::UnityEngine::Vector2 getStaticF_downVector();

  static inline ::UnityEngine::Vector2 getStaticF_leftVector();

  static inline ::UnityEngine::Vector2 getStaticF_negativeInfinityVector();

  static inline ::UnityEngine::Vector2 getStaticF_oneVector();

  static inline ::UnityEngine::Vector2 getStaticF_positiveInfinityVector();

  static inline ::UnityEngine::Vector2 getStaticF_rightVector();

  static inline ::UnityEngine::Vector2 getStaticF_upVector();

  static inline ::UnityEngine::Vector2 getStaticF_zeroVector();

  /// @brief Method get_Item, addr 0x48affc0, size 0x68, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_down, addr 0x48b0a80, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_down();

  /// @brief Method get_left, addr 0x48b0ac8, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_left();

  /// @brief Method get_magnitude, addr 0x48b0520, size 0x6c, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_negativeInfinity, addr 0x48b0b58, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_negativeInfinity();

  /// @brief Method get_normalized, addr 0x48b01c8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_normalized();

  /// @brief Method get_one, addr 0x48b09f0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_one();

  /// @brief Method get_right, addr 0x48b0b10, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_right();

  /// @brief Method get_sqrMagnitude, addr 0x48b058c, size 0x14, virtual false, abstract: false, final false
  inline float_t get_sqrMagnitude();

  /// @brief Method get_up, addr 0x48b0a38, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_up();

  /// @brief Method get_zero, addr 0x48b09a8, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector2>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector2>* i___System__IEquatable_1___UnityEngine__Vector2_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x48b08e8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Addition(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method op_Division, addr 0x48b090c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Division(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method op_Division, addr 0x48b0940, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Division(::UnityEngine::Vector2 a, float_t d);

  /// @brief Method op_Equality, addr 0x48b094c, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs);

  /// @brief Method op_Implicit, addr 0x48b099c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector3 v);

  /// @brief Method op_Implicit, addr 0x48b09a0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Vector2 v);

  /// @brief Method op_Inequality, addr 0x48b0974, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Vector2 lhs, ::UnityEngine::Vector2 rhs);

  /// @brief Method op_Multiply, addr 0x48b0900, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Multiply(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method op_Multiply, addr 0x48b0924, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Multiply(::UnityEngine::Vector2 a, float_t d);

  /// @brief Method op_Multiply, addr 0x48b0930, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Multiply(float_t d, ::UnityEngine::Vector2 a);

  /// @brief Method op_Subtraction, addr 0x48b08f4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Subtraction(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method op_UnaryNegation, addr 0x48b0918, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_UnaryNegation(::UnityEngine::Vector2 a);

  static inline void setStaticF_downVector(::UnityEngine::Vector2 value);

  static inline void setStaticF_leftVector(::UnityEngine::Vector2 value);

  static inline void setStaticF_negativeInfinityVector(::UnityEngine::Vector2 value);

  static inline void setStaticF_oneVector(::UnityEngine::Vector2 value);

  static inline void setStaticF_positiveInfinityVector(::UnityEngine::Vector2 value);

  static inline void setStaticF_rightVector(::UnityEngine::Vector2 value);

  static inline void setStaticF_upVector(::UnityEngine::Vector2 value);

  static inline void setStaticF_zeroVector(::UnityEngine::Vector2 value);

  /// @brief Method set_Item, addr 0x48b0028, size 0x68, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Vector2(float_t x, float_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10824 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field kEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kEpsilon{ static_cast<float_t>(1e-5f) };

  /// @brief Field kEpsilonNormalSqrt offset 0xffffffff size 0x4
  static constexpr float_t kEpsilonNormalSqrt{ static_cast<float_t>(1e-15f) };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Vector2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector2, y) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector2, 0x8>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2, "UnityEngine", "Vector2");
