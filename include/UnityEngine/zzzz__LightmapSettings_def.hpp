#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LightmapSettings)
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
class LightProbes;
}
namespace UnityEngine {
class LightmapData;
}
namespace UnityEngine {
struct LightmapsModeLegacy;
}
namespace UnityEngine {
struct LightmapsMode;
}
// Forward declare root types
namespace UnityEngine {
class LightmapSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LightmapSettings);
// Type: UnityEngine::LightmapSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8944))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8825))
// CS Name: ::UnityEngine::LightmapSettings*
class CORDL_TYPE LightmapSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method get_lightmapsModeLegacy, addr 0x2cb9de4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::LightmapsModeLegacy get_lightmapsModeLegacy();

  /// @brief Method set_lightmapsModeLegacy, addr 0x2cb9dec, size 0x4, virtual false, abstract: false, final false
  static inline void set_lightmapsModeLegacy(::UnityEngine::LightmapsModeLegacy value);

  /// @brief Method get_bakedColorSpace, addr 0x2cb9df0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorSpace get_bakedColorSpace();

  /// @brief Method set_bakedColorSpace, addr 0x2cb9e18, size 0x4, virtual false, abstract: false, final false
  static inline void set_bakedColorSpace(::UnityEngine::ColorSpace value);

  static inline ::UnityEngine::LightmapSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2cb9e1c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightmaps, addr 0x2cb9e74, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::LightmapData*, ::Array<::UnityEngine::LightmapData*>*> get_lightmaps();

  /// @brief Method set_lightmaps, addr 0x2cb9e9c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightmaps(::ArrayW<::UnityEngine::LightmapData*, ::Array<::UnityEngine::LightmapData*>*> value);

  /// @brief Method get_lightmapsMode, addr 0x2cb9ed8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::LightmapsMode get_lightmapsMode();

  /// @brief Method set_lightmapsMode, addr 0x2cb9f00, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightmapsMode(::UnityEngine::LightmapsMode value);

  /// @brief Method get_lightProbes, addr 0x2cb9f3c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::LightProbes> get_lightProbes();

  /// @brief Method set_lightProbes, addr 0x2cb9f64, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightProbes(::UnityEngine::LightProbes* value);

  /// @brief Method Reset, addr 0x2cb9fa0, size 0x28, virtual false, abstract: false, final false
  static inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapSettings(LightmapSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapSettings(LightmapSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LightmapSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LightmapSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightmapSettings*, "UnityEngine", "LightmapSettings");
