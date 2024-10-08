#pragma once
// IWYU pragma private; include "UnityEngine/LightingSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LightingSettings)
// Forward declare root types
namespace UnityEngine {
class LightingSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LightingSettings);
// Type: UnityEngine::LightingSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::LightingSettings*
class CORDL_TYPE LightingSettings : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_bakedGI, put = set_bakedGI)) bool bakedGI;

  __declspec(property(get = get_realtimeEnvironmentLighting, put = set_realtimeEnvironmentLighting)) bool realtimeEnvironmentLighting;

  __declspec(property(get = get_realtimeGI, put = set_realtimeGI)) bool realtimeGI;

  /// @brief Method Internal_Create, addr 0x47f77f4, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(::UnityEngine::LightingSettings* self);

  /// @brief Method LightingSettingsDontStripMe, addr 0x47f7770, size 0x4, virtual false, abstract: false, final false
  inline void LightingSettingsDontStripMe();

  static inline ::UnityEngine::LightingSettings* New_ctor();

  /// @brief Method .ctor, addr 0x47f7774, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakedGI, addr 0x47f7830, size 0x3c, virtual false, abstract: false, final false
  inline bool get_bakedGI();

  /// @brief Method get_realtimeEnvironmentLighting, addr 0x47f7930, size 0x3c, virtual false, abstract: false, final false
  inline bool get_realtimeEnvironmentLighting();

  /// @brief Method get_realtimeGI, addr 0x47f78b0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_realtimeGI();

  /// @brief Method set_bakedGI, addr 0x47f786c, size 0x44, virtual false, abstract: false, final false
  inline void set_bakedGI(bool value);

  /// @brief Method set_realtimeEnvironmentLighting, addr 0x47f796c, size 0x44, virtual false, abstract: false, final false
  inline void set_realtimeEnvironmentLighting(bool value);

  /// @brief Method set_realtimeGI, addr 0x47f78ec, size 0x44, virtual false, abstract: false, final false
  inline void set_realtimeGI(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightingSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightingSettings(LightingSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightingSettings(LightingSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightingSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LightingSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightingSettings*, "UnityEngine", "LightingSettings");
