#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomFogEnvironmentParams)
// Forward declare root types
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogEnvironmentParams);
// Type: ::BloomFogEnvironmentParams
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14450))
// CS Name: ::BloomFogEnvironmentParams*
class CORDL_TYPE BloomFogEnvironmentParams : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field attenuation, offset 0x18, size 0x4
  __declspec(property(get = __get_attenuation, put = __set_attenuation)) float_t attenuation;

  /// @brief Field offset, offset 0x1c, size 0x4
  __declspec(property(get = __get_offset, put = __set_offset)) float_t offset;

  /// @brief Field heightFogStartY, offset 0x20, size 0x4
  __declspec(property(get = __get_heightFogStartY, put = __set_heightFogStartY)) float_t heightFogStartY;

  /// @brief Field heightFogHeight, offset 0x24, size 0x4
  __declspec(property(get = __get_heightFogHeight, put = __set_heightFogHeight)) float_t heightFogHeight;

  /// @brief Field autoExposureLimit, offset 0x28, size 0x4
  __declspec(property(get = __get_autoExposureLimit, put = __set_autoExposureLimit)) float_t autoExposureLimit;

  /// @brief Field legacyAutoExposure, offset 0x2c, size 0x1
  __declspec(property(get = __get_legacyAutoExposure, put = __set_legacyAutoExposure)) bool legacyAutoExposure;

  /// @brief Field noteSpawnIntensity, offset 0x30, size 0x4
  __declspec(property(get = __get_noteSpawnIntensity, put = __set_noteSpawnIntensity)) float_t noteSpawnIntensity;

  constexpr float_t& __get_attenuation();

  constexpr float_t const& __get_attenuation() const;

  constexpr void __set_attenuation(float_t value);

  constexpr float_t& __get_offset();

  constexpr float_t const& __get_offset() const;

  constexpr void __set_offset(float_t value);

  constexpr float_t& __get_heightFogStartY();

  constexpr float_t const& __get_heightFogStartY() const;

  constexpr void __set_heightFogStartY(float_t value);

  constexpr float_t& __get_heightFogHeight();

  constexpr float_t const& __get_heightFogHeight() const;

  constexpr void __set_heightFogHeight(float_t value);

  constexpr float_t& __get_autoExposureLimit();

  constexpr float_t const& __get_autoExposureLimit() const;

  constexpr void __set_autoExposureLimit(float_t value);

  constexpr bool& __get_legacyAutoExposure();

  constexpr bool const& __get_legacyAutoExposure() const;

  constexpr void __set_legacyAutoExposure(bool value);

  constexpr float_t& __get_noteSpawnIntensity();

  constexpr float_t const& __get_noteSpawnIntensity() const;

  constexpr void __set_noteSpawnIntensity(float_t value);

  static inline ::GlobalNamespace::BloomFogEnvironmentParams* New_ctor();

  /// @brief Method .ctor addr 0x2102164 size 0x30 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironmentParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogEnvironmentParams(BloomFogEnvironmentParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironmentParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogEnvironmentParams(BloomFogEnvironmentParams const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogEnvironmentParams();

public:
  /// @brief Field attenuation, offset: 0x18, size: 0x4, def value: None
  float_t ___attenuation;

  /// @brief Field offset, offset: 0x1c, size: 0x4, def value: None
  float_t ___offset;

  /// @brief Field heightFogStartY, offset: 0x20, size: 0x4, def value: None
  float_t ___heightFogStartY;

  /// @brief Field heightFogHeight, offset: 0x24, size: 0x4, def value: None
  float_t ___heightFogHeight;

  /// @brief Field autoExposureLimit, offset: 0x28, size: 0x4, def value: None
  float_t ___autoExposureLimit;

  /// @brief Field legacyAutoExposure, offset: 0x2c, size: 0x1, def value: None
  bool ___legacyAutoExposure;

  /// @brief Field noteSpawnIntensity, offset: 0x30, size: 0x4, def value: None
  float_t ___noteSpawnIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogEnvironmentParams, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironmentParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironmentParams*, "", "BloomFogEnvironmentParams");
