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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4056))
// CS Name: ::AutomaticSFXVolumeParamsSO*
class CORDL_TYPE AutomaticSFXVolumeParamsSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _musicVolumeMultiplier, offset 0x18, size 0x4
  __declspec(property(get = __get__musicVolumeMultiplier, put = __set__musicVolumeMultiplier)) float_t _musicVolumeMultiplier;

  /// @brief Field _threshold, offset 0x1c, size 0x4
  __declspec(property(get = __get__threshold, put = __set__threshold)) float_t _threshold;

  /// @brief Field _impact, offset 0x20, size 0x4
  __declspec(property(get = __get__impact, put = __set__impact)) float_t _impact;

  /// @brief Field _attackTime, offset 0x24, size 0x4
  __declspec(property(get = __get__attackTime, put = __set__attackTime)) float_t _attackTime;

  /// @brief Field _releaseTime, offset 0x28, size 0x4
  __declspec(property(get = __get__releaseTime, put = __set__releaseTime)) float_t _releaseTime;

  /// @brief Field _minVolume, offset 0x2c, size 0x4
  __declspec(property(get = __get__minVolume, put = __set__minVolume)) float_t _minVolume;

  /// @brief Field _maxVolume, offset 0x30, size 0x4
  __declspec(property(get = __get__maxVolume, put = __set__maxVolume)) float_t _maxVolume;

  /// @brief Field _volumeSmooth, offset 0x34, size 0x4
  __declspec(property(get = __get__volumeSmooth, put = __set__volumeSmooth)) float_t _volumeSmooth;

  __declspec(property(get = get_musicVolumeMultiplier)) float_t musicVolumeMultiplier;

  __declspec(property(get = get_threshold)) float_t threshold;

  __declspec(property(get = get_impact)) float_t impact;

  __declspec(property(get = get_attackTime)) float_t attackTime;

  __declspec(property(get = get_releaseTime)) float_t releaseTime;

  __declspec(property(get = get_minVolume)) float_t minVolume;

  __declspec(property(get = get_maxVolume)) float_t maxVolume;

  __declspec(property(get = get_volumeSmooth)) float_t volumeSmooth;

  constexpr float_t& __get__musicVolumeMultiplier();

  constexpr float_t const& __get__musicVolumeMultiplier() const;

  constexpr void __set__musicVolumeMultiplier(float_t value);

  constexpr float_t& __get__threshold();

  constexpr float_t const& __get__threshold() const;

  constexpr void __set__threshold(float_t value);

  constexpr float_t& __get__impact();

  constexpr float_t const& __get__impact() const;

  constexpr void __set__impact(float_t value);

  constexpr float_t& __get__attackTime();

  constexpr float_t const& __get__attackTime() const;

  constexpr void __set__attackTime(float_t value);

  constexpr float_t& __get__releaseTime();

  constexpr float_t const& __get__releaseTime() const;

  constexpr void __set__releaseTime(float_t value);

  constexpr float_t& __get__minVolume();

  constexpr float_t const& __get__minVolume() const;

  constexpr void __set__minVolume(float_t value);

  constexpr float_t& __get__maxVolume();

  constexpr float_t const& __get__maxVolume() const;

  constexpr void __set__maxVolume(float_t value);

  constexpr float_t& __get__volumeSmooth();

  constexpr float_t const& __get__volumeSmooth() const;

  constexpr void __set__volumeSmooth(float_t value);

  /// @brief Method get_musicVolumeMultiplier addr 0x222c574 size 0x8 virtual false final false
  inline float_t get_musicVolumeMultiplier();

  /// @brief Method get_threshold addr 0x222c57c size 0x8 virtual false final false
  inline float_t get_threshold();

  /// @brief Method get_impact addr 0x222c584 size 0x8 virtual false final false
  inline float_t get_impact();

  /// @brief Method get_attackTime addr 0x222c58c size 0x8 virtual false final false
  inline float_t get_attackTime();

  /// @brief Method get_releaseTime addr 0x222c594 size 0x8 virtual false final false
  inline float_t get_releaseTime();

  /// @brief Method get_minVolume addr 0x222c59c size 0x8 virtual false final false
  inline float_t get_minVolume();

  /// @brief Method get_maxVolume addr 0x222c5a4 size 0x8 virtual false final false
  inline float_t get_maxVolume();

  /// @brief Method get_volumeSmooth addr 0x222c5ac size 0x8 virtual false final false
  inline float_t get_volumeSmooth();

  static inline ::GlobalNamespace::AutomaticSFXVolumeParamsSO* New_ctor();

  /// @brief Method .ctor addr 0x222c5b4 size 0x20 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolumeParamsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutomaticSFXVolumeParamsSO(AutomaticSFXVolumeParamsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolumeParamsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutomaticSFXVolumeParamsSO(AutomaticSFXVolumeParamsSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutomaticSFXVolumeParamsSO();

public:
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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutomaticSFXVolumeParamsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutomaticSFXVolumeParamsSO*, "", "AutomaticSFXVolumeParamsSO");
