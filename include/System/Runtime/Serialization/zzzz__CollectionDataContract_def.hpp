#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CollectionDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__CollectionKind_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionDataContract)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
class CollectionDataContractAttribute;
}
namespace System::Runtime::Serialization {
class CollectionDataContract_CollectionDataContractCriticalHelper;
}
namespace System::Runtime::Serialization {
class CollectionDataContract_DictionaryEnumerator;
}
namespace System::Runtime::Serialization {
template <typename K, typename V> class CollectionDataContract_GenericDictionaryEnumerator_2;
}
namespace System::Runtime::Serialization {
struct CollectionKind;
}
namespace System::Runtime::Serialization {
class DataContractPairKey;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
template <typename K, typename V> struct KeyValue_2;
}
namespace System::Runtime::Serialization {
struct SerializationMode;
}
namespace System::Runtime::Serialization {
class XmlFormatCollectionReaderDelegate;
}
namespace System::Runtime::Serialization {
class XmlFormatCollectionWriterDelegate;
}
namespace System::Runtime::Serialization {
class XmlFormatGetOnlyCollectionReaderDelegate;
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
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class CollectionDataContract;
}
namespace System::Runtime::Serialization {
class CollectionDataContract_CollectionDataContractCriticalHelper;
}
namespace System::Runtime::Serialization {
class CollectionDataContract_DictionaryEnumerator;
}
namespace System::Runtime::Serialization {
template <typename K, typename V> class CollectionDataContract_GenericDictionaryEnumerator_2;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::CollectionDataContract);
MARK_REF_PTR_T(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper);
MARK_REF_PTR_T(::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator);
MARK_GEN_REF_PTR_T(::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2);
// Dependencies System.Runtime.Serialization.CollectionKind, System.Runtime.Serialization.DataContract::DataContractCriticalHelper
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.CollectionDataContract/CollectionDataContractCriticalHelper
class CORDL_TYPE CollectionDataContract_CollectionDataContractCriticalHelper : public ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper {
public:
  // Declarations
  __declspec(property(get = get_AddMethod)) ::System::Reflection::MethodInfo* AddMethod;

  __declspec(property(get = get_ChildElementNamespace, put = set_ChildElementNamespace)) ::System::Xml::XmlDictionaryString* ChildElementNamespace;

  __declspec(property(get = get_CollectionItemName)) ::System::Xml::XmlDictionaryString* CollectionItemName;

  __declspec(property(get = get_Constructor)) ::System::Reflection::ConstructorInfo* Constructor;

  __declspec(property(get = get_DeserializationExceptionMessage)) ::StringW DeserializationExceptionMessage;

  __declspec(property(get = get_GetEnumeratorMethod)) ::System::Reflection::MethodInfo* GetEnumeratorMethod;

  __declspec(property(get = get_InvalidCollectionInSharedContractMessage)) ::StringW InvalidCollectionInSharedContractMessage;

  __declspec(property(get = get_IsConstructorCheckRequired, put = set_IsConstructorCheckRequired)) bool IsConstructorCheckRequired;

  __declspec(property(get = get_IsDictionary)) bool IsDictionary;

  __declspec(property(get = get_IsItemTypeNullable)) bool IsItemTypeNullable;

  __declspec(property(get = get_ItemContract)) ::System::Runtime::Serialization::DataContract* ItemContract;

  __declspec(property(get = get_ItemName)) ::StringW ItemName;

  __declspec(property(get = get_ItemType)) ::System::Type* ItemType;

  __declspec(property(get = get_KeyName)) ::StringW KeyName;

  __declspec(property(get = get_Kind)) ::System::Runtime::Serialization::CollectionKind Kind;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  __declspec(property(get = get_SerializationExceptionMessage)) ::StringW SerializationExceptionMessage;

  __declspec(property(get = get_SharedTypeContract, put = set_SharedTypeContract)) ::System::Runtime::Serialization::DataContract* SharedTypeContract;

  __declspec(property(get = get_ValueName)) ::StringW ValueName;

  __declspec(property(get = get_XmlFormatGetOnlyCollectionReaderDelegate,
                      put = set_XmlFormatGetOnlyCollectionReaderDelegate)) ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* XmlFormatGetOnlyCollectionReaderDelegate;

  __declspec(property(get = get_XmlFormatReaderDelegate, put = set_XmlFormatReaderDelegate)) ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* XmlFormatReaderDelegate;

  __declspec(property(get = get_XmlFormatWriterDelegate, put = set_XmlFormatWriterDelegate)) ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* XmlFormatWriterDelegate;

  /// @brief Field _knownInterfaces, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__knownInterfaces, put = setStaticF__knownInterfaces)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> _knownInterfaces;

  /// @brief Field addMethod, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_addMethod, put = __cordl_internal_set_addMethod)) ::System::Reflection::MethodInfo* addMethod;

  /// @brief Field childElementNamespace, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_childElementNamespace, put = __cordl_internal_set_childElementNamespace)) ::System::Xml::XmlDictionaryString* childElementNamespace;

  /// @brief Field collectionItemName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionItemName, put = __cordl_internal_set_collectionItemName)) ::System::Xml::XmlDictionaryString* collectionItemName;

