#pragma once
// IWYU pragma private; include "BeatSaber\Automation\RecPlayBehaviourState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RecPlayBehaviourState)
// Forward declare root types
namespace BeatSaber::Automation {
class RecPlayBehaviourState;
}
// Write type traits
MARK_REF_T(::BeatSaber::Automation::RecPlayBehaviourState*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Automation::RecPlayBehaviourState*, "BeatSaber.Automation", "RecPlayBehaviourState");
// Dependencies System.Object
namespace BeatSaber::Automation {
// Is value type: false
// CS Name: BeatSaber.Automation.RecPlayBehaviourState
class CORDL_TYPE RecPlayBehaviourState : public ::System::Object {
public:
  // Declarations
  /// @brief Field playback, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_playback, put = __cordl_internal_set_playback)) bool playback;

  /// @brief Field recording, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_recording, put = __cordl_internal_set_recording)) bool recording;

  static inline ::BeatSaber::Automation::RecPlayBehaviourState* New_ctor();

  constexpr bool const& __cordl_internal_get_playback() const;

  constexpr bool& __cordl_internal_get_playback();

  constexpr bool const& __cordl_internal_get_recording() const;

  constexpr bool& __cordl_internal_get_recording();

  constexpr void __cordl_internal_set_playback(bool value);

  constexpr void __cordl_internal_set_recording(bool value);

  /// @brief Method .ctor, addr 0x3269358, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecPlayBehaviourState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecPlayBehaviourState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecPlayBehaviourState(RecPlayBehaviourState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecPlayBehaviourState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecPlayBehaviourState(RecPlayBehaviourState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23728 };

  /// @brief Field recording, offset: 0x10, size: 0x1, def value: None
  bool ___recording;

  /// @brief Field playback, offset: 0x11, size: 0x1, def value: None
  bool ___playback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Automation::RecPlayBehaviourState, ___recording) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Automation::RecPlayBehaviourState, ___playback) == 0x11, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Automation::RecPlayBehaviourState) == 0x18, "Size mismatch!");

} // namespace BeatSaber::Automation
