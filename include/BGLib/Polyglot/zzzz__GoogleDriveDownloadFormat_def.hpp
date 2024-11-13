#pragma once
// IWYU pragma private; include "BGLib/Polyglot/GoogleDriveDownloadFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GoogleDriveDownloadFormat)
// Forward declare root types
namespace BGLib::Polyglot {
struct GoogleDriveDownloadFormat;
}
// Write type traits
MARK_VAL_T(::BGLib::Polyglot::GoogleDriveDownloadFormat);
// Type: BGLib.Polyglot::GoogleDriveDownloadFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: true
// CS Name: ::BGLib.Polyglot::GoogleDriveDownloadFormat
struct CORDL_TYPE GoogleDriveDownloadFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GoogleDriveDownloadFormat_Unwrapped
  enum struct __GoogleDriveDownloadFormat_Unwrapped : int32_t {
    __E_CSV = static_cast<int32_t>(0x0),
    __E_TSV = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GoogleDriveDownloadFormat_Unwrapped() const noexcept {
    return static_cast<__GoogleDriveDownloadFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GoogleDriveDownloadFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GoogleDriveDownloadFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CSV value: static_cast<int32_t>(0x0)
  static ::BGLib::Polyglot::GoogleDriveDownloadFormat const CSV;

  /// @brief Field TSV value: static_cast<int32_t>(0x1)
  static ::BGLib::Polyglot::GoogleDriveDownloadFormat const TSV;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17988 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::GoogleDriveDownloadFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::GoogleDriveDownloadFormat, value__) == 0x0, "Offset mismatch!");

} // namespace BGLib::Polyglot
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::GoogleDriveDownloadFormat, "BGLib.Polyglot", "GoogleDriveDownloadFormat");
