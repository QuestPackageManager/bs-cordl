#pragma once
// IWYU pragma private; include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Quaternion)
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Quaternion;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Quaternion);
DEFINE_IL2CPP_CLASS(::UnityEngine::Quaternion, "UnityEngine", "Quaternion");
// [NativeHeader("Runtime/Math/MathScripting.h")]
// [UsedByNativeCode]
// [NativeType(Header = "Runtime/Math/Quaternion.h")]
// [DefaultMember("Item")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Quaternion
struct CORDL_TYPE Quaternion {
public:
  // Declarations
  __declspec(property(get = get_eulerAngles, put = set_eulerAngles)) ::UnityEngine::Vector3 eulerAngles;

  /// @brief Field identityQuaternion, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identityQuaternion, put = setStaticF_identityQuaternion)) ::UnityEngine::Quaternion identityQuaternion;

  __declspec(property(get = get_normalized)) ::UnityEngine::Quaternion normalized;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Quaternion>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Quaternion>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Angle, addr 0x6f2a91c, size 0x68, virtual false, abstract: false, final false
  static inline float_t Angle(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b);

  /// @brief Method AngleAxis, addr 0x6f2a49c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion AngleAxis(float_t angle, ::UnityEngine::Vector3 axis);

  /// @brief Method Dot, addr 0x6f2a80c, size 0x28, virtual false, abstract: false, final false
  static inline float_t Dot(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2af20, size 0x160, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2b080, size 0xf4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Quaternion other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2b174, size 0x104, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> other);

  /// @brief Method Euler, addr 0x6f2aac4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Euler(::UnityEngine::Vector3 euler);

  /// @brief Method Euler, addr 0x6f2aa80, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Euler(float_t x, float_t y, float_t z);

  /// @brief Method FromToRotation, addr 0x6f29e38, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6f2aeb4, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [FreeFunction("QuaternionScripting::AngleAxis", IsThreadSafe = true)]
  /// @brief Method Internal_AngleAxis, addr 0x6f2a3e0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_AngleAxis(float_t angle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> axis);

  /// @brief Method Internal_AngleAxis_Injected, addr 0x6f2a448, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_AngleAxis_Injected(float_t angle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> axis, ::by_ref<::UnityEngine::Quaternion> ret);

  /// [FreeFunction("EulerToQuaternion", IsThreadSafe = true)]
  /// @brief Method Internal_FromEulerRad, addr 0x6f2a250, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_FromEulerRad(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> euler);

  /// @brief Method Internal_FromEulerRad_Injected, addr 0x6f2a2a8, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_FromEulerRad_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> euler, ::by_ref<::UnityEngine::Quaternion> ret);

