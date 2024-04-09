#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(DataRowChangeEventArgs)
namespace System::Data {
struct DataRowAction;
}
namespace System::Data {
class DataRow;
}
// Forward declare root types
namespace System::Data {
class DataRowChangeEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRowChangeEventArgs);
// Type: System.Data::DataRowChangeEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataRowChangeEventArgs*
class CORDL_TYPE DataRowChangeEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <Action>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Action_k__BackingField, put = __cordl_internal_set__Action_k__BackingField))::System::Data::DataRowAction _Action_k__BackingField;

  /// @brief Field <Row>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Row_k__BackingField, put = __cordl_internal_set__Row_k__BackingField))::System::Data::DataRow* _Row_k__BackingField;

  static inline ::System::Data::DataRowChangeEventArgs* New_ctor(::System::Data::DataRow* row, ::System::Data::DataRowAction action);

  constexpr ::System::Data::DataRowAction const& __cordl_internal_get__Action_k__BackingField() const;

  constexpr ::System::Data::DataRowAction& __cordl_internal_get__Action_k__BackingField();

  constexpr ::System::Data::DataRow*& __cordl_internal_get__Row_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRow*> const& __cordl_internal_get__Row_k__BackingField() const;

  constexpr void __cordl_internal_set__Action_k__BackingField(::System::Data::DataRowAction value);

  constexpr void __cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value);

  /// @brief Method .ctor, addr 0x2ba9c1c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataRow* row, ::System::Data::DataRowAction action);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRowChangeEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRowChangeEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRowChangeEventArgs(DataRowChangeEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRowChangeEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRowChangeEventArgs(DataRowChangeEventArgs const&) = delete;

  /// @brief Field <Row>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataRow* ____Row_k__BackingField;

  /// @brief Field <Action>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::Data::DataRowAction ____Action_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRowChangeEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataRowChangeEventArgs, ____Row_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowChangeEventArgs, ____Action_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRowChangeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowChangeEventArgs*, "System.Data", "DataRowChangeEventArgs");
