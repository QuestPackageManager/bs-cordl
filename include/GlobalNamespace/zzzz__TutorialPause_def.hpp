#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TutorialPause)
namespace GlobalNamespace {
class AudioListenerController;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class TutorialSongController;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialPause;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialPause);
// Type: ::TutorialPause
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4681))
// CS Name: ::TutorialPause*
class CORDL_TYPE TutorialPause : public ::System::Object {
public:
  // Declarations
  /// @brief Field _tutorialSongController, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialSongController,
                      put = __cordl_internal_set__tutorialSongController))::UnityW<::GlobalNamespace::TutorialSongController> _tutorialSongController;

  /// @brief Field _saberManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager))::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _audioListenerController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioListenerController,
                      put = __cordl_internal_set__audioListenerController))::UnityW<::GlobalNamespace::AudioListenerController> _audioListenerController;

  /// @brief Field didPauseEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didPauseEvent, put = __cordl_internal_set_didPauseEvent))::System::Action* didPauseEvent;

  /// @brief Field willResumeEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_willResumeEvent, put = __cordl_internal_set_willResumeEvent))::System::Action* willResumeEvent;

  /// @brief Field didResumeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didResumeEvent, put = __cordl_internal_set_didResumeEvent))::System::Action* didResumeEvent;

  /// @brief Field _pause, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__pause, put = __cordl_internal_set__pause)) bool _pause;

  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Convert operator to "::GlobalNamespace::IGamePause"
  constexpr operator ::GlobalNamespace::IGamePause*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IGamePause"
  constexpr ::GlobalNamespace::IGamePause* i___GlobalNamespace__IGamePause() noexcept;

  constexpr ::UnityW<::GlobalNamespace::TutorialSongController>& __cordl_internal_get__tutorialSongController();

  constexpr ::UnityW<::GlobalNamespace::TutorialSongController> const& __cordl_internal_get__tutorialSongController() const;

  constexpr void __cordl_internal_set__tutorialSongController(::UnityW<::GlobalNamespace::TutorialSongController> value);

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr ::UnityW<::GlobalNamespace::AudioListenerController>& __cordl_internal_get__audioListenerController();

  constexpr ::UnityW<::GlobalNamespace::AudioListenerController> const& __cordl_internal_get__audioListenerController() const;

  constexpr void __cordl_internal_set__audioListenerController(::UnityW<::GlobalNamespace::AudioListenerController> value);

  constexpr ::System::Action*& __cordl_internal_get_didPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didPauseEvent() const;

  constexpr void __cordl_internal_set_didPauseEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_willResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_willResumeEvent() const;

  constexpr void __cordl_internal_set_willResumeEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didResumeEvent() const;

  constexpr void __cordl_internal_set_didResumeEvent(::System::Action* value);

  constexpr bool& __cordl_internal_get__pause();

  constexpr bool const& __cordl_internal_get__pause() const;

  constexpr void __cordl_internal_set__pause(bool value);

  /// @brief Method get_isPaused, addr 0x23c98c0, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPaused();

  /// @brief Method add_didPauseEvent, addr 0x23c98c8, size 0x9c, virtual true, abstract: false, final true
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didPauseEvent, addr 0x23c9964, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method add_willResumeEvent, addr 0x23c9a00, size 0x9c, virtual true, abstract: false, final true
  inline void add_willResumeEvent(::System::Action* value);

  /// @brief Method remove_willResumeEvent, addr 0x23c9a9c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_willResumeEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x23c9b38, size 0x9c, virtual true, abstract: false, final true
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x23c9bd4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method Pause, addr 0x23c9c70, size 0x78, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method WillResume, addr 0x23c9ce8, size 0x1c, virtual true, abstract: false, final true
  inline void WillResume();

  /// @brief Method Resume, addr 0x23c9d04, size 0x74, virtual true, abstract: false, final true
  inline void Resume();

  static inline ::GlobalNamespace::TutorialPause* New_ctor();

  /// @brief Method .ctor, addr 0x23c9d78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialPause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialPause(TutorialPause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialPause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialPause(TutorialPause const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialPause();

public:
  /// @brief Field _tutorialSongController, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialSongController> ____tutorialSongController;

  /// @brief Field _saberManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _audioListenerController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioListenerController> ____audioListenerController;

  /// @brief Field didPauseEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field willResumeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___willResumeEvent;

  /// @brief Field didResumeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

  /// @brief Field _pause, offset: 0x40, size: 0x1, def value: None
  bool ____pause;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialPause, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialPause, ____tutorialSongController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialPause, ____saberManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialPause, ____audioListenerController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialPause, ___didPauseEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialPause, ___willResumeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialPause, ___didResumeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialPause, ____pause) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialPause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialPause*, "", "TutorialPause");
