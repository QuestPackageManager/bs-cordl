#pragma once
// IWYU pragma private; include "System/Xml/Schema/DtdValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DtdValidator)
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class DtdValidator_NamespaceManager;
}
namespace System::Xml::Schema {
class IdRefNode;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaEntity;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml {
class HWStack;
}
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IValidationEventHandling;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml {
class XmlValidatingReaderImpl;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class DtdValidator;
}
namespace System::Xml::Schema {
class DtdValidator_NamespaceManager;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DtdValidator);
MARK_REF_PTR_T(::System::Xml::Schema::DtdValidator_NamespaceManager);
// Dependencies System.Xml.XmlNamespaceManager
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.DtdValidator/NamespaceManager
class CORDL_TYPE DtdValidator_NamespaceManager : public ::System::Xml::XmlNamespaceManager {
public:
  // Declarations
  /// @brief Method LookupNamespace, addr 0x43b45f0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  static inline ::System::Xml::Schema::DtdValidator_NamespaceManager* New_ctor();

  /// @brief Method .ctor, addr 0x43b45e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdValidator_NamespaceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtdValidator_NamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtdValidator_NamespaceManager(DtdValidator_NamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtdValidator_NamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtdValidator_NamespaceManager(DtdValidator_NamespaceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7586 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DtdValidator_NamespaceManager, 0x50>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Xml.Schema.BaseValidator
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.DtdValidator
class CORDL_TYPE DtdValidator : public ::System::Xml::Schema::BaseValidator {
public:
  // Declarations
  using NamespaceManager = ::System::Xml::Schema::DtdValidator_NamespaceManager;

  /// @brief Field IDs, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_IDs, put = __cordl_internal_set_IDs)) ::System::Collections::Hashtable* IDs;

  __declspec(property(get = get_PreserveWhitespace)) bool PreserveWhitespace;

  /// @brief Field attPresence, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_attPresence, put = __cordl_internal_set_attPresence)) ::System::Collections::Hashtable* attPresence;

  /// @brief Field idRefListHead, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_idRefListHead, put = __cordl_internal_set_idRefListHead)) ::System::Xml::Schema::IdRefNode* idRefListHead;

  /// @brief Field name, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::XmlQualifiedName* name;

  /// @brief Field namespaceManager, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_namespaceManager, put = setStaticF_namespaceManager)) ::System::Xml::Schema::DtdValidator_NamespaceManager* namespaceManager;

  /// @brief Field processIdentityConstraints, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_processIdentityConstraints, put = __cordl_internal_set_processIdentityConstraints)) bool processIdentityConstraints;

  /// @brief Field validationStack, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_validationStack, put = __cordl_internal_set_validationStack)) ::System::Xml::HWStack* validationStack;

  /// @brief Method AddID, addr 0x43b3c70, size 0x90, virtual false, abstract: false, final false
  inline void AddID(::StringW name, ::System::Object* node);

  /// @brief Method CheckDefaultValue, addr 0x43b4164, size 0x414, virtual false, abstract: false, final false
  static inline void CheckDefaultValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::IValidationEventHandling* eventHandling,
                                       ::StringW baseUriStr);

  /// @brief Method CheckForwardRefs, addr 0x43b3920, size 0x104, virtual false, abstract: false, final false
  inline void CheckForwardRefs();

  /// @brief Method CheckValue, addr 0x43b30f0, size 0x570, virtual false, abstract: false, final false
  inline void CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef);

  /// @brief Method CompleteValidation, addr 0x43b3834, size 0x48, virtual true, abstract: false, final false
  inline void CompleteValidation();

  /// @brief Method FindId, addr 0x43b3d00, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Object* FindId(::StringW name);

  /// @brief Method GenEntity, addr 0x43b274c, size 0x154, virtual false, abstract: false, final false
  inline bool GenEntity(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetEntity, addr 0x43b3d1c, size 0x94, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaEntity* GetEntity(::System::Xml::XmlQualifiedName* qname, bool fParameterEntity);

  /// @brief Method Init, addr 0x43b20f4, size 0x130, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method MeetsStandAloneConstraint, addr 0x43b25fc, size 0xa0, virtual false, abstract: false, final false
  inline bool MeetsStandAloneConstraint();

  static inline ::System::Xml::Schema::DtdValidator* New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints);

