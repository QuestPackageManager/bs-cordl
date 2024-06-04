#pragma once
// IWYU pragma private; include "System/Data/Merger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__MissingSchemaAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Merger)
namespace System::Data {
struct DataKey;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
struct MissingSchemaAction;
}
namespace System::Data {
class PropertyCollection;
}
// Forward declare root types
namespace System::Data {
class Merger;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Merger);
// Type: System.Data::Merger
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::Merger*
class CORDL_TYPE Merger : public ::System::Object {
public:
  // Declarations
  /// @brief Field _IgnoreNSforTableLookup, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__IgnoreNSforTableLookup, put = __cordl_internal_set__IgnoreNSforTableLookup)) bool _IgnoreNSforTableLookup;

  /// @brief Field _dataSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet))::System::Data::DataSet* _dataSet;

  /// @brief Field _dataTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dataTable, put = __cordl_internal_set__dataTable))::System::Data::DataTable* _dataTable;

  /// @brief Field _isStandAlonetable, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isStandAlonetable, put = __cordl_internal_set__isStandAlonetable)) bool _isStandAlonetable;

  /// @brief Field _missingSchemaAction, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__missingSchemaAction, put = __cordl_internal_set__missingSchemaAction))::System::Data::MissingSchemaAction _missingSchemaAction;

  /// @brief Field _preserveChanges, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__preserveChanges, put = __cordl_internal_set__preserveChanges)) bool _preserveChanges;

  /// @brief Method GetSrcKey, addr 0x2cf8110, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Data::DataKey GetSrcKey(::System::Data::DataTable* src, ::System::Data::DataTable* dst);

  /// @brief Method MergeConstraints, addr 0x2cf6fe0, size 0x70, virtual false, abstract: false, final false
  inline void MergeConstraints(::System::Data::DataSet* source);

  /// @brief Method MergeConstraints, addr 0x2cf8968, size 0x2b0, virtual false, abstract: false, final false
  inline void MergeConstraints(::System::Data::DataTable* table);

  /// @brief Method MergeDataSet, addr 0x2cf5e90, size 0x10c8, virtual false, abstract: false, final false
  inline void MergeDataSet(::System::Data::DataSet* source);

  /// @brief Method MergeExtendedProperties, addr 0x2cf77ec, size 0x254, virtual false, abstract: false, final false
  inline void MergeExtendedProperties(::System::Data::PropertyCollection* src, ::System::Data::PropertyCollection* dst);

  /// @brief Method MergeRelation, addr 0x2cf7050, size 0x79c, virtual false, abstract: false, final false
  inline void MergeRelation(::System::Data::DataRelation* relation);

  /// @brief Method MergeSchema, addr 0x2cf825c, size 0x70c, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* MergeSchema(::System::Data::DataTable* table);

  /// @brief Method MergeTable, addr 0x2cf7a40, size 0x22c, virtual false, abstract: false, final false
  inline void MergeTable(::System::Data::DataTable* src);

  /// @brief Method MergeTable, addr 0x2cf7c6c, size 0x4a4, virtual false, abstract: false, final false
  inline void MergeTable(::System::Data::DataTable* src, ::System::Data::DataTable* dst);

  /// @brief Method MergeTableData, addr 0x2cf6f58, size 0x88, virtual false, abstract: false, final false
  inline void MergeTableData(::System::Data::DataTable* src);

  static inline ::System::Data::Merger* New_ctor(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction);

  static inline ::System::Data::Merger* New_ctor(::System::Data::DataTable* dataTable, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction);

  constexpr bool const& __cordl_internal_get__IgnoreNSforTableLookup() const;

  constexpr bool& __cordl_internal_get__IgnoreNSforTableLookup();

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& __cordl_internal_get__dataSet() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__dataTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__dataTable() const;

  constexpr bool const& __cordl_internal_get__isStandAlonetable() const;

  constexpr bool& __cordl_internal_get__isStandAlonetable();

  constexpr ::System::Data::MissingSchemaAction const& __cordl_internal_get__missingSchemaAction() const;

  constexpr ::System::Data::MissingSchemaAction& __cordl_internal_get__missingSchemaAction();

  constexpr bool const& __cordl_internal_get__preserveChanges() const;

  constexpr bool& __cordl_internal_get__preserveChanges();

  constexpr void __cordl_internal_set__IgnoreNSforTableLookup(bool value);

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__dataTable(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__isStandAlonetable(bool value);

  constexpr void __cordl_internal_set__missingSchemaAction(::System::Data::MissingSchemaAction value);

  constexpr void __cordl_internal_set__preserveChanges(bool value);

  /// @brief Method .ctor, addr 0x2cf5de8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction);

  /// @brief Method .ctor, addr 0x2cf5e38, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* dataTable, bool preserveChanges, ::System::Data::MissingSchemaAction missingSchemaAction);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Merger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Merger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Merger(Merger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Merger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Merger(Merger const&) = delete;

  /// @brief Field _dataSet, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _dataTable, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataTable* ____dataTable;

  /// @brief Field _preserveChanges, offset: 0x20, size: 0x1, def value: None
  bool ____preserveChanges;

  /// @brief Field _missingSchemaAction, offset: 0x24, size: 0x4, def value: None
  ::System::Data::MissingSchemaAction ____missingSchemaAction;

  /// @brief Field _isStandAlonetable, offset: 0x28, size: 0x1, def value: None
  bool ____isStandAlonetable;

  /// @brief Field _IgnoreNSforTableLookup, offset: 0x29, size: 0x1, def value: None
  bool ____IgnoreNSforTableLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Merger, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::Merger, ____dataSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::Merger, ____dataTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::Merger, ____preserveChanges) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::Merger, ____missingSchemaAction) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Data::Merger, ____isStandAlonetable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::Merger, ____IgnoreNSforTableLookup) == 0x29, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::Merger);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Merger*, "System.Data", "Merger");
