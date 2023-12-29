#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StateMachineBehaviour)
namespace UnityEngine {
class Animator;
}
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
// Forward declare root types
namespace UnityEngine {
class StateMachineBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::StateMachineBehaviour);
// Type: UnityEngine::StateMachineBehaviour
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15114))
// CS Name: ::UnityEngine::StateMachineBehaviour*
class CORDL_TYPE StateMachineBehaviour : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Method OnStateEnter addr 0x2b30c98 size 0x4 virtual true final false
  inline void OnStateEnter(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateUpdate addr 0x2b30c9c size 0x4 virtual true final false
  inline void OnStateUpdate(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateExit addr 0x2b30ca0 size 0x4 virtual true final false
  inline void OnStateExit(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateMove addr 0x2b30ca4 size 0x4 virtual true final false
  inline void OnStateMove(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateIK addr 0x2b30ca8 size 0x4 virtual true final false
  inline void OnStateIK(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateMachineEnter addr 0x2b30cac size 0x4 virtual true final false
  inline void OnStateMachineEnter(::UnityEngine::Animator* animator, int32_t stateMachinePathHash);

  /// @brief Method OnStateMachineExit addr 0x2b30cb0 size 0x4 virtual true final false
  inline void OnStateMachineExit(::UnityEngine::Animator* animator, int32_t stateMachinePathHash);

  /// @brief Method OnStateEnter addr 0x2b30cb4 size 0x4 virtual true final false
  inline void OnStateEnter(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateUpdate addr 0x2b30cb8 size 0x4 virtual true final false
  inline void OnStateUpdate(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateExit addr 0x2b30cbc size 0x4 virtual true final false
  inline void OnStateExit(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateMove addr 0x2b30cc0 size 0x4 virtual true final false
  inline void OnStateMove(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateIK addr 0x2b30cc4 size 0x4 virtual true final false
  inline void OnStateIK(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateMachineEnter addr 0x2b30cc8 size 0x4 virtual true final false
  inline void OnStateMachineEnter(::UnityEngine::Animator* animator, int32_t stateMachinePathHash, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateMachineExit addr 0x2b30ccc size 0x4 virtual true final false
  inline void OnStateMachineExit(::UnityEngine::Animator* animator, int32_t stateMachinePathHash, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  static inline ::UnityEngine::StateMachineBehaviour* New_ctor();

  /// @brief Method .ctor addr 0x2b30cd0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StateMachineBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StateMachineBehaviour(StateMachineBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StateMachineBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StateMachineBehaviour(StateMachineBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StateMachineBehaviour();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::StateMachineBehaviour, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::StateMachineBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StateMachineBehaviour*, "UnityEngine", "StateMachineBehaviour");