  /// [FreeFunction("FromToQuaternionSafe", IsThreadSafe = true)]
  /// @brief Method Internal_FromToRotation, addr 0x6f29d84, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_FromToRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> fromDirection,
                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> toDirection);

  /// @brief Method Internal_FromToRotation_Injected, addr 0x6f29de4, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_FromToRotation_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> fromDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> toDirection,
                                                      ::by_ref<::UnityEngine::Quaternion> ret);

  /// [FreeFunction("QuaternionScripting::Inverse", IsThreadSafe = true)]
  /// @brief Method Internal_Inverse, addr 0x6f29e68, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_Inverse(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> rotation);

  /// @brief Method Internal_Inverse_Injected, addr 0x6f29ec0, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_Inverse_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> rotation, ::by_ref<::UnityEngine::Quaternion> ret);

  /// [FreeFunction("QuaternionScripting::Lerp", IsThreadSafe = true)]
  /// @brief Method Internal_Lerp, addr 0x6f2a0d0, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_Lerp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b, float_t t);

  /// @brief Method Internal_Lerp_Injected, addr 0x6f2a140, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_Lerp_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b, float_t t,
                                            ::by_ref<::UnityEngine::Quaternion> ret);

  /// [FreeFunction("QuaternionScripting::LookRotation", IsThreadSafe = true)]
  /// @brief Method Internal_LookRotation, addr 0x6f2a4c0, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_LookRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> forward,
                                                                /* [IsReadOnly] [DefaultValue("Vector3.up")] */ ::by_ref<::UnityEngine::Vector3 const> upwards);

  /// @brief Method Internal_LookRotation_Injected, addr 0x6f2a520, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_LookRotation_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> forward,
                                                    /* [IsReadOnly] [DefaultValue("Vector3.up")] */ ::by_ref<::UnityEngine::Vector3 const> upwards, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_MakePositive, addr 0x6f2a984, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Internal_MakePositive(::UnityEngine::Vector3 euler);

  /// [FreeFunction("QuaternionScripting::Slerp", IsThreadSafe = true)]
  /// @brief Method Internal_Slerp, addr 0x6f29f28, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_Slerp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b, float_t t);

  /// [FreeFunction("QuaternionScripting::SlerpUnclamped", IsThreadSafe = true)]
  /// @brief Method Internal_SlerpUnclamped, addr 0x6f29ffc, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Internal_SlerpUnclamped(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b,
                                                                  float_t t);

  /// @brief Method Internal_SlerpUnclamped_Injected, addr 0x6f2a06c, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_SlerpUnclamped_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b, float_t t,
                                                      ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method Internal_Slerp_Injected, addr 0x6f29f98, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_Slerp_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b, float_t t,
                                             ::by_ref<::UnityEngine::Quaternion> ret);

  /// [FreeFunction("QuaternionScripting::ToAxisAngle", IsThreadSafe = true)]
  /// @brief Method Internal_ToAxisAngleRad, addr 0x6f2a38c, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_ToAxisAngleRad(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> q, ::by_ref<::UnityEngine::Vector3> axis, ::by_ref<float_t> angle);

  /// [FreeFunction("QuaternionScripting::ToEuler", IsThreadSafe = true)]
  /// @brief Method Internal_ToEulerRad, addr 0x6f2a2ec, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Internal_ToEulerRad(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> rotation);

  /// @brief Method Internal_ToEulerRad_Injected, addr 0x6f2a348, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_ToEulerRad_Injected(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> rotation, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method Inverse, addr 0x6f29f04, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Inverse(::UnityEngine::Quaternion rotation);

  /// @brief Method IsEqualUsingDot, addr 0x6f2a7f8, size 0x14, virtual false, abstract: false, final false
  static inline bool IsEqualUsingDot(float_t dot);

  /// @brief Method Lerp, addr 0x6f2a214, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t);

  /// [ExcludeFromDocs]
  /// @brief Method LookRotation, addr 0x6f2a5a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3 forward);

  /// @brief Method LookRotation, addr 0x6f2a574, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion LookRotation(::UnityEngine::Vector3 forward, /* [DefaultValue("Vector3.up")] */ ::UnityEngine::Vector3 upwards);

  /// @brief Method LookRotation, addr 0x6f2a5a4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion LookRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> forward,
                                                       /* [DefaultValue("Vector3.up")] [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> upwards);

  /// @brief Method Normalize, addr 0x6f2ac50, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Normalize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> q);

  /// @brief Method Normalize, addr 0x6f2ad20, size 0xc4, virtual false, abstract: false, final false
  inline void Normalize();

  /// @brief Method RotateTowards, addr 0x6f2ab74, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion RotateTowards(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to, float_t maxDegreesDelta);

  /// [ExcludeFromDocs]
  /// @brief Method SetLookRotation, addr 0x6f2a834, size 0x88, virtual false, abstract: false, final false
  inline void SetLookRotation(::UnityEngine::Vector3 view);

  /// @brief Method SetLookRotation, addr 0x6f2a8bc, size 0x3c, virtual false, abstract: false, final false
  inline void SetLookRotation(::UnityEngine::Vector3 view, /* [DefaultValue("Vector3.up")] */ ::UnityEngine::Vector3 up);

  /// @brief Method SetLookRotation, addr 0x6f2a8f8, size 0x24, virtual false, abstract: false, final false
  inline void SetLookRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> view, /* [IsReadOnly] [DefaultValue("Vector3.up")] */ ::by_ref<::UnityEngine::Vector3 const> up);

  /// @brief Method Slerp, addr 0x6f2a1a4, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t);

  /// @brief Method SlerpUnclamped, addr 0x6f2a1dc, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion SlerpUnclamped(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, float_t t);

  /// @brief Method SlerpUnclamped, addr 0x6f2a24c, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion SlerpUnclamped(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> a, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion const> b, float_t t);

  /// @brief Method ToAngleAxis, addr 0x6f2ab08, size 0x6c, virtual false, abstract: false, final false
  inline void ToAngleAxis(::by_ref<float_t> angle, ::by_ref<::UnityEngine::Vector3> axis);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f2b278, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f2b288, size 0x218, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6f2a624, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  static inline ::UnityEngine::Quaternion getStaticF_identityQuaternion();

  /// [IsReadOnly]
  /// @brief Method get_eulerAngles, addr 0x6f2aa0c, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_eulerAngles();

  /// @brief Method get_identity, addr 0x6f2a630, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion get_identity();

  /// [IsReadOnly]
  /// @brief Method get_normalized, addr 0x6f2ade4, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_normalized();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Quaternion>"
  constexpr ::System::IEquatable_1<::UnityEngine::Quaternion>* i___System__IEquatable_1___UnityEngine__Quaternion_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x6f2a798, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs);

  /// @brief Method op_Inequality, addr 0x6f2a7c8, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs);

  /// @brief Method op_Multiply, addr 0x6f2a680, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion op_Multiply(::UnityEngine::Quaternion lhs, ::UnityEngine::Quaternion rhs);

  /// @brief Method op_Multiply, addr 0x6f2a6f4, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point);

  static inline void setStaticF_identityQuaternion(::UnityEngine::Quaternion value);

  /// @brief Method set_eulerAngles, addr 0x6f2aa30, size 0x50, virtual false, abstract: false, final false
  inline void set_eulerAngles(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Quaternion();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Quaternion(float_t x, float_t y, float_t z, float_t w) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9843 };

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

static_assert(sizeof(::UnityEngine::Quaternion) == 0x10, "Size mismatch!");

} // namespace UnityEngine
