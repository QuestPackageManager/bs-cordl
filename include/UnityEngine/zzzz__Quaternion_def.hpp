#pragma once
// IWYU pragma private; include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Quaternion)
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
struct Quaternion;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Quaternion);
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Quaternion
struct CORDL_TYPE Quaternion {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  __declspec(property(get = get_eulerAngles, put = set_eulerAngles)) ::UnityEngine::Vector3 eulerAngles;

  /// @brief Field identityQuaternion, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identityQuaternion, put = setStaticF_identityQuaternion)) ::UnityEngine::Quaternion identityQuaternion;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Quaternion>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Quaternion>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Angle, addr 0x489f710, size 0x60, virtual false, abstract: false, final false
  static inline float_t Angle(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b);

  /// @brief Method AngleAxis, addr 0x489f174, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion AngleAxis(float_t angle, ::UnityEngine::Vector3 axis);

  /// @brief Method AngleAxis_Injected, addr 0x489f1d8, size 0x54, virtual false, abstract: false, final false
  static inline void AngleAxis_Injected(float_t angle, ::ByRef<::UnityEngine::Vector3> axis, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Dot, addr 0x489f650, size 0x20, virtual false, abstract: false, final false
  static inline float_t Dot(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b);

  /// @brief Method Equals, addr 0x489fb90, size 0xd4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x489fc64, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Quaternion other);

  /// @brief Method Euler, addr 0x489f86c, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Euler(::UnityEngine::Vector3 euler);

  /// @brief Method Euler, addr 0x489f854, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Euler(float_t x, float_t y, float_t z);

  /// @brief Method FromToRotation, addr 0x489ec78, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection);

  /// @brief Method FromToRotation_Injected, addr 0x489ecd8, size 0x54, virtual false, abstract: false, final false
  static inline void FromToRotation_Injected(::ByRef<::UnityEngine::Vector3> fromDirection, ::ByRef<::UnityEngine::Vector3> toDirection, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method GetHashCode, addr 0x489fb2c, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Internal_FromEulerRad, addr 0x489f040, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_FromEulerRad(::UnityEngine::Vector3 euler);

  /// @brief Method Internal_FromEulerRad_Injected, addr 0x489f094, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_FromEulerRad_Injected(::ByRef<::UnityEngine::Vector3> euler, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_MakePositive, addr 0x489f770, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Internal_MakePositive(::UnityEngine::Vector3 euler);

  /// @brief Method Internal_ToEulerRad, addr 0x489f0d8, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Internal_ToEulerRad(::UnityEngine::Quaternion rotation);

  /// @brief Method Internal_ToEulerRad_Injected, addr 0x489f130, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_ToEulerRad_Injected(::ByRef<::UnityEngine::Quaternion> rotation, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Inverse, addr 0x489ed2c, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Inverse(::UnityEngine::Quaternion rotation);

  /// @brief Method Inverse_Injected, addr 0x489ed80, size 0x44, virtual false, abstract: false, final false
  static inline void Inverse_Injected(::ByRef<::UnityEngine::Quaternion> rotation, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method IsEqualUsingDot, addr 0x489f5dc, size 0x14, virtual false, abstract: false, final false
  static inline bool IsEqualUsingDot(float_t dot);

  /// @brief Method Lerp, addr 0x489ef6c, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t);

  /// @brief Method Lerp_Injected, addr 0x489efdc, size 0x64, virtual false, abstract: false, final false
  static inline void Lerp_Injected(::ByRef<::UnityEngine::Quaternion> a, ::ByRef<::UnityEngine::Quaternion> b, float_t t, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method LookRotation, addr 0x489f2e0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3 forward);

  /// @brief Method LookRotation, addr 0x489f22c, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3 forward, ::UnityEngine::Vector3 upwards);

  /// @brief Method LookRotation_Injected, addr 0x489f28c, size 0x54, virtual false, abstract: false, final false
  static inline void LookRotation_Injected(::ByRef<::UnityEngine::Vector3> forward, ::ByRef<::UnityEngine::Vector3> upwards, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Normalize, addr 0x489f984, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Normalize(::UnityEngine::Quaternion q);

  /// @brief Method Normalize, addr 0x489fa60, size 0xcc, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method RotateTowards, addr 0x489f884, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion RotateTowards(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to, float_t maxDegreesDelta);

  /// @brief Method SetLookRotation, addr 0x489f670, size 0x84, virtual false, abstract: false, final false
  inline void SetLookRotation(::UnityEngine::Vector3 view);

  /// @brief Method SetLookRotation, addr 0x489f6f4, size 0x1c, virtual false, abstract: false, final false
  inline void SetLookRotation(::UnityEngine::Vector3 view, ::UnityEngine::Vector3 up);

  /// @brief Method Slerp, addr 0x489edc4, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t);

  /// @brief Method SlerpUnclamped, addr 0x489ee98, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion SlerpUnclamped(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t);

  /// @brief Method SlerpUnclamped_Injected, addr 0x489ef08, size 0x64, virtual false, abstract: false, final false
  static inline void SlerpUnclamped_Injected(::ByRef<::UnityEngine::Quaternion> a, ::ByRef<::UnityEngine::Quaternion> b, float_t t, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method Slerp_Injected, addr 0x489ee34, size 0x64, virtual false, abstract: false, final false
  static inline void Slerp_Injected(::ByRef<::UnityEngine::Quaternion> a, ::ByRef<::UnityEngine::Quaternion> b, float_t t, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method ToString, addr 0x489fce4, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x489fcf4, size 0x208, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x489f46c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  static inline ::UnityEngine::Quaternion getStaticF_identityQuaternion();

  /// @brief Method get_Item, addr 0x489f34c, size 0x90, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t index);

  /// @brief Method get_eulerAngles, addr 0x489f7f8, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_identity, addr 0x489f478, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion get_identity();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Quaternion>"
  constexpr ::System::IEquatable_1<::UnityEngine::Quaternion>* i___System__IEquatable_1___UnityEngine__Quaternion_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x489f5f0, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs);

  /// @brief Method op_Inequality, addr 0x489f620, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs);

  /// @brief Method op_Multiply, addr 0x489f4c4, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion op_Multiply(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs);

  /// @brief Method op_Multiply, addr 0x489f538, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point);

  static inline void setStaticF_identityQuaternion(::UnityEngine::Quaternion value);

  /// @brief Method set_Item, addr 0x489f3dc, size 0x90, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, float_t value);

  /// @brief Method set_eulerAngles, addr 0x489f824, size 0x30, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Quaternion();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Quaternion(float_t x, float_t y, float_t z, float_t w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10817 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kEpsilon offset 0xffffffff size 0x4
  static constexpr float_t kEpsilon{ static_cast<float_t>(1e-6f) };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  float_t z;

  /// @brief Field w, offset: 0xc, size: 0x4, def value: None
  float_t w;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Quaternion, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Quaternion, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Quaternion, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Quaternion, w) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Quaternion, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Quaternion, "UnityEngine", "Quaternion");
