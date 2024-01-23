#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HapticFeedbackManager)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class IHapticFeedbackPlayer;
}
namespace GlobalNamespace {
class RumbleHapticFeedbackPlayer;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class HapticFeedbackManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HapticFeedbackManager);
// Type: ::HapticFeedbackManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14409))
// CS Name: ::HapticFeedbackManager*
class CORDL_TYPE HapticFeedbackManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _controllersRumbleEnabled, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__controllersRumbleEnabled, put = __cordl_internal_set__controllersRumbleEnabled))::UnityW<::GlobalNamespace::BoolSO> _controllersRumbleEnabled;

  /// @brief Field _continuousRumblePreset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__continuousRumblePreset,
                      put = __cordl_internal_set__continuousRumblePreset))::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _continuousRumblePreset;

  /// @brief Field _rumbleHapticFeedbackPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rumbleHapticFeedbackPlayer,
                      put = __cordl_internal_set__rumbleHapticFeedbackPlayer))::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> _rumbleHapticFeedbackPlayer;

  /// @brief Field _advancedHapticFeedbackPlayer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__advancedHapticFeedbackPlayer,
                      put = __cordl_internal_set__advancedHapticFeedbackPlayer))::GlobalNamespace::IHapticFeedbackPlayer* _advancedHapticFeedbackPlayer;

  __declspec(property(get = get_continuousRumblePreset))::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> continuousRumblePreset;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__controllersRumbleEnabled();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__controllersRumbleEnabled() const;

  constexpr void __cordl_internal_set__controllersRumbleEnabled(::UnityW<::GlobalNamespace::BoolSO> value);

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__continuousRumblePreset();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__continuousRumblePreset() const;

  constexpr void __cordl_internal_set__continuousRumblePreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer>& __cordl_internal_get__rumbleHapticFeedbackPlayer();

  constexpr ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> const& __cordl_internal_get__rumbleHapticFeedbackPlayer() const;

  constexpr void __cordl_internal_set__rumbleHapticFeedbackPlayer(::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> value);

  constexpr ::GlobalNamespace::IHapticFeedbackPlayer*& __cordl_internal_get__advancedHapticFeedbackPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IHapticFeedbackPlayer*> const& __cordl_internal_get__advancedHapticFeedbackPlayer() const;

  constexpr void __cordl_internal_set__advancedHapticFeedbackPlayer(::GlobalNamespace::IHapticFeedbackPlayer* value);

  /// @brief Method get_continuousRumblePreset, addr 0x20f6dc0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> get_continuousRumblePreset();

  /// @brief Method PlayHapticFeedback, addr 0x20f6dc8, size 0x17c, virtual false, abstract: false, final false
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  static inline ::GlobalNamespace::HapticFeedbackManager* New_ctor();

  /// @brief Method .ctor, addr 0x20f700c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticFeedbackManager(HapticFeedbackManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticFeedbackManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticFeedbackManager(HapticFeedbackManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticFeedbackManager();

public:
  /// @brief Field _controllersRumbleEnabled, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____controllersRumbleEnabled;

  /// @brief Field _continuousRumblePreset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____continuousRumblePreset;

  /// @brief Field _rumbleHapticFeedbackPlayer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> ____rumbleHapticFeedbackPlayer;

  /// @brief Field _advancedHapticFeedbackPlayer, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IHapticFeedbackPlayer* ____advancedHapticFeedbackPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticFeedbackManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackManager, ____controllersRumbleEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackManager, ____continuousRumblePreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackManager, ____rumbleHapticFeedbackPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackManager, ____advancedHapticFeedbackPlayer) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HapticFeedbackManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticFeedbackManager*, "", "HapticFeedbackManager");
