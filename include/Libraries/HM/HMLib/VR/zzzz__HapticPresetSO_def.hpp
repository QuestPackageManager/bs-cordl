#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HapticPresetSO)
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Libraries::HM::HMLib::VR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14442))
// CS Name: ::Libraries.HM.HMLib.VR::HapticPresetSO*
class CORDL_TYPE HapticPresetSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _duration, offset 0x18, size 0x4
  __declspec(property(get = __get__duration, put = __set__duration)) float_t _duration;

  /// @brief Field _strength, offset 0x1c, size 0x4
  __declspec(property(get = __get__strength, put = __set__strength)) float_t _strength;

  /// @brief Field _frequency, offset 0x20, size 0x4
  __declspec(property(get = __get__frequency, put = __set__frequency)) float_t _frequency;

  /// @brief Field _continuous, offset 0x24, size 0x1
  __declspec(property(get = __get__continuous, put = __set__continuous)) bool _continuous;

  /// @brief Field _useAdvancedHapticsOnSupportedPlatforms, offset 0x25, size 0x1
  __declspec(property(get = __get__useAdvancedHapticsOnSupportedPlatforms, put = __set__useAdvancedHapticsOnSupportedPlatforms)) bool _useAdvancedHapticsOnSupportedPlatforms;

  /// @brief Field _ps5HapticsClip, offset 0x28, size 0x8
  __declspec(property(get = __get__ps5HapticsClip, put = __set__ps5HapticsClip))::UnityEngine::AudioClip* _ps5HapticsClip;

  constexpr float_t& __get__duration();

  constexpr float_t const& __get__duration() const;

  constexpr void __set__duration(float_t value);

  constexpr float_t& __get__strength();

  constexpr float_t const& __get__strength() const;

  constexpr void __set__strength(float_t value);

  constexpr float_t& __get__frequency();

  constexpr float_t const& __get__frequency() const;

  constexpr void __set__frequency(float_t value);

  constexpr bool& __get__continuous();

  constexpr bool const& __get__continuous() const;

  constexpr void __set__continuous(bool value);

  constexpr bool& __get__useAdvancedHapticsOnSupportedPlatforms();

  constexpr bool const& __get__useAdvancedHapticsOnSupportedPlatforms() const;

  constexpr void __set__useAdvancedHapticsOnSupportedPlatforms(bool value);

  constexpr ::UnityEngine::AudioClip*& __get__ps5HapticsClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__ps5HapticsClip() const;

  constexpr void __set__ps5HapticsClip(::UnityEngine::AudioClip* value);

  /// @brief Method CopyFrom, addr 0x2100fd0, size 0x3c, virtual false, abstract: false, final false
  inline void CopyFrom(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);

  static inline ::Libraries::HM::HMLib::VR::HapticPresetSO* New_ctor();

  /// @brief Method .ctor, addr 0x210100c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HapticPresetSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HapticPresetSO(HapticPresetSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HapticPresetSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HapticPresetSO(HapticPresetSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticPresetSO();

public:
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
  ::UnityEngine::AudioClip* ____ps5HapticsClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Libraries::HM::HMLib::VR::HapticPresetSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____strength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____frequency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____continuous) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____useAdvancedHapticsOnSupportedPlatforms) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Libraries::HM::HMLib::VR::HapticPresetSO, ____ps5HapticsClip) == 0x28, "Offset mismatch!");

} // namespace Libraries::HM::HMLib::VR
NEED_NO_BOX(::Libraries::HM::HMLib::VR::HapticPresetSO);
DEFINE_IL2CPP_ARG_TYPE(::Libraries::HM::HMLib::VR::HapticPresetSO*, "Libraries.HM.HMLib.VR", "HapticPresetSO");
