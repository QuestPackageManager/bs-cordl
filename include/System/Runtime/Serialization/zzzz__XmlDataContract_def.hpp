#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDataContract)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::Serialization {
class CreateXmlSerializableDelegate;
}
namespace System::Runtime::Serialization {
class DataContractPairKey;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class XmlDataContract_XmlDataContractCriticalHelper;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerWriteContext;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Runtime::Serialization {
class XmlWriterDelegator;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlDataContract;
}
namespace System::Runtime::Serialization {
class XmlDataContract_XmlDataContractCriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlDataContract);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper);
// Dependencies System.Runtime.Serialization.DataContract::DataContractCriticalHelper
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlDataContract/XmlDataContractCriticalHelper
class CORDL_TYPE XmlDataContract_XmlDataContractCriticalHelper : public ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper {
public:
  // Declarations
  __declspec(property(get = get_CreateXmlSerializableDelegate, put = set_CreateXmlSerializableDelegate)) ::System::Runtime::Serialization::CreateXmlSerializableDelegate* CreateXmlSerializableDelegate;

  __declspec(property(get = get_HasRoot, put = set_HasRoot)) bool HasRoot;

  __declspec(property(get = get_IsAnonymous)) bool IsAnonymous;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  __declspec(property(get = get_TopLevelElementName)) ::System::Xml::XmlDictionaryString* TopLevelElementName;

  __declspec(property(get = get_TopLevelElementNamespace)) ::System::Xml::XmlDictionaryString* TopLevelElementNamespace;

  __declspec(property(put = set_XsdType)) ::System::Xml::Schema::XmlSchemaType* XsdType;

