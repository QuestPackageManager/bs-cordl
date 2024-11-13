#pragma once
// IWYU pragma private; include "System/Xml/XmlImplementation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlImplementation)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNameTable;
}
// Forward declare root types
namespace System::Xml {
class XmlImplementation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlImplementation);
// Type: System.Xml::XmlImplementation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlImplementation*
class CORDL_TYPE XmlImplementation : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  /// @brief Field nameTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Method CreateDocument, addr 0x42dacac, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* CreateDocument();

  static inline ::System::Xml::XmlImplementation* New_ctor();

  static inline ::System::Xml::XmlImplementation* New_ctor(::System::Xml::XmlNameTable* nt);

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  /// @brief Method .ctor, addr 0x42d3bd4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x42d4064, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nt);

  /// @brief Method get_NameTable, addr 0x42dad04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlImplementation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlImplementation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlImplementation(XmlImplementation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlImplementation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlImplementation(XmlImplementation const&) = delete;

  /// @brief Field nameTable, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7272 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlImplementation, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlImplementation, ___nameTable) == 0x10, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlImplementation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlImplementation*, "System.Xml", "XmlImplementation");
