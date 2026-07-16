#pragma once
// IWYU pragma private; include "BeatSaber/Haptics/UnsupportedAdvancedHapticsPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnsupportedAdvancedHapticsPlayer)
namespace BeatSaber::Haptics {
class HapticPresetSO;
}
namespace BeatSaber::Haptics {
class IHapticFeedbackPlayer;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace BeatSaber::Haptics {
class UnsupportedAdvancedHapticsPlayer;
}
// Write type traits
MARK_REF_T(::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer*, "BeatSaber.Haptics", "UnsupportedAdvancedHapticsPlayer");
// Dependencies System.Object
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.UnsupportedAdvancedHapticsPlayer
class CORDL_TYPE UnsupportedAdvancedHapticsPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BeatSaber::Haptics::IHapticFeedbackPlayer"
  constexpr operator ::BeatSaber::Haptics::IHapticFeedbackPlayer*() noexcept;

  /// @brief Method CanPlayHapticPreset, addr 0x329810c, size 0x8, virtual true, abstract: false, final true
  inline bool CanPlayHapticPreset(::BeatSaber::Haptics::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  static inline ::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer* New_ctor();

  /// @brief Method PlayHapticFeedback, addr 0x3298108, size 0x4, virtual true, abstract: false, final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset);

  /// @brief Method .ctor, addr 0x3298114, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Haptics::IHapticFeedbackPlayer"
  constexpr ::BeatSaber::Haptics::IHapticFeedbackPlayer* i___BeatSaber__Haptics__IHapticFeedbackPlayer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsupportedAdvancedHapticsPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsupportedAdvancedHapticsPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsupportedAdvancedHapticsPlayer(UnsupportedAdvancedHapticsPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsupportedAdvancedHapticsPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsupportedAdvancedHapticsPlayer(UnsupportedAdvancedHapticsPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23118 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Haptics::UnsupportedAdvancedHapticsPlayer) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Haptics
