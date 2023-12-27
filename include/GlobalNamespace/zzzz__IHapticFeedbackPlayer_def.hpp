#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHapticFeedbackPlayer)
namespace UnityEngine::XR {
struct XRNode;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IHapticFeedbackPlayer);
// Type: ::IHapticFeedbackPlayer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14410))
// CS Name: ::IHapticFeedbackPlayer*
class CORDL_TYPE IHapticFeedbackPlayer {
public:
  // Declarations
  /// @brief Method PlayHapticFeedback addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method CanPlayHapticPreset addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  // Ctor Parameters [CppParam { name: "", ty: "IHapticFeedbackPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHapticFeedbackPlayer(IHapticFeedbackPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHapticFeedbackPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHapticFeedbackPlayer(IHapticFeedbackPlayer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IHapticFeedbackPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IHapticFeedbackPlayer*, "", "IHapticFeedbackPlayer");
