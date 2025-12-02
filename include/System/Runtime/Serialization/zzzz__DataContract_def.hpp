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

  /// @brief Method AssignDataContractToId, addr 0x5f2bedc, size 0x180, virtual false, abstract: false, final false
  static inline void AssignDataContractToId(::System::Runtime::Serialization::DataContract* dataContract, int32_t id);

  /// @brief Method ContractMatches, addr 0x5f2c05c, size 0x5c, virtual false, abstract: false, final false
  static inline bool ContractMatches(::System::Runtime::Serialization::DataContract* contract, ::System::Runtime::Serialization::DataContract* cachedContract);

  /// @brief Method CreateDataContract, addr 0x5f2b684, size 0x59c, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* CreateDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method CreateGetOnlyCollectionDataContract, addr 0x5f2bc20, size 0x2bc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* CreateGetOnlyCollectionDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetBuiltInDataContract, addr 0x5f239f4, size 0x2d8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::StringW name, ::StringW ns);

  /// @brief Method GetBuiltInDataContract, addr 0x5f236bc, size 0x2d0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::System::Type* type);

  /// @brief Method GetBuiltInDataContract, addr 0x5f23d24, size 0xd74, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::StringW typeName);

  /// @brief Method GetClrTypeString, addr 0x5f24eac, size 0x5e4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryString* GetClrTypeString(::StringW key);

  /// @brief Method GetDataContractAdapterType, addr 0x5f2b114, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* GetDataContractAdapterType(::System::Type* type);

  /// @brief Method GetDataContractAdapterTypeHandle, addr 0x5f2c0b8, size 0xac, virtual false, abstract: false, final false
  static inline ::System::RuntimeTypeHandle GetDataContractAdapterTypeHandle(::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetDataContractForInitialization, addr 0x5f23038, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractForInitialization(int32_t id);

  /// @brief Method GetDataContractOriginalType, addr 0x5f2c708, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* GetDataContractOriginalType(::System::Type* type);

  /// @brief Method GetDataContractSkipValidation, addr 0x5f22c84, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetGetOnlyCollectionDataContractSkipValidation, addr 0x5f22f20, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetGetOnlyCollectionDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetId, addr 0x5f23310, size 0x354, virtual false, abstract: false, final false
  static inline int32_t GetId(::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetIdForInitialization, addr 0x5f2315c, size 0x1b4, virtual false, abstract: false, final false
  static inline int32_t GetIdForInitialization(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GetNamespace, addr 0x5f24af0, size 0x364, virtual false, abstract: false, final false
  static inline ::StringW GetNamespace(::StringW key);

  /// @brief Method GetNextId, addr 0x5f2c164, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::IntRef* GetNextId();

  static inline ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* New_ctor(::System::Type* type);

  /// @brief Method SetDataContractName, addr 0x5f2e838, size 0x30, virtual false, abstract: false, final false
  inline void SetDataContractName(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method SetDataContractName, addr 0x5f2e790, size 0xa8, virtual false, abstract: false, final false
  inline void SetDataContractName(::System::Xml::XmlQualifiedName* stableName);

  /// @brief Method SetTypeForInitialization, addr 0x5f2e658, size 0xa4, virtual false, abstract: false, final false
  inline void SetTypeForInitialization(::System::Type* classType);

  /// @brief Method ThrowInvalidDataContractException, addr 0x5f2e868, size 0x60, virtual false, abstract: false, final false
  inline void ThrowInvalidDataContractException(::StringW message);

  /// @brief Method ThrowInvalidDataContractException, addr 0x5f25490, size 0x31c, virtual false, abstract: false, final false
  static inline void ThrowInvalidDataContractException(::StringW message, ::System::Type* type);

  /// @brief Method TryCreateBuiltInDataContract, addr 0x5f2d0a8, size 0x14c4, virtual false, abstract: false, final false
  static inline bool TryCreateBuiltInDataContract(::StringW name, ::StringW ns, ::ByRef<::System::Runtime::Serialization::DataContract*> dataContract);

  /// @brief Method TryCreateBuiltInDataContract, addr 0x5f2c88c, size 0x81c, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x5f21a6c, size 0x48, virtual false, abstract: false, final false
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

  /// @brief Method get_HasRoot, addr 0x5f2e774, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasRoot();

  /// @brief Method get_IsBuiltInDataContract, addr 0x5f2e704, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBuiltInDataContract();

  /// @brief Method get_IsISerializable, addr 0x5f2e74c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsISerializable();

  /// @brief Method get_IsReference, addr 0x5f2e714, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method get_IsValueType, addr 0x5f2e724, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsValueType();

  /// @brief Method get_KnownDataContracts, addr 0x5f2e744, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_Name, addr 0x5f2e754, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_Name();

  /// @brief Method get_Namespace, addr 0x5f2e764, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_Namespace();

  /// @brief Method get_OriginalUnderlyingType, addr 0x5f257c8, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Type* get_OriginalUnderlyingType();

  /// @brief Method get_StableName, addr 0x5f2e734, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_StableName();

  /// @brief Method get_TopLevelElementName, addr 0x5f2e780, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementName();

  /// @brief Method get_TopLevelElementNamespace, addr 0x5f2e788, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementNamespace();

  /// @brief Method get_TypeForInitialization, addr 0x5f2e70c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_TypeForInitialization();

  /// @brief Method get_UnderlyingType, addr 0x5f2e6fc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method set_HasRoot, addr 0x5f2e77c, size 0x4, virtual true, abstract: false, final false
  inline void set_HasRoot(bool value);

  /// @brief Method set_IsReference, addr 0x5f2e71c, size 0x8, virtual false, abstract: false, final false
  inline void set_IsReference(bool value);

  /// @brief Method set_IsValueType, addr 0x5f2e72c, size 0x8, virtual false, abstract: false, final false
  inline void set_IsValueType(bool value);

  /// @brief Method set_Name, addr 0x5f2e75c, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::System::Xml::XmlDictionaryString* value);

  /// @brief Method set_Namespace, addr 0x5f2e76c, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::System::Xml::XmlDictionaryString* value);

  /// @brief Method set_StableName, addr 0x5f2e73c, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16968 };

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

  /// @brief Method CheckAndAdd, addr 0x5f2ab7c, size 0x308, virtual false, abstract: false, final false
  static inline void CheckAndAdd(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
                                 ::ByRef<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> nameToDataContractTable);

  /// @brief Method CheckExplicitDataContractNamespaceUri, addr 0x5f275c8, size 0x250, virtual false, abstract: false, final false
  static inline void CheckExplicitDataContractNamespaceUri(::StringW dataContractNs, ::System::Type* type);

  /// @brief Method CreateQualifiedName, addr 0x5f21e28, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* CreateQualifiedName(::StringW localName, ::StringW ns);

  /// @brief Method EncodeLocalName, addr 0x5f21750, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW EncodeLocalName(::StringW localName);

  /// @brief Method Equals, addr 0x5f2b1b0, size 0xd4, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x5f2b284, size 0x118, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method ExpandGenericParameters, addr 0x5f29640, size 0x958, virtual false, abstract: false, final false
  static inline ::StringW ExpandGenericParameters(::StringW format, ::System::Runtime::Serialization::IGenericNameProvider* genericNameProvider);

  /// @brief Method ExpandGenericParameters, addr 0x5f26dc4, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ExpandGenericParameters(::StringW format, ::System::Type* type);

  /// @brief Method GetArrayPrefix, addr 0x5f27d68, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetArrayPrefix(::ByRef<::System::Type*> itemType);

  /// @brief Method GetBuiltInDataContract, addr 0x5f2398c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::StringW name, ::StringW ns);

  /// @brief Method GetBuiltInDataContract, addr 0x5f23664, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::System::Type* type);

  /// @brief Method GetBuiltInDataContract, addr 0x5f23ccc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetBuiltInDataContract(::StringW typeName);

  /// @brief Method GetClrAssemblyName, addr 0x5f28964, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW GetClrAssemblyName(::System::Type* type, ::ByRef<bool> hasTypeForwardedFrom);

  /// @brief Method GetClrNameAndNamespace, addr 0x5f28e3c, size 0xe8, virtual false, abstract: false, final false
  static inline void GetClrNameAndNamespace(::StringW fullTypeName, ::ByRef<::StringW> localName, ::ByRef<::StringW> ns);

  /// @brief Method GetClrTypeFullName, addr 0x5f21618, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullName(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForArray, addr 0x5f28ac0, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameForArray(::System::Type* type);

  /// @brief Method GetClrTypeFullNameForNonArrayTypes, addr 0x5f28bcc, size 0x270, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameForNonArrayTypes(::System::Type* type);

  /// @brief Method GetClrTypeFullNameUsingTypeForwardedFromAttribute, addr 0x5f28a84, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetClrTypeFullNameUsingTypeForwardedFromAttribute(::System::Type* type);

  /// @brief Method GetClrTypeString, addr 0x5f24e54, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryString* GetClrTypeString(::StringW key);

  /// @brief Method GetCollectionNamespace, addr 0x5f27e24, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetCollectionNamespace(::StringW elementNs);

  /// @brief Method GetCollectionStableName, addr 0x5f22098, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetCollectionStableName(::System::Type* type, ::System::Type* itemType,
                                                                         ::ByRef<::System::Runtime::Serialization::CollectionDataContractAttribute*> collectionContractAttribute);

  /// @brief Method GetCollectionStableName, addr 0x5f278d0, size 0x314, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetCollectionStableName(::System::Type* type, ::System::Type* itemType,
                                                                         ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes,
                                                                         ::ByRef<::System::Runtime::Serialization::CollectionDataContractAttribute*> collectionContractAttribute);

  /// @brief Method GetDCTypeStableName, addr 0x5f26b5c, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetDCTypeStableName(::System::Type* type, ::System::Runtime::Serialization::DataContractAttribute* dataContractAttribute);

  /// @brief Method GetDataContract, addr 0x5f22be4, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method GetDataContract, addr 0x5f22548, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::Type* type);

  /// @brief Method GetDataContract, addr 0x5f22b64, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContract(::System::RuntimeTypeHandle typeHandle, ::System::Type* type, ::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method GetDataContractForInitialization, addr 0x5f22fe0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractForInitialization(int32_t id);

  /// @brief Method GetDataContractNameForGenericName, addr 0x5f27f30, size 0x3d0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<int32_t>* GetDataContractNameForGenericName(::StringW typeName, ::System::Text::StringBuilder* localName);

  /// @brief Method GetDataContractSkipValidation, addr 0x5f22c14, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetDefaultDataContractNamespace, addr 0x5f27818, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultDataContractNamespace(::System::Type* type);

  /// @brief Method GetDefaultStableLocalName, addr 0x5f26e30, size 0x798, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultStableLocalName(::System::Type* type);

  /// @brief Method GetDefaultStableName, addr 0x5f27f00, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetDefaultStableName(::System::Type* type);

  /// @brief Method GetDefaultStableName, addr 0x5f28f24, size 0x78, virtual false, abstract: false, final false
  static inline void GetDefaultStableName(::StringW fullTypeName, ::ByRef<::StringW> localName, ::ByRef<::StringW> ns);

  /// @brief Method GetDefaultStableName, addr 0x5f28f9c, size 0x644, virtual false, abstract: false, final false
  static inline void GetDefaultStableName(::System::Runtime::Serialization::CodeTypeReference* typeReference, ::ByRef<::StringW> localName, ::ByRef<::StringW> ns);

  /// @brief Method GetDefaultStableNamespace, addr 0x5f287b0, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultStableNamespace(::StringW clrNs);

  /// @brief Method GetDefaultStableNamespace, addr 0x5f27be4, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GetDefaultStableNamespace(::System::Type* type);

  /// @brief Method GetGetOnlyCollectionDataContract, addr 0x5f22d50, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetGetOnlyCollectionDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type,
                                                                                                 ::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method GetGetOnlyCollectionDataContractSkipValidation, addr 0x5f22e98, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::DataContract* GetGetOnlyCollectionDataContractSkipValidation(int32_t id, ::System::RuntimeTypeHandle typeHandle, ::System::Type* type);

  /// @brief Method GetGlobalDataContractNamespace, addr 0x5f284d8, size 0x2d8, virtual false, abstract: false, final false
  static inline ::StringW GetGlobalDataContractNamespace(::StringW clrNs, ::System::Reflection::ICustomAttributeProvider* customAttribuetProvider);

  /// @brief Method GetHashCode, addr 0x5f2b494, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetId, addr 0x5f22b8c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetId(::System::RuntimeTypeHandle typeHandle);

  /// @brief Method GetIdForInitialization, addr 0x5f23104, size 0x58, virtual false, abstract: false, final false
  static inline int32_t GetIdForInitialization(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GetNamespace, addr 0x5f24a98, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetNamespace(::StringW key);

  /// @brief Method GetNamespacesDigest, addr 0x5f28300, size 0x1d8, virtual false, abstract: false, final false
  static inline ::StringW GetNamespacesDigest(::StringW namespaces);

  /// @brief Method GetNonDCTypeStableName, addr 0x5f26d18, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetNonDCTypeStableName(::System::Type* type,
                                                                        ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes);

  /// @brief Method GetStableName, addr 0x5f218c4, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetStableName(::System::Type* type);

  /// @brief Method GetStableName, addr 0x5f267c4, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetStableName(::System::Type* type, ::ByRef<bool> hasDataContract);

  /// @brief Method GetStableName, addr 0x5f26870, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetStableName(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes,
                                                               ::ByRef<bool> hasDataContract);

  /// @brief Method GetValidContract, addr 0x5f25bf4, size 0x4, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetValidContract();

  /// @brief Method GetValidContract, addr 0x5f25bf0, size 0x4, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetValidContract(::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method ImportKnownTypeAttributes, addr 0x5f22708, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* ImportKnownTypeAttributes(::System::Type* type);

  /// @brief Method ImportKnownTypeAttributes, addr 0x5f2a04c, size 0xa34, virtual false, abstract: false, final false
  static inline void
  ImportKnownTypeAttributes(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
                            ::ByRef<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> knownDataContracts);

  /// @brief Method IsAlpha, addr 0x5f26628, size 0x18, virtual false, abstract: false, final false
  static inline bool IsAlpha(char16_t ch);

  /// @brief Method IsAsciiLocalName, addr 0x5f26654, size 0x90, virtual false, abstract: false, final false
  static inline bool IsAsciiLocalName(::StringW localName);

  /// @brief Method IsBuiltInNamespace, addr 0x5f27e7c, size 0x84, virtual false, abstract: false, final false
  static inline bool IsBuiltInNamespace(::StringW ns);

  /// @brief Method IsDigit, addr 0x5f26640, size 0x14, virtual false, abstract: false, final false
  static inline bool IsDigit(char16_t ch);

  /// @brief Method IsEqualOrChecked, addr 0x5f2b39c, size 0xf0, virtual false, abstract: false, final false
  inline bool IsEqualOrChecked(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method IsTypeNullable, addr 0x5f21538, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsTypeNullable(::System::Type* type);

  /// @brief Method IsTypeSerializable, addr 0x5f25c00, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsTypeSerializable(::System::Type* type);

  /// @brief Method IsTypeSerializable, addr 0x5f25c9c, size 0x160, virtual false, abstract: false, final false
  static inline bool IsTypeSerializable(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes);

  /// @brief Method IsValidContract, addr 0x5f25bf8, size 0x8, virtual true, abstract: false, final false
  inline bool IsValidContract(::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method IsValidNCName, addr 0x5f266e4, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsValidNCName(::StringW name);

  /// @brief Method LoadKnownTypesFromConfig, addr 0x5f2b110, size 0x4, virtual false, abstract: false, final false
  static inline void
  LoadKnownTypesFromConfig(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* typesChecked,
                           ::ByRef<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*> knownDataContracts);

  static inline ::System::Runtime::Serialization::DataContract* New_ctor(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* helper);

  /// @brief Method ReadXmlValue, addr 0x5f25964, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method ThrowInvalidDataContractException, addr 0x5f224ec, size 0x5c, virtual false, abstract: false, final false
  static inline void ThrowInvalidDataContractException(::StringW message, ::System::Type* type);

  /// @brief Method ThrowTypeNotSerializable, addr 0x5f29f98, size 0xb4, virtual false, abstract: false, final false
  static inline void ThrowTypeNotSerializable(::System::Type* type);

  /// @brief Method TryGetBuiltInXmlAndArrayTypeStableName, addr 0x5f268f0, size 0x174, virtual false, abstract: false, final false
  static inline bool TryGetBuiltInXmlAndArrayTypeStableName(::System::Type* type, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes,
                                                            ::ByRef<::System::Xml::XmlQualifiedName*> stableName);

  /// @brief Method TryGetDCAttribute, addr 0x5f26a64, size 0xf8, virtual false, abstract: false, final false
  static inline bool TryGetDCAttribute(::System::Type* type, ::ByRef<::System::Runtime::Serialization::DataContractAttribute*> dataContractAttribute);

  /// @brief Method UnwrapNullableType, addr 0x5f217d4, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Type* UnwrapNullableType(::System::Type* type);

  /// @brief Method UnwrapRedundantNullableType, addr 0x5f26410, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Type* UnwrapRedundantNullableType(::System::Type* type);

  /// @brief Method ValidatePreviousCollectionTypes, addr 0x5f25ff4, size 0x41c, virtual false, abstract: false, final false
  static inline void ValidatePreviousCollectionTypes(::System::Type* collectionType, ::System::Type* itemType,
                                                     ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* previousCollectionTypes);

  /// @brief Method WriteRootElement, addr 0x5f25b08, size 0xe8, virtual true, abstract: false, final false
  inline void WriteRootElement(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  /// @brief Method WriteXmlValue, addr 0x5f25888, size 0xdc, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x5f22b48, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* helper);

  /// @brief Method get_CanContainReferences, addr 0x5f25af8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanContainReferences();

  /// @brief Method get_HasRoot, addr 0x5f25ab8, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasRoot();

  /// @brief Method get_Helper, addr 0x5f257ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper* get_Helper();

  /// @brief Method get_IsBuiltInDataContract, addr 0x5f25854, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsBuiltInDataContract();

  /// @brief Method get_IsISerializable, addr 0x5f25a8c, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsISerializable();

  /// @brief Method get_IsPrimitive, addr 0x5f25b00, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPrimitive();

  /// @brief Method get_IsReference, addr 0x5f25a58, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsReference();

  /// @brief Method get_IsValueType, addr 0x5f25a40, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsValueType();

  /// @brief Method get_KnownDataContracts, addr 0x5f25a70, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_Name, addr 0x5f25aa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_Name();

  /// @brief Method get_Namespace, addr 0x5f25ab0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_Namespace();

  /// @brief Method get_OriginalUnderlyingType, addr 0x5f257b4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Type* get_OriginalUnderlyingType();

  /// @brief Method get_StableName, addr 0x5f21e10, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_StableName();

  /// @brief Method get_TopLevelElementName, addr 0x5f25ac0, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementName();

  /// @brief Method get_TopLevelElementNamespace, addr 0x5f25adc, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_TopLevelElementNamespace();

  /// @brief Method get_TypeForInitialization, addr 0x5f25870, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* get_TypeForInitialization();

  /// @brief Method get_UnderlyingType, addr 0x5f22f08, size 0x18, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16969 };

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
