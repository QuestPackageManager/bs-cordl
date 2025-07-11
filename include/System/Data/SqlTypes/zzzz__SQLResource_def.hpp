#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SQLResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SQLResource)
// Forward declare root types
namespace System::Data::SqlTypes {
class SQLResource;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::SQLResource);
// Dependencies System.Object
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: System.Data.SqlTypes.SQLResource
class CORDL_TYPE SQLResource : public ::System::Object {
public:
  // Declarations
  /// @brief Method InvalidOpStreamClosed, addr 0x41bdf54, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW InvalidOpStreamClosed(::StringW method);

  /// @brief Method InvalidOpStreamNonReadable, addr 0x41bdfec, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW InvalidOpStreamNonReadable(::StringW method);

  /// @brief Method InvalidOpStreamNonSeekable, addr 0x41be038, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW InvalidOpStreamNonSeekable(::StringW method);

  /// @brief Method InvalidOpStreamNonWritable, addr 0x41bdfa0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW InvalidOpStreamNonWritable(::StringW method);

  /// @brief Method get_ArithOverflowMessage, addr 0x41bdc94, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ArithOverflowMessage();

  /// @brief Method get_CompareDiffCollationMessage, addr 0x41bde14, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_CompareDiffCollationMessage();

  /// @brief Method get_ConcatDiffCollationMessage, addr 0x41bddd4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ConcatDiffCollationMessage();

  /// @brief Method get_ConversionOverflowMessage, addr 0x41bde54, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_ConversionOverflowMessage();

  /// @brief Method get_DateTimeOverflowMessage, addr 0x41bdd94, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_DateTimeOverflowMessage();

  /// @brief Method get_DivideByZeroMessage, addr 0x41bdcd4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_DivideByZeroMessage();

  /// @brief Method get_FormatMessage, addr 0x41bdf14, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_FormatMessage();

  /// @brief Method get_InvalidPrecScaleMessage, addr 0x41bded4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_InvalidPrecScaleMessage();

  /// @brief Method get_NullString, addr 0x41bdc54, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_NullString();

  /// @brief Method get_NullValueMessage, addr 0x41bdd14, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_NullValueMessage();

  /// @brief Method get_TimeZoneSpecifiedMessage, addr 0x41bde94, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_TimeZoneSpecifiedMessage();

  /// @brief Method get_TruncationMessage, addr 0x41bdd54, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_TruncationMessage();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SQLResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SQLResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SQLResource(SQLResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SQLResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SQLResource(SQLResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11495 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SQLResource, 0x10>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SQLResource);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SQLResource*, "System.Data.SqlTypes", "SQLResource");
