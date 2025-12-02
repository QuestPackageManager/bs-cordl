#pragma once
// IWYU pragma private; include "System/Data/XMLDiffLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XMLDiffLoader)
namespace System::Collections {
class ArrayList;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Data {
class XMLDiffLoader;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XMLDiffLoader);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XMLDiffLoader
class CORDL_TYPE XMLDiffLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dataSet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet)) ::System::Data::DataSet* _dataSet;

  /// @brief Field _dataTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataTable, put = __cordl_internal_set__dataTable)) ::System::Data::DataTable* _dataTable;

  /// @brief Field _tables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tables, put = __cordl_internal_set__tables)) ::System::Collections::ArrayList* _tables;

  /// @brief Method CreateTablesHierarchy, addr 0x5e3a650, size 0x358, virtual false, abstract: false, final false
  inline void CreateTablesHierarchy(::System::Data::DataTable* dt);

  /// @brief Method GetTable, addr 0x5e3c174, size 0x1cc, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* GetTable(::StringW tableName, ::StringW ns);

  /// @brief Method LoadDiffGram, addr 0x5e39e28, size 0x18c, virtual false, abstract: false, final false
  inline void LoadDiffGram(::System::Data::DataSet* ds, ::System::Xml::XmlReader* dataTextReader);

  /// @brief Method LoadDiffGram, addr 0x5e3a9a8, size 0x1e8, virtual false, abstract: false, final false
  inline void LoadDiffGram(::System::Data::DataTable* dt, ::System::Xml::XmlReader* dataTextReader);

  static inline ::System::Data::XMLDiffLoader* New_ctor();

  /// @brief Method ProcessDiffs, addr 0x5e39fb4, size 0x2e8, virtual false, abstract: false, final false
  inline void ProcessDiffs(::System::Data::DataSet* ds, ::System::Xml::XmlReader* ssync);

  /// @brief Method ProcessDiffs, addr 0x5e3ab90, size 0x2dc, virtual false, abstract: false, final false
  inline void ProcessDiffs(::System::Collections::ArrayList* tableList, ::System::Xml::XmlReader* ssync);

  /// @brief Method ProcessErrors, addr 0x5e3a29c, size 0x3b4, virtual false, abstract: false, final false
  inline void ProcessErrors(::System::Data::DataSet* ds, ::System::Xml::XmlReader* ssync);

  /// @brief Method ProcessErrors, addr 0x5e3ae6c, size 0x4c4, virtual false, abstract: false, final false
  inline void ProcessErrors(::System::Collections::ArrayList* dt, ::System::Xml::XmlReader* ssync);

  /// @brief Method ReadOldRowData, addr 0x5e3b390, size 0xde4, virtual false, abstract: false, final false
  inline int32_t ReadOldRowData(::System::Data::DataSet* ds, ::ByRef<::System::Data::DataTable*> table, ::ByRef<int32_t> pos, ::System::Xml::XmlReader* row);

  /// @brief Method SkipWhitespaces, addr 0x5e3b330, size 0x60, virtual false, abstract: false, final false
  inline void SkipWhitespaces(::System::Xml::XmlReader* reader);

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__dataSet() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__dataTable() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__dataTable();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__tables() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__tables();

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__dataTable(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__tables(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x5e3c340, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XMLDiffLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XMLDiffLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XMLDiffLoader(XMLDiffLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XMLDiffLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XMLDiffLoader(XMLDiffLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13834 };

  /// @brief Field _tables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____tables;

  /// @brief Field _dataSet, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _dataTable, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataTable* ____dataTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XMLDiffLoader, ____tables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XMLDiffLoader, ____dataSet) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::XMLDiffLoader, ____dataTable) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XMLDiffLoader, 0x28>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XMLDiffLoader);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XMLDiffLoader*, "System.Data", "XMLDiffLoader");