  /// @brief Field constructor, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_constructor, put = __cordl_internal_set_constructor)) ::System::Reflection::ConstructorInfo* constructor;

  /// @brief Field deserializationExceptionMessage, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_deserializationExceptionMessage, put = __cordl_internal_set_deserializationExceptionMessage)) ::StringW deserializationExceptionMessage;

  /// @brief Field getEnumeratorMethod, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_getEnumeratorMethod, put = __cordl_internal_set_getEnumeratorMethod)) ::System::Reflection::MethodInfo* getEnumeratorMethod;

  /// @brief Field invalidCollectionInSharedContractMessage, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_invalidCollectionInSharedContractMessage,
                      put = __cordl_internal_set_invalidCollectionInSharedContractMessage)) ::StringW invalidCollectionInSharedContractMessage;

  /// @brief Field isConstructorCheckRequired, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_isConstructorCheckRequired, put = __cordl_internal_set_isConstructorCheckRequired)) bool isConstructorCheckRequired;

  /// @brief Field isItemTypeNullable, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isItemTypeNullable, put = __cordl_internal_set_isItemTypeNullable)) bool isItemTypeNullable;

  /// @brief Field isKnownTypeAttributeChecked, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_isKnownTypeAttributeChecked, put = __cordl_internal_set_isKnownTypeAttributeChecked)) bool isKnownTypeAttributeChecked;

  /// @brief Field itemContract, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_itemContract, put = __cordl_internal_set_itemContract)) ::System::Runtime::Serialization::DataContract* itemContract;

  /// @brief Field itemName, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_itemName, put = __cordl_internal_set_itemName)) ::StringW itemName;

  /// @brief Field itemNameSetExplicit, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_itemNameSetExplicit, put = __cordl_internal_set_itemNameSetExplicit)) bool itemNameSetExplicit;

  /// @brief Field itemType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_itemType, put = __cordl_internal_set_itemType)) ::System::Type* itemType;

  /// @brief Field keyName, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_keyName, put = __cordl_internal_set_keyName)) ::StringW keyName;

  /// @brief Field kind, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_kind, put = __cordl_internal_set_kind)) ::System::Runtime::Serialization::CollectionKind kind;

  /// @brief Field knownDataContracts, offset 0x90, size 0x8
  __declspec(property(
      get = __cordl_internal_get_knownDataContracts,
      put =
          __cordl_internal_set_knownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* knownDataContracts;

  /// @brief Field serializationExceptionMessage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_serializationExceptionMessage, put = __cordl_internal_set_serializationExceptionMessage)) ::StringW serializationExceptionMessage;

  /// @brief Field sharedTypeContract, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_sharedTypeContract, put = __cordl_internal_set_sharedTypeContract)) ::System::Runtime::Serialization::DataContract* sharedTypeContract;

  /// @brief Field valueName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_valueName, put = __cordl_internal_set_valueName)) ::StringW valueName;

  /// @brief Field xmlFormatGetOnlyCollectionReaderDelegate, offset 0xe0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_xmlFormatGetOnlyCollectionReaderDelegate,
      put = __cordl_internal_set_xmlFormatGetOnlyCollectionReaderDelegate)) ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* xmlFormatGetOnlyCollectionReaderDelegate;

  /// @brief Field xmlFormatReaderDelegate, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlFormatReaderDelegate,
                      put = __cordl_internal_set_xmlFormatReaderDelegate)) ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* xmlFormatReaderDelegate;

  /// @brief Field xmlFormatWriterDelegate, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlFormatWriterDelegate,
                      put = __cordl_internal_set_xmlFormatWriterDelegate)) ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* xmlFormatWriterDelegate;

  /// @brief Method Init, addr 0x5f88c14, size 0x4b0, virtual false, abstract: false, final false
  inline void Init(::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType, ::System::Runtime::Serialization::CollectionDataContractAttribute* collectionContractAttribute);

  static inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* New_ctor(::System::Type* type);

  static inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* New_ctor(::System::Type* type, ::StringW invalidCollectionInSharedContractMessage);

  static inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* New_ctor(::System::Type* type,
                                                                                                                        ::System::Runtime::Serialization::DataContract* itemContract);

  static inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind,
                                                                                                                        ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                                                                                                                        ::System::Reflection::MethodInfo* addMethod,
                                                                                                                        ::System::Reflection::ConstructorInfo* constructor);

  static inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*
  New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
           ::System::Reflection::MethodInfo* addMethod, ::System::Reflection::ConstructorInfo* constructor, bool isConstructorCheckRequired);

  static inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind,
                                                                                                                        ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                                                                                                                        ::StringW serializationExceptionMessage,
                                                                                                                        ::StringW deserializationExceptionMessage);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_addMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_addMethod();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_childElementNamespace() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_childElementNamespace();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_collectionItemName() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_collectionItemName();

  constexpr ::System::Reflection::ConstructorInfo* const& __cordl_internal_get_constructor() const;

  constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get_constructor();

  constexpr ::StringW const& __cordl_internal_get_deserializationExceptionMessage() const;

  constexpr ::StringW& __cordl_internal_get_deserializationExceptionMessage();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_getEnumeratorMethod() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_getEnumeratorMethod();

  constexpr ::StringW const& __cordl_internal_get_invalidCollectionInSharedContractMessage() const;

  constexpr ::StringW& __cordl_internal_get_invalidCollectionInSharedContractMessage();

  constexpr bool const& __cordl_internal_get_isConstructorCheckRequired() const;

  constexpr bool& __cordl_internal_get_isConstructorCheckRequired();

  constexpr bool const& __cordl_internal_get_isItemTypeNullable() const;

  constexpr bool& __cordl_internal_get_isItemTypeNullable();

  constexpr bool const& __cordl_internal_get_isKnownTypeAttributeChecked() const;

  constexpr bool& __cordl_internal_get_isKnownTypeAttributeChecked();

  constexpr ::System::Runtime::Serialization::DataContract* const& __cordl_internal_get_itemContract() const;

  constexpr ::System::Runtime::Serialization::DataContract*& __cordl_internal_get_itemContract();

  constexpr ::StringW const& __cordl_internal_get_itemName() const;

  constexpr ::StringW& __cordl_internal_get_itemName();

  constexpr bool const& __cordl_internal_get_itemNameSetExplicit() const;

  constexpr bool& __cordl_internal_get_itemNameSetExplicit();

  constexpr ::System::Type* const& __cordl_internal_get_itemType() const;

  constexpr ::System::Type*& __cordl_internal_get_itemType();

  constexpr ::StringW const& __cordl_internal_get_keyName() const;

  constexpr ::StringW& __cordl_internal_get_keyName();

  constexpr ::System::Runtime::Serialization::CollectionKind const& __cordl_internal_get_kind() const;

  constexpr ::System::Runtime::Serialization::CollectionKind& __cordl_internal_get_kind();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const& __cordl_internal_get_knownDataContracts() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*& __cordl_internal_get_knownDataContracts();

  constexpr ::StringW const& __cordl_internal_get_serializationExceptionMessage() const;

  constexpr ::StringW& __cordl_internal_get_serializationExceptionMessage();

  constexpr ::System::Runtime::Serialization::DataContract* const& __cordl_internal_get_sharedTypeContract() const;

  constexpr ::System::Runtime::Serialization::DataContract*& __cordl_internal_get_sharedTypeContract();

  constexpr ::StringW const& __cordl_internal_get_valueName() const;

  constexpr ::StringW& __cordl_internal_get_valueName();

  constexpr ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* const& __cordl_internal_get_xmlFormatGetOnlyCollectionReaderDelegate() const;

  constexpr ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*& __cordl_internal_get_xmlFormatGetOnlyCollectionReaderDelegate();

  constexpr ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* const& __cordl_internal_get_xmlFormatReaderDelegate() const;

  constexpr ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*& __cordl_internal_get_xmlFormatReaderDelegate();

  constexpr ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* const& __cordl_internal_get_xmlFormatWriterDelegate() const;

  constexpr ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*& __cordl_internal_get_xmlFormatWriterDelegate();

  constexpr void __cordl_internal_set_addMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_childElementNamespace(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_collectionItemName(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_constructor(::System::Reflection::ConstructorInfo* value);

  constexpr void __cordl_internal_set_deserializationExceptionMessage(::StringW value);

  constexpr void __cordl_internal_set_getEnumeratorMethod(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_invalidCollectionInSharedContractMessage(::StringW value);

  constexpr void __cordl_internal_set_isConstructorCheckRequired(bool value);

  constexpr void __cordl_internal_set_isItemTypeNullable(bool value);

  constexpr void __cordl_internal_set_isKnownTypeAttributeChecked(bool value);

  constexpr void __cordl_internal_set_itemContract(::System::Runtime::Serialization::DataContract* value);

  constexpr void __cordl_internal_set_itemName(::StringW value);

  constexpr void __cordl_internal_set_itemNameSetExplicit(bool value);

  constexpr void __cordl_internal_set_itemType(::System::Type* value);

  constexpr void __cordl_internal_set_keyName(::StringW value);

  constexpr void __cordl_internal_set_kind(::System::Runtime::Serialization::CollectionKind value);

  constexpr void __cordl_internal_set_knownDataContracts(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value);

  constexpr void __cordl_internal_set_serializationExceptionMessage(::StringW value);

  constexpr void __cordl_internal_set_sharedTypeContract(::System::Runtime::Serialization::DataContract* value);

  constexpr void __cordl_internal_set_valueName(::StringW value);

  constexpr void __cordl_internal_set_xmlFormatGetOnlyCollectionReaderDelegate(::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* value);

  constexpr void __cordl_internal_set_xmlFormatReaderDelegate(::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* value);

  constexpr void __cordl_internal_set_xmlFormatWriterDelegate(::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* value);

  /// @brief Method .ctor, addr 0x5f89464, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x5f89df0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW invalidCollectionInSharedContractMessage);

  /// @brief Method .ctor, addr 0x5f89828, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::DataContract* itemContract);

  /// @brief Method .ctor, addr 0x5f89cd8, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                    ::System::Reflection::MethodInfo* addMethod, ::System::Reflection::ConstructorInfo* constructor);

  /// @brief Method .ctor, addr 0x5f89dcc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                    ::System::Reflection::MethodInfo* addMethod, ::System::Reflection::ConstructorInfo* constructor, bool isConstructorCheckRequired);

  /// @brief Method .ctor, addr 0x5f89a34, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                    ::StringW serializationExceptionMessage, ::StringW deserializationExceptionMessage);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF__knownInterfaces();

  /// @brief Method get_AddMethod, addr 0x5f8a178, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_AddMethod();

  /// @brief Method get_ChildElementNamespace, addr 0x5f8a158, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_ChildElementNamespace();

  /// @brief Method get_CollectionItemName, addr 0x5f8a130, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_CollectionItemName();

  /// @brief Method get_Constructor, addr 0x5f8a180, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* get_Constructor();

  /// @brief Method get_DeserializationExceptionMessage, addr 0x5f8a150, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DeserializationExceptionMessage();

  /// @brief Method get_GetEnumeratorMethod, addr 0x5f8a170, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_GetEnumeratorMethod();

  /// @brief Method get_InvalidCollectionInSharedContractMessage, addr 0x5f8a348, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InvalidCollectionInSharedContractMessage();

  /// @brief Method get_IsConstructorCheckRequired, addr 0x5f8a120, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsConstructorCheckRequired();

  /// @brief Method get_IsDictionary, addr 0x5f8a068, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsDictionary();

  /// @brief Method get_IsItemTypeNullable, addr 0x5f8a168, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsItemTypeNullable();

  /// @brief Method get_ItemContract, addr 0x5f89e88, size 0x1e0, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* get_ItemContract();

  /// @brief Method get_ItemName, addr 0x5f8a118, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ItemName();

  /// @brief Method get_ItemType, addr 0x5f89e80, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ItemType();

  /// @brief Method get_KeyName, addr 0x5f8a138, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_KeyName();

  /// @brief Method get_Kind, addr 0x5f89e78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::CollectionKind get_Kind();

  /// @brief Method get_KnownDataContracts, addr 0x5f8a188, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_KnownInterfaces, addr 0x5f881e4, size 0x250, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_KnownInterfaces();

  /// @brief Method get_SerializationExceptionMessage, addr 0x5f8a148, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SerializationExceptionMessage();

  /// @brief Method get_SharedTypeContract, addr 0x5f8a108, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* get_SharedTypeContract();

  /// @brief Method get_ValueName, addr 0x5f8a140, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ValueName();

  /// @brief Method get_XmlFormatGetOnlyCollectionReaderDelegate, addr 0x5f8a370, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* get_XmlFormatGetOnlyCollectionReaderDelegate();

  /// @brief Method get_XmlFormatReaderDelegate, addr 0x5f8a360, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* get_XmlFormatReaderDelegate();

  /// @brief Method get_XmlFormatWriterDelegate, addr 0x5f8a350, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* get_XmlFormatWriterDelegate();

  static inline void setStaticF__knownInterfaces(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method set_ChildElementNamespace, addr 0x5f8a160, size 0x8, virtual false, abstract: false, final false
  inline void set_ChildElementNamespace(::System::Xml::XmlDictionaryString* value);

  /// @brief Method set_IsConstructorCheckRequired, addr 0x5f8a128, size 0x8, virtual false, abstract: false, final false
  inline void set_IsConstructorCheckRequired(bool value);

  /// @brief Method set_SharedTypeContract, addr 0x5f8a110, size 0x8, virtual false, abstract: false, final false
  inline void set_SharedTypeContract(::System::Runtime::Serialization::DataContract* value);

  /// @brief Method set_XmlFormatGetOnlyCollectionReaderDelegate, addr 0x5f8a378, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlFormatGetOnlyCollectionReaderDelegate(::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* value);

  /// @brief Method set_XmlFormatReaderDelegate, addr 0x5f8a368, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlFormatReaderDelegate(::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* value);

  /// @brief Method set_XmlFormatWriterDelegate, addr 0x5f8a358, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlFormatWriterDelegate(::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionDataContract_CollectionDataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContract_CollectionDataContractCriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionDataContract_CollectionDataContractCriticalHelper(CollectionDataContract_CollectionDataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContract_CollectionDataContractCriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionDataContract_CollectionDataContractCriticalHelper(CollectionDataContract_CollectionDataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16976 };

  /// @brief Field itemType, offset: 0x48, size: 0x8, def value: None
  ::System::Type* ___itemType;

  /// @brief Field isItemTypeNullable, offset: 0x50, size: 0x1, def value: None
  bool ___isItemTypeNullable;

  /// @brief Field kind, offset: 0x51, size: 0x1, def value: None
  ::System::Runtime::Serialization::CollectionKind ___kind;

  /// @brief Field getEnumeratorMethod, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___getEnumeratorMethod;

  /// @brief Field addMethod, offset: 0x60, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___addMethod;

  /// @brief Field constructor, offset: 0x68, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___constructor;

  /// @brief Field serializationExceptionMessage, offset: 0x70, size: 0x8, def value: None
  ::StringW ___serializationExceptionMessage;

  /// @brief Field deserializationExceptionMessage, offset: 0x78, size: 0x8, def value: None
  ::StringW ___deserializationExceptionMessage;

  /// @brief Field itemContract, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContract* ___itemContract;

  /// @brief Field sharedTypeContract, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContract* ___sharedTypeContract;

  /// @brief Field knownDataContracts, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* ___knownDataContracts;

  /// @brief Field isKnownTypeAttributeChecked, offset: 0x98, size: 0x1, def value: None
  bool ___isKnownTypeAttributeChecked;

  /// @brief Field itemName, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___itemName;

  /// @brief Field itemNameSetExplicit, offset: 0xa8, size: 0x1, def value: None
  bool ___itemNameSetExplicit;

  /// @brief Field collectionItemName, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___collectionItemName;

  /// @brief Field keyName, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___keyName;

  /// @brief Field valueName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___valueName;

  /// @brief Field childElementNamespace, offset: 0xc8, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___childElementNamespace;

  /// @brief Field invalidCollectionInSharedContractMessage, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___invalidCollectionInSharedContractMessage;

  /// @brief Field xmlFormatReaderDelegate, offset: 0xd8, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* ___xmlFormatReaderDelegate;

  /// @brief Field xmlFormatGetOnlyCollectionReaderDelegate, offset: 0xe0, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* ___xmlFormatGetOnlyCollectionReaderDelegate;

  /// @brief Field xmlFormatWriterDelegate, offset: 0xe8, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* ___xmlFormatWriterDelegate;

  /// @brief Field isConstructorCheckRequired, offset: 0xf0, size: 0x1, def value: None
  bool ___isConstructorCheckRequired;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___itemType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___isItemTypeNullable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___kind) == 0x51, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___getEnumeratorMethod) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___addMethod) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___constructor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___serializationExceptionMessage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___deserializationExceptionMessage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___itemContract) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___sharedTypeContract) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___knownDataContracts) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___isKnownTypeAttributeChecked) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___itemName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___itemNameSetExplicit) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___collectionItemName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___keyName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___valueName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___childElementNamespace) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___invalidCollectionInSharedContractMessage) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___xmlFormatReaderDelegate) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___xmlFormatGetOnlyCollectionReaderDelegate) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___xmlFormatWriterDelegate) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, ___isConstructorCheckRequired) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper, 0xf8>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.CollectionDataContract/DictionaryEnumerator
