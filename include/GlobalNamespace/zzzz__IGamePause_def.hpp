#pragma once
// IWYU pragma private; include "GlobalNamespace/IGamePause.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGamePause)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IGamePause;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IGamePause);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGamePause
class CORDL_TYPE IGamePause {
public:
  // Declarations
  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Method Pause, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Pause();

  /// @brief Method Resume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resume();

  /// @brief Method WillResume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WillResume();

  /// @brief Method add_didPauseEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method add_willResumeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_willResumeEvent(::System::Action* value);

  /// @brief Method get_isPaused, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isPaused();

  /// @brief Method remove_didPauseEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method remove_willResumeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_willResumeEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IGamePause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGamePause(IGamePause const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4427 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IGamePause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGamePause*, "", "IGamePause");
