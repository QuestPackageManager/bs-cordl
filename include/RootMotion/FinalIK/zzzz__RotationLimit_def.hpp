#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationLimit)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimit;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::RotationLimit);
// Type: RootMotion.FinalIK::RotationLimit
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12622))
// CS Name: ::RootMotion.FinalIK::RotationLimit*
class CORDL_TYPE RotationLimit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field axis, offset 0x18, size 0xc
  __declspec(property(get = __get_axis, put = __set_axis))::UnityEngine::Vector3 axis;

  /// @brief Field defaultLocalRotation, offset 0x24, size 0x10
  __declspec(property(get = __get_defaultLocalRotation, put = __set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  /// @brief Field <defaultLocalRotationOverride>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __get__defaultLocalRotationOverride_k__BackingField, put = __set__defaultLocalRotationOverride_k__BackingField)) bool _defaultLocalRotationOverride_k__BackingField;

  /// @brief Field initiated, offset 0x35, size 0x1
  __declspec(property(get = __get_initiated, put = __set_initiated)) bool initiated;

  /// @brief Field applicationQuit, offset 0x36, size 0x1
  __declspec(property(get = __get_applicationQuit, put = __set_applicationQuit)) bool applicationQuit;

  /// @brief Field defaultLocalRotationSet, offset 0x37, size 0x1
  __declspec(property(get = __get_defaultLocalRotationSet, put = __set_defaultLocalRotationSet)) bool defaultLocalRotationSet;

  __declspec(property(get = get_secondaryAxis))::UnityEngine::Vector3 secondaryAxis;

  __declspec(property(get = get_crossAxis))::UnityEngine::Vector3 crossAxis;

  __declspec(property(get = get_defaultLocalRotationOverride, put = set_defaultLocalRotationOverride)) bool defaultLocalRotationOverride;

  constexpr ::UnityEngine::Vector3& __get_axis();

  constexpr ::UnityEngine::Vector3 const& __get_axis() const;

  constexpr void __set_axis(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_defaultLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultLocalRotation() const;

  constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr bool& __get__defaultLocalRotationOverride_k__BackingField();

  constexpr bool const& __get__defaultLocalRotationOverride_k__BackingField() const;

  constexpr void __set__defaultLocalRotationOverride_k__BackingField(bool value);

  constexpr bool& __get_initiated();

  constexpr bool const& __get_initiated() const;

  constexpr void __set_initiated(bool value);

  constexpr bool& __get_applicationQuit();

  constexpr bool const& __get_applicationQuit() const;

  constexpr void __set_applicationQuit(bool value);

  constexpr bool& __get_defaultLocalRotationSet();

  constexpr bool const& __get_defaultLocalRotationSet() const;

  constexpr void __set_defaultLocalRotationSet(bool value);

  /// @brief Method SetDefaultLocalRotation, addr 0x128ec6c, size 0x3c, virtual false, abstract: false, final false
  inline void SetDefaultLocalRotation();

  /// @brief Method SetDefaultLocalRotation, addr 0x128eca8, size 0x18, virtual false, abstract: false, final false
  inline void SetDefaultLocalRotation(::UnityEngine::Quaternion localRotation);

  /// @brief Method GetLimitedLocalRotation, addr 0x128ecc0, size 0x284, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetLimitedLocalRotation(::UnityEngine::Quaternion localRotation, ByRef<bool> changed);

  /// @brief Method Apply, addr 0x128f040, size 0x64, virtual false, abstract: false, final false
  inline bool Apply();

  /// @brief Method Disable, addr 0x128f0a4, size 0x2c, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method get_secondaryAxis, addr 0x128f0d0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_secondaryAxis();

  /// @brief Method get_crossAxis, addr 0x128f0dc, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_crossAxis();

  /// @brief Method get_defaultLocalRotationOverride, addr 0x128f10c, size 0x8, virtual false, abstract: false, final false
  inline bool get_defaultLocalRotationOverride();

  /// @brief Method set_defaultLocalRotationOverride, addr 0x128f114, size 0xc, virtual false, abstract: false, final false
  inline void set_defaultLocalRotationOverride(bool value);

  /// @brief Method LimitRotation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method Awake, addr 0x128ef44, size 0xfc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x128f120, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LogWarning, addr 0x128f124, size 0x28, virtual false, abstract: false, final false
  inline void LogWarning(::StringW message);

  /// @brief Method Limit1DOF, addr 0x128f14c, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Limit1DOF(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis);

  /// @brief Method LimitTwist, addr 0x128f220, size 0x258, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion LimitTwist(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis, ::UnityEngine::Vector3 orthoAxis, float_t twistLimit);

  /// @brief Method GetOrthogonalAngle, addr 0x128f478, size 0x154, virtual false, abstract: false, final false
  static inline float_t GetOrthogonalAngle(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 normal);

  static inline ::RootMotion::FinalIK::RotationLimit* New_ctor();

  /// @brief Method .ctor, addr 0x128f5cc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RotationLimit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationLimit(RotationLimit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationLimit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationLimit(RotationLimit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationLimit();

public:
  /// @brief Field axis, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___axis;

  /// @brief Field defaultLocalRotation, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultLocalRotation;

  /// @brief Field <defaultLocalRotationOverride>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool ____defaultLocalRotationOverride_k__BackingField;

  /// @brief Field initiated, offset: 0x35, size: 0x1, def value: None
  bool ___initiated;

  /// @brief Field applicationQuit, offset: 0x36, size: 0x1, def value: None
  bool ___applicationQuit;

  /// @brief Field defaultLocalRotationSet, offset: 0x37, size: 0x1, def value: None
  bool ___defaultLocalRotationSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::RotationLimit, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimit, ___axis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimit, ___defaultLocalRotation) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimit, ____defaultLocalRotationOverride_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimit, ___initiated) == 0x35, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimit, ___applicationQuit) == 0x36, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::RotationLimit, ___defaultLocalRotationSet) == 0x37, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimit);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimit*, "RootMotion.FinalIK", "RotationLimit");
