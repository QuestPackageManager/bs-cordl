#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\RumbleHapticFeedbackPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RumbleHapticFeedbackPlayer)
namespace BeatSaber::Haptics {
class HapticPresetSO;
}
namespace BeatSaber::Haptics {
class RumbleData;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace BeatSaber::Haptics {
class RumbleHapticFeedbackPlayer;
}
// Write type traits
MARK_REF_T(::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Haptics::RumbleHapticFeedbackPlayer*, "BeatSaber.Haptics", "RumbleHapticFeedbackPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace BeatSaber::Haptics {
// Is value type: false
// CS Name: BeatSaber.Haptics.RumbleHapticFeedbackPlayer
class CORDL_TYPE RumbleHapticFeedbackPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rumblesByNode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rumblesByNode, put = __cordl_internal_set__rumblesByNode)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::BeatSaber::Haptics::RumbleData*>*>* _rumblesByNode;

  /// @brief Field _vrPlatformHelper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Method CanPlayHapticPreset, addr 0x3298c1c, size 0x3c, virtual false, abstract: false, final false
  inline bool CanPlayHapticPreset(::BeatSaber::Haptics::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  /// @brief Method GetRumble, addr 0x3298a50, size 0x1cc, virtual false, abstract: false, final false
  inline ::BeatSaber::Haptics::RumbleData* GetRumble(::UnityEngine::XR::XRNode node, ::System::Object* preset);

  /// @brief Method LateUpdate, addr 0x3298c58, size 0x4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::BeatSaber::Haptics::RumbleHapticFeedbackPlayer* New_ctor();

  /// @brief Method PlayHapticFeedback, addr 0x3297dc0, size 0xe0, virtual false, abstract: false, final false
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::BeatSaber::Haptics::HapticPresetSO* hapticPreset);

  /// @brief Method UpdateRumbles, addr 0x3298c5c, size 0x4f8, virtual false, abstract: false, final false
  inline void UpdateRumbles();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::BeatSaber::Haptics::RumbleData*>*>* const&
  __cordl_internal_get__rumblesByNode() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::BeatSaber::Haptics::RumbleData*>*>*&
  __cordl_internal_get__rumblesByNode();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr void __cordl_internal_set__rumblesByNode(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::BeatSaber::Haptics::RumbleData*>*>* value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x3299154, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RumbleHapticFeedbackPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RumbleHapticFeedbackPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RumbleHapticFeedbackPlayer(RumbleHapticFeedbackPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23193 };

  /// @brief Field kContinuousRumbleFrameDuration offset 0xffffffff size 0x4
  static constexpr float_t kContinuousRumbleFrameDuration{ static_cast<float_t>(0.016666668f) };

  /// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _rumblesByNode, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::BeatSaber::Haptics::RumbleData*>*>* ____rumblesByNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Haptics::RumbleHapticFeedbackPlayer, ____vrPlatformHelper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Haptics::RumbleHapticFeedbackPlayer, ____rumblesByNode) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Haptics::RumbleHapticFeedbackPlayer) == 0x30, "Size mismatch!");

} // namespace BeatSaber::Haptics
