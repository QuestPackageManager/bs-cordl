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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12594))
// CS Name: ::RootMotion.FinalIK::TwistRelaxer*
class CORDL_TYPE TwistRelaxer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::IK* ik;

  /// @brief Field parent, offset 0x20, size 0x8
  __declspec(property(get = __get_parent, put = __set_parent))::UnityEngine::Transform* parent;

  /// @brief Field child, offset 0x28, size 0x8
  __declspec(property(get = __get_child, put = __set_child))::UnityEngine::Transform* child;

  /// @brief Field weight, offset 0x30, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field parentChildCrossfade, offset 0x34, size 0x4
  __declspec(property(get = __get_parentChildCrossfade, put = __set_parentChildCrossfade)) float_t parentChildCrossfade;

  /// @brief Field twistAngleOffset, offset 0x38, size 0x4
  __declspec(property(get = __get_twistAngleOffset, put = __set_twistAngleOffset)) float_t twistAngleOffset;

  /// @brief Field twistAxis, offset 0x3c, size 0xc
  __declspec(property(get = __get_twistAxis, put = __set_twistAxis))::UnityEngine::Vector3 twistAxis;

  /// @brief Field axis, offset 0x48, size 0xc
  __declspec(property(get = __get_axis, put = __set_axis))::UnityEngine::Vector3 axis;

  /// @brief Field axisRelativeToParentDefault, offset 0x54, size 0xc
  __declspec(property(get = __get_axisRelativeToParentDefault, put = __set_axisRelativeToParentDefault))::UnityEngine::Vector3 axisRelativeToParentDefault;

  /// @brief Field axisRelativeToChildDefault, offset 0x60, size 0xc
  __declspec(property(get = __get_axisRelativeToChildDefault, put = __set_axisRelativeToChildDefault))::UnityEngine::Vector3 axisRelativeToChildDefault;

  constexpr ::RootMotion::FinalIK::IK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::IK* value);

  constexpr ::UnityEngine::Transform*& __get_parent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_parent() const;

  constexpr void __set_parent(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_child();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_child() const;

  constexpr void __set_child(::UnityEngine::Transform* value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr float_t& __get_parentChildCrossfade();

  constexpr float_t const& __get_parentChildCrossfade() const;

  constexpr void __set_parentChildCrossfade(float_t value);

  constexpr float_t& __get_twistAngleOffset();

  constexpr float_t const& __get_twistAngleOffset() const;

  constexpr void __set_twistAngleOffset(float_t value);

  constexpr ::UnityEngine::Vector3& __get_twistAxis();

  constexpr ::UnityEngine::Vector3 const& __get_twistAxis() const;

  constexpr void __set_twistAxis(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_axis();

  constexpr ::UnityEngine::Vector3 const& __get_axis() const;

  constexpr void __set_axis(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_axisRelativeToParentDefault();

  constexpr ::UnityEngine::Vector3 const& __get_axisRelativeToParentDefault() const;

  constexpr void __set_axisRelativeToParentDefault(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_axisRelativeToChildDefault();

  constexpr ::UnityEngine::Vector3 const& __get_axisRelativeToChildDefault() const;

  constexpr void __set_axisRelativeToChildDefault(::UnityEngine::Vector3 value);

  /// @brief Method Relax addr 0x1282e50 size 0x444 virtual false final false
  inline void Relax();

  /// @brief Method Start addr 0x1283294 size 0x3a0 virtual false final false
  inline void Start();

  /// @brief Method OnPostUpdate addr 0x1283634 size 0x78 virtual false final false
  inline void OnPostUpdate();

  /// @brief Method LateUpdate addr 0x12836ac size 0x78 virtual false final false
  inline void LateUpdate();

  /// @brief Method OnDestroy addr 0x1283724 size 0x118 virtual false final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::TwistRelaxer* New_ctor();

  /// @brief Method .ctor addr 0x128383c size 0xa0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TwistRelaxer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwistRelaxer(TwistRelaxer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwistRelaxer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwistRelaxer(TwistRelaxer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwistRelaxer();

public:
  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::RootMotion::FinalIK::IK* ___ik;

  /// @brief Field parent, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ___parent;

  /// @brief Field child, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___child;

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

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::TwistRelaxer);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::TwistRelaxer*, "RootMotion.FinalIK", "TwistRelaxer");
