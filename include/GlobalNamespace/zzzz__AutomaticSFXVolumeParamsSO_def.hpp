#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AutomaticSFXVolumeParamsSO)
// Forward declare root types
namespace GlobalNamespace {
class AutomaticSFXVolumeParamsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutomaticSFXVolumeParamsSO);
// Type: ::AutomaticSFXVolumeParamsSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AutomaticSFXVolumeParamsSO*
class CORDL_TYPE AutomaticSFXVolumeParamsSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _attackTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__attackTime, put = __cordl_internal_set__attackTime)) float_t _attackTime;

  /// @brief Field _impact, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__impact, put = __cordl_internal_set__impact)) float_t _impact;

  /// @brief Field _maxVolume, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__maxVolume, put = __cordl_internal_set__maxVolume)) float_t _maxVolume;

  /// @brief Field _minVolume, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__minVolume, put = __cordl_internal_set__minVolume)) float_t _minVolume;

  /// @brief Field _musicVolumeMultiplier, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__musicVolumeMultiplier, put = __cordl_internal_set__musicVolumeMultiplier)) float_t _musicVolumeMultiplier;

  /// @brief Field _releaseTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__releaseTime, put = __cordl_internal_set__releaseTime)) float_t _releaseTime;

  /// @brief Field _threshold, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__threshold, put = __cordl_internal_set__threshold)) float_t _threshold;

  /// @brief Field _volumeSmooth, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__volumeSmooth, put = __cordl_internal_set__volumeSmooth)) float_t _volumeSmooth;

  __declspec(property(get = get_attackTime)) float_t attackTime;

  __declspec(property(get = get_impact)) float_t impact;

  __declspec(property(get = get_maxVolume)) float_t maxVolume;

  __declspec(property(get = get_minVolume)) float_t minVolume;

  __declspec(property(get = get_musicVolumeMultiplier)) float_t musicVolumeMultiplier;

  __declspec(property(get = get_releaseTime)) float_t releaseTime;

  __declspec(property(get = get_threshold)) float_t threshold;

  __declspec(property(get = get_volumeSmooth)) float_t volumeSmooth;

  static inline ::GlobalNamespace::AutomaticSFXVolumeParamsSO* New_ctor();

  constexpr float_t const& __cordl_internal_get__attackTime() const;

  constexpr float_t& __cordl_internal_get__attackTime();

  constexpr float_t const& __cordl_internal_get__impact() const;

  constexpr float_t& __cordl_internal_get__impact();

  constexpr float_t const& __cordl_internal_get__maxVolume() const;

  constexpr float_t& __cordl_internal_get__maxVolume();

  constexpr float_t const& __cordl_internal_get__minVolume() const;

  constexpr float_t& __cordl_internal_get__minVolume();

  constexpr float_t const& __cordl_internal_get__musicVolumeMultiplier() const;

  constexpr float_t& __cordl_internal_get__musicVolumeMultiplier();

  constexpr float_t const& __cordl_internal_get__releaseTime() const;

  constexpr float_t& __cordl_internal_get__releaseTime();

  constexpr float_t const& __cordl_internal_get__threshold() const;

  constexpr float_t& __cordl_internal_get__threshold();

  constexpr float_t const& __cordl_internal_get__volumeSmooth() const;

  constexpr float_t& __cordl_internal_get__volumeSmooth();

  constexpr void __cordl_internal_set__attackTime(float_t value);

  constexpr void __cordl_internal_set__impact(float_t value);

  constexpr void __cordl_internal_set__maxVolume(float_t value);

  constexpr void __cordl_internal_set__minVolume(float_t value);

  constexpr void __cordl_internal_set__musicVolumeMultiplier(float_t value);

  constexpr void __cordl_internal_set__releaseTime(float_t value);

  constexpr void __cordl_internal_set__threshold(float_t value);

  constexpr void __cordl_internal_set__volumeSmooth(float_t value);

  /// @brief Method .ctor, addr 0x2606798, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_attackTime, addr 0x2606770, size 0x8, virtual false, abstract: false, final false
  inline float_t get_attackTime();

  /// @brief Method get_impact, addr 0x2606768, size 0x8, virtual false, abstract: false, final false
  inline float_t get_impact();

  /// @brief Method get_maxVolume, addr 0x2606788, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxVolume();

  /// @brief Method get_minVolume, addr 0x2606780, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minVolume();

  /// @brief Method get_musicVolumeMultiplier, addr 0x2606758, size 0x8, virtual false, abstract: false, final false
  inline float_t get_musicVolumeMultiplier();

  /// @brief Method get_releaseTime, addr 0x2606778, size 0x8, virtual false, abstract: false, final false
  inline float_t get_releaseTime();

  /// @brief Method get_threshold, addr 0x2606760, size 0x8, virtual false, abstract: false, final false
  inline float_t get_threshold();

  /// @brief Method get_volumeSmooth, addr 0x2606790, size 0x8, virtual false, abstract: false, final false
  inline float_t get_volumeSmooth();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticSFXVolumeParamsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolumeParamsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutomaticSFXVolumeParamsSO(AutomaticSFXVolumeParamsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolumeParamsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutomaticSFXVolumeParamsSO(AutomaticSFXVolumeParamsSO const&) = delete;

  /// @brief Field _musicVolumeMultiplier, offset: 0x18, size: 0x4, def value: None
  float_t ____musicVolumeMultiplier;

  /// @brief Field _threshold, offset: 0x1c, size: 0x4, def value: None
  float_t ____threshold;

  /// @brief Field _impact, offset: 0x20, size: 0x4, def value: None
  float_t ____impact;

  /// @brief Field _attackTime, offset: 0x24, size: 0x4, def value: None
  float_t ____attackTime;

  /// @brief Field _releaseTime, offset: 0x28, size: 0x4, def value: None
  float_t ____releaseTime;

  /// @brief Field _minVolume, offset: 0x2c, size: 0x4, def value: None
  float_t ____minVolume;

  /// @brief Field _maxVolume, offset: 0x30, size: 0x4, def value: None
  float_t ____maxVolume;

  /// @brief Field _volumeSmooth, offset: 0x34, size: 0x4, def value: None
  float_t ____volumeSmooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutomaticSFXVolumeParamsSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolumeParamsSO, ____musicVolumeMultiplier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolumeParamsSO, ____threshold) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolumeParamsSO, ____impact) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolumeParamsSO, ____attackTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolumeParamsSO, ____releaseTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolumeParamsSO, ____minVolume) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolumeParamsSO, ____maxVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticSFXVolumeParamsSO, ____volumeSmooth) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutomaticSFXVolumeParamsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutomaticSFXVolumeParamsSO*, "", "AutomaticSFXVolumeParamsSO");
