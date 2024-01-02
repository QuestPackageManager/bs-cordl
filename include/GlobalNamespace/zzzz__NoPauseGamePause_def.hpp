#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoPauseGamePause)
namespace GlobalNamespace {
class IGamePause;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class NoPauseGamePause;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoPauseGamePause);
// Type: ::NoPauseGamePause
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5061))
// CS Name: ::NoPauseGamePause*
class CORDL_TYPE NoPauseGamePause : public ::System::Object {
public:
  // Declarations
  /// @brief Field didPauseEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_didPauseEvent, put = __set_didPauseEvent))::System::Action* didPauseEvent;

  /// @brief Field willResumeEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_willResumeEvent, put = __set_willResumeEvent))::System::Action* willResumeEvent;

  /// @brief Field didResumeEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didResumeEvent, put = __set_didResumeEvent))::System::Action* didResumeEvent;

  /// @brief Field _pause, offset 0x28, size 0x1
  __declspec(property(get = __get__pause, put = __set__pause)) bool _pause;

  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Convert operator to "::GlobalNamespace::IGamePause"
  constexpr operator ::GlobalNamespace::IGamePause*() noexcept;

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

  /// @brief Method get_isPaused, addr 0x23c6d00, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPaused();

  /// @brief Method add_didPauseEvent, addr 0x23c6d08, size 0x9c, virtual true, abstract: false, final true
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didPauseEvent, addr 0x23c6da4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method add_willResumeEvent, addr 0x23c6e40, size 0x9c, virtual true, abstract: false, final true
  inline void add_willResumeEvent(::System::Action* value);

  /// @brief Method remove_willResumeEvent, addr 0x23c6edc, size 0x9c, virtual true, abstract: false, final true
  inline void remove_willResumeEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x23c6f78, size 0x9c, virtual true, abstract: false, final true
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x23c7014, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method Pause, addr 0x23c70b0, size 0x24, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method WillResume, addr 0x23c70d4, size 0x1c, virtual true, abstract: false, final true
  inline void WillResume();

  /// @brief Method Resume, addr 0x23c70f0, size 0x20, virtual true, abstract: false, final true
  inline void Resume();

  static inline ::GlobalNamespace::NoPauseGamePause* New_ctor();

  /// @brief Method .ctor, addr 0x23c7110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoPauseGamePause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoPauseGamePause(NoPauseGamePause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoPauseGamePause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoPauseGamePause(NoPauseGamePause const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoPauseGamePause();

public:
  /// @brief Field didPauseEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field willResumeEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___willResumeEvent;

  /// @brief Field didResumeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

  /// @brief Field _pause, offset: 0x28, size: 0x1, def value: None
  bool ____pause;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoPauseGamePause, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPauseGamePause, ___didPauseEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPauseGamePause, ___willResumeEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPauseGamePause, ___didResumeEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoPauseGamePause, ____pause) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoPauseGamePause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoPauseGamePause*, "", "NoPauseGamePause");
