#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/SpriteAssetImportFormats.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteAssetImportFormats)
// Forward declare root types
namespace TMPro::SpriteAssetUtilities {
struct SpriteAssetImportFormats;
}
// Write type traits
MARK_VAL_T(::TMPro::SpriteAssetUtilities::SpriteAssetImportFormats);
// Type: TMPro.SpriteAssetUtilities::SpriteAssetImportFormats
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// CS Name: ::TMPro.SpriteAssetUtilities::SpriteAssetImportFormats
struct CORDL_TYPE SpriteAssetImportFormats {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SpriteAssetImportFormats_Unwrapped
  enum struct __SpriteAssetImportFormats_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TexturePackerJsonArray = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SpriteAssetImportFormats_Unwrapped() const noexcept {
    return static_cast<__SpriteAssetImportFormats_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAssetImportFormats();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpriteAssetImportFormats(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::TMPro::SpriteAssetUtilities::SpriteAssetImportFormats const None;

  /// @brief Field TexturePackerJsonArray value: static_cast<int32_t>(0x1)
  static ::TMPro::SpriteAssetUtilities::SpriteAssetImportFormats const TexturePackerJsonArray;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14536 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::SpriteAssetUtilities::SpriteAssetImportFormats, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::SpriteAssetUtilities::SpriteAssetImportFormats, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro::SpriteAssetUtilities
DEFINE_IL2CPP_ARG_TYPE(::TMPro::SpriteAssetUtilities::SpriteAssetImportFormats, "TMPro.SpriteAssetUtilities", "SpriteAssetImportFormats");
