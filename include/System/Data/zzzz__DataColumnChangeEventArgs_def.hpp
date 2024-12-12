#pragma once
// IWYU pragma private; include "System/Data/DataColumnChangeEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(DataColumnChangeEventArgs)
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataRow;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataColumnChangeEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataColumnChangeEventArgs);
// Dependencies System.EventArgs
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataColumnChangeEventArgs
class CORDL_TYPE DataColumnChangeEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_ProposedValue, put = set_ProposedValue)) ::System::Object* ProposedValue;

  /// @brief Field <ProposedValue>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ProposedValue_k__BackingField, put = __cordl_internal_set__ProposedValue_k__BackingField)) ::System::Object* _ProposedValue_k__BackingField;

  /// @brief Field <Row>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Row_k__BackingField, put = __cordl_internal_set__Row_k__BackingField)) ::System::Data::DataRow* _Row_k__BackingField;

  /// @brief Field _column, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__column, put = __cordl_internal_set__column)) ::System::Data::DataColumn* _column;

  /// @brief Method InitializeColumnChangeEvent, addr 0x4157db0, size 0xc, virtual false, abstract: false, final false
  inline void InitializeColumnChangeEvent(::System::Data::DataColumn* column, ::System::Object* value);

  static inline ::System::Data::DataColumnChangeEventArgs* New_ctor(::System::Data::DataRow* row);

  static inline ::System::Data::DataColumnChangeEventArgs* New_ctor(::System::Data::DataRow* row, ::System::Data::DataColumn* column, ::System::Object* value);

  constexpr ::System::Object* const& __cordl_internal_get__ProposedValue_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__ProposedValue_k__BackingField();

  constexpr ::System::Data::DataRow* const& __cordl_internal_get__Row_k__BackingField() const;

  constexpr ::System::Data::DataRow*& __cordl_internal_get__Row_k__BackingField();

  constexpr ::System::Data::DataColumn* const& __cordl_internal_get__column() const;

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__column();

  constexpr void __cordl_internal_set__ProposedValue_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value);

  constexpr void __cordl_internal_set__column(::System::Data::DataColumn* value);

  /// @brief Method .ctor, addr 0x4157cb4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataRow* row);

  /// @brief Method .ctor, addr 0x4157d20, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataRow* row, ::System::Data::DataColumn* column, ::System::Object* value);

  /// @brief Method get_ProposedValue, addr 0x4157da0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_ProposedValue();

  /// @brief Method set_ProposedValue, addr 0x4157da8, size 0x8, virtual false, abstract: false, final false
  inline void set_ProposedValue(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataColumnChangeEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataColumnChangeEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataColumnChangeEventArgs(DataColumnChangeEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataColumnChangeEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataColumnChangeEventArgs(DataColumnChangeEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11371 };

  /// @brief Field _column, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataColumn* ____column;

  /// @brief Field <Row>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataRow* ____Row_k__BackingField;

  /// @brief Field <ProposedValue>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____ProposedValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataColumnChangeEventArgs, ____column) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnChangeEventArgs, ____Row_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnChangeEventArgs, ____ProposedValue_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataColumnChangeEventArgs, 0x28>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataColumnChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataColumnChangeEventArgs*, "System.Data", "DataColumnChangeEventArgs");
