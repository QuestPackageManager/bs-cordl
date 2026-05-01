#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataContract)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Runtime::Serialization {
class ClassDataContract;
}
namespace System::Runtime::Serialization {
class CodeTypeReference;
}
namespace System::Runtime::Serialization {
class CollectionDataContractAttribute;
}
namespace System::Runtime::Serialization {
class DataContractAttribute;
}
namespace System::Runtime::Serialization {
class DataContractPairKey;
}
namespace System::Runtime::Serialization {
class DataContract_DataContractCriticalHelper;
}
namespace System::Runtime::Serialization {
class IGenericNameProvider;
}
namespace System::Runtime::Serialization {
class IntRef;
}
namespace System::Runtime::Serialization {
struct SerializationMode;
}
namespace System::Runtime::Serialization {
class TypeHandleRef;
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
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlDictionary;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class DataContract_DataContractCriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataContract);
MARK_REF_PTR_T(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataContract/DataContractCriticalHelper
class CORDL_TYPE DataContract_DataContractCriticalHelper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasRoot, put = set_HasRoot)) bool HasRoot;

  __declspec(property(get = get_IsBuiltInDataContract)) bool IsBuiltInDataContract;

  __declspec(property(get = get_IsISerializable)) bool IsISerializable;

  __declspec(property(get = get_IsReference, put = set_IsReference)) bool IsReference;

  __declspec(property(get = get_IsValueType, put = set_IsValueType)) bool IsValueType;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  __declspec(property(get = get_Name, put = set_Name)) ::System::Xml::XmlDictionaryString* Name;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::System::Xml::XmlDictionaryString* Namespace;

  __declspec(property(get = get_OriginalUnderlyingType)) ::System::Type* OriginalUnderlyingType;

  __declspec(property(get = get_StableName, put = set_StableName)) ::System::Xml::XmlQualifiedName* StableName;

  __declspec(property(get = get_TopLevelElementName)) ::System::Xml::XmlDictionaryString* TopLevelElementName;

  __declspec(property(get = get_TopLevelElementNamespace)) ::System::Xml::XmlDictionaryString* TopLevelElementNamespace;

  __declspec(property(get = get_TypeForInitialization)) ::System::Type* TypeForInitialization;

  __declspec(property(get = get_UnderlyingType)) ::System::Type* UnderlyingType;

  /// @brief Field cacheLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_cacheLock, put = setStaticF_cacheLock)) ::System::Object* cacheLock;

  /// @brief Field clrTypeStrings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_clrTypeStrings, put = setStaticF_clrTypeStrings)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* clrTypeStrings;

  /// @brief Field clrTypeStringsDictionary, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_clrTypeStringsDictionary, put = setStaticF_clrTypeStringsDictionary)) ::System::Xml::XmlDictionary* clrTypeStringsDictionary;

  /// @brief Field clrTypeStringsLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_clrTypeStringsLock, put = setStaticF_clrTypeStringsLock)) ::System::Object* clrTypeStringsLock;

  /// @brief Field createDataContractLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_createDataContractLock, put = setStaticF_createDataContractLock)) ::System::Object* createDataContractLock;

  /// @brief Field dataContractCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_dataContractCache,
                      put = setStaticF_dataContractCache)) ::ArrayW<::System::Runtime::Serialization::DataContract*, ::Array<::System::Runtime::Serialization::DataContract*>*>
      dataContractCache;

  /// @brief Field dataContractID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_dataContractID, put = setStaticF_dataContractID)) int32_t dataContractID;

  /// @brief Field initBuiltInContractsLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initBuiltInContractsLock, put = setStaticF_initBuiltInContractsLock)) ::System::Object* initBuiltInContractsLock;

  /// @brief Field isReference, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isReference, put = __cordl_internal_set_isReference)) bool isReference;

  /// @brief Field isValueType, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_isValueType, put = __cordl_internal_set_isValueType)) bool isValueType;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::XmlDictionaryString* name;

  /// @brief Field nameToBuiltInContract, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_nameToBuiltInContract,
      put = setStaticF_nameToBuiltInContract)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* nameToBuiltInContract;

  /// @brief Field namespaces, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_namespaces, put = setStaticF_namespaces)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* namespaces;

  /// @brief Field namespacesLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_namespacesLock, put = setStaticF_namespacesLock)) ::System::Object* namespacesLock;

  /// @brief Field ns, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::System::Xml::XmlDictionaryString* ns;

  /// @brief Field originalUnderlyingType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_originalUnderlyingType, put = __cordl_internal_set_originalUnderlyingType)) ::System::Type* originalUnderlyingType;

  /// @brief Field stableName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stableName, put = __cordl_internal_set_stableName)) ::System::Xml::XmlQualifiedName* stableName;

  /// @brief Field typeForInitialization, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_typeForInitialization, put = __cordl_internal_set_typeForInitialization)) ::System::Type* typeForInitialization;

  /// @brief Field typeHandleRef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeHandleRef, put = setStaticF_typeHandleRef)) ::System::Runtime::Serialization::TypeHandleRef* typeHandleRef;

  /// @brief Field typeNameToBuiltInContract, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeNameToBuiltInContract,
                      put = setStaticF_typeNameToBuiltInContract)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataContract*>* typeNameToBuiltInContract;

  /// @brief Field typeToBuiltInContract, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeToBuiltInContract,
                      put = setStaticF_typeToBuiltInContract)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::DataContract*>* typeToBuiltInContract;

  /// @brief Field typeToIDCache, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_typeToIDCache,
      put = setStaticF_typeToIDCache)) ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::IntRef*>* typeToIDCache;

  /// @brief Field underlyingType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_underlyingType, put = __cordl_internal_set_underlyingType)) ::System::Type* underlyingType;

  /// @brief Method AssignDataContractToId, addr 0x6006134, size 0x180, virtual false, abstract: false, final false
  static inline void AssignDataContractToId(::System::Runtime::Serialization::DataContract* dataContract, int32_t id);

  /// @brief Method ContractMatches, addr 0x60062b4, size 0x5c, virtual false, abstract: false, final false
  static inline bool ContractMatches(::System::Runtime::Serialization::DataContract* contract, ::System::Runtime::Serialization::DataContract* cachedContract);

  /// @brief Method CreateDataContract, addr 0x60058dc, size 0x59c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* CreateDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method CreateGetOnlyCollectionDataContract, addr 0x6005e78, size 0x2bc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* CreateGetOnlyCollectionDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetBuiltInDataContract, addr 0x5ffdc4c, size 0x2d8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::StringW name, ::StringW ns);

  /// @brief Method GetBuiltInDataContract, addr 0x5ffd914, size 0x2d0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::System::Type* type);

  /// @brief Method GetBuiltInDataContract, addr 0x5ffdf7c, size 0xd74, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::StringW typeName);

  /// @brief Method GetClrTypeString, addr 0x5fff104, size 0x5e4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryString* GetClrTypeString(::StringW key);

  /// @brief Method GetDataContractAdapterType, addr 0x600536c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* GetDataContractAdapterType(::System::Type* type);

  /// @brief Method GetDataContractAdapterTypeHandle, addr 0x6006310, size 0xac, virtual false, abstract: false, final false
  static inline ::System::RuntimeTypeHandle GetDataContractAdapterTypeHandle(::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetDataContractForInitialization, addr 0x5ffd290, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractForInitialization(int32_t id);

  /// @brief Method GetDataContractOriginalType, addr 0x6006960, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* GetDataContractOriginalType(::System::Type* type);

  /// @brief Method GetDataContractSkipValidation, addr 0x5ffcedc, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetGetOnlyCollectionDataContractSkipValidation, addr 0x5ffd178, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetGetOnlyCollectionDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetId, addr 0x5ffd568, size 0x354, virtual false, abstract: false, final false
  static inline int32_t GetId(::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetIdForInitialization, addr 0x5ffd3b4, size 0x1b4, virtual false, abstract: false, final false
  static inline int32_t GetIdForInitialization(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GetNamespace, addr 0x5ffed48, size 0x364, virtual false, abstract: false, final false
  static inline ::StringW GetNamespace(::StringW key);

  /// @brief Method GetNextId, addr 0x60063bc, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::IntRef* GetNextId();

  static inline ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* New_ctor(::System::Type* type);

  /// @brief Method SetDataContractName, addr 0x6008a90, size 0x30, virtual false, abstract: false, final false
  inline void SetDataContractName(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method SetDataContractName, addr 0x60089e8, size 0xa8, virtual false, abstract: false, final false
  inline void SetDataContractName(::System::Xml::XmlQualifiedName* stableName);

  /// @brief Method SetTypeForInitialization, addr 0x60088b0, size 0xa4, virtual false, abstract: false, final false
  inline void SetTypeForInitialization(::System::Type* classType);

  /// @brief Method ThrowInvalidDataContractException, addr 0x6008ac0, size 0x60, virtual false, abstract: false, final false
  inline void ThrowInvalidDataContractException(::StringW message);

  /// @brief Method ThrowInvalidDataContractException, addr 0x5fff6e8, size 0x31c, virtual false, abstract: false, final false
  static inline void ThrowInvalidDataContractException(::StringW message, ::System::Type* type);

  /// @brief Method TryCreateBuiltInDataContract, addr 0x6007300, size 0x14c4, virtual false, abstract: false, final false
  static inline bool TryCreateBuiltInDataContract(::StringW name, ::StringW ns, ::ByRef<::System::Runtime::Serialization::DataContract*> dataContract);

  /// @brief Method TryCreateBuiltInDataContract, addr 0x6006ae4, size 0x81c, virtual false, abstract: false, final false
  static inline bool TryCreateBuiltInDataContract(::System::Type* type, ::ByRef<::System::Runtime::Serialization::DataContract*> dataContract);

  constexpr bool const& __cordl_internal_get_isReference() const;

  constexpr bool& __cordl_internal_get_isReference();

  constexpr bool const& __cordl_internal_get_isValueType() const;

  constexpr bool& __cordl_internal_get_isValueType();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_name();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_ns() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_ns();

  constexpr ::System::Type* const& __cordl_internal_get_originalUnderlyingType() const;

  constexpr ::System::Type*& __cordl_internal_get_originalUnderlyingType();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_stableName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_stableName();

  constexpr ::System::Type* const& __cordl_internal_get_typeForInitialization() const;

  constexpr ::System::Type*& __cordl_internal_get_typeForInitialization();

  constexpr ::System::Type* const& __cordl_internal_get_underlyingType() const;

  constexpr ::System::Type*& __cordl_internal_get_underlyingType();

  constexpr void __cordl_internal_set_isReference(bool value);

  constexpr void __cordl_internal_set_isValueType(bool value);

  constexpr void __cordl_internal_set_name(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_ns(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_originalUnderlyingType(::System::Type* value);

  constexpr void __cordl_internal_set_stableName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_typeForInitialization(::System::Type* value);

  constexpr void __cordl_internal_set_underlyingType(::System::Type* value);

  /// @brief Method .ctor, addr 0x5ffbcc4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  static inline ::System::Object* getStaticF_cacheLock();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* getStaticF_clrTypeStrings();

  static inline ::System::Xml::XmlDictionary* getStaticF_clrTypeStringsDictionary();

  static inline ::System::Object* getStaticF_clrTypeStringsLock();

  static inline ::System::Object* getStaticF_createDataContractLock();

  static inline ::ArrayW<::System::Runtime::Serialization::DataContract*, ::Array<::System::Runtime::Serialization::DataContract*>*> getStaticF_dataContractCache();

  static inline int32_t getStaticF_dataContractID();

  static inline ::System::Object* getStaticF_initBuiltInContractsLock();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* getStaticF_nameToBuiltInContract();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_namespaces();

  static inline ::System::Object* getStaticF_namespacesLock();

  static inline ::System::Runtime::Serialization::TypeHandleRef* getStaticF_typeHandleRef();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataContract*>* getStaticF_typeNameToBuiltInContract();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::DataContract*>* getStaticF_typeToBuiltInContract();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::IntRef*>* getStaticF_typeToIDCache();

  /// @brief Method get_HasRoot, addr 0x60089cc, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasRoot();

  /// @brief Method get_IsBuiltInDataContract, addr 0x600895c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBuiltInDataContract();

  /// @brief Method get_IsISerializable, addr 0x60089a4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsISerializable();

  /// @brief Method get_IsReference, addr 0x600896c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method get_IsValueType, addr 0x600897c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsValueType();

  /// @brief Method get_KnownDataContracts, addr 0x600899c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_Name, addr 0x60089ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_Name();

  /// @brief Method get_Namespace, addr 0x60089bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_Namespace();

  /// @brief Method get_OriginalUnderlyingType, addr 0x5fffa20, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Type* get_OriginalUnderlyingType();

  /// @brief Method get_StableName, addr 0x600898c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_StableName();

  /// @brief Method get_TopLevelElementName, addr 0x60089d8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementName();

  /// @brief Method get_TopLevelElementNamespace, addr 0x60089e0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementNamespace();

  /// @brief Method get_TypeForInitialization, addr 0x6008964, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_TypeForInitialization();

  /// @brief Method get_UnderlyingType, addr 0x6008954, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_UnderlyingType();

  static inline void setStaticF_cacheLock(::System::Object* value);

  static inline void setStaticF_clrTypeStrings(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::XmlDictionaryString*>* value);

  static inline void setStaticF_clrTypeStringsDictionary(::System::Xml::XmlDictionary* value);

  static inline void setStaticF_clrTypeStringsLock(::System::Object* value);

  static inline void setStaticF_createDataContractLock(::System::Object* value);

  static inline void setStaticF_dataContractCache(::ArrayW<::System::Runtime::Serialization::DataContract*, ::Array<::System::Runtime::Serialization::DataContract*>*> value);

  static inline void setStaticF_dataContractID(int32_t value);

  static inline void setStaticF_initBuiltInContractsLock(::System::Object* value);

  static inline void setStaticF_nameToBuiltInContract(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value);

  static inline void setStaticF_namespaces(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_namespacesLock(::System::Object* value);

  static inline void setStaticF_typeHandleRef(::System::Runtime::Serialization::TypeHandleRef* value);

  static inline void setStaticF_typeNameToBuiltInContract(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Runtime::Serialization::DataContract*>* value);

  static inline void setStaticF_typeToBuiltInContract(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Runtime::Serialization::DataContract*>* value);

  static inline void setStaticF_typeToIDCache(::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::TypeHandleRef*, ::System::Runtime::Serialization::IntRef*>* value);

  /// @brief Method set_HasRoot, addr 0x60089d4, size 0x4, virtual true, abstract: false, final false
  inline void set_HasRoot(bool value);

  /// @brief Method set_IsReference, addr 0x6008974, size 0x8, virtual false, abstract: false, final false
  inline void set_IsReference(bool value);

  /// @brief Method set_IsValueType, addr 0x6008984, size 0x8, virtual false, abstract: false, final false
  inline void set_IsValueType(bool value);

  /// @brief Method set_Name, addr 0x60089b4, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::System::Xml::XmlDictionaryString* value);

  /// @brief Method set_Namespace, addr 0x60089c4, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::System::Xml::XmlDictionaryString* value);

  /// @brief Method set_StableName, addr 0x6008994, size 0x8, virtual false, abstract: false, final false
  inline void set_StableName(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataContract_DataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataContract_DataContractCriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataContract_DataContractCriticalHelper(DataContract_DataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataContract_DataContractCriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataContract_DataContractCriticalHelper(DataContract_DataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16994 };

  /// @brief Field underlyingType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___underlyingType;

  /// @brief Field originalUnderlyingType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___originalUnderlyingType;

  /// @brief Field isReference, offset: 0x20, size: 0x1, def value: None
  bool ___isReference;

  /// @brief Field isValueType, offset: 0x21, size: 0x1, def value: None
  bool ___isValueType;

  /// @brief Field stableName, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___stableName;

  /// @brief Field name, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___name;

  /// @brief Field ns, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___ns;

  /// @brief Field typeForInitialization, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ___typeForInitialization;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, ___underlyingType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, ___originalUnderlyingType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, ___isReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, ___isValueType) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, ___stableName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, ___ns) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, ___typeForInitialization) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataContract_DataContractCriticalHelper, 0x48>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.DataContract
class CORDL_TYPE DataContract : public ::System::Object {
public:
  // Declarations
  using DataContractCriticalHelper = ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper;

  __declspec(property(get = get_CanContainReferences)) bool CanContainReferences;

  __declspec(property(get = get_HasRoot)) bool HasRoot;

  __declspec(property(get = get_Helper)) ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* Helper;

  __declspec(property(get = get_IsBuiltInDataContract)) bool IsBuiltInDataContract;

  __declspec(property(get = get_IsISerializable)) bool IsISerializable;

  __declspec(property(get = get_IsPrimitive)) bool IsPrimitive;

  __declspec(property(get = get_IsReference)) bool IsReference;

  __declspec(property(get = get_IsValueType)) bool IsValueType;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  __declspec(property(get = get_Name)) ::System::Xml::XmlDictionaryString* Name;

  __declspec(property(get = get_Namespace)) ::System::Xml::XmlDictionaryString* Namespace;

  __declspec(property(get = get_OriginalUnderlyingType)) ::System::Type* OriginalUnderlyingType;

  __declspec(property(get = get_StableName)) ::System::Xml::XmlQualifiedName* StableName;

  __declspec(property(get = get_TopLevelElementName)) ::System::Xml::XmlDictionaryString* TopLevelElementName;

  __declspec(property(get = get_TopLevelElementNamespace)) ::System::Xml::XmlDictionaryString* TopLevelElementNamespace;

  __declspec(property(get = get_TypeForInitialization)) ::System::Type* TypeForInitialization;

  __declspec(property(get = get_UnderlyingType)) ::System::Type* UnderlyingType;

  /// @brief Field helper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* helper;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::XmlDictionaryString* name;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::System::Xml::XmlDictionaryString* ns;

  /// @brief Method CheckAndAdd, addr 0x6004dd4, size 0x308, virtual false, abstract: false, final false
  static inline void CheckAndAdd(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
                                 ::ByRef<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> nameToDataContractTable);

  /// @brief Method CheckExplicitDataContractNamespaceUri, addr 0x6001820, size 0x250, virtual false, abstract: false, final false
  static inline void CheckExplicitDataContractNamespaceUri(::StringW dataContractNs, ::System::Type* type);

  /// @brief Method CreateQualifiedName, addr 0x5ffc080, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* CreateQualifiedName(::StringW localName, ::StringW ns);

  /// @brief Method EncodeLocalName, addr 0x5ffb9a8, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW EncodeLocalName(::StringW localName);

  /// @brief Method Equals, addr 0x6005408, size 0xd4, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x60054dc, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method ExpandGenericParameters, addr 0x6003898, size 0x958, virtual false, abstract: false, final false
  static inline ::StringW ExpandGenericParameters(::StringW format, ::System::Runtime::Serialization::IGenericNameProvider* genericNameProvider);

  /// @brief Method ExpandGenericParameters, addr 0x600101c, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ExpandGenericParameters(::StringW format, ::System::Type* type);

  /// @brief Method GetArrayPrefix, addr 0x6001fc0, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetArrayPrefix(::ByRef<::System::Type*> itemType);

  /// @brief Method GetBuiltInDataContract, addr 0x5ffdbe4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::StringW name, ::StringW ns);

  /// @brief Method GetBuiltInDataContract, addr 0x5ffd8bc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::System::Type* type);

  /// @brief Method GetBuiltInDataContract, addr 0x5ffdf24, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::StringW typeName);

  /// @brief Method GetClrAssemblyName, addr 0x6002bbc, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW GetClrAssemblyName(::System::Type* type, ::ByRef<bool> hasTypeForwardedFrom);

  /// @brief Method GetClrNameAndNamespace, addr 0x6003094, size 0xe8, virtual false, abstract: false, final false
  static inline void GetClrNameAndNamespace(::StringW fullTypeName, ::ByRef<::StringW> localName, ::ByRef<::StringW> ns);

  /// @brief Method GetClrTypeFullName, addr 0x5ffb870, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullName(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForArray, addr 0x6002d18, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameForArray(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForNonArrayTypes, addr 0x6002e24, size 0x270, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameForNonArrayTypes(::System::Type* type);

  /// @brief Method GetClrTypeFullNameUsingTypeForwardedFromAttribute, addr 0x6002cdc, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameUsingTypeForwardedFromAttribute(::System::Type* type);

  /// @brief Method GetClrTypeString, addr 0x5fff0ac, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryString* GetClrTypeString(::StringW key);

  /// @brief Method GetCollectionNamespace, addr 0x600207c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetCollectionNamespace(::StringW elementNs);

  /// @brief Method GetCollectionStableName, addr 0x5ffc2f0, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetCollectionStableName(::System::Type* type, ::System::Type* itemType,
                                                                         ::ByRef<::System::Runtime::Serialization::CollectionDataContractAttribute*> collectionContractAttribute);

  /// @brief Method GetCollectionStableName, addr 0x6001b28, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetCollectionStableName(::System::Type* type, ::System::Type* itemType,
                                                                         ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes,
                                                                         ::ByRef<::System::Runtime::Serialization::CollectionDataContractAttribute*> collectionContractAttribute);

  /// @brief Method GetDCTypeStableName, addr 0x6000db4, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetDCTypeStableName(::System::Type* type, ::System::Runtime::Serialization::DataContractAttribute* dataContractAttribute);

  /// @brief Method GetDataContract, addr 0x5ffce3c, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method GetDataContract, addr 0x5ffc7a0, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::Type* type);

  /// @brief Method GetDataContract, addr 0x5ffcdbc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::RuntimeTypeHandle typeHandle, ::System::Type* type, ::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method GetDataContractForInitialization, addr 0x5ffd238, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractForInitialization(int32_t id);

  /// @brief Method GetDataContractNameForGenericName, addr 0x6002188, size 0x3d0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<int32_t>* GetDataContractNameForGenericName(::StringW typeName, ::System::Text::StringBuilder* localName);

  /// @brief Method GetDataContractSkipValidation, addr 0x5ffce6c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetDefaultDataContractNamespace, addr 0x6001a70, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultDataContractNamespace(::System::Type* type);

  /// @brief Method GetDefaultStableLocalName, addr 0x6001088, size 0x798, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultStableLocalName(::System::Type* type);

  /// @brief Method GetDefaultStableName, addr 0x6002158, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetDefaultStableName(::System::Type* type);

  /// @brief Method GetDefaultStableName, addr 0x600317c, size 0x78, virtual false, abstract: false, final false
  static inline void GetDefaultStableName(::StringW fullTypeName, ::ByRef<::StringW> localName, ::ByRef<::StringW> ns);

  /// @brief Method GetDefaultStableName, addr 0x60031f4, size 0x644, virtual false, abstract: false, final false
  static inline void GetDefaultStableName(::System::Runtime::Serialization::CodeTypeReference* typeReference, ::ByRef<::StringW> localName, ::ByRef<::StringW> ns);

  /// @brief Method GetDefaultStableNamespace, addr 0x6002a08, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultStableNamespace(::StringW clrNs);

  /// @brief Method GetDefaultStableNamespace, addr 0x6001e3c, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultStableNamespace(::System::Type* type);

  /// @brief Method GetGetOnlyCollectionDataContract, addr 0x5ffcfa8, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetGetOnlyCollectionDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type,
                                                                                                 ::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method GetGetOnlyCollectionDataContractSkipValidation, addr 0x5ffd0f0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetGetOnlyCollectionDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetGlobalDataContractNamespace, addr 0x6002730, size 0x2d8, virtual false, abstract: false, final false
  static inline ::StringW GetGlobalDataContractNamespace(::StringW clrNs, ::System::Reflection::ICustomAttributeProvider* customAttribuetProvider);

  /// @brief Method GetHashCode, addr 0x60056ec, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetId, addr 0x5ffcde4, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetId(::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetIdForInitialization, addr 0x5ffd35c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetIdForInitialization(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GetNamespace, addr 0x5ffecf0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetNamespace(::StringW key);

  /// @brief Method GetNamespacesDigest, addr 0x6002558, size 0x1d8, virtual false, abstract: false, final false
  static inline ::StringW GetNamespacesDigest(::StringW namespaces);

  /// @brief Method GetNonDCTypeStableName, addr 0x6000f70, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetNonDCTypeStableName(::System::Type* type,
                                                                        ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes);

  /// @brief Method GetStableName, addr 0x5ffbb1c, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetStableName(::System::Type* type);

  /// @brief Method GetStableName, addr 0x6000a1c, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetStableName(::System::Type* type, ::ByRef<bool> hasDataContract);

  /// @brief Method GetStableName, addr 0x6000ac8, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetStableName(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes,
                                                               ::ByRef<bool> hasDataContract);

  /// @brief Method GetValidContract, addr 0x5fffe4c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetValidContract();

  /// @brief Method GetValidContract, addr 0x5fffe48, size 0x4, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetValidContract(::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method ImportKnownTypeAttributes, addr 0x5ffc960, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* ImportKnownTypeAttributes(::System::Type* type);

  /// @brief Method ImportKnownTypeAttributes, addr 0x60042a4, size 0xa34, virtual false, abstract: false, final false
  static inline void
  ImportKnownTypeAttributes(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
                            ::ByRef<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> knownDataContracts);

  /// @brief Method IsAlpha, addr 0x6000880, size 0x18, virtual false, abstract: false, final false
  static inline bool IsAlpha(char16_t ch);

  /// @brief Method IsAsciiLocalName, addr 0x60008ac, size 0x90, virtual false, abstract: false, final false
  static inline bool IsAsciiLocalName(::StringW localName);

  /// @brief Method IsBuiltInNamespace, addr 0x60020d4, size 0x84, virtual false, abstract: false, final false
  static inline bool IsBuiltInNamespace(::StringW ns);

  /// @brief Method IsDigit, addr 0x6000898, size 0x14, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t ch);

  /// @brief Method IsEqualOrChecked, addr 0x60055f4, size 0xf0, virtual false, abstract: false, final false
  inline bool IsEqualOrChecked(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method IsTypeNullable, addr 0x5ffb790, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsTypeNullable(::System::Type* type);

  /// @brief Method IsTypeSerializable, addr 0x5fffe58, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsTypeSerializable(::System::Type* type);

  /// @brief Method IsTypeSerializable, addr 0x5fffef4, size 0x160, virtual false, abstract: false, final false
  static inline bool IsTypeSerializable(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes);

  /// @brief Method IsValidContract, addr 0x5fffe50, size 0x8, virtual true, abstract: false, final false
  inline bool IsValidContract(::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method IsValidNCName, addr 0x600093c, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsValidNCName(::StringW name);

  /// @brief Method LoadKnownTypesFromConfig, addr 0x6005368, size 0x4, virtual false, abstract: false, final false
  static inline void
  LoadKnownTypesFromConfig(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
                           ::ByRef<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> knownDataContracts);

  static inline ::System::Runtime::Serialization::DataContract* New_ctor(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* helper);

  /// @brief Method ReadXmlValue, addr 0x5fffbbc, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method ThrowInvalidDataContractException, addr 0x5ffc744, size 0x5c, virtual false, abstract: false, final false
  static inline void ThrowInvalidDataContractException(::StringW message, ::System::Type* type);

  /// @brief Method ThrowTypeNotSerializable, addr 0x60041f0, size 0xb4, virtual false, abstract: false, final false
  static inline void ThrowTypeNotSerializable(::System::Type* type);

  /// @brief Method TryGetBuiltInXmlAndArrayTypeStableName, addr 0x6000b48, size 0x174, virtual false, abstract: false, final false
  static inline bool TryGetBuiltInXmlAndArrayTypeStableName(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes,
                                                            ::ByRef<::System::Xml::XmlQualifiedName*> stableName);

  /// @brief Method TryGetDCAttribute, addr 0x6000cbc, size 0xf8, virtual false, abstract: false, final false
  static inline bool TryGetDCAttribute(::System::Type* type, ::ByRef<::System::Runtime::Serialization::DataContractAttribute*> dataContractAttribute);

  /// @brief Method UnwrapNullableType, addr 0x5ffba2c, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Type* UnwrapNullableType(::System::Type* type);

  /// @brief Method UnwrapRedundantNullableType, addr 0x6000668, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Type* UnwrapRedundantNullableType(::System::Type* type);

  /// @brief Method ValidatePreviousCollectionTypes, addr 0x600024c, size 0x41c, virtual false, abstract: false, final false
  static inline void ValidatePreviousCollectionTypes(::System::Type* collectionType, ::System::Type* itemType,
                                                     ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes);

  /// @brief Method WriteRootElement, addr 0x5fffd60, size 0xe8, virtual true, abstract: false, final false
  inline void WriteRootElement(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteXmlValue, addr 0x5fffae0, size 0xdc, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  constexpr ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_name();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_ns() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_ns();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* value);

  constexpr void __cordl_internal_set_name(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_ns(::System::Xml::XmlDictionaryString* value);

  /// @brief Method .ctor, addr 0x5ffcda0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* helper);

  /// @brief Method get_CanContainReferences, addr 0x5fffd50, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanContainReferences();

  /// @brief Method get_HasRoot, addr 0x5fffd10, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasRoot();

  /// @brief Method get_Helper, addr 0x5fffa04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* get_Helper();

  /// @brief Method get_IsBuiltInDataContract, addr 0x5fffaac, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsBuiltInDataContract();

  /// @brief Method get_IsISerializable, addr 0x5fffce4, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsISerializable();

  /// @brief Method get_IsPrimitive, addr 0x5fffd58, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPrimitive();

  /// @brief Method get_IsReference, addr 0x5fffcb0, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method get_IsValueType, addr 0x5fffc98, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsValueType();

  /// @brief Method get_KnownDataContracts, addr 0x5fffcc8, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_Name, addr 0x5fffd00, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_Name();

  /// @brief Method get_Namespace, addr 0x5fffd08, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_Namespace();

  /// @brief Method get_OriginalUnderlyingType, addr 0x5fffa0c, size 0x14, virtual false, abstract: false, final false
  inline ::System::Type* get_OriginalUnderlyingType();

  /// @brief Method get_StableName, addr 0x5ffc068, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_StableName();

  /// @brief Method get_TopLevelElementName, addr 0x5fffd18, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementName();

  /// @brief Method get_TopLevelElementNamespace, addr 0x5fffd34, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementNamespace();

  /// @brief Method get_TypeForInitialization, addr 0x5fffac8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* get_TypeForInitialization();

  /// @brief Method get_UnderlyingType, addr 0x5ffd160, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* get_UnderlyingType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataContract(DataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataContract(DataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16995 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___name;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___ns;

  /// @brief Field helper, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::DataContract, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContract, ___helper) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataContract, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContract*, "System.Runtime.Serialization", "DataContract");
NEED_NO_BOX(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper*, "System.Runtime.Serialization", "DataContract/DataContractCriticalHelper");
