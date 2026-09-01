#pragma once
// IWYU pragma private; include "UnityEngine\Vector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Vector3, "UnityEngine", "Vector3");
// Dependencies
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

  /// @brief Method Angle, addr 0x6acf204, size 0x124, virtual false, abstract: false, final false
  static inline float_t Angle(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method Cross, addr 0x6acebf0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Cross(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Distance, addr 0x6acf4a0, size 0xa4, virtual false, abstract: false, final false
  static inline float_t Distance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method Dot, addr 0x6acf00c, size 0x18, virtual false, abstract: false, final false
  static inline float_t Dot(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Equals, addr 0x6acec64, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x6aced00, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector3 other);

  /// @brief Method GetHashCode, addr 0x6acec18, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Lerp, addr 0x6acea58, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method LerpUnclamped, addr 0x6acea98, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 LerpUnclamped(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t t);

  /// @brief Method Magnitude, addr 0x6acf544, size 0x84, virtual false, abstract: false, final false
  static inline float_t Magnitude(::UnityEngine::Vector3 vector);

  /// @brief Method Max, addr 0x6acf698, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Max(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Min, addr 0x6acf67c, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Min(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method Normalize, addr 0x6aced68, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normalize(::UnityEngine::Vector3 value);

  /// @brief Method Normalize, addr 0x6acee48, size 0xe8, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method OrthoNormalize, addr 0x6acea14, size 0x44, virtual false, abstract: false, final false
  static inline void OrthoNormalize(::by_ref<::UnityEngine::Vector3> normal, ::by_ref<::UnityEngine::Vector3> tangent);

  /// @brief Method OrthoNormalize2, addr 0x6ace9d0, size 0x44, virtual false, abstract: false, final false
  static inline void OrthoNormalize2(::by_ref<::UnityEngine::Vector3> a, ::by_ref<::UnityEngine::Vector3> b);

  /// @brief Method Project, addr 0x6acf024, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Project(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 onNormal);

  /// @brief Method ProjectOnPlane, addr 0x6acf128, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ProjectOnPlane(::UnityEngine::Vector3 vector, ::UnityEngine::Vector3 planeNormal);

  /// @brief Method Reflect, addr 0x6aced30, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Reflect(::UnityEngine::Vector3 inDirection, ::UnityEngine::Vector3 inNormal);

  /// @brief Method Scale, addr 0x6acebc0, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Scale(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method Scale, addr 0x6acebd0, size 0x20, virtual false, abstract: false, final false
  inline void Scale(::UnityEngine::Vector3 scale);

  /// @brief Method SignedAngle, addr 0x6acf328, size 0x178, virtual false, abstract: false, final false
  static inline float_t SignedAngle(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 axis);

  /// @brief Method SqrMagnitude, addr 0x6acf644, size 0x18, virtual false, abstract: false, final false
  static inline float_t SqrMagnitude(::UnityEngine::Vector3 vector);

  /// @brief Method ToString, addr 0x6acfa50, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6acfa60, size 0xc, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x6acfa6c, size 0x1d8, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6acebb4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method .ctor, addr 0x6aceba8, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Method get_Item, addr 0x6aceac0, size 0x74, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_back, addr 0x6acf7a4, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_back();

  /// @brief Method get_down, addr 0x6acf844, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_down();

  /// @brief Method get_forward, addr 0x6acf754, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_left, addr 0x6acf894, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_left();

  /// @brief Method get_magnitude, addr 0x6acf5c8, size 0x7c, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_normalized, addr 0x6acef30, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normalized();

  /// @brief Method get_one, addr 0x6acf704, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_one();

  /// @brief Method get_positiveInfinity, addr 0x6acf934, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_positiveInfinity();

  /// @brief Method get_right, addr 0x6acf8e4, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_right();

  /// @brief Method get_sqrMagnitude, addr 0x6acf65c, size 0x20, virtual false, abstract: false, final false
  inline float_t get_sqrMagnitude();

  /// @brief Method get_up, addr 0x6acf7f4, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_up();

  /// @brief Method get_zero, addr 0x6acf6b4, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector3>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector3>* i___System__IEquatable_1___UnityEngine__Vector3_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6acf984, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Addition(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method op_Division, addr 0x6acf9d8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Division(::UnityEngine::Vector3 a, float_t d);

  /// @brief Method op_Equality, addr 0x6acf9e8, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method op_Inequality, addr 0x6acfa1c, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Vector3 lhs, ::UnityEngine::Vector3 rhs);

  /// @brief Method op_Multiply, addr 0x6acf9b4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Vector3 a, float_t d);

  /// @brief Method op_Multiply, addr 0x6acf9c4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(float_t d, ::UnityEngine::Vector3 a);

  /// @brief Method op_Subtraction, addr 0x6acf994, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Subtraction(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method op_UnaryNegation, addr 0x6acf9a4, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Method set_Item, addr 0x6aceb34, size 0x74, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }]
  constexpr Vector3(float_t x, float_t y, float_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10256 };

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

static_assert(sizeof(::UnityEngine::Vector3) == 0xc, "Size mismatch!");

} // namespace UnityEngine
