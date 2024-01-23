#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DtdValidator)
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class __DtdValidator__NamespaceManager;
}
namespace System::Xml {
class IDtdParserAdapter;
}
// Forward declare root types
namespace System::Xml::Schema {
class DtdValidator;
}
namespace System::Xml::Schema {
class __DtdValidator__NamespaceManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DtdValidator);
MARK_REF_PTR_T(::System::Xml::Schema::__DtdValidator__NamespaceManager);
// Type: ::NamespaceManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11570))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11684))
// CS Name: ::DtdValidator::NamespaceManager*
class CORDL_TYPE __DtdValidator__NamespaceManager : public ::System::Xml::XmlNamespaceManager {
public:
  // Declarations
  /// @brief Method LookupNamespace, addr 0x28c092c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  static inline ::System::Xml::Schema::__DtdValidator__NamespaceManager* New_ctor();

  /// @brief Method .ctor, addr 0x28c0924, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__DtdValidator__NamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtdValidator__NamespaceManager(__DtdValidator__NamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtdValidator__NamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtdValidator__NamespaceManager(__DtdValidator__NamespaceManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtdValidator__NamespaceManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__DtdValidator__NamespaceManager, 0x50>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::DtdValidator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11593))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11685))
// CS Name: ::System.Xml.Schema::DtdValidator*
class CORDL_TYPE DtdValidator : public ::System::Xml::Schema::BaseValidator {
public:
  // Declarations
  using NamespaceManager = ::System::Xml::Schema::__DtdValidator__NamespaceManager;

  /// @brief Field namespaceManager, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_namespaceManager, put = setStaticF_namespaceManager))::System::Xml::Schema::__DtdValidator__NamespaceManager* namespaceManager;

  static inline void setStaticF_namespaceManager(::System::Xml::Schema::__DtdValidator__NamespaceManager* value);

  static inline ::System::Xml::Schema::__DtdValidator__NamespaceManager* getStaticF_namespaceManager();

  /// @brief Method SetDefaultTypedValue, addr 0x28c047c, size 0x3dc, virtual false, abstract: false, final false
  static inline void SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter);

  // Ctor Parameters [CppParam { name: "", ty: "DtdValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtdValidator(DtdValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtdValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtdValidator(DtdValidator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdValidator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DtdValidator, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DtdValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DtdValidator*, "System.Xml.Schema", "DtdValidator");
NEED_NO_BOX(::System::Xml::Schema::__DtdValidator__NamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__DtdValidator__NamespaceManager*, "System.Xml.Schema", "DtdValidator/NamespaceManager");
