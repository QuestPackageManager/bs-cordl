#pragma once
// IWYU pragma private; include "System/Data/XmlDataTreeWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDataTreeWriter)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class XmlDataTreeWriter;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XmlDataTreeWriter);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XmlDataTreeWriter
class CORDL_TYPE XmlDataTreeWriter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dTables, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dTables, put = __cordl_internal_set__dTables)) ::System::Collections::ArrayList* _dTables;

  /// @brief Field _ds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ds, put = __cordl_internal_set__ds)) ::System::Data::DataSet* _ds;

  /// @brief Field _dt, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dt, put = __cordl_internal_set__dt)) ::System::Data::DataTable* _dt;

  /// @brief Field _fFromTable, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__fFromTable, put = __cordl_internal_set__fFromTable)) bool _fFromTable;

  /// @brief Field _isDiffgram, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__isDiffgram, put = __cordl_internal_set__isDiffgram)) bool _isDiffgram;

  /// @brief Field _rowsOrder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rowsOrder, put = __cordl_internal_set__rowsOrder)) ::System::Collections::Hashtable* _rowsOrder;

  /// @brief Field _topLevelTables, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__topLevelTables, put = __cordl_internal_set__topLevelTables)) ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*>
      _topLevelTables;

  /// @brief Field _writeHierarchy, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__writeHierarchy, put = __cordl_internal_set__writeHierarchy)) bool _writeHierarchy;

  /// @brief Field _xmlw, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlw, put = __cordl_internal_set__xmlw)) ::System::Xml::XmlWriter* _xmlw;

  /// @brief Method CreateTablesHierarchy, addr 0x5ecb70c, size 0x358, virtual false, abstract: false, final false
  inline void CreateTablesHierarchy(::System::Data::DataTable* dt);

  /// @brief Method CreateToplevelTables, addr 0x5ecba64, size 0x2f8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> CreateToplevelTables();

  /// @brief Method GetNestedChildRelations, addr 0x5ece018, size 0x324, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* GetNestedChildRelations(::System::Data::DataRow* row);

  static inline ::System::Data::XmlDataTreeWriter* New_ctor(::System::Data::DataSet* ds);

  static inline ::System::Data::XmlDataTreeWriter* New_ctor(::System::Data::DataTable* dt, bool writeHierarchy);

  /// @brief Method PreserveSpace, addr 0x5ecb67c, size 0x90, virtual false, abstract: false, final false
  static inline bool PreserveSpace(::System::Object* value);

  /// @brief Method RowHasErrors, addr 0x5ecabd8, size 0xb8, virtual false, abstract: false, final false
  static inline bool RowHasErrors(::System::Data::DataRow* row);

  /// @brief Method Save, addr 0x5ecd744, size 0x8d4, virtual false, abstract: false, final false
  inline void Save(::System::Xml::XmlWriter* xw, bool writeSchema);

  /// @brief Method SaveDiffgramData, addr 0x5ec9520, size 0x690, virtual false, abstract: false, final false
  inline void SaveDiffgramData(::System::Xml::XmlWriter* xw, ::System::Collections::Hashtable* rowsOrder);

  /// @brief Method XmlDataRowWriter, addr 0x5ecbd5c, size 0x19e8, virtual false, abstract: false, final false
  inline void XmlDataRowWriter(::System::Data::DataRow* row, ::StringW encodedTableName);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__dTables() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__dTables();

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__ds() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__ds();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__dt() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__dt();

  constexpr bool const& __cordl_internal_get__fFromTable() const;

  constexpr bool& __cordl_internal_get__fFromTable();

  constexpr bool const& __cordl_internal_get__isDiffgram() const;

  constexpr bool& __cordl_internal_get__isDiffgram();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__rowsOrder() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__rowsOrder();

  constexpr ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> const& __cordl_internal_get__topLevelTables() const;

  constexpr ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*>& __cordl_internal_get__topLevelTables();

  constexpr bool const& __cordl_internal_get__writeHierarchy() const;

  constexpr bool& __cordl_internal_get__writeHierarchy();

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get__xmlw() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get__xmlw();

  constexpr void __cordl_internal_set__dTables(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__ds(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__dt(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__fFromTable(bool value);

  constexpr void __cordl_internal_set__isDiffgram(bool value);

  constexpr void __cordl_internal_set__rowsOrder(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__topLevelTables(::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> value);

  constexpr void __cordl_internal_set__writeHierarchy(bool value);

  constexpr void __cordl_internal_set__xmlw(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x5ec9bb0, size 0x318, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* ds);

  /// @brief Method .ctor, addr 0x5ec93d8, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* dt, bool writeHierarchy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDataTreeWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDataTreeWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDataTreeWriter(XmlDataTreeWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDataTreeWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDataTreeWriter(XmlDataTreeWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13854 };

  /// @brief Field _xmlw, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ____xmlw;

  /// @brief Field _ds, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataSet* ____ds;

  /// @brief Field _dt, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataTable* ____dt;

  /// @brief Field _dTables, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____dTables;

  /// @brief Field _topLevelTables, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> ____topLevelTables;

  /// @brief Field _fFromTable, offset: 0x38, size: 0x1, def value: None
  bool ____fFromTable;

  /// @brief Field _isDiffgram, offset: 0x39, size: 0x1, def value: None
  bool ____isDiffgram;

  /// @brief Field _rowsOrder, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____rowsOrder;

  /// @brief Field _writeHierarchy, offset: 0x48, size: 0x1, def value: None
  bool ____writeHierarchy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____xmlw) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____ds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____dt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____dTables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____topLevelTables) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____fFromTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____isDiffgram) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____rowsOrder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataTreeWriter, ____writeHierarchy) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XmlDataTreeWriter, 0x50>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XmlDataTreeWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlDataTreeWriter*, "System.Data", "XmlDataTreeWriter");
