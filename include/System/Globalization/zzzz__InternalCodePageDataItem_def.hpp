#pragma once
// IWYU pragma private; include "System/Globalization/InternalCodePageDataItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalCodePageDataItem)
// Forward declare root types
namespace System::Globalization {
struct InternalCodePageDataItem;
}
// Write type traits
MARK_VAL_T(::System::Globalization::InternalCodePageDataItem);
// Type: System.Globalization::InternalCodePageDataItem
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::InternalCodePageDataItem
struct CORDL_TYPE InternalCodePageDataItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalCodePageDataItem();

  // Ctor Parameters [CppParam { name: "codePage", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "uiFamilyCodePage", ty: "uint16_t", modifiers: "", def_value: None }, CppParam {
  // name: "flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Names", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr InternalCodePageDataItem(uint16_t codePage, uint16_t uiFamilyCodePage, uint32_t flags, ::StringW Names) noexcept;

  /// @brief Field codePage, offset: 0x0, size: 0x2, def value: None
  uint16_t codePage;

  /// @brief Field uiFamilyCodePage, offset: 0x2, size: 0x2, def value: None
  uint16_t uiFamilyCodePage;

  /// @brief Field flags, offset: 0x4, size: 0x4, def value: None
  uint32_t flags;

  /// @brief Field Names, offset: 0x8, size: 0x8, def value: None
  ::StringW Names;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3723 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::InternalCodePageDataItem, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::InternalCodePageDataItem, codePage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::InternalCodePageDataItem, uiFamilyCodePage) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::InternalCodePageDataItem, flags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::InternalCodePageDataItem, Names) == 0x8, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::InternalCodePageDataItem, "System.Globalization", "InternalCodePageDataItem");
