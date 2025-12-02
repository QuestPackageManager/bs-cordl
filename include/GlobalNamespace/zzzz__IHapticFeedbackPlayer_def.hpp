#pragma once
// IWYU pragma private; include "GlobalNamespace/IHapticFeedbackPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHapticFeedbackPlayer)
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IHapticFeedbackPlayer);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IHapticFeedbackPlayer
class CORDL_TYPE IHapticFeedbackPlayer {
public:
  // Declarations
  /// @brief Method CanPlayHapticPreset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset, ::UnityEngine::XR::XRNode node);

  /// @brief Method PlayHapticFeedback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  // Ctor Parameters [CppParam { name: "", ty: "IHapticFeedbackPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHapticFeedbackPlayer(IHapticFeedbackPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20087 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IHapticFeedbackPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IHapticFeedbackPlayer*, "", "IHapticFeedbackPlayer");
