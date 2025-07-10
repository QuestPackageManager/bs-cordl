#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaInference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaInference)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
struct XmlSchemaInference_InferenceOption;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleContentExtension;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class NameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaInference_InferenceOption;
}
namespace System::Xml::Schema {
class XmlSchemaInference;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaInference_InferenceOption);
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaInference);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaInference/InferenceOption
struct CORDL_TYPE XmlSchemaInference_InferenceOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaInference_InferenceOption_Unwrapped
  enum struct __XmlSchemaInference_InferenceOption_Unwrapped : int32_t {
    __E_Restricted = static_cast<int32_t>(0x0),
    __E_Relaxed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaInference_InferenceOption_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaInference_InferenceOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaInference_InferenceOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaInference_InferenceOption(int32_t value__) noexcept;

  /// @brief Field Relaxed value: I32(1)
  static ::System::Xml::Schema::XmlSchemaInference_InferenceOption const Relaxed;

  /// @brief Field Restricted value: I32(0)
  static ::System::Xml::Schema::XmlSchemaInference_InferenceOption const Restricted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7602 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference_InferenceOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaInference_InferenceOption, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Object, System.Xml.Schema.XmlSchemaInference::InferenceOption
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaInference
class CORDL_TYPE XmlSchemaInference : public ::System::Object {
public:
  // Declarations
  using InferenceOption = ::System::Xml::Schema::XmlSchemaInference_InferenceOption;

  /// @brief Field NamespaceManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_NamespaceManager, put = __cordl_internal_set_NamespaceManager)) ::System::Xml::XmlNamespaceManager* NamespaceManager;

  __declspec(property(get = get_Occurrence, put = set_Occurrence)) ::System::Xml::Schema::XmlSchemaInference_InferenceOption Occurrence;

  /// @brief Field ST_anySimpleType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_anySimpleType, put = setStaticF_ST_anySimpleType)) ::System::Xml::XmlQualifiedName* ST_anySimpleType;

  /// @brief Field ST_boolean, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_boolean, put = setStaticF_ST_boolean)) ::System::Xml::XmlQualifiedName* ST_boolean;

  /// @brief Field ST_byte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_byte, put = setStaticF_ST_byte)) ::System::Xml::XmlQualifiedName* ST_byte;

  /// @brief Field ST_date, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_date, put = setStaticF_ST_date)) ::System::Xml::XmlQualifiedName* ST_date;

  /// @brief Field ST_dateTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_dateTime, put = setStaticF_ST_dateTime)) ::System::Xml::XmlQualifiedName* ST_dateTime;

  /// @brief Field ST_decimal, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_decimal, put = setStaticF_ST_decimal)) ::System::Xml::XmlQualifiedName* ST_decimal;

  /// @brief Field ST_double, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_double, put = setStaticF_ST_double)) ::System::Xml::XmlQualifiedName* ST_double;

  /// @brief Field ST_duration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_duration, put = setStaticF_ST_duration)) ::System::Xml::XmlQualifiedName* ST_duration;

  /// @brief Field ST_float, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_float, put = setStaticF_ST_float)) ::System::Xml::XmlQualifiedName* ST_float;

  /// @brief Field ST_gYearMonth, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_gYearMonth, put = setStaticF_ST_gYearMonth)) ::System::Xml::XmlQualifiedName* ST_gYearMonth;

  /// @brief Field ST_int, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_int, put = setStaticF_ST_int)) ::System::Xml::XmlQualifiedName* ST_int;

  /// @brief Field ST_integer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_integer, put = setStaticF_ST_integer)) ::System::Xml::XmlQualifiedName* ST_integer;

  /// @brief Field ST_long, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_long, put = setStaticF_ST_long)) ::System::Xml::XmlQualifiedName* ST_long;

  /// @brief Field ST_short, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_short, put = setStaticF_ST_short)) ::System::Xml::XmlQualifiedName* ST_short;

  /// @brief Field ST_string, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_string, put = setStaticF_ST_string)) ::System::Xml::XmlQualifiedName* ST_string;

  /// @brief Field ST_time, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_time, put = setStaticF_ST_time)) ::System::Xml::XmlQualifiedName* ST_time;

  /// @brief Field ST_unsignedByte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_unsignedByte, put = setStaticF_ST_unsignedByte)) ::System::Xml::XmlQualifiedName* ST_unsignedByte;

  /// @brief Field ST_unsignedInt, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_unsignedInt, put = setStaticF_ST_unsignedInt)) ::System::Xml::XmlQualifiedName* ST_unsignedInt;

  /// @brief Field ST_unsignedLong, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_unsignedLong, put = setStaticF_ST_unsignedLong)) ::System::Xml::XmlQualifiedName* ST_unsignedLong;

  /// @brief Field ST_unsignedShort, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ST_unsignedShort, put = setStaticF_ST_unsignedShort)) ::System::Xml::XmlQualifiedName* ST_unsignedShort;

  /// @brief Field SimpleTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SimpleTypes, put = setStaticF_SimpleTypes)) ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> SimpleTypes;

  /// @brief Field TargetNamespace, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_TargetNamespace, put = __cordl_internal_set_TargetNamespace)) ::StringW TargetNamespace;

  __declspec(property(put = set_TypeInference)) ::System::Xml::Schema::XmlSchemaInference_InferenceOption TypeInference;

  /// @brief Field nametable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nametable, put = __cordl_internal_set_nametable)) ::System::Xml::NameTable* nametable;

  /// @brief Field occurrence, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_occurrence, put = __cordl_internal_set_occurrence)) ::System::Xml::Schema::XmlSchemaInference_InferenceOption occurrence;

  /// @brief Field rootSchema, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rootSchema, put = __cordl_internal_set_rootSchema)) ::System::Xml::Schema::XmlSchema* rootSchema;

  /// @brief Field schemaList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaList, put = __cordl_internal_set_schemaList)) ::System::Collections::ArrayList* schemaList;

  /// @brief Field schemaSet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaSet, put = __cordl_internal_set_schemaSet)) ::System::Xml::Schema::XmlSchemaSet* schemaSet;

  /// @brief Field typeInference, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_typeInference, put = __cordl_internal_set_typeInference)) ::System::Xml::Schema::XmlSchemaInference_InferenceOption typeInference;

  /// @brief Field xtr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_xtr, put = __cordl_internal_set_xtr)) ::System::Xml::XmlReader* xtr;

  /// @brief Method AddAttribute, addr 0x4264700, size 0x7d0, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAttribute* AddAttribute(::StringW localName, ::StringW prefix, ::StringW childURI, ::StringW attrValue, bool bCreatingNewType,
                                                                 ::System::Xml::Schema::XmlSchema* parentSchema, ::System::Xml::Schema::XmlSchemaObjectCollection* addLocation,
                                                                 ::System::Xml::Schema::XmlSchemaObjectTable* compiledAttributes);

  /// @brief Method AddElement, addr 0x4262d48, size 0x5d8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* AddElement(::StringW localName, ::StringW prefix, ::StringW childURI, ::System::Xml::Schema::XmlSchema* parentSchema,
                                                             ::System::Xml::Schema::XmlSchemaObjectCollection* addLocation, int32_t positionWithinCollection);

  /// @brief Method CheckSimpleContentExtension, addr 0x4267c08, size 0x138, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleContentExtension* CheckSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* ct);

  /// @brief Method CreateNewElementforChoice, addr 0x42695d8, size 0x1c8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* CreateNewElementforChoice(::System::Xml::Schema::XmlSchemaElement* copyElement);

  /// @brief Method CreateXmlSchema, addr 0x4266f3c, size 0x90, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* CreateXmlSchema(::StringW targetNS);

  /// @brief Method DateTime, addr 0x426af10, size 0x114, virtual false, abstract: false, final false
  static inline int32_t DateTime(::StringW s, bool bDate, bool bTime);

  /// @brief Method FindAttribute, addr 0x4265298, size 0x384, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAttribute* FindAttribute(::System::Collections::ICollection* attributes, ::StringW attrName);

  /// @brief Method FindAttributeRef, addr 0x4264ed0, size 0x3c8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAttribute* FindAttributeRef(::System::Collections::ICollection* attributes, ::StringW attributeName, ::StringW nsURI);

  /// @brief Method FindElement, addr 0x4269348, size 0x130, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* FindElement(::System::Xml::Schema::XmlSchemaObjectCollection* elements, ::StringW elementName);

  /// @brief Method FindElementRef, addr 0x4269478, size 0x160, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* FindElementRef(::System::Xml::Schema::XmlSchemaObjectCollection* elements, ::StringW elementName, ::StringW nsURI);

  /// @brief Method FindGlobalElement, addr 0x4266fcc, size 0x388, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* FindGlobalElement(::StringW namespaceURI, ::StringW localName, ::ByRef<::System::Xml::Schema::XmlSchema*> parentSchema);

  /// @brief Method FindMatchingElement, addr 0x42681d0, size 0xfec, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* FindMatchingElement(bool bCreatingNewType, ::System::Xml::XmlReader* xtr, ::System::Xml::Schema::XmlSchemaComplexType* ct,
                                                                      ::ByRef<int32_t> lastUsedSeqItem, ::ByRef<bool> bParticleChanged, ::System::Xml::Schema::XmlSchema* parentSchema,
                                                                      bool setMaxoccurs);

  /// @brief Method GetEffectiveSchemaType, addr 0x4267354, size 0x138, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* GetEffectiveSchemaType(::System::Xml::Schema::XmlSchemaElement* elem, bool bCreatingNewType);

  /// @brief Method GetSchemaType, addr 0x4266768, size 0x7d4, virtual false, abstract: false, final false
  static inline int32_t GetSchemaType(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method InferElement, addr 0x4263320, size 0x13e0, virtual false, abstract: false, final false
  inline void InferElement(::System::Xml::Schema::XmlSchemaElement* xse, bool bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema);

  /// @brief Method InferSchema, addr 0x42622cc, size 0x74, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSet* InferSchema(::System::Xml::XmlReader* instanceDocument);

  /// @brief Method InferSchema1, addr 0x4262340, size 0x9d4, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSet* InferSchema1(::System::Xml::XmlReader* instanceDocument, ::System::Xml::Schema::XmlSchemaSet* schemas);

  /// @brief Method InferSimpleType, addr 0x4269968, size 0x15a8, virtual false, abstract: false, final false
  static inline int32_t InferSimpleType(::StringW s, ::ByRef<bool> bNeedsRangeCheck);

  /// @brief Method MakeExistingAttributesOptional, addr 0x4267b78, size 0x90, virtual false, abstract: false, final false
  inline void MakeExistingAttributesOptional(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Xml::Schema::XmlSchemaObjectCollection* attributesInInstance);

  /// @brief Method MoveAttributes, addr 0x4267d40, size 0x3f4, virtual false, abstract: false, final false
  inline void MoveAttributes(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleContentExtension, bool bCreatingNewType);

  /// @brief Method MoveAttributes, addr 0x4268134, size 0x9c, virtual false, abstract: false, final false
  inline void MoveAttributes(::System::Xml::Schema::XmlSchemaSimpleContentExtension* scExtension, ::System::Xml::Schema::XmlSchemaComplexType* ct);

  static inline ::System::Xml::Schema::XmlSchemaInference* New_ctor();

  /// @brief Method ProcessAttributes, addr 0x426748c, size 0x6ec, virtual false, abstract: false, final false
  inline void ProcessAttributes(::ByRef<::System::Xml::Schema::XmlSchemaElement*> xse, ::System::Xml::Schema::XmlSchemaType* effectiveSchemaType, bool bCreatingNewType,
                                ::System::Xml::Schema::XmlSchema* parentSchema);

  /// @brief Method RefineSimpleType, addr 0x426561c, size 0x114c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* RefineSimpleType(::StringW s, ::ByRef<int32_t> iTypeFlags);

  /// @brief Method SetMinMaxOccurs, addr 0x42691bc, size 0x18c, virtual false, abstract: false, final false
  inline void SetMinMaxOccurs(::System::Xml::Schema::XmlSchemaElement* el, bool setMaxOccurs);

  /// @brief Method SwitchUseToOptional, addr 0x4269844, size 0x124, virtual false, abstract: false, final false
  inline void SwitchUseToOptional(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaObjectCollection* attributesInInstance);

  constexpr ::System::Xml::XmlNamespaceManager* const& __cordl_internal_get_NamespaceManager() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_NamespaceManager();

  constexpr ::StringW const& __cordl_internal_get_TargetNamespace() const;

  constexpr ::StringW& __cordl_internal_get_TargetNamespace();

  constexpr ::System::Xml::NameTable* const& __cordl_internal_get_nametable() const;

  constexpr ::System::Xml::NameTable*& __cordl_internal_get_nametable();

  constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption const& __cordl_internal_get_occurrence() const;

  constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption& __cordl_internal_get_occurrence();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_rootSchema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_rootSchema();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_schemaList() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_schemaList();

  constexpr ::System::Xml::Schema::XmlSchemaSet* const& __cordl_internal_get_schemaSet() const;

  constexpr ::System::Xml::Schema::XmlSchemaSet*& __cordl_internal_get_schemaSet();

  constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption const& __cordl_internal_get_typeInference() const;

  constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption& __cordl_internal_get_typeInference();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_xtr() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_xtr();

  constexpr void __cordl_internal_set_NamespaceManager(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_TargetNamespace(::StringW value);

  constexpr void __cordl_internal_set_nametable(::System::Xml::NameTable* value);

  constexpr void __cordl_internal_set_occurrence(::System::Xml::Schema::XmlSchemaInference_InferenceOption value);

  constexpr void __cordl_internal_set_rootSchema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_schemaList(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_schemaSet(::System::Xml::Schema::XmlSchemaSet* value);

  constexpr void __cordl_internal_set_typeInference(::System::Xml::Schema::XmlSchemaInference_InferenceOption value);

  constexpr void __cordl_internal_set_xtr(::System::Xml::XmlReader* value);

  /// @brief Method .ctor, addr 0x42621bc, size 0x110, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_anySimpleType();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_boolean();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_byte();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_date();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_dateTime();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_decimal();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_double();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_duration();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_float();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_gYearMonth();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_int();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_integer();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_long();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_short();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_string();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_time();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_unsignedByte();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_unsignedInt();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_unsignedLong();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_ST_unsignedShort();

  static inline ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> getStaticF_SimpleTypes();

  /// @brief Method get_Occurrence, addr 0x42621ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaInference_InferenceOption get_Occurrence();

  static inline void setStaticF_ST_anySimpleType(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_boolean(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_byte(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_date(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_dateTime(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_decimal(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_double(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_duration(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_float(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_gYearMonth(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_int(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_integer(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_long(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_short(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_string(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_time(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_unsignedByte(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_unsignedInt(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_unsignedLong(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_ST_unsignedShort(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_SimpleTypes(::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> value);

  /// @brief Method set_Occurrence, addr 0x42621a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Occurrence(::System::Xml::Schema::XmlSchemaInference_InferenceOption value);

  /// @brief Method set_TypeInference, addr 0x42621b4, size 0x8, virtual false, abstract: false, final false
  inline void set_TypeInference(::System::Xml::Schema::XmlSchemaInference_InferenceOption value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaInference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaInference(XmlSchemaInference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaInference(XmlSchemaInference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7603 };

  /// @brief Field rootSchema, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___rootSchema;

  /// @brief Field schemaSet, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSet* ___schemaSet;

  /// @brief Field xtr, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___xtr;

  /// @brief Field nametable, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::NameTable* ___nametable;

  /// @brief Field TargetNamespace, offset: 0x30, size: 0x8, def value: None
  ::StringW ___TargetNamespace;

  /// @brief Field NamespaceManager, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___NamespaceManager;

  /// @brief Field schemaList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___schemaList;

  /// @brief Field occurrence, offset: 0x48, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaInference_InferenceOption ___occurrence;

  /// @brief Field typeInference, offset: 0x4c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaInference_InferenceOption ___typeInference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___rootSchema) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___schemaSet) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___xtr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___nametable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___TargetNamespace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___NamespaceManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___schemaList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___occurrence) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInference, ___typeInference) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaInference, 0x50>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInference_InferenceOption, "System.Xml.Schema", "XmlSchemaInference/InferenceOption");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInference);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInference*, "System.Xml.Schema", "XmlSchemaInference");
