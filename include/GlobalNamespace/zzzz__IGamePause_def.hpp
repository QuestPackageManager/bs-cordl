#pragma once
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
// Type: ::IGamePause
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5050))
// CS Name: ::IGamePause*
class CORDL_TYPE IGamePause {
public:
  // Declarations
  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Method get_isPaused addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isPaused();

  /// @brief Method add_didPauseEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didPauseEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method add_willResumeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_willResumeEvent(::System::Action* value);

  /// @brief Method remove_willResumeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_willResumeEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method Pause addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Pause();

  /// @brief Method WillResume addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WillResume();

  /// @brief Method Resume addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Resume();

  // Ctor Parameters [CppParam { name: "", ty: "IGamePause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGamePause(IGamePause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGamePause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGamePause(IGamePause const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IGamePause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGamePause*, "", "IGamePause");
