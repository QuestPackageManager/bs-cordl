#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TwistRelaxer)
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class TwistRelaxer;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::TwistRelaxer);
// Type: RootMotion.FinalIK::TwistRelaxer
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::TwistRelaxer*
class CORDL_TYPE TwistRelaxer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field axis, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis))::UnityEngine::Vector3 axis;

  /// @brief Field axisRelativeToChildDefault, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_axisRelativeToChildDefault, put = __cordl_internal_set_axisRelativeToChildDefault))::UnityEngine::Vector3 axisRelativeToChildDefault;

  /// @brief Field axisRelativeToParentDefault, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_axisRelativeToParentDefault, put = __cordl_internal_set_axisRelativeToParentDefault))::UnityEngine::Vector3 axisRelativeToParentDefault;

  /// @brief Field child, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_child, put = __cordl_internal_set_child))::UnityW<::UnityEngine::Transform> child;

  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::IK> ik;

  /// @brief Field parent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_parent, put = __cordl_internal_set_parent))::UnityW<::UnityEngine::Transform> parent;

  /// @brief Field parentChildCrossfade, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_parentChildCrossfade, put = __cordl_internal_set_parentChildCrossfade)) float_t parentChildCrossfade;

  /// @brief Field twistAngleOffset, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_twistAngleOffset, put = __cordl_internal_set_twistAngleOffset)) float_t twistAngleOffset;

  /// @brief Field twistAxis, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get_twistAxis, put = __cordl_internal_set_twistAxis))::UnityEngine::Vector3 twistAxis;

  /// @brief Field weight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method LateUpdate, addr 0x135d748, size 0x78, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::RootMotion::FinalIK::TwistRelaxer* New_ctor();

  /// @brief Method OnDestroy, addr 0x135d7c0, size 0x118, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPostUpdate, addr 0x135d6d0, size 0x78, virtual false, abstract: false, final false
  inline void OnPostUpdate();

  /// @brief Method Relax, addr 0x135ceec, size 0x444, virtual false, abstract: false, final false
  inline void Relax();

  /// @brief Method Start, addr 0x135d330, size 0x3a0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_axis();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axisRelativeToChildDefault() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_axisRelativeToChildDefault();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axisRelativeToParentDefault() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_axisRelativeToParentDefault();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_child() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_child();

  constexpr ::UnityW<::RootMotion::FinalIK::IK> const& __cordl_internal_get_ik() const;

  constexpr ::UnityW<::RootMotion::FinalIK::IK>& __cordl_internal_get_ik();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent();

  constexpr float_t const& __cordl_internal_get_parentChildCrossfade() const;

  constexpr float_t& __cordl_internal_get_parentChildCrossfade();

  constexpr float_t const& __cordl_internal_get_twistAngleOffset() const;

  constexpr float_t& __cordl_internal_get_twistAngleOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_twistAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_twistAxis();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_axis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_axisRelativeToChildDefault(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_axisRelativeToParentDefault(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_child(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::IK> value);

  constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_parentChildCrossfade(float_t value);

  constexpr void __cordl_internal_set_twistAngleOffset(float_t value);

  constexpr void __cordl_internal_set_twistAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x135d8d8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwistRelaxer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TwistRelaxer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwistRelaxer(TwistRelaxer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwistRelaxer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwistRelaxer(TwistRelaxer const&) = delete;

  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::IK> ___ik;

  /// @brief Field parent, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___parent;

  /// @brief Field child, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___child;

  /// @brief Field weight, offset: 0x30, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field parentChildCrossfade, offset: 0x34, size: 0x4, def value: None
  float_t ___parentChildCrossfade;

  /// @brief Field twistAngleOffset, offset: 0x38, size: 0x4, def value: None
  float_t ___twistAngleOffset;

  /// @brief Field twistAxis, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___twistAxis;

  /// @brief Field axis, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___axis;

  /// @brief Field axisRelativeToParentDefault, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___axisRelativeToParentDefault;

  /// @brief Field axisRelativeToChildDefault, offset: 0x60, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___axisRelativeToChildDefault;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::TwistRelaxer, 0x70>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___ik) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___child) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___weight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___parentChildCrossfade) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___twistAngleOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___twistAxis) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___axis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___axisRelativeToParentDefault) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::TwistRelaxer, ___axisRelativeToChildDefault) == 0x60, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::TwistRelaxer);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::TwistRelaxer*, "RootMotion.FinalIK", "TwistRelaxer");
