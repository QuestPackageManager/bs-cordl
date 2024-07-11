#pragma once
// IWYU pragma private; include "System/Xml/DomNameTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DomNameTable)
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlName;
}
// Forward declare root types
namespace System::Xml {
class DomNameTable;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::DomNameTable);
// Type: System.Xml::DomNameTable
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::DomNameTable*
class CORDL_TYPE DomNameTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_entries, put = __cordl_internal_set_entries))::ArrayW<::System::Xml::XmlName*, ::Array<::System::Xml::XmlName*>*> entries;

  /// @brief Field mask, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_mask, put = __cordl_internal_set_mask)) int32_t mask;

  /// @brief Field nameTable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field ownerDocument, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ownerDocument, put = __cordl_internal_set_ownerDocument))::System::Xml::XmlDocument* ownerDocument;

  /// @brief Method AddName, addr 0x2ebd12c, size 0x264, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* AddName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method GetName, addr 0x2ebcfd0, size 0x15c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* GetName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method Grow, addr 0x2ebd390, size 0x124, virtual false, abstract: false, final false
  inline void Grow();

  static inline ::System::Xml::DomNameTable* New_ctor(::System::Xml::XmlDocument* document);

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::ArrayW<::System::Xml::XmlName*, ::Array<::System::Xml::XmlName*>*> const& __cordl_internal_get_entries() const;

  constexpr ::ArrayW<::System::Xml::XmlName*, ::Array<::System::Xml::XmlName*>*>& __cordl_internal_get_entries();

  constexpr int32_t const& __cordl_internal_get_mask() const;

  constexpr int32_t& __cordl_internal_get_mask();

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_ownerDocument();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& __cordl_internal_get_ownerDocument() const;

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_entries(::ArrayW<::System::Xml::XmlName*, ::Array<::System::Xml::XmlName*>*> value);

  constexpr void __cordl_internal_set_mask(int32_t value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_ownerDocument(::System::Xml::XmlDocument* value);

  /// @brief Method .ctor, addr 0x2ebcf30, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* document);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DomNameTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DomNameTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DomNameTable(DomNameTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DomNameTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DomNameTable(DomNameTable const&) = delete;

  /// @brief Field entries, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlName*, ::Array<::System::Xml::XmlName*>*> ___entries;

  /// @brief Field count, offset: 0x18, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field mask, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mask;

  /// @brief Field ownerDocument, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___ownerDocument;

  /// @brief Field nameTable, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::DomNameTable, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::DomNameTable, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DomNameTable, ___count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DomNameTable, ___mask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DomNameTable, ___ownerDocument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::DomNameTable, ___nameTable) == 0x28, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::DomNameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::DomNameTable*, "System.Xml", "DomNameTable");
