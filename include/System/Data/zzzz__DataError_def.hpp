#pragma once
// IWYU pragma private; include "System/Data/DataError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataError)
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataError_ColumnError;
}
// Forward declare root types
namespace System::Data {
class DataError;
}
namespace System::Data {
struct DataError_ColumnError;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataError);
MARK_VAL_T(::System::Data::DataError_ColumnError);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.DataError/ColumnError
struct CORDL_TYPE DataError_ColumnError {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataError_ColumnError();

  // Ctor Parameters [CppParam { name: "_column", ty: "::System::Data::DataColumn*", modifiers: "", def_value: None }, CppParam { name: "_error", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr DataError_ColumnError(::System::Data::DataColumn* _column, ::StringW _error) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11380 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _column, offset: 0x0, size: 0x8, def value: None
  ::System::Data::DataColumn* _column;

  /// @brief Field _error, offset: 0x8, size: 0x8, def value: None
  ::StringW _error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataError_ColumnError, _column) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataError_ColumnError, _error) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataError_ColumnError, 0x10>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataError
class CORDL_TYPE DataError : public ::System::Object {
public:
  // Declarations
  using ColumnError = ::System::Data::DataError_ColumnError;

  __declspec(property(get = get_HasErrors)) bool HasErrors;

  __declspec(property(get = get_Text, put = set_Text)) ::StringW Text;

  /// @brief Field _count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _errorList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__errorList, put = __cordl_internal_set__errorList)) ::ArrayW<::System::Data::DataError_ColumnError, ::Array<::System::Data::DataError_ColumnError>*>
      _errorList;

  /// @brief Field _rowError, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rowError, put = __cordl_internal_set__rowError)) ::StringW _rowError;

  /// @brief Method Clear, addr 0x416a128, size 0xa8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x4169ea0, size 0xac, virtual false, abstract: false, final false
  inline void Clear(::System::Data::DataColumn* column);

  /// @brief Method GetColumnError, addr 0x416a08c, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW GetColumnError(::System::Data::DataColumn* column);

  /// @brief Method GetColumnsInError, addr 0x416a1d0, size 0xe8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> GetColumnsInError();

  /// @brief Method IndexOf, addr 0x4169f4c, size 0x140, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Data::DataColumn* column);

  static inline ::System::Data::DataError* New_ctor();

  static inline ::System::Data::DataError* New_ctor(::StringW rowError);

  /// @brief Method SetColumnError, addr 0x4169dc0, size 0xe0, virtual false, abstract: false, final false
  inline void SetColumnError(::System::Data::DataColumn* column, ::StringW error);

  /// @brief Method SetText, addr 0x4169cd4, size 0x58, virtual false, abstract: false, final false
  inline void SetText(::StringW errorText);

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::ArrayW<::System::Data::DataError_ColumnError, ::Array<::System::Data::DataError_ColumnError>*> const& __cordl_internal_get__errorList() const;

  constexpr ::ArrayW<::System::Data::DataError_ColumnError, ::Array<::System::Data::DataError_ColumnError>*>& __cordl_internal_get__errorList();

  constexpr ::StringW const& __cordl_internal_get__rowError() const;

  constexpr ::StringW& __cordl_internal_get__rowError();

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__errorList(::ArrayW<::System::Data::DataError_ColumnError, ::Array<::System::Data::DataError_ColumnError>*> value);

  constexpr void __cordl_internal_set__rowError(::StringW value);

  /// @brief Method .ctor, addr 0x4169be0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4169c38, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::StringW rowError);

  /// @brief Method get_HasErrors, addr 0x4169d8c, size 0x34, virtual false, abstract: false, final false
  inline bool get_HasErrors();

  /// @brief Method get_Text, addr 0x4169d2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Text();

  /// @brief Method set_Text, addr 0x4169d34, size 0x58, virtual false, abstract: false, final false
  inline void set_Text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataError();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataError", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataError(DataError&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataError", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataError(DataError const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11381 };

  /// @brief Field _rowError, offset: 0x10, size: 0x8, def value: None
  ::StringW ____rowError;

  /// @brief Field _count, offset: 0x18, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _errorList, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataError_ColumnError, ::Array<::System::Data::DataError_ColumnError>*> ____errorList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataError, ____rowError) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataError, ____count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataError, ____errorList) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataError, 0x28>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataError);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataError*, "System.Data", "DataError");
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataError_ColumnError, "System.Data", "DataError/ColumnError");
