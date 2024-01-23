#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyAdvancedHapticsPlayer)
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
class EmptyAdvancedHapticsPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EmptyAdvancedHapticsPlayer);
// Type: ::EmptyAdvancedHapticsPlayer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14420))
// CS Name: ::EmptyAdvancedHapticsPlayer*
class CORDL_TYPE EmptyAdvancedHapticsPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
  constexpr ::GlobalNamespace::IHapticFeedbackPlayer* i___GlobalNamespace__IHapticFeedbackPlayer() noexcept;

  /// @brief Method PlayHapticFeedback, addr 0x20f91cc, size 0x4, virtual true, abstract: false, final true
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  /// @brief Method CanPlayHapticPreset, addr 0x20f91d0, size 0x8, virtual true, abstract: false, final true
  inline bool CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  static inline ::GlobalNamespace::EmptyAdvancedHapticsPlayer* New_ctor();

  /// @brief Method .ctor, addr 0x20f91d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyAdvancedHapticsPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyAdvancedHapticsPlayer(EmptyAdvancedHapticsPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyAdvancedHapticsPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyAdvancedHapticsPlayer(EmptyAdvancedHapticsPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyAdvancedHapticsPlayer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmptyAdvancedHapticsPlayer, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmptyAdvancedHapticsPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyAdvancedHapticsPlayer*, "", "EmptyAdvancedHapticsPlayer");