  /// @brief Method Pop, addr 0x43b387c, size 0xa4, virtual false, abstract: false, final false
  inline bool Pop();

  /// @brief Method ProcessElement, addr 0x43b2b88, size 0x10c, virtual false, abstract: false, final false
  inline void ProcessElement();

  /// @brief Method ProcessTokenizedType, addr 0x43b3a5c, size 0x214, virtual false, abstract: false, final false
  inline void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name);

  /// @brief Method Push, addr 0x43b2224, size 0xd8, virtual false, abstract: false, final false
  inline void Push(::System::Xml::XmlQualifiedName* elementName);

  /// @brief Method SetDefaultTypedValue, addr 0x43b3db0, size 0x3b4, virtual false, abstract: false, final false
  static inline void SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter);

  /// @brief Method Validate, addr 0x43b22fc, size 0x1f8, virtual true, abstract: false, final false
  inline void Validate();

  /// @brief Method ValidateChildElement, addr 0x43b2a44, size 0x144, virtual false, abstract: false, final false
  inline void ValidateChildElement();

  /// @brief Method ValidateElement, addr 0x43b24f4, size 0x108, virtual false, abstract: false, final false
  inline void ValidateElement();

  /// @brief Method ValidateEndElement, addr 0x43b28a0, size 0x1a4, virtual false, abstract: false, final false
  inline void ValidateEndElement();

  /// @brief Method ValidateEndStartElement, addr 0x43b3660, size 0x1d4, virtual false, abstract: false, final false
  inline void ValidateEndStartElement();

  /// @brief Method ValidatePIComment, addr 0x43b269c, size 0xb0, virtual false, abstract: false, final false
  inline void ValidatePIComment();

  /// @brief Method ValidateStartElement, addr 0x43b2c94, size 0x45c, virtual false, abstract: false, final false
  inline void ValidateStartElement();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_IDs() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_IDs();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_attPresence() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_attPresence();

  constexpr ::System::Xml::Schema::IdRefNode* const& __cordl_internal_get_idRefListHead() const;

  constexpr ::System::Xml::Schema::IdRefNode*& __cordl_internal_get_idRefListHead();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_name();

  constexpr bool const& __cordl_internal_get_processIdentityConstraints() const;

  constexpr bool& __cordl_internal_get_processIdentityConstraints();

  constexpr ::System::Xml::HWStack* const& __cordl_internal_get_validationStack() const;

  constexpr ::System::Xml::HWStack*& __cordl_internal_get_validationStack();

  constexpr void __cordl_internal_set_IDs(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_attPresence(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value);

  constexpr void __cordl_internal_set_name(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_processIdentityConstraints(bool value);

  constexpr void __cordl_internal_set_validationStack(::System::Xml::HWStack* value);

  /// @brief Method .ctor, addr 0x43b2054, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints);

  static inline ::System::Xml::Schema::DtdValidator_NamespaceManager* getStaticF_namespaceManager();

  /// @brief Method get_PreserveWhitespace, addr 0x43b3a24, size 0x38, virtual true, abstract: false, final false
  inline bool get_PreserveWhitespace();

  static inline void setStaticF_namespaceManager(::System::Xml::Schema::DtdValidator_NamespaceManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtdValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtdValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtdValidator(DtdValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtdValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtdValidator(DtdValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7587 };

  /// @brief Field validationStack, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::HWStack* ___validationStack;

  /// @brief Field attPresence, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___attPresence;

  /// @brief Field name, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___name;

  /// @brief Field IDs, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___IDs;

  /// @brief Field idRefListHead, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::Schema::IdRefNode* ___idRefListHead;

  /// @brief Field processIdentityConstraints, offset: 0xa8, size: 0x1, def value: None
  bool ___processIdentityConstraints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::DtdValidator, ___validationStack) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DtdValidator, ___attPresence) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DtdValidator, ___name) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DtdValidator, ___IDs) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DtdValidator, ___idRefListHead) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DtdValidator, ___processIdentityConstraints) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DtdValidator, 0xb0>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DtdValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DtdValidator*, "System.Xml.Schema", "DtdValidator");
NEED_NO_BOX(::System::Xml::Schema::DtdValidator_NamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DtdValidator_NamespaceManager*, "System.Xml.Schema", "DtdValidator/NamespaceManager");
