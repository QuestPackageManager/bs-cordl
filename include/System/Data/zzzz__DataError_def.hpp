#pragma once
// IWYU pragma private; include "System/Data/DataError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataError)
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct __DataError__ColumnError;
}
// Forward declare root types
namespace System::Data {
class DataError;
}
namespace System::Data {
struct __DataError__ColumnError;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataError);
MARK_VAL_T(::System::Data::__DataError__ColumnError);
// Type: ::ColumnError
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::DataError::ColumnError
struct CORDL_TYPE __DataError__ColumnError {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DataError__ColumnError();

  // Ctor Parameters [CppParam { name: "_column", ty: "::System::Data::DataColumn*", modifiers: "", def_value: None }, CppParam { name: "_error", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __DataError__ColumnError(::System::Data::DataColumn* _column, ::StringW _error) noexcept;

  /// @brief Field _column, offset: 0x0, size: 0x8, def value: None
  ::System::Data::DataColumn* _column;

  /// @brief Field _error, offset: 0x8, size: 0x8, def value: None
  ::StringW _error;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__DataError__ColumnError, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Data::__DataError__ColumnError, _column) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::__DataError__ColumnError, _error) == 0x8, "Offset mismatch!");

} // namespace System::Data
// Type: System.Data::DataError
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataError*
class CORDL_TYPE DataError : public ::System::Object {
public:
  // Declarations
  using ColumnError = ::System::Data::__DataError__ColumnError;

  __declspec(property(get = get_HasErrors)) bool HasErrors;

  __declspec(property(get = get_Text, put = set_Text))::StringW Text;

  /// @brief Field _count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _errorList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__errorList,
                      put = __cordl_internal_set__errorList))::ArrayW<::System::Data::__DataError__ColumnError, ::Array<::System::Data::__DataError__ColumnError>*> _errorList;

  /// @brief Field _rowError, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rowError, put = __cordl_internal_set__rowError))::StringW _rowError;

  /// @brief Method Clear, addr 0x2c822e0, size 0xa8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x2c82050, size 0xac, virtual false, abstract: false, final false
  inline void Clear(::System::Data::DataColumn* column);

  /// @brief Method GetColumnError, addr 0x2c82244, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW GetColumnError(::System::Data::DataColumn* column);

  /// @brief Method GetColumnsInError, addr 0x2c82388, size 0xe8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> GetColumnsInError();

  /// @brief Method IndexOf, addr 0x2c820fc, size 0x148, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Data::DataColumn* column);

  static inline ::System::Data::DataError* New_ctor();

  static inline ::System::Data::DataError* New_ctor(::StringW rowError);

  /// @brief Method SetColumnError, addr 0x2c81f70, size 0xe0, virtual false, abstract: false, final false
  inline void SetColumnError(::System::Data::DataColumn* column, ::StringW error);

  /// @brief Method SetText, addr 0x2c81e84, size 0x58, virtual false, abstract: false, final false
  inline void SetText(::StringW errorText);

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::ArrayW<::System::Data::__DataError__ColumnError, ::Array<::System::Data::__DataError__ColumnError>*> const& __cordl_internal_get__errorList() const;

  constexpr ::ArrayW<::System::Data::__DataError__ColumnError, ::Array<::System::Data::__DataError__ColumnError>*>& __cordl_internal_get__errorList();

  constexpr ::StringW const& __cordl_internal_get__rowError() const;

  constexpr ::StringW& __cordl_internal_get__rowError();

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__errorList(::ArrayW<::System::Data::__DataError__ColumnError, ::Array<::System::Data::__DataError__ColumnError>*> value);

  constexpr void __cordl_internal_set__rowError(::StringW value);

  /// @brief Method .ctor, addr 0x2c81d90, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2c81de8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::StringW rowError);

  /// @brief Method get_HasErrors, addr 0x2c81f3c, size 0x34, virtual false, abstract: false, final false
  inline bool get_HasErrors();

  /// @brief Method get_Text, addr 0x2c81edc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Text();

  /// @brief Method set_Text, addr 0x2c81ee4, size 0x58, virtual false, abstract: false, final false
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

  /// @brief Field _rowError, offset: 0x10, size: 0x8, def value: None
  ::StringW ____rowError;

  /// @brief Field _count, offset: 0x18, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _errorList, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Data::__DataError__ColumnError, ::Array<::System::Data::__DataError__ColumnError>*> ____errorList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataError, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataError, ____rowError) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataError, ____count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataError, ____errorList) == 0x20, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataError);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataError*, "System.Data", "DataError");
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__DataError__ColumnError, "System.Data", "DataError/ColumnError");
