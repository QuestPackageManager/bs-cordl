#pragma once
// IWYU pragma private; include "System/Data/DataRowBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowBuilder)
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace System::Data {
class DataRowBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRowBuilder);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataRowBuilder
class CORDL_TYPE DataRowBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _record, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__record, put = __cordl_internal_set__record)) int32_t _record;

  /// @brief Field _table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  static inline ::System::Data::DataRowBuilder* New_ctor(::System::Data::DataTable* table, int32_t record);

  constexpr int32_t const& __cordl_internal_get__record() const;

  constexpr int32_t& __cordl_internal_get__record();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr void __cordl_internal_set__record(int32_t value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x4166b58, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, int32_t record);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRowBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRowBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRowBuilder(DataRowBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRowBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRowBuilder(DataRowBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11389 };

  /// @brief Field _table, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _record, offset: 0x18, size: 0x4, def value: None
  int32_t ____record;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataRowBuilder, ____table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowBuilder, ____record) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataRowBuilder, 0x20>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRowBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowBuilder*, "System.Data", "DataRowBuilder");
