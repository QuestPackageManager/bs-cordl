#pragma once
// IWYU pragma private; include "UnityEngine\StateMachineBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StateMachineBehaviour)
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityEngine {
class StateMachineBehaviour;
}
// Write type traits
MARK_REF_T(::UnityEngine::StateMachineBehaviour*);
DEFINE_IL2CPP_CLASS(::UnityEngine::StateMachineBehaviour*, "UnityEngine", "StateMachineBehaviour");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.StateMachineBehaviour
class CORDL_TYPE StateMachineBehaviour : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  static inline ::UnityEngine::StateMachineBehaviour* New_ctor();

  /// @brief Method OnStateEnter, addr 0x6a35f9c, size 0x4, virtual true, abstract: false, final false
  inline void OnStateEnter(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateEnter, addr 0x6a35fb8, size 0x4, virtual true, abstract: false, final false
  inline void OnStateEnter(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateExit, addr 0x6a35fa4, size 0x4, virtual true, abstract: false, final false
  inline void OnStateExit(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateExit, addr 0x6a35fc0, size 0x4, virtual true, abstract: false, final false
  inline void OnStateExit(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateIK, addr 0x6a35fac, size 0x4, virtual true, abstract: false, final false
  inline void OnStateIK(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateIK, addr 0x6a35fc8, size 0x4, virtual true, abstract: false, final false
  inline void OnStateIK(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateMachineEnter, addr 0x6a35fb0, size 0x4, virtual true, abstract: false, final false
  inline void OnStateMachineEnter(::UnityEngine::Animator* animator, int32_t stateMachinePathHash);

  /// @brief Method OnStateMachineEnter, addr 0x6a35fcc, size 0x4, virtual true, abstract: false, final false
  inline void OnStateMachineEnter(::UnityEngine::Animator* animator, int32_t stateMachinePathHash, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateMachineExit, addr 0x6a35fb4, size 0x4, virtual true, abstract: false, final false
  inline void OnStateMachineExit(::UnityEngine::Animator* animator, int32_t stateMachinePathHash);

  /// @brief Method OnStateMachineExit, addr 0x6a35fd0, size 0x4, virtual true, abstract: false, final false
  inline void OnStateMachineExit(::UnityEngine::Animator* animator, int32_t stateMachinePathHash, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateMove, addr 0x6a35fa8, size 0x4, virtual true, abstract: false, final false
  inline void OnStateMove(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateMove, addr 0x6a35fc4, size 0x4, virtual true, abstract: false, final false
  inline void OnStateMove(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method OnStateUpdate, addr 0x6a35fa0, size 0x4, virtual true, abstract: false, final false
  inline void OnStateUpdate(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex);

  /// @brief Method OnStateUpdate, addr 0x6a35fbc, size 0x4, virtual true, abstract: false, final false
  inline void OnStateUpdate(::UnityEngine::Animator* animator, ::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, ::UnityEngine::Animations::AnimatorControllerPlayable controller);

  /// @brief Method .ctor, addr 0x6a35fd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StateMachineBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StateMachineBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StateMachineBehaviour(StateMachineBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StateMachineBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StateMachineBehaviour(StateMachineBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20199 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::StateMachineBehaviour) == 0x18, "Size mismatch!");

} // namespace UnityEngine
