#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10086))
// CS Name: ::UnityEngine::LightingSettings*
class CORDL_TYPE LightingSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method LightingSettingsDontStripMe addr 0x2b6224c size 0x4 virtual false final false
  inline void LightingSettingsDontStripMe();

  // Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightingSettings(LightingSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightingSettings(LightingSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightingSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightingSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LightingSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightingSettings*, "UnityEngine", "LightingSettings");
