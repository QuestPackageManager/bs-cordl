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
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
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
// CS Name: ::RootMotion.FinalIK::RotationLimit*
class CORDL_TYPE RotationLimit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <defaultLocalRotationOverride>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__defaultLocalRotationOverride_k__BackingField,
                      put = __cordl_internal_set__defaultLocalRotationOverride_k__BackingField)) bool _defaultLocalRotationOverride_k__BackingField;

  /// @brief Field applicationQuit, offset 0x36, size 0x1
  __declspec(property(get = __cordl_internal_get_applicationQuit, put = __cordl_internal_set_applicationQuit)) bool applicationQuit;

  /// @brief Field axis, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis))::UnityEngine::Vector3 axis;

  __declspec(property(get = get_crossAxis))::UnityEngine::Vector3 crossAxis;

  /// @brief Field defaultLocalRotation, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultLocalRotation, put = __cordl_internal_set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  __declspec(property(get = get_defaultLocalRotationOverride, put = set_defaultLocalRotationOverride)) bool defaultLocalRotationOverride;

  /// @brief Field defaultLocalRotationSet, offset 0x37, size 0x1
  __declspec(property(get = __cordl_internal_get_defaultLocalRotationSet, put = __cordl_internal_set_defaultLocalRotationSet)) bool defaultLocalRotationSet;

  /// @brief Field initiated, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_initiated, put = __cordl_internal_set_initiated)) bool initiated;

  __declspec(property(get = get_secondaryAxis))::UnityEngine::Vector3 secondaryAxis;

  /// @brief Method Apply, addr 0x13690dc, size 0x64, virtual false, abstract: false, final false
  inline bool Apply();

  /// @brief Method Awake, addr 0x1368fe0, size 0xfc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Disable, addr 0x1369140, size 0x2c, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method GetLimitedLocalRotation, addr 0x1368d5c, size 0x284, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetLimitedLocalRotation(::UnityEngine::Quaternion localRotation, ByRef<bool> changed);

  /// @brief Method GetOrthogonalAngle, addr 0x1369514, size 0x154, virtual false, abstract: false, final false
  static inline float_t GetOrthogonalAngle(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 normal);

  /// @brief Method LateUpdate, addr 0x13691bc, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method Limit1DOF, addr 0x13691e8, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Limit1DOF(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis);

  /// @brief Method LimitRotation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method LimitTwist, addr 0x13692bc, size 0x258, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion LimitTwist(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis, ::UnityEngine::Vector3 orthoAxis, float_t twistLimit);

  /// @brief Method LogWarning, addr 0x13691c0, size 0x28, virtual false, abstract: false, final false
  inline void LogWarning(::StringW message);

  static inline ::RootMotion::FinalIK::RotationLimit* New_ctor();

  /// @brief Method SetDefaultLocalRotation, addr 0x1368d08, size 0x3c, virtual false, abstract: false, final false
  inline void SetDefaultLocalRotation();

  /// @brief Method SetDefaultLocalRotation, addr 0x1368d44, size 0x18, virtual false, abstract: false, final false
  inline void SetDefaultLocalRotation(::UnityEngine::Quaternion localRotation);

  constexpr bool const& __cordl_internal_get__defaultLocalRotationOverride_k__BackingField() const;

  constexpr bool& __cordl_internal_get__defaultLocalRotationOverride_k__BackingField();

  constexpr bool const& __cordl_internal_get_applicationQuit() const;

  constexpr bool& __cordl_internal_get_applicationQuit();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_axis();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultLocalRotation();

  constexpr bool const& __cordl_internal_get_defaultLocalRotationSet() const;

  constexpr bool& __cordl_internal_get_defaultLocalRotationSet();

  constexpr bool const& __cordl_internal_get_initiated() const;

  constexpr bool& __cordl_internal_get_initiated();

  constexpr void __cordl_internal_set__defaultLocalRotationOverride_k__BackingField(bool value);

  constexpr void __cordl_internal_set_applicationQuit(bool value);

  constexpr void __cordl_internal_set_axis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_defaultLocalRotationSet(bool value);

  constexpr void __cordl_internal_set_initiated(bool value);

  /// @brief Method .ctor, addr 0x1369668, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_crossAxis, addr 0x1369178, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_crossAxis();

  /// @brief Method get_defaultLocalRotationOverride, addr 0x13691a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_defaultLocalRotationOverride();

  /// @brief Method get_secondaryAxis, addr 0x136916c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_secondaryAxis();

  /// @brief Method set_defaultLocalRotationOverride, addr 0x13691b0, size 0xc, virtual false, abstract: false, final false
  inline void set_defaultLocalRotationOverride(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RotationLimit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RotationLimit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RotationLimit(RotationLimit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RotationLimit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RotationLimit(RotationLimit const&) = delete;

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
