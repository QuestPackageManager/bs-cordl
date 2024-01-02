#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TutorialPause)
namespace GlobalNamespace {
class TutorialSongController;
}
namespace GlobalNamespace {
class AudioListenerController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class IGamePause;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5343))
// CS Name: ::TutorialPause*
class CORDL_TYPE TutorialPause : public ::System::Object {
public:
  // Declarations
  /// @brief Field _tutorialSongController, offset 0x10, size 0x8
  __declspec(property(get = __get__tutorialSongController, put = __set__tutorialSongController))::GlobalNamespace::TutorialSongController* _tutorialSongController;

  /// @brief Field _saberManager, offset 0x18, size 0x8
  __declspec(property(get = __get__saberManager, put = __set__saberManager))::GlobalNamespace::SaberManager* _saberManager;

  /// @brief Field _audioListenerController, offset 0x20, size 0x8
  __declspec(property(get = __get__audioListenerController, put = __set__audioListenerController))::GlobalNamespace::AudioListenerController* _audioListenerController;

  /// @brief Field didPauseEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_didPauseEvent, put = __set_didPauseEvent))::System::Action* didPauseEvent;

  /// @brief Field willResumeEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_willResumeEvent, put = __set_willResumeEvent))::System::Action* willResumeEvent;

  /// @brief Field didResumeEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_didResumeEvent, put = __set_didResumeEvent))::System::Action* didResumeEvent;

  /// @brief Field _pause, offset 0x40, size 0x1
  __declspec(property(get = __get__pause, put = __set__pause)) bool _pause;

  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Convert operator to "::GlobalNamespace::IGamePause"
  constexpr operator ::GlobalNamespace::IGamePause*() noexcept;

  constexpr ::GlobalNamespace::TutorialSongController*& __get__tutorialSongController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialSongController*> const& __get__tutorialSongController() const;

  constexpr void __set__tutorialSongController(::GlobalNamespace::TutorialSongController* value);

  constexpr ::GlobalNamespace::SaberManager*& __get__saberManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberManager*> const& __get__saberManager() const;

  constexpr void __set__saberManager(::GlobalNamespace::SaberManager* value);

  constexpr ::GlobalNamespace::AudioListenerController*& __get__audioListenerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioListenerController*> const& __get__audioListenerController() const;

  constexpr void __set__audioListenerController(::GlobalNamespace::AudioListenerController* value);

  constexpr ::System::Action*& __get_didPauseEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didPauseEvent() const;

  constexpr void __set_didPauseEvent(::System::Action* value);

  constexpr ::System::Action*& __get_willResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_willResumeEvent() const;

  constexpr void __set_willResumeEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didResumeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didResumeEvent() const;

  constexpr void __set_didResumeEvent(::System::Action* value);

  constexpr bool& __get__pause();

  constexpr bool const& __get__pause() const;

  constexpr void __set__pause(bool value);

  /// @brief Method get_isPaused, addr 0x226aa00, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPaused();

  /// @brief Method add_didPauseEvent, addr 0x226aa08, size 0x9c, virtual true, abstract: false, final true
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didPauseEvent, addr 0x226aaa4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method add_willResumeEvent, addr 0x226ab40, size 0x9c, virtual true, abstract: false, final true
  inline void add_willResumeEvent(::System::Action* value);

  /// @brief Method remove_willResumeEvent, addr 0x226abdc, size 0x9c, virtual true, abstract: false, final true
  inline void remove_willResumeEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x226ac78, size 0x9c, virtual true, abstract: false, final true
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x226ad14, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method Pause, addr 0x226adb0, size 0x78, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method WillResume, addr 0x226ae28, size 0x1c, virtual true, abstract: false, final true
  inline void WillResume();

  /// @brief Method Resume, addr 0x226ae44, size 0x74, virtual true, abstract: false, final true
  inline void Resume();

  static inline ::GlobalNamespace::TutorialPause* New_ctor();

  /// @brief Method .ctor, addr 0x226aeb8, size 0x8, virtual false, abstract: false, final false
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
  ::GlobalNamespace::TutorialSongController* ____tutorialSongController;

  /// @brief Field _saberManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SaberManager* ____saberManager;

  /// @brief Field _audioListenerController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AudioListenerController* ____audioListenerController;

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
