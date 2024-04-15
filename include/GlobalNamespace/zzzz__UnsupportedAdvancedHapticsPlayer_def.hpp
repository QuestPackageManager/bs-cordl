#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnsupportedAdvancedHapticsPlayer)
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class UnsupportedAdvancedHapticsPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnsupportedAdvancedHapticsPlayer);
// Type: ::UnsupportedAdvancedHapticsPlayer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnsupportedAdvancedHapticsPlayer*
class CORDL_TYPE UnsupportedAdvancedHapticsPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

  /// @brief Method CanPlayHapticPreset, addr 0x23e51ac, size 0x8, virtual true, abstract: false, final true
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  static inline ::GlobalNamespace::UnsupportedAdvancedHapticsPlayer* New_ctor();

  /// @brief Method PlayHapticFeedback, addr 0x23e51a8, size 0x4, virtual true, abstract: false, final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method .ctor, addr 0x23e51b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr ::GlobalNamespace::IHapticFeedbackPlayer* i___GlobalNamespace__IHapticFeedbackPlayer() noexcept;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnsupportedAdvancedHapticsPlayer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnsupportedAdvancedHapticsPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnsupportedAdvancedHapticsPlayer*, "", "UnsupportedAdvancedHapticsPlayer");
