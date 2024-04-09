#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PauseAnimationController)
namespace System {
class Action;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class PauseAnimationController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PauseAnimationController);
// Type: ::PauseAnimationController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PauseAnimationController*
class CORDL_TYPE PauseAnimationController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator))::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Field resumeFromPauseAnimationDidFinishEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resumeFromPauseAnimationDidFinishEvent,
                      put = __cordl_internal_set_resumeFromPauseAnimationDidFinishEvent))::System::Action* resumeFromPauseAnimationDidFinishEvent;

  /// @brief Method Awake, addr 0x25df920, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method EnterPauseAnimationDidFinish, addr 0x25dfa40, size 0x30, virtual false, abstract: false, final false
  inline void EnterPauseAnimationDidFinish();

  static inline ::GlobalNamespace::PauseAnimationController* New_ctor();

  /// @brief Method ResumeFromPauseAnimationDidFinish, addr 0x25dfa70, size 0x50, virtual false, abstract: false, final false
  inline void ResumeFromPauseAnimationDidFinish();

  /// @brief Method StartEnterPauseAnimation, addr 0x25df950, size 0x78, virtual false, abstract: false, final false
  inline void StartEnterPauseAnimation();

  /// @brief Method StartResumeFromPauseAnimation, addr 0x25df9c8, size 0x78, virtual false, abstract: false, final false
  inline void StartResumeFromPauseAnimation();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::System::Action*& __cordl_internal_get_resumeFromPauseAnimationDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_resumeFromPauseAnimationDidFinishEvent() const;

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_resumeFromPauseAnimationDidFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x25dfac0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_resumeFromPauseAnimationDidFinishEvent, addr 0x25df7e8, size 0x9c, virtual false, abstract: false, final false
  inline void add_resumeFromPauseAnimationDidFinishEvent(::System::Action* value);

  /// @brief Method remove_resumeFromPauseAnimationDidFinishEvent, addr 0x25df884, size 0x9c, virtual false, abstract: false, final false
  inline void remove_resumeFromPauseAnimationDidFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PauseAnimationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PauseAnimationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PauseAnimationController(PauseAnimationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PauseAnimationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PauseAnimationController(PauseAnimationController const&) = delete;

  /// @brief Field _animator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  /// @brief Field resumeFromPauseAnimationDidFinishEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___resumeFromPauseAnimationDidFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PauseAnimationController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseAnimationController, ____animator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PauseAnimationController, ___resumeFromPauseAnimationDidFinishEvent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PauseAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseAnimationController*, "", "PauseAnimationController");
