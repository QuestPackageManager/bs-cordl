#pragma once
// IWYU pragma private; include "System/Data/NewDiffgramGen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NewDiffgramGen)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataRowVersion;
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
class XmlDocument;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Data {
class NewDiffgramGen;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::NewDiffgramGen);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.NewDiffgramGen
class CORDL_TYPE NewDiffgramGen : public ::System::Object {
public:
  // Declarations
  /// @brief Field _doc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__doc, put = __cordl_internal_set__doc)) ::System::Xml::XmlDocument* _doc;

  /// @brief Field _ds, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ds, put = __cordl_internal_set__ds)) ::System::Data::DataSet* _ds;

  /// @brief Field _dt, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dt, put = __cordl_internal_set__dt)) ::System::Data::DataTable* _dt;

  /// @brief Field _fBefore, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__fBefore, put = __cordl_internal_set__fBefore)) bool _fBefore;

  /// @brief Field _fErrors, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__fErrors, put = __cordl_internal_set__fErrors)) bool _fErrors;

  /// @brief Field _rowsOrder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rowsOrder, put = __cordl_internal_set__rowsOrder)) ::System::Collections::Hashtable* _rowsOrder;

  /// @brief Field _tables, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tables, put = __cordl_internal_set__tables)) ::System::Collections::ArrayList* _tables;

  /// @brief Field _writeHierarchy, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__writeHierarchy, put = __cordl_internal_set__writeHierarchy)) bool _writeHierarchy;

  /// @brief Field _xmlw, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlw, put = __cordl_internal_set__xmlw)) ::System::Xml::XmlWriter* _xmlw;

  /// @brief Method CreateTableHierarchy, addr 0x41b7fd0, size 0x384, virtual false, abstract: false, final false
  inline void CreateTableHierarchy(::System::Data::DataTable* dt);

  /// @brief Method DoAssignments, addr 0x41b7c80, size 0x264, virtual false, abstract: false, final false
  inline void DoAssignments(::System::Collections::ArrayList* tables);

  /// @brief Method EmptyData, addr 0x41b8354, size 0xf4, virtual false, abstract: false, final false
  inline bool EmptyData();

  /// @brief Method GenerateColumn, addr 0x41b9ff8, size 0x9fc, virtual false, abstract: false, final false
  inline void GenerateColumn(::System::Data::DataRow* row, ::System::Data::DataColumn* col, ::System::Data::DataRowVersion version);

  /// @brief Method GenerateRow, addr 0x41b9994, size 0x59c, virtual false, abstract: false, final false
  inline void GenerateRow(::System::Data::DataRow* row);

  /// @brief Method GenerateTable, addr 0x41b93d8, size 0x7c, virtual false, abstract: false, final false
  inline void GenerateTable(::System::Data::DataTable* table);

  /// @brief Method GenerateTableErrors, addr 0x41b9454, size 0x540, virtual false, abstract: false, final false
  inline void GenerateTableErrors(::System::Data::DataTable* table);

  static inline ::System::Data::NewDiffgramGen* New_ctor(::System::Data::DataSet* ds);

  static inline ::System::Data::NewDiffgramGen* New_ctor(::System::Data::DataTable* dt, bool writeHierarchy);

  /// @brief Method QualifiedName, addr 0x41b7b08, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW QualifiedName(::StringW prefix, ::StringW name);

  /// @brief Method Save, addr 0x41b8448, size 0x8, virtual false, abstract: false, final false
  inline void Save(::System::Xml::XmlWriter* xmlw);

  /// @brief Method Save, addr 0x41b8450, size 0x3f0, virtual false, abstract: false, final false
  inline void Save(::System::Xml::XmlWriter* xmlw, ::System::Data::DataTable* table);

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get__doc() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get__doc();

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__ds() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__ds();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__dt() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__dt();

  constexpr bool const& __cordl_internal_get__fBefore() const;

  constexpr bool& __cordl_internal_get__fBefore();

  constexpr bool const& __cordl_internal_get__fErrors() const;

  constexpr bool& __cordl_internal_get__fErrors();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__rowsOrder() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__rowsOrder();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__tables() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__tables();

  constexpr bool const& __cordl_internal_get__writeHierarchy() const;

  constexpr bool& __cordl_internal_get__writeHierarchy();

  constexpr ::System::Xml::XmlWriter* const& __cordl_internal_get__xmlw() const;

  constexpr ::System::Xml::XmlWriter*& __cordl_internal_get__xmlw();

  constexpr void __cordl_internal_set__doc(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set__ds(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__dt(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__fBefore(bool value);

  constexpr void __cordl_internal_set__fErrors(bool value);

  constexpr void __cordl_internal_set__rowsOrder(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__tables(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__writeHierarchy(bool value);

  constexpr void __cordl_internal_set__xmlw(::System::Xml::XmlWriter* value);

  /// @brief Method .ctor, addr 0x41b7b70, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* ds);

  /// @brief Method .ctor, addr 0x41b7ee4, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* dt, bool writeHierarchy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewDiffgramGen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewDiffgramGen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewDiffgramGen(NewDiffgramGen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewDiffgramGen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewDiffgramGen(NewDiffgramGen const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11491 };

  /// @brief Field _doc, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ____doc;

  /// @brief Field _ds, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataSet* ____ds;

  /// @brief Field _dt, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataTable* ____dt;

  /// @brief Field _xmlw, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlWriter* ____xmlw;

  /// @brief Field _fBefore, offset: 0x30, size: 0x1, def value: None
  bool ____fBefore;

  /// @brief Field _fErrors, offset: 0x31, size: 0x1, def value: None
  bool ____fErrors;

  /// @brief Field _rowsOrder, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____rowsOrder;

  /// @brief Field _tables, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____tables;

  /// @brief Field _writeHierarchy, offset: 0x48, size: 0x1, def value: None
  bool ____writeHierarchy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::NewDiffgramGen, ____doc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::NewDiffgramGen, ____ds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::NewDiffgramGen, ____dt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::NewDiffgramGen, ____xmlw) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::NewDiffgramGen, ____fBefore) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::NewDiffgramGen, ____fErrors) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Data::NewDiffgramGen, ____rowsOrder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::NewDiffgramGen, ____tables) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::NewDiffgramGen, ____writeHierarchy) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::NewDiffgramGen, 0x50>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::NewDiffgramGen);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::NewDiffgramGen*, "System.Data", "NewDiffgramGen");
