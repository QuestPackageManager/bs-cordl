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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12537))
// CS Name: ::RootMotion.FinalIK::IKExecutionOrder*
class CORDL_TYPE IKExecutionOrder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field IKComponents, offset 0x18, size 0x8
  __declspec(property(get = __get_IKComponents, put = __set_IKComponents))::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> IKComponents;

  /// @brief Field animator, offset 0x20, size 0x8
  __declspec(property(get = __get_animator, put = __set_animator))::UnityEngine::Animator* animator;

  /// @brief Field fixedFrame, offset 0x28, size 0x1
  __declspec(property(get = __get_fixedFrame, put = __set_fixedFrame)) bool fixedFrame;

  __declspec(property(get = get_animatePhysics)) bool animatePhysics;

  constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*>& __get_IKComponents();

  constexpr ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> const& __get_IKComponents() const;

  constexpr void __set_IKComponents(::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> value);

  constexpr ::UnityEngine::Animator*& __get_animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get_animator() const;

  constexpr void __set_animator(::UnityEngine::Animator* value);

  constexpr bool& __get_fixedFrame();

  constexpr bool const& __get_fixedFrame() const;

  constexpr void __set_fixedFrame(bool value);

  /// @brief Method get_animatePhysics, addr 0x124f24c, size 0x8c, virtual false, abstract: false, final false
  inline bool get_animatePhysics();

  /// @brief Method Start, addr 0x124f2d8, size 0x64, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x124f33c, size 0x24, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method FixedUpdate, addr 0x124f3dc, size 0x2c, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x124f408, size 0x84, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method FixTransforms, addr 0x124f360, size 0x7c, virtual false, abstract: false, final false
  inline void FixTransforms();

  static inline ::RootMotion::FinalIK::IKExecutionOrder* New_ctor();

  /// @brief Method .ctor, addr 0x124f48c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKExecutionOrder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKExecutionOrder(IKExecutionOrder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKExecutionOrder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKExecutionOrder(IKExecutionOrder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKExecutionOrder();

public:
  /// @brief Field IKComponents, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IK*, ::Array<::RootMotion::FinalIK::IK*>*> ___IKComponents;

  /// @brief Field animator, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Animator* ___animator;

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
