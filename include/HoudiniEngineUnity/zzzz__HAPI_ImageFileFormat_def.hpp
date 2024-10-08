#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ImageFileFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ImageFileFormat)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageFileFormat;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ImageFileFormat);
// Type: HoudiniEngineUnity::HAPI_ImageFileFormat
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_ImageFileFormat
struct CORDL_TYPE HAPI_ImageFileFormat {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ImageFileFormat();

  // Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "descriptionSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "defaultExtensionSH", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ImageFileFormat(int32_t nameSH, int32_t descriptionSH, int32_t defaultExtensionSH) noexcept;

  /// @brief Field nameSH, offset: 0x0, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field descriptionSH, offset: 0x4, size: 0x4, def value: None
  int32_t descriptionSH;

  /// @brief Field defaultExtensionSH, offset: 0x8, size: 0x4, def value: None
  int32_t defaultExtensionSH;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ImageFileFormat, 0xc>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageFileFormat, nameSH) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageFileFormat, descriptionSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageFileFormat, defaultExtensionSH) == 0x8, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImageFileFormat, "HoudiniEngineUnity", "HAPI_ImageFileFormat");
