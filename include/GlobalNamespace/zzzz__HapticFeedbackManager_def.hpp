#pragma once
// IWYU pragma private; include "GlobalNamespace/HapticFeedbackManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HapticFeedbackManager)
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HapticFeedbackManager
class CORDL_TYPE HapticFeedbackManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _advancedHapticFeedbackPlayer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__advancedHapticFeedbackPlayer,
                      put = __cordl_internal_set__advancedHapticFeedbackPlayer)) ::GlobalNamespace::IHapticFeedbackPlayer* _advancedHapticFeedbackPlayer;

  /// @brief Field _rumbleHapticFeedbackPlayer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rumbleHapticFeedbackPlayer, put = __cordl_internal_set__rumbleHapticFeedbackPlayer)) ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer>
      _rumbleHapticFeedbackPlayer;

  /// @brief Field hapticFeedbackEnabled, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_hapticFeedbackEnabled, put = __cordl_internal_set_hapticFeedbackEnabled)) bool hapticFeedbackEnabled;

  static inline ::GlobalNamespace::HapticFeedbackManager* New_ctor();

  /// @brief Method PlayHapticFeedback, addr 0x39d44bc, size 0x16c, virtual false, abstract: false, final false
  inline void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  constexpr ::GlobalNamespace::IHapticFeedbackPlayer* const& __cordl_internal_get__advancedHapticFeedbackPlayer() const;

  constexpr ::GlobalNamespace::IHapticFeedbackPlayer*& __cordl_internal_get__advancedHapticFeedbackPlayer();

  constexpr ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> const& __cordl_internal_get__rumbleHapticFeedbackPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer>& __cordl_internal_get__rumbleHapticFeedbackPlayer();

  constexpr bool const& __cordl_internal_get_hapticFeedbackEnabled() const;

  constexpr bool& __cordl_internal_get_hapticFeedbackEnabled();

  constexpr void __cordl_internal_set__advancedHapticFeedbackPlayer(::GlobalNamespace::IHapticFeedbackPlayer* value);

  constexpr void __cordl_internal_set__rumbleHapticFeedbackPlayer(::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> value);

  constexpr void __cordl_internal_set_hapticFeedbackEnabled(bool value);

  /// @brief Method .ctor, addr 0x39d46f0, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16463 };

  /// @brief Field _rumbleHapticFeedbackPlayer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RumbleHapticFeedbackPlayer> ____rumbleHapticFeedbackPlayer;

  /// @brief Field _advancedHapticFeedbackPlayer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IHapticFeedbackPlayer* ____advancedHapticFeedbackPlayer;

  /// @brief Field hapticFeedbackEnabled, offset: 0x30, size: 0x1, def value: None
  bool ___hapticFeedbackEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HapticFeedbackManager, ____rumbleHapticFeedbackPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackManager, ____advancedHapticFeedbackPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HapticFeedbackManager, ___hapticFeedbackEnabled) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticFeedbackManager, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HapticFeedbackManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticFeedbackManager*, "", "HapticFeedbackManager");
