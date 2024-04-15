#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticPresetSO)
namespace Oculus::Haptics {
class HapticClip;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Write type traits
MARK_REF_PTR_T(::Libraries::HM::HMLib::VR::HapticPresetSO);
// Type: Libraries.HM.HMLib.VR::HapticPresetSO
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 82, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Libraries::HM::HMLib::VR {
// Is value type: false
// CS Name: ::Libraries.HM.HMLib.VR::HapticPresetSO*
class CORDL_TYPE HapticPresetSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _continuous, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__continuous, put = __cordl_internal_set__continuous)) bool _continuous;

  /// @brief Field _duration, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _frequency, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__frequency, put = __cordl_internal_set__frequency)) float_t _frequency;

  /// @brief Field _hasOculusHapticsClip, offset 0x50, size 0x2
  __declspec(property(get = __cordl_internal_get__hasOculusHapticsClip, put = __cordl_internal_set__hasOculusHapticsClip))::System::Nullable_1<bool> _hasOculusHapticsClip;

  /// @brief Field _hasPS5HapticsClip, offset 0x30, size 0x2
  __declspec(property(get = __cordl_internal_get__hasPS5HapticsClip, put = __cordl_internal_set__hasPS5HapticsClip))::System::Nullable_1<bool> _hasPS5HapticsClip;

  /// @brief Field _oculusHapticsClip, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusHapticsClip, put = __cordl_internal_set__oculusHapticsClip))::UnityW<::Oculus::Haptics::HapticClip> _oculusHapticsClip;

  /// @brief Field _overrideForTouchController, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideForTouchController, put = __cordl_internal_set__overrideForTouchController)) bool _overrideForTouchController;

  /// @brief Field _priority, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__priority, put = __cordl_internal_set__priority)) uint32_t _priority;

  /// @brief Field _ps5HapticsClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5HapticsClip, put = __cordl_internal_set__ps5HapticsClip))::UnityW<::UnityEngine::AudioClip> _ps5HapticsClip;

  /// @brief Field _strength, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__strength, put = __cordl_internal_set__strength)) float_t _strength;

  /// @brief Field _touchControllerOverrideHapticsClip, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__touchControllerOverrideHapticsClip,
                      put = __cordl_internal_set__touchControllerOverrideHapticsClip))::UnityW<::Oculus::Haptics::HapticClip> _touchControllerOverrideHapticsClip;

  /// @brief Field _useAdvancedHapticsOnSupportedPlatforms, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get__useAdvancedHapticsOnSupportedPlatforms,
                      put = __cordl_internal_set__useAdvancedHapticsOnSupportedPlatforms)) bool _useAdvancedHapticsOnSupportedPlatforms;

  __declspec(property(get = get_hasOculusHapticsClip)) bool hasOculusHapticsClip;

  __declspec(property(get = get_hasPS5HapticsClip)) bool hasPS5HapticsClip;

  static inline ::Libraries::HM::HMLib::VR::HapticPresetSO* New_ctor();

  constexpr bool const& __cordl_internal_get__continuous() const;

  constexpr bool& __cordl_internal_get__continuous();

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr float_t const& __cordl_internal_get__frequency() const;

  constexpr float_t& __cordl_internal_get__frequency();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__hasOculusHapticsClip() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__hasOculusHapticsClip();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__hasPS5HapticsClip() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__hasPS5HapticsClip();

  constexpr ::UnityW<::Oculus::Haptics::HapticClip> const& __cordl_internal_get__oculusHapticsClip() const;

  constexpr ::UnityW<::Oculus::Haptics::HapticClip>& __cordl_internal_get__oculusHapticsClip();

  constexpr bool const& __cordl_internal_get__overrideForTouchController() const;

  constexpr bool& __cordl_internal_get__overrideForTouchController();

  constexpr uint32_t const& __cordl_internal_get__priority() const;

  constexpr uint32_t& __cordl_internal_get__priority();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__ps5HapticsClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__ps5HapticsClip();

  constexpr float_t const& __cordl_internal_get__strength() const;

  constexpr float_t& __cordl_internal_get__strength();

  constexpr ::UnityW<::Oculus::Haptics::HapticClip> const& __cordl_internal_get__touchControllerOverrideHapticsClip() const;

  constexpr ::UnityW<::Oculus::Haptics::HapticClip>& __cordl_internal_get__touchControllerOverrideHapticsClip();

  constexpr bool const& __cordl_internal_get__useAdvancedHapticsOnSupportedPlatforms() const;

  constexpr bool& __cordl_internal_get__useAdvancedHapticsOnSupportedPlatforms();

  constexpr void __cordl_internal_set__continuous(bool value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__frequency(float_t value);

  constexpr void __cordl_internal_set__hasOculusHapticsClip(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__hasPS5HapticsClip(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__oculusHapticsClip(::UnityW<::Oculus::Haptics::HapticClip> value);

  constexpr void __cordl_internal_set__overrideForTouchController(bool value);

  constexpr void __cordl_internal_set__priority(uint32_t value);

  constexpr void __cordl_internal_set__ps5HapticsClip(::UnityW<::UnityEngine::AudioClip> value);

  constexpr void __cordl_internal_set__strength(float_t value);

  constexpr void __cordl_internal_set__touchControllerOverrideHapticsClip(::UnityW<::Oculus::Haptics::HapticClip> value);

  constexpr void __cordl_internal_set__useAdvancedHapticsOnSupportedPlatforms(bool value);

  /// @brief Method .ctor, addr 0x23ec05c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hasOculusHapticsClip, addr 0x23e203c, size 0xe4, virtual false, abstract: false, final false
  inline bool get_hasOculusHapticsClip();

  /// @brief Method get_hasPS5HapticsClip, addr 0x23e4e88, size 0xe4, virtual false, abstract: false, final false
  inline bool get_hasPS5HapticsClip();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticPresetSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HapticPresetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticPresetSO(HapticPresetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticPresetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticPresetSO(HapticPresetSO const&) = delete;

  /// @brief Field _duration, offset: 0x18, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _strength, offset: 0x1c, size: 0x4, def value: None
  float_t ____strength;

  /// @brief Field _frequency, offset: 0x20, size: 0x4, def value: None
  float_t ____frequency;

  /// @brief Field _continuous, offset: 0x24, size: 0x1, def value: None
  bool ____continuous;

  /// @brief Field _useAdvancedHapticsOnSupportedPlatforms, offset: 0x25, size: 0x1, def value: None
  bool ____useAdvancedHapticsOnSupportedPlatforms;

  /// @brief Field _ps5HapticsClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ____ps5HapticsClip;

  /// @brief Field _hasPS5HapticsClip, offset: 0x30, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____hasPS5HapticsClip;

  /// @brief Field _oculusHapticsClip, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Oculus::Haptics::HapticClip> ____oculusHapticsClip;

  /// @brief Field _priority, offset: 0x40, size: 0x4, def value: None
  uint32_t ____priority;

  /// @brief Field _overrideForTouchController, offset: 0x44, size: 0x1, def value: None
  bool ____overrideForTouchController;

  /// @brief Field _touchControllerOverrideHapticsClip, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::Oculus::Haptics::HapticClip> ____touchControllerOverrideHapticsClip;

  /// @brief Field _hasOculusHapticsClip, offset: 0x50, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____hasOculusHapticsClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Libraries::HM::HMLib::VR::HapticPresetSO, 0x58>, "Size mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____strength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____frequency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____continuous) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____useAdvancedHapticsOnSupportedPlatforms) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____ps5HapticsClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____hasPS5HapticsClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____oculusHapticsClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____priority) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____overrideForTouchController) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____touchControllerOverrideHapticsClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____hasOculusHapticsClip) == 0x50, "Offset mismatch!");

} // namespace Libraries::HM::HMLib::VR
NEED_NO_BOX(::Libraries::HM::HMLib::VR::HapticPresetSO);
DEFINE_IL2CPP_ARG_TYPE(::Libraries::HM::HMLib::VR::HapticPresetSO*, "Libraries.HM.HMLib.VR", "HapticPresetSO");
