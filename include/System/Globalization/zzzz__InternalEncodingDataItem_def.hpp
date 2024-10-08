#pragma once
// IWYU pragma private; include "System/Globalization/InternalEncodingDataItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalEncodingDataItem)
// Forward declare root types
namespace System::Globalization {
struct InternalEncodingDataItem;
}
// Write type traits
MARK_VAL_T(::System::Globalization::InternalEncodingDataItem);
// Type: System.Globalization::InternalEncodingDataItem
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 26, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::InternalEncodingDataItem
struct CORDL_TYPE InternalEncodingDataItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalEncodingDataItem();

  // Ctor Parameters [CppParam { name: "webName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr InternalEncodingDataItem(::StringW webName, uint16_t codePage) noexcept;

  /// @brief Field webName, offset: 0x0, size: 0x8, def value: None
  ::StringW webName;

  /// @brief Field codePage, offset: 0x8, size: 0x2, def value: None
  uint16_t codePage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3722 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::InternalEncodingDataItem, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::InternalEncodingDataItem, webName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::InternalEncodingDataItem, codePage) == 0x8, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::InternalEncodingDataItem, "System.Globalization", "InternalEncodingDataItem");
