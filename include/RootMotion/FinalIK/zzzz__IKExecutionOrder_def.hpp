#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IKExecutionOrder)
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKExecutionOrder;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKExecutionOrder);
// Type: RootMotion.FinalIK::IKExecutionOrder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKExecutionOrder*
class CORDL_TYPE IKExecutionOrder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field IKComponents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_IKComponents,
                      put = __cordl_internal_set_IKComponents))::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> IKComponents;

  __declspec(property(get = get_animatePhysics)) bool animatePhysics;

  /// @brief Field animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_animator, put = __cordl_internal_set_animator))::UnityW<::UnityEngine::Animator> animator;

  /// @brief Field fixedFrame, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_fixedFrame, put = __cordl_internal_set_fixedFrame)) bool fixedFrame;

  /// @brief Method FixTransforms, addr 0x132b3fc, size 0x7c, virtual false, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method FixedUpdate, addr 0x132b478, size 0x2c, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x132b4a4, size 0x84, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::RootMotion::FinalIK::IKExecutionOrder* New_ctor();

  /// @brief Method Start, addr 0x132b374, size 0x64, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x132b3d8, size 0x24, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> const& __cordl_internal_get_IKComponents() const;

  constexpr ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*>& __cordl_internal_get_IKComponents();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator();

  constexpr bool const& __cordl_internal_get_fixedFrame() const;

  constexpr bool& __cordl_internal_get_fixedFrame();

  constexpr void __cordl_internal_set_IKComponents(::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> value);

  constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_fixedFrame(bool value);

  /// @brief Method .ctor, addr 0x132b528, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_animatePhysics, addr 0x132b2e8, size 0x8c, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKExecutionOrder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKExecutionOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKExecutionOrder(IKExecutionOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKExecutionOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKExecutionOrder(IKExecutionOrder const&) = delete;

  /// @brief Field IKComponents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::RootMotion::FinalIK::IK>, ::Array<::UnityW<::RootMotion::FinalIK::IK>>*> ___IKComponents;

  /// @brief Field animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___animator;

  /// @brief Field fixedFrame, offset: 0x28, size: 0x1, def value: None
  bool ___fixedFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKExecutionOrder, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKExecutionOrder, ___IKComponents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKExecutionOrder, ___animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKExecutionOrder, ___fixedFrame) == 0x28, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKExecutionOrder);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKExecutionOrder*, "RootMotion.FinalIK", "IKExecutionOrder");