  /// @brief Field createXmlSerializable, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_createXmlSerializable,
                      put = __cordl_internal_set_createXmlSerializable)) ::System::Runtime::Serialization::CreateXmlSerializableDelegate* createXmlSerializable;

  /// @brief Field hasRoot, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_hasRoot, put = __cordl_internal_set_hasRoot)) bool hasRoot;

  /// @brief Field isKnownTypeAttributeChecked, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isKnownTypeAttributeChecked, put = __cordl_internal_set_isKnownTypeAttributeChecked)) bool isKnownTypeAttributeChecked;

  /// @brief Field isTopLevelElementNullable, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isTopLevelElementNullable, put = __cordl_internal_set_isTopLevelElementNullable)) bool isTopLevelElementNullable;

  /// @brief Field knownDataContracts, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_knownDataContracts,
      put =
          __cordl_internal_set_knownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* knownDataContracts;

  /// @brief Field topLevelElementName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_topLevelElementName, put = __cordl_internal_set_topLevelElementName)) ::System::Xml::XmlDictionaryString* topLevelElementName;

  /// @brief Field topLevelElementNamespace, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_topLevelElementNamespace, put = __cordl_internal_set_topLevelElementNamespace)) ::System::Xml::XmlDictionaryString* topLevelElementNamespace;

  /// @brief Field xsdType, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_xsdType, put = __cordl_internal_set_xsdType)) ::System::Xml::Schema::XmlSchemaType* xsdType;

  static inline ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* New_ctor(::System::Type* type);

  constexpr ::System::Runtime::Serialization::CreateXmlSerializableDelegate* const& __cordl_internal_get_createXmlSerializable() const;

  constexpr ::System::Runtime::Serialization::CreateXmlSerializableDelegate*& __cordl_internal_get_createXmlSerializable();

  constexpr bool const& __cordl_internal_get_hasRoot() const;

  constexpr bool& __cordl_internal_get_hasRoot();

  constexpr bool const& __cordl_internal_get_isKnownTypeAttributeChecked() const;

  constexpr bool& __cordl_internal_get_isKnownTypeAttributeChecked();

  constexpr bool const& __cordl_internal_get_isTopLevelElementNullable() const;

  constexpr bool& __cordl_internal_get_isTopLevelElementNullable();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const& __cordl_internal_get_knownDataContracts() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*& __cordl_internal_get_knownDataContracts();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_topLevelElementName() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_topLevelElementName();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_topLevelElementNamespace() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_topLevelElementNamespace();

  constexpr ::System::Xml::Schema::XmlSchemaType* const& __cordl_internal_get_xsdType() const;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_xsdType();

  constexpr void __cordl_internal_set_createXmlSerializable(::System::Runtime::Serialization::CreateXmlSerializableDelegate* value);

  constexpr void __cordl_internal_set_hasRoot(bool value);

  constexpr void __cordl_internal_set_isKnownTypeAttributeChecked(bool value);

  constexpr void __cordl_internal_set_isTopLevelElementNullable(bool value);

  constexpr void __cordl_internal_set_knownDataContracts(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value);

  constexpr void __cordl_internal_set_topLevelElementName(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_topLevelElementNamespace(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_xsdType(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method .ctor, addr 0x5f45498, size 0x564, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_CreateXmlSerializableDelegate, addr 0x5f4626c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* get_CreateXmlSerializableDelegate();

  /// @brief Method get_HasRoot, addr 0x5f4624c, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasRoot();

  /// @brief Method get_IsAnonymous, addr 0x5f45a38, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsAnonymous();

  /// @brief Method get_KnownDataContracts, addr 0x5f46134, size 0x110, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_TopLevelElementName, addr 0x5f4625c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementName();

  /// @brief Method get_TopLevelElementNamespace, addr 0x5f46264, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementNamespace();

  /// @brief Method set_CreateXmlSerializableDelegate, addr 0x5f46274, size 0x8, virtual false, abstract: false, final false
  inline void set_CreateXmlSerializableDelegate(::System::Runtime::Serialization::CreateXmlSerializableDelegate* value);

  /// @brief Method set_HasRoot, addr 0x5f46254, size 0x8, virtual true, abstract: false, final false
  inline void set_HasRoot(bool value);

  /// @brief Method set_XsdType, addr 0x5f46244, size 0x8, virtual false, abstract: false, final false
  inline void set_XsdType(::System::Xml::Schema::XmlSchemaType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDataContract_XmlDataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDataContract_XmlDataContractCriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDataContract_XmlDataContractCriticalHelper(XmlDataContract_XmlDataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDataContract_XmlDataContractCriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDataContract_XmlDataContractCriticalHelper(XmlDataContract_XmlDataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17073 };

  /// @brief Field knownDataContracts, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* ___knownDataContracts;

  /// @brief Field isKnownTypeAttributeChecked, offset: 0x50, size: 0x1, def value: None
  bool ___isKnownTypeAttributeChecked;

  /// @brief Field topLevelElementName, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___topLevelElementName;

  /// @brief Field topLevelElementNamespace, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___topLevelElementNamespace;

  /// @brief Field isTopLevelElementNullable, offset: 0x68, size: 0x1, def value: None
  bool ___isTopLevelElementNullable;

  /// @brief Field xsdType, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___xsdType;

  /// @brief Field hasRoot, offset: 0x78, size: 0x1, def value: None
  bool ___hasRoot;

  /// @brief Field createXmlSerializable, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::Serialization::CreateXmlSerializableDelegate* ___createXmlSerializable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, ___knownDataContracts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, ___isKnownTypeAttributeChecked) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, ___topLevelElementName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, ___topLevelElementNamespace) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, ___isTopLevelElementNullable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, ___xsdType) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, ___hasRoot) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, ___createXmlSerializable) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper, 0x88>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlDataContract
class CORDL_TYPE XmlDataContract : public ::System::Runtime::Serialization::DataContract {
public:
  // Declarations
  using XmlDataContractCriticalHelper = ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper;

  __declspec(property(get = get_CanContainReferences)) bool CanContainReferences;

  __declspec(property(get = get_CreateXmlSerializableDelegate)) ::System::Runtime::Serialization::CreateXmlSerializableDelegate* CreateXmlSerializableDelegate;

  __declspec(property(get = get_HasRoot)) bool HasRoot;

  __declspec(property(get = get_IsAnonymous)) bool IsAnonymous;

  __declspec(property(get = get_IsBuiltInDataContract)) bool IsBuiltInDataContract;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  __declspec(property(get = get_TopLevelElementName)) ::System::Xml::XmlDictionaryString* TopLevelElementName;

  __declspec(property(get = get_TopLevelElementNamespace)) ::System::Xml::XmlDictionaryString* TopLevelElementNamespace;

  /// @brief Field helper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* helper;

  /// @brief Method Equals, addr 0x5f45d14, size 0x14c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method GenerateCreateXmlSerializableDelegate, addr 0x5f45bb0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* GenerateCreateXmlSerializableDelegate();

  /// @brief Method GetHashCode, addr 0x5f45e60, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Runtime::Serialization::XmlDataContract* New_ctor(::System::Type* type);

  /// @brief Method ReadXmlValue, addr 0x5f45f64, size 0x74, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method WriteXmlValue, addr 0x5f45e74, size 0x18, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  /// @brief Method <GenerateCreateXmlSerializableDelegate>b__39_0, addr 0x5f460e0, size 0x54, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::IXmlSerializable* _GenerateCreateXmlSerializableDelegate_b__39_0();

  constexpr ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* value);

  /// @brief Method .ctor, addr 0x5f453e8, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_CanContainReferences, addr 0x5f45c28, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanContainReferences();

  /// @brief Method get_CreateXmlSerializableDelegate, addr 0x5f45a9c, size 0x114, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* get_CreateXmlSerializableDelegate();

  /// @brief Method get_HasRoot, addr 0x5f45a48, size 0x1c, virtual true, abstract: false, final false
  inline bool get_HasRoot();

  /// @brief Method get_IsAnonymous, addr 0x5f45a18, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsAnonymous();

  /// @brief Method get_IsBuiltInDataContract, addr 0x5f45c30, size 0xe4, virtual true, abstract: false, final false
  inline bool get_IsBuiltInDataContract();

  /// @brief Method get_KnownDataContracts, addr 0x5f459fc, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_TopLevelElementName, addr 0x5f45a64, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementName();

  /// @brief Method get_TopLevelElementNamespace, addr 0x5f45a80, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementNamespace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDataContract(XmlDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDataContract(XmlDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17074 };

  /// @brief Field helper, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlDataContract, ___helper) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlDataContract*, "System.Runtime.Serialization", "XmlDataContract");
NEED_NO_BOX(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*, "System.Runtime.Serialization", "XmlDataContract/XmlDataContractCriticalHelper");
