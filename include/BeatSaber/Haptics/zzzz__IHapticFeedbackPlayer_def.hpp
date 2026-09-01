#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\IHapticFeedbackPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHapticFeedbackPlayer)
namespace BeatSaber::Haptics {
class HapticPresetSO;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace BeatSaber::Haptics {
class IHapticFeedbackPlayer;
}
// Write type traits
MARK_REF_T(::BeatSaber::Haptics::IHapticFeedbackPlayer*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::IHapticFeedbackPlayer*, "BeatSaber.Haptics", "IHapticFeedbackPlayer");
// Dependencies
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.IHapticFeedbackPlayer
class CORDL_TYPE IHapticFeedbackPlayer {
public:
  // Declarations
  /// @brief Method CanPlayHapticPreset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanPlayHapticPreset(::BeatSaber::Haptics::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  /// @brief Method PlayHapticFeedback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset);

  // Ctor Parameters [CppParam { name: "", ty: "IHapticFeedbackPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHapticFeedbackPlayer(IHapticFeedbackPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Haptics
