#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomFogEnvironmentParams.hpp"
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
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomFogEnvironmentParams
class CORDL_TYPE BloomFogEnvironmentParams : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field attenuation, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_attenuation, put = __cordl_internal_set_attenuation)) float_t attenuation;

  /// @brief Field autoExposureLimit, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_autoExposureLimit, put = __cordl_internal_set_autoExposureLimit)) float_t autoExposureLimit;

  /// @brief Field heightFogHeight, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_heightFogHeight, put = __cordl_internal_set_heightFogHeight)) float_t heightFogHeight;

  /// @brief Field heightFogStartY, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_heightFogStartY, put = __cordl_internal_set_heightFogStartY)) float_t heightFogStartY;

  /// @brief Field legacyAutoExposure, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_legacyAutoExposure, put = __cordl_internal_set_legacyAutoExposure)) bool legacyAutoExposure;

  /// @brief Field noteSpawnIntensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_noteSpawnIntensity, put = __cordl_internal_set_noteSpawnIntensity)) float_t noteSpawnIntensity;

  /// @brief Field offset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) float_t offset;

  static inline ::GlobalNamespace::BloomFogEnvironmentParams* New_ctor();

  constexpr float_t const& __cordl_internal_get_attenuation() const;

  constexpr float_t& __cordl_internal_get_attenuation();

  constexpr float_t const& __cordl_internal_get_autoExposureLimit() const;

  constexpr float_t& __cordl_internal_get_autoExposureLimit();

  constexpr float_t const& __cordl_internal_get_heightFogHeight() const;

  constexpr float_t& __cordl_internal_get_heightFogHeight();

  constexpr float_t const& __cordl_internal_get_heightFogStartY() const;

  constexpr float_t& __cordl_internal_get_heightFogStartY();

  constexpr bool const& __cordl_internal_get_legacyAutoExposure() const;

  constexpr bool& __cordl_internal_get_legacyAutoExposure();

  constexpr float_t const& __cordl_internal_get_noteSpawnIntensity() const;

  constexpr float_t& __cordl_internal_get_noteSpawnIntensity();

  constexpr float_t const& __cordl_internal_get_offset() const;

  constexpr float_t& __cordl_internal_get_offset();

  constexpr void __cordl_internal_set_attenuation(float_t value);

  constexpr void __cordl_internal_set_autoExposureLimit(float_t value);

  constexpr void __cordl_internal_set_heightFogHeight(float_t value);

  constexpr void __cordl_internal_set_heightFogStartY(float_t value);

  constexpr void __cordl_internal_set_legacyAutoExposure(bool value);

  constexpr void __cordl_internal_set_noteSpawnIntensity(float_t value);

  constexpr void __cordl_internal_set_offset(float_t value);

  /// @brief Method .ctor, addr 0x56ac3ac, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFogEnvironmentParams();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironmentParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFogEnvironmentParams(BloomFogEnvironmentParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFogEnvironmentParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFogEnvironmentParams(BloomFogEnvironmentParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19637 };

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
static_assert(offsetof(::GlobalNamespace::BloomFogEnvironmentParams, ___attenuation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironmentParams, ___offset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironmentParams, ___heightFogStartY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironmentParams, ___heightFogHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironmentParams, ___autoExposureLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironmentParams, ___legacyAutoExposure) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomFogEnvironmentParams, ___noteSpawnIntensity) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogEnvironmentParams, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironmentParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironmentParams*, "", "BloomFogEnvironmentParams");
