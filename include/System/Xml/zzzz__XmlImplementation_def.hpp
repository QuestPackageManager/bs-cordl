#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlImplementation)
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace System::Xml {
class XmlImplementation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlImplementation);
// Type: System.Xml::XmlImplementation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11512))
// CS Name: ::System.Xml::XmlImplementation*
class CORDL_TYPE XmlImplementation : public ::System::Object {
public:
  // Declarations
  /// @brief Field nameTable, offset 0x10, size 0x8
  __declspec(property(get = __get_nameTable, put = __set_nameTable))::System::Xml::XmlNameTable* nameTable;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  constexpr ::System::Xml::XmlNameTable*& __get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __get_nameTable() const;

  constexpr void __set_nameTable(::System::Xml::XmlNameTable* value);

  static inline ::System::Xml::XmlImplementation* New_ctor();

  /// @brief Method .ctor, addr 0x288a230, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::XmlImplementation* New_ctor(::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x288a308, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nt);

  /// @brief Method CreateDocument, addr 0x288a330, size 0x64, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* CreateDocument();

  /// @brief Method get_NameTable, addr 0x288a394, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  // Ctor Parameters [CppParam { name: "", ty: "XmlImplementation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlImplementation(XmlImplementation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlImplementation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlImplementation(XmlImplementation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlImplementation();

public:
  /// @brief Field nameTable, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlImplementation, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlImplementation, ___nameTable) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlImplementation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlImplementation*, "System.Xml", "XmlImplementation");
