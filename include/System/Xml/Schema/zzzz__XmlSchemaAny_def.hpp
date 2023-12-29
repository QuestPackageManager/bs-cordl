#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAny)
namespace System::Xml::Schema {
struct XmlSchemaContentProcessing;
}
namespace System::Xml::Schema {
class NamespaceList;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAny;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAny);
// Type: System.Xml.Schema::XmlSchemaAny
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11662)), TypeDefinitionIndex(TypeDefinitionIndex(11649))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11643))
// CS Name: ::System.Xml.Schema::XmlSchemaAny*
class CORDL_TYPE XmlSchemaAny : public ::System::Xml::Schema::XmlSchemaParticle {
public:
  // Declarations
  /// @brief Field ns, offset 0x38, size 0x8
  __declspec(property(get = __get_ns, put = __set_ns))::StringW ns;

  /// @brief Field processContents, offset 0x40, size 0x4
  __declspec(property(get = __get_processContents, put = __set_processContents))::System::Xml::Schema::XmlSchemaContentProcessing processContents;

  /// @brief Field namespaceList, offset 0x48, size 0x8
  __declspec(property(get = __get_namespaceList, put = __set_namespaceList))::System::Xml::Schema::NamespaceList* namespaceList;

  __declspec(property(put = set_ProcessContents))::System::Xml::Schema::XmlSchemaContentProcessing ProcessContents;

  __declspec(property(get = get_NamespaceList))::System::Xml::Schema::NamespaceList* NamespaceList;

  constexpr ::StringW& __get_ns();

  constexpr ::StringW const& __get_ns() const;

  constexpr void __set_ns(::StringW value);

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& __get_processContents();

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& __get_processContents() const;

  constexpr void __set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  constexpr ::System::Xml::Schema::NamespaceList*& __get_namespaceList();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::NamespaceList*> const& __get_namespaceList() const;

  constexpr void __set_namespaceList(::System::Xml::Schema::NamespaceList* value);

  /// @brief Method set_ProcessContents addr 0x27490b0 size 0x8 virtual false final false
  inline void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  /// @brief Method get_NamespaceList addr 0x27490b8 size 0x8 virtual false final false
  inline ::System::Xml::Schema::NamespaceList* get_NamespaceList();

  /// @brief Method BuildNamespaceList addr 0x27490c0 size 0x90 virtual false final false
  inline void BuildNamespaceList(::StringW targetNamespace);

  static inline ::System::Xml::Schema::XmlSchemaAny* New_ctor();

  /// @brief Method .ctor addr 0x2749150 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAny", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAny(XmlSchemaAny&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAny", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAny(XmlSchemaAny const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAny();

public:
  /// @brief Field ns, offset: 0x38, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field processContents, offset: 0x40, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentProcessing ___processContents;

  /// @brief Field namespaceList, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::NamespaceList* ___namespaceList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAny, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAny, ___ns) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAny, ___processContents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAny, ___namespaceList) == 0x48, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAny);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAny*, "System.Xml.Schema", "XmlSchemaAny");
