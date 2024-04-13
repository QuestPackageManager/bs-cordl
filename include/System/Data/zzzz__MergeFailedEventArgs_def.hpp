#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MergeFailedEventArgs)
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace System::Data {
class MergeFailedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::MergeFailedEventArgs);
// Type: System.Data::MergeFailedEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::MergeFailedEventArgs*
class CORDL_TYPE MergeFailedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Conflict))::StringW Conflict;

  /// @brief Field <Conflict>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Conflict_k__BackingField, put = __cordl_internal_set__Conflict_k__BackingField))::StringW _Conflict_k__BackingField;

  /// @brief Field <Table>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Table_k__BackingField, put = __cordl_internal_set__Table_k__BackingField))::System::Data::DataTable* _Table_k__BackingField;

  static inline ::System::Data::MergeFailedEventArgs* New_ctor(::System::Data::DataTable* table, ::StringW conflict);

  constexpr ::StringW const& __cordl_internal_get__Conflict_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Conflict_k__BackingField();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__Table_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__Table_k__BackingField() const;

  constexpr void __cordl_internal_set__Conflict_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Table_k__BackingField(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x2bd9c3c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::StringW conflict);

  /// @brief Method get_Conflict, addr 0x2bd9cac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Conflict();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeFailedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MergeFailedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MergeFailedEventArgs(MergeFailedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MergeFailedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MergeFailedEventArgs(MergeFailedEventArgs const&) = delete;

  /// @brief Field <Table>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____Table_k__BackingField;

  /// @brief Field <Conflict>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Conflict_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::MergeFailedEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::MergeFailedEventArgs, ____Table_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::MergeFailedEventArgs, ____Conflict_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::MergeFailedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::MergeFailedEventArgs*, "System.Data", "MergeFailedEventArgs");
