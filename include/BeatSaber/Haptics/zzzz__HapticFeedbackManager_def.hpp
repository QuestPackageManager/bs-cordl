#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\HapticFeedbackManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HapticFeedbackManager)
namespace BeatSaber::Haptics {
class HapticPresetSO;
}
namespace BeatSaber::Haptics {
class IHapticFeedbackPlayer;
}
namespace BeatSaber::Haptics {
class RumbleHapticFeedbackPlayer;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace BeatSaber::Haptics {
class HapticFeedbackManager;
}
// Write type traits
MARK_REF_T(::BeatSaber::Haptics::HapticFeedbackManager*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::HapticFeedbackManager*, "BeatSaber.Haptics", "HapticFeedbackManager");
// Dependencies UnityEngine.MonoBehaviour
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.HapticFeedbackManager
class CORDL_TYPE HapticFeedbackManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _advancedHapticFeedbackPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__advancedHapticFeedbackPlayer,
                      put = __cordl_internal_set__advancedHapticFeedbackPlayer)) ::BeatSaber::Haptics::IHapticFeedbackPlayer* _advancedHapticFeedbackPlayer;

  /// @brief Field _rumbleHapticFeedbackPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rumbleHapticFeedbackPlayer, put = __cordl_internal_set__rumbleHapticFeedbackPlayer)) ::UnityW<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer>
      _rumbleHapticFeedbackPlayer;

  /// @brief Field hapticFeedbackEnabled, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_hapticFeedbackEnabled, put = __cordl_internal_set_hapticFeedbackEnabled)) bool hapticFeedbackEnabled;

  static inline ::BeatSaber::Haptics::HapticFeedbackManager* New_ctor();

  /// @brief Method PlayHapticFeedback, addr 0x3297c50, size 0x170, virtual false, abstract: false, final false
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset);

  constexpr ::BeatSaber::Haptics::IHapticFeedbackPlayer* const& __cordl_internal_get__advancedHapticFeedbackPlayer() const;

  constexpr ::BeatSaber::Haptics::IHapticFeedbackPlayer*& __cordl_internal_get__advancedHapticFeedbackPlayer();

  constexpr ::UnityW<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer> const& __cordl_internal_get__rumbleHapticFeedbackPlayer() const;

  constexpr ::UnityW<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer>& __cordl_internal_get__rumbleHapticFeedbackPlayer();

  constexpr bool const& __cordl_internal_get_hapticFeedbackEnabled() const;

  constexpr bool& __cordl_internal_get_hapticFeedbackEnabled();

  constexpr void __cordl_internal_set__advancedHapticFeedbackPlayer(::BeatSaber::Haptics::IHapticFeedbackPlayer* value);

  constexpr void __cordl_internal_set__rumbleHapticFeedbackPlayer(::UnityW<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer> value);

  constexpr void __cordl_internal_set_hapticFeedbackEnabled(bool value);

  /// @brief Method .ctor, addr 0x3297ea0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticFeedbackManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticFeedbackManager(HapticFeedbackManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticFeedbackManager(HapticFeedbackManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23188 };

  /// @brief Field _rumbleHapticFeedbackPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BeatSaber::Haptics::RumbleHapticFeedbackPlayer> ____rumbleHapticFeedbackPlayer;

  /// @brief Field _advancedHapticFeedbackPlayer, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Haptics::IHapticFeedbackPlayer* ____advancedHapticFeedbackPlayer;

  /// @brief Field hapticFeedbackEnabled, offset: 0x30, size: 0x1, def value: None
  bool ___hapticFeedbackEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Haptics::HapticFeedbackManager, ____rumbleHapticFeedbackPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::HapticFeedbackManager, ____advancedHapticFeedbackPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::HapticFeedbackManager, ___hapticFeedbackEnabled) == 0x30, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Haptics::HapticFeedbackManager) == 0x38, "Size mismatch!");

} // namespace BeatSaber::Haptics