class CORDL_TYPE CollectionDataContract_DictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator)) ::System::Collections::IDictionaryEnumerator* enumerator;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*,::System::Object*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5f8a388, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x5f8a38c, size 0xa4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator* New_ctor(::System::Collections::IDictionaryEnumerator* enumerator);

  /// @brief Method Reset, addr 0x5f8a5c4, size 0xa8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f8a55c, size 0x68, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Collections::IDictionaryEnumerator* const& __cordl_internal_get_enumerator() const;

  constexpr ::System::Collections::IDictionaryEnumerator*& __cordl_internal_get_enumerator();

  constexpr void __cordl_internal_set_enumerator(::System::Collections::IDictionaryEnumerator* value);

  /// @brief Method .ctor, addr 0x5f8a380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionaryEnumerator* enumerator);

  /// @brief Method get_Current, addr 0x5f8a430, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*,::System::Object*>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*>>*
  i___System__Collections__Generic__IEnumerator_1___System__Runtime__Serialization__KeyValue_2___System__Object____System__Object___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionDataContract_DictionaryEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContract_DictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionDataContract_DictionaryEnumerator(CollectionDataContract_DictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContract_DictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionDataContract_DictionaryEnumerator(CollectionDataContract_DictionaryEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16977 };

  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionaryEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator, ___enumerator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// cpp template
template <typename K, typename V>
// Is value type: false
// CS Name: System.Runtime.Serialization.CollectionDataContract/GenericDictionaryEnumerator`2<K,V>
class CORDL_TYPE CollectionDataContract_GenericDictionaryEnumerator_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Runtime::Serialization::KeyValue_2<K, V> Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator,
                      put = __cordl_internal_set_enumerator)) ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>* enumerator;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K,V>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K, V>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>* const& __cordl_internal_get_enumerator() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*& __cordl_internal_get_enumerator();

  constexpr void __cordl_internal_set_enumerator(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>* value);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Runtime::Serialization::KeyValue_2<K, V> get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K,V>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K, V>>*
  i___System__Collections__Generic__IEnumerator_1___System__Runtime__Serialization__KeyValue_2_K_V__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionDataContract_GenericDictionaryEnumerator_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContract_GenericDictionaryEnumerator_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionDataContract_GenericDictionaryEnumerator_2(CollectionDataContract_GenericDictionaryEnumerator_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContract_GenericDictionaryEnumerator_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionDataContract_GenericDictionaryEnumerator_2(CollectionDataContract_GenericDictionaryEnumerator_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16978 };

  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.CollectionDataContract
class CORDL_TYPE CollectionDataContract : public ::System::Runtime::Serialization::DataContract {
public:
  // Declarations
  using CollectionDataContractCriticalHelper = ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper;

  using DictionaryEnumerator = ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator;

  template <typename K, typename V> using GenericDictionaryEnumerator_2 = ::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>;

  __declspec(property(get = get_AddMethod)) ::System::Reflection::MethodInfo* AddMethod;

  __declspec(property(get = get_ChildElementNamespace)) ::System::Xml::XmlDictionaryString* ChildElementNamespace;

  __declspec(property(get = get_CollectionItemName)) ::System::Xml::XmlDictionaryString* CollectionItemName;

  __declspec(property(get = get_Constructor)) ::System::Reflection::ConstructorInfo* Constructor;

  __declspec(property(get = get_DeserializationExceptionMessage)) ::StringW DeserializationExceptionMessage;

  __declspec(property(get = get_GetEnumeratorMethod)) ::System::Reflection::MethodInfo* GetEnumeratorMethod;

  __declspec(property(get = get_InvalidCollectionInSharedContractMessage)) ::StringW InvalidCollectionInSharedContractMessage;

  __declspec(property(get = get_IsConstructorCheckRequired, put = set_IsConstructorCheckRequired)) bool IsConstructorCheckRequired;

  __declspec(property(get = get_IsDictionary)) bool IsDictionary;

  __declspec(property(get = get_IsItemTypeNullable)) bool IsItemTypeNullable;

  __declspec(property(get = get_IsReadOnlyContract)) bool IsReadOnlyContract;

  __declspec(property(get = get_ItemContract)) ::System::Runtime::Serialization::DataContract* ItemContract;

  __declspec(property(get = get_ItemName)) ::StringW ItemName;

  __declspec(property(get = get_ItemType)) ::System::Type* ItemType;

  __declspec(property(get = get_KeyName)) ::StringW KeyName;

  __declspec(property(get = get_Kind)) ::System::Runtime::Serialization::CollectionKind Kind;

  __declspec(property(get =
                          get_KnownDataContracts)) ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* KnownDataContracts;

  __declspec(property(get = get_SerializationExceptionMessage)) ::StringW SerializationExceptionMessage;

  __declspec(property(get = get_SharedTypeContract)) ::System::Runtime::Serialization::DataContract* SharedTypeContract;

  __declspec(property(get = get_XmlFormatGetOnlyCollectionReaderDelegate)) ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* XmlFormatGetOnlyCollectionReaderDelegate;

  __declspec(property(get = get_XmlFormatReaderDelegate)) ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* XmlFormatReaderDelegate;

  __declspec(property(get = get_XmlFormatWriterDelegate)) ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* XmlFormatWriterDelegate;

  /// @brief Field childElementNamespace, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_childElementNamespace, put = __cordl_internal_set_childElementNamespace)) ::System::Xml::XmlDictionaryString* childElementNamespace;

  /// @brief Field collectionItemName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionItemName, put = __cordl_internal_set_collectionItemName)) ::System::Xml::XmlDictionaryString* collectionItemName;

  /// @brief Field helper, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* helper;

  /// @brief Field itemContract, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_itemContract, put = __cordl_internal_set_itemContract)) ::System::Runtime::Serialization::DataContract* itemContract;

  /// @brief Method CheckConstructor, addr 0x5f87d54, size 0x11c, virtual false, abstract: false, final false
  inline void CheckConstructor();

  /// @brief Method Equals, addr 0x5f87eb0, size 0x198, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts);

  /// @brief Method FindCollectionMethodsOnInterface, addr 0x5f87a44, size 0x160, virtual false, abstract: false, final false
  static inline void FindCollectionMethodsOnInterface(::System::Type* type, ::System::Type* interfaceType, ::ByRef<::System::Reflection::MethodInfo*> addMethod,
                                                      ::ByRef<::System::Reflection::MethodInfo*> getEnumeratorMethod);

  /// @brief Method GetCollectionMethods, addr 0x5f875fc, size 0x33c, virtual false, abstract: false, final false
  static inline void GetCollectionMethods(::System::Type* type, ::System::Type* interfaceType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> addMethodTypeArray, bool addMethodOnInterface,
                                          ::ByRef<::System::Reflection::MethodInfo*> getEnumeratorMethod, ::ByRef<::System::Reflection::MethodInfo*> addMethod);

  /// @brief Method GetHashCode, addr 0x5f88048, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInvalidCollectionMessage, addr 0x5f87938, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW GetInvalidCollectionMessage(::StringW message, ::StringW nestedMessage, ::StringW param);

  /// @brief Method GetReadOnlyCollectionExceptionMessages, addr 0x5f8743c, size 0x1c0, virtual false, abstract: false, final false
  static inline void GetReadOnlyCollectionExceptionMessages(::System::Type* type, bool hasCollectionDataContract, ::StringW message, ::StringW param, ::ByRef<::StringW> serializationExceptionMessage,
                                                            ::ByRef<::StringW> deserializationExceptionMessage);

  /// @brief Method GetSharedTypeContract, addr 0x5f851a4, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetSharedTypeContract(::System::Type* type);

  /// @brief Method GetTargetMethodWithName, addr 0x5f87034, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetTargetMethodWithName(::StringW name, ::System::Type* type, ::System::Type* interfaceType);

  /// @brief Method GetValidContract, addr 0x5f87d24, size 0x30, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetValidContract();

  /// @brief Method GetValidContract, addr 0x5f87c70, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* GetValidContract(::System::Runtime::Serialization::SerializationMode mode);

  /// @brief Method HandleIfInvalidCollection, addr 0x5f871b8, size 0x20c, virtual false, abstract: false, final false
  static inline bool HandleIfInvalidCollection(::System::Type* type, bool tryCreate, bool hasCollectionDataContract, bool createContractWithException, ::StringW message, ::StringW param,
                                               ::ByRef<::System::Runtime::Serialization::DataContract*> dataContract);

  /// @brief Method InitCollectionDataContract, addr 0x5f84f8c, size 0xc4, virtual false, abstract: false, final false
  inline void InitCollectionDataContract(::System::Runtime::Serialization::DataContract* sharedTypeContract);

  /// @brief Method IsArraySegment, addr 0x5f87104, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsArraySegment(::System::Type* t);

  /// @brief Method IsCollection, addr 0x5f85dac, size 0x20, virtual false, abstract: false, final false
  static inline bool IsCollection(::System::Type* type);

  /// @brief Method IsCollection, addr 0x5f84050, size 0x20, virtual false, abstract: false, final false
  static inline bool IsCollection(::System::Type* type, bool constructorRequired, bool skipIfReadOnlyContract);

  /// @brief Method IsCollection, addr 0x5f85dcc, size 0xc, virtual false, abstract: false, final false
  static inline bool IsCollection(::System::Type* type, ::ByRef<::System::Type*> itemType);

  /// @brief Method IsCollectionDataContract, addr 0x5f873c4, size 0x78, virtual false, abstract: false, final false
  static inline bool IsCollectionDataContract(::System::Type* type);

  /// @brief Method IsCollectionHelper, addr 0x5f85dd8, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsCollectionHelper(::System::Type* type, ::ByRef<::System::Type*> itemType, bool constructorRequired, bool skipIfReadOnlyContract);

  /// @brief Method IsCollectionInterface, addr 0x5f81654, size 0xe8, virtual false, abstract: false, final false
  static inline bool IsCollectionInterface(::System::Type* type);

  /// @brief Method IsCollectionOrTryCreate, addr 0x5f85e74, size 0x10e4, virtual false, abstract: false, final false
  static inline bool IsCollectionOrTryCreate(::System::Type* type, bool tryCreate, ::ByRef<::System::Runtime::Serialization::DataContract*> dataContract, ::ByRef<::System::Type*> itemType,
                                             bool constructorRequired, bool skipIfReadOnlyContract);

  /// @brief Method IsKnownInterface, addr 0x5f87ba4, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsKnownInterface(::System::Type* type);

  /// @brief Method IsValidContract, addr 0x5f87e70, size 0x40, virtual true, abstract: false, final false
  inline bool IsValidContract(::System::Runtime::Serialization::SerializationMode mode);

  static inline ::System::Runtime::Serialization::CollectionDataContract* New_ctor(::System::Type* type);

  static inline ::System::Runtime::Serialization::CollectionDataContract* New_ctor(::System::Type* type, ::StringW invalidCollectionInSharedContractMessage);

  static inline ::System::Runtime::Serialization::CollectionDataContract* New_ctor(::System::Type* type, ::System::Runtime::Serialization::DataContract* itemContract);

  static inline ::System::Runtime::Serialization::CollectionDataContract* New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                                   ::System::Reflection::MethodInfo* getEnumeratorMethod, ::System::Reflection::MethodInfo* addMethod,
                                                                                   ::System::Reflection::ConstructorInfo* constructor);

  static inline ::System::Runtime::Serialization::CollectionDataContract* New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                                   ::System::Reflection::MethodInfo* getEnumeratorMethod, ::System::Reflection::MethodInfo* addMethod,
                                                                                   ::System::Reflection::ConstructorInfo* constructor, bool isConstructorCheckRequired);

  static inline ::System::Runtime::Serialization::CollectionDataContract* New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                                   ::System::Reflection::MethodInfo* getEnumeratorMethod, ::StringW serializationExceptionMessage,
                                                                                   ::StringW deserializationExceptionMessage);

  /// @brief Method ReadXmlValue, addr 0x5f880d0, size 0x114, virtual true, abstract: false, final false
  inline ::System::Object* ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context);

  /// @brief Method ThrowIfInvalid, addr 0x5f87cbc, size 0x68, virtual false, abstract: false, final false
  inline void ThrowIfInvalid();

  /// @brief Method TryCreate, addr 0x5f86f58, size 0x28, virtual false, abstract: false, final false
  static inline bool TryCreate(::System::Type* type, ::ByRef<::System::Runtime::Serialization::DataContract*> dataContract);

  /// @brief Method TryCreateGetOnlyCollectionDataContract, addr 0x5f86f80, size 0xb4, virtual false, abstract: false, final false
  static inline bool TryCreateGetOnlyCollectionDataContract(::System::Type* type, ::ByRef<::System::Runtime::Serialization::DataContract*> dataContract);

  /// @brief Method WriteXmlValue, addr 0x5f8805c, size 0x74, virtual true, abstract: false, final false
  inline void WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context);

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_childElementNamespace() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_childElementNamespace();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_collectionItemName() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_collectionItemName();

  constexpr ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr ::System::Runtime::Serialization::DataContract* const& __cordl_internal_get_itemContract() const;

  constexpr ::System::Runtime::Serialization::DataContract*& __cordl_internal_get_itemContract();

  constexpr void __cordl_internal_set_childElementNamespace(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_collectionItemName(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* value);

  constexpr void __cordl_internal_set_itemContract(::System::Runtime::Serialization::DataContract* value);

  /// @brief Method .ctor, addr 0x5f84f08, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x5f85448, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW invalidCollectionInSharedContractMessage);

  /// @brief Method .ctor, addr 0x5f85050, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::DataContract* itemContract);

  /// @brief Method .ctor, addr 0x5f852b0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                    ::System::Reflection::MethodInfo* addMethod, ::System::Reflection::ConstructorInfo* constructor);

  /// @brief Method .ctor, addr 0x5f85378, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                    ::System::Reflection::MethodInfo* addMethod, ::System::Reflection::ConstructorInfo* constructor, bool isConstructorCheckRequired);

  /// @brief Method .ctor, addr 0x5f850dc, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                    ::StringW serializationExceptionMessage, ::StringW deserializationExceptionMessage);

  /// @brief Method get_AddMethod, addr 0x5f85768, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_AddMethod();

  /// @brief Method get_ChildElementNamespace, addr 0x5f85598, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_ChildElementNamespace();

  /// @brief Method get_CollectionItemName, addr 0x5f85558, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_CollectionItemName();

  /// @brief Method get_Constructor, addr 0x5f85780, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* get_Constructor();

  /// @brief Method get_DeserializationExceptionMessage, addr 0x5f857e4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_DeserializationExceptionMessage();

  /// @brief Method get_GetEnumeratorMethod, addr 0x5f85750, size 0x18, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_GetEnumeratorMethod();

  /// @brief Method get_InvalidCollectionInSharedContractMessage, addr 0x5f857b4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_InvalidCollectionInSharedContractMessage();

  /// @brief Method get_IsConstructorCheckRequired, addr 0x5f8571c, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsConstructorCheckRequired();

  /// @brief Method get_IsDictionary, addr 0x5f85578, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsDictionary();

  /// @brief Method get_IsItemTypeNullable, addr 0x5f85704, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsItemTypeNullable();

  /// @brief Method get_IsReadOnlyContract, addr 0x5f857fc, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsReadOnlyContract();

  /// @brief Method get_ItemContract, addr 0x5f85518, size 0x28, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* get_ItemContract();

  /// @brief Method get_ItemName, addr 0x5f85540, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_ItemName();

  /// @brief Method get_ItemType, addr 0x5f85500, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* get_ItemType();

  /// @brief Method get_KeyName, addr 0x5f85560, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_KeyName();

  /// @brief Method get_Kind, addr 0x5f854e8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::CollectionKind get_Kind();

  /// @brief Method get_KnownDataContracts, addr 0x5f85798, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* get_KnownDataContracts();

  /// @brief Method get_KnownInterfaces, addr 0x5f854e0, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_KnownInterfaces();

  /// @brief Method get_SerializationExceptionMessage, addr 0x5f857cc, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_SerializationExceptionMessage();

  /// @brief Method get_SharedTypeContract, addr 0x5f8239c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::DataContract* get_SharedTypeContract();

  /// @brief Method get_XmlFormatGetOnlyCollectionReaderDelegate, addr 0x5f85b04, size 0x2a8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* get_XmlFormatGetOnlyCollectionReaderDelegate();

  /// @brief Method get_XmlFormatReaderDelegate, addr 0x5f85984, size 0x180, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* get_XmlFormatReaderDelegate();

  /// @brief Method get_XmlFormatWriterDelegate, addr 0x5f8581c, size 0x168, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* get_XmlFormatWriterDelegate();

  /// @brief Method set_IsConstructorCheckRequired, addr 0x5f85734, size 0x1c, virtual false, abstract: false, final false
  inline void set_IsConstructorCheckRequired(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionDataContract(CollectionDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionDataContract(CollectionDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16979 };

  /// @brief Field collectionItemName, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___collectionItemName;

  /// @brief Field childElementNamespace, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___childElementNamespace;

  /// @brief Field itemContract, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContract* ___itemContract;

  /// @brief Field helper, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract, ___collectionItemName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract, ___childElementNamespace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract, ___itemContract) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::CollectionDataContract, ___helper) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CollectionDataContract, 0x48>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::CollectionDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CollectionDataContract*, "System.Runtime.Serialization", "CollectionDataContract");
NEED_NO_BOX(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*, "System.Runtime.Serialization",
                       "CollectionDataContract/CollectionDataContractCriticalHelper");
NEED_NO_BOX(::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*, "System.Runtime.Serialization", "CollectionDataContract/DictionaryEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2, "System.Runtime.Serialization",
                                     "CollectionDataContract/GenericDictionaryEnumerator`2");
