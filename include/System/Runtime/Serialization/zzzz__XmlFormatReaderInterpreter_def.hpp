#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatReaderInterpreter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlFormatReaderInterpreter)
namespace System::Runtime::Serialization {
class ClassDataContract;
}
namespace System::Runtime::Serialization {
class CollectionDataContract;
}
namespace System::Runtime::Serialization {
class ExtensionDataObject;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerReadContext;
}
namespace System::Runtime::Serialization {
class XmlReaderDelegator;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlFormatReaderInterpreter;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatReaderInterpreter);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatReaderInterpreter
class CORDL_TYPE XmlFormatReaderInterpreter : public ::System::Object {
public:
  // Declarations
  /// @brief Field classContract, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_classContract, put = __cordl_internal_set_classContract)) ::System::Runtime::Serialization::ClassDataContract* classContract;

  /// @brief Field collectionContract, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionContract, put = __cordl_internal_set_collectionContract)) ::System::Runtime::Serialization::CollectionDataContract* collectionContract;

  /// @brief Field context, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context;

  /// @brief Field is_get_only_collection, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_is_get_only_collection, put = __cordl_internal_set_is_get_only_collection)) bool is_get_only_collection;

  /// @brief Field itemName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_itemName, put = __cordl_internal_set_itemName)) ::System::Xml::XmlDictionaryString* itemName;

  /// @brief Field itemNamespace, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_itemNamespace, put = __cordl_internal_set_itemNamespace)) ::System::Xml::XmlDictionaryString* itemNamespace;

  /// @brief Field memberNames, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNames, put = __cordl_internal_set_memberNames)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
      memberNames;

  /// @brief Field memberNamespaces, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNamespaces,
                      put = __cordl_internal_set_memberNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
      memberNamespaces;

  /// @brief Field objectLocal, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_objectLocal, put = __cordl_internal_set_objectLocal)) ::System::Object* objectLocal;

  /// @brief Field objectType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_objectType, put = __cordl_internal_set_objectType)) ::System::Type* objectType;

  /// @brief Field xmlReader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlReader, put = __cordl_internal_set_xmlReader)) ::System::Runtime::Serialization::XmlReaderDelegator* xmlReader;

  /// @brief Method CreateObject, addr 0x5fc8ab0, size 0x24c, virtual false, abstract: false, final false
  inline void CreateObject(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method GetRequiredMembers, addr 0x5fc9ff4, size 0xf0, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> GetRequiredMembers(::System::Runtime::Serialization::ClassDataContract* contract, ::ByRef<int32_t> firstRequiredMember);

  /// @brief Method GetRequiredMembers, addr 0x5fca8c8, size 0x110, virtual false, abstract: false, final false
  inline int32_t GetRequiredMembers(::System::Runtime::Serialization::ClassDataContract* contract, ::ArrayW<bool, ::Array<bool>*> requiredMembers);

  /// @brief Method HandleUnexpectedItemInCollection, addr 0x5fcb49c, size 0x7c, virtual false, abstract: false, final false
  inline void HandleUnexpectedItemInCollection(::ByRef<int32_t> iterator);

  /// @brief Method HasFactoryMethod, addr 0x5fc8e48, size 0x80, virtual false, abstract: false, final false
  inline bool HasFactoryMethod(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method InternalDeserialize, addr 0x5fca9d8, size 0x1fc, virtual false, abstract: false, final false
  inline ::System::Object* InternalDeserialize(::System::Type* type, ::StringW name, ::StringW ns);

  /// @brief Method InvokeFactoryMethod, addr 0x5fc9190, size 0x118, virtual false, abstract: false, final false
  inline bool InvokeFactoryMethod(::System::Runtime::Serialization::ClassDataContract* classContract, ::StringW objectId);

  /// @brief Method InvokeOnDeserialized, addr 0x5fc92a8, size 0x14c, virtual false, abstract: false, final false
  inline void InvokeOnDeserialized(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method InvokeOnDeserializing, addr 0x5fc8cfc, size 0x14c, virtual false, abstract: false, final false
  inline void InvokeOnDeserializing(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method IsEndElement, addr 0x5fcb478, size 0x24, virtual false, abstract: false, final false
  inline bool IsEndElement();

  /// @brief Method IsStartElement, addr 0x5fcb518, size 0x14, virtual false, abstract: false, final false
  inline bool IsStartElement();

  /// @brief Method IsStartElement, addr 0x5fcb114, size 0x14, virtual false, abstract: false, final false
  inline bool IsStartElement(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns);

  static inline ::System::Runtime::Serialization::XmlFormatReaderInterpreter* New_ctor(::System::Runtime::Serialization::ClassDataContract* classContract);

  static inline ::System::Runtime::Serialization::XmlFormatReaderInterpreter* New_ctor(::System::Runtime::Serialization::CollectionDataContract* collectionContract, bool isGetOnly);

  /// @brief Method ReadClass, addr 0x5fc9034, size 0x15c, virtual false, abstract: false, final false
  inline void ReadClass(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method ReadCollection, addr 0x5fc941c, size 0x844, virtual false, abstract: false, final false
  inline void ReadCollection(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method ReadCollectionFromXml, addr 0x5fc93f4, size 0x28, virtual false, abstract: false, final false
  inline ::System::Object* ReadCollectionFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                 ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                 ::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method ReadCollectionItem, addr 0x5fcb128, size 0x110, virtual false, abstract: false, final false
  inline ::System::Object* ReadCollectionItem(::System::Runtime::Serialization::CollectionDataContract* collectionContract, ::System::Type* itemType, ::StringW itemName, ::StringW itemNs);

  /// @brief Method ReadFromXml, addr 0x5fc87b4, size 0x2fc, virtual false, abstract: false, final false
  inline ::System::Object* ReadFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                       ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNames,
                                       ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNamespaces);

  /// @brief Method ReadGetOnlyCollection, addr 0x5fc9c74, size 0x23c, virtual false, abstract: false, final false
  inline void ReadGetOnlyCollection(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method ReadGetOnlyCollectionFromXml, addr 0x5fc9c60, size 0x14, virtual false, abstract: false, final false
  inline void ReadGetOnlyCollectionFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                           ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                           ::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method ReadISerializable, addr 0x5fc8ec8, size 0x16c, virtual false, abstract: false, final false
  inline void ReadISerializable(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method ReadMembers, addr 0x5fca0e4, size 0x224, virtual false, abstract: false, final false
  inline int32_t ReadMembers(int32_t index, ::System::Runtime::Serialization::ClassDataContract* classContract, ::ArrayW<bool, ::Array<bool>*> requiredMembers, ::ByRef<int32_t> memberIndex,
                             ::ByRef<int32_t> requiredIndex);

  /// @brief Method ReadMembers, addr 0x5fc9eb0, size 0x144, virtual false, abstract: false, final false
  inline void ReadMembers(::System::Runtime::Serialization::ClassDataContract* classContract, ::System::Runtime::Serialization::ExtensionDataObject* extensionData);

  /// @brief Method ReadValue, addr 0x5fca308, size 0x5c0, virtual false, abstract: false, final false
  inline ::System::Object* ReadValue(::System::Type* type, ::StringW name, ::StringW ns);

  /// @brief Method StoreCollectionValue, addr 0x5fcb238, size 0x240, virtual false, abstract: false, final false
  inline void StoreCollectionValue(::System::Object* collection, ::System::Type* valueType, ::System::Object* value, ::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method TryReadPrimitiveArray, addr 0x5fcadb8, size 0x35c, virtual false, abstract: false, final false
  inline bool TryReadPrimitiveArray(::System::Type* type, ::System::Type* itemType, int32_t size, ::ByRef<bool> readResult);

  /// @brief Method WrapNullableObject, addr 0x5fcabd4, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::Object* WrapNullableObject(::System::Type* innerType, ::System::Object* innerValue, ::System::Type* outerType, int32_t nullables);

  constexpr ::System::Runtime::Serialization::ClassDataContract* const& __cordl_internal_get_classContract() const;

  constexpr ::System::Runtime::Serialization::ClassDataContract*& __cordl_internal_get_classContract();

  constexpr ::System::Runtime::Serialization::CollectionDataContract* const& __cordl_internal_get_collectionContract() const;

  constexpr ::System::Runtime::Serialization::CollectionDataContract*& __cordl_internal_get_collectionContract();

  constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext* const& __cordl_internal_get_context() const;

  constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext*& __cordl_internal_get_context();

  constexpr bool const& __cordl_internal_get_is_get_only_collection() const;

  constexpr bool& __cordl_internal_get_is_get_only_collection();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_itemName() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_itemName();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_itemNamespace() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_itemNamespace();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& __cordl_internal_get_memberNames() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& __cordl_internal_get_memberNames();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& __cordl_internal_get_memberNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& __cordl_internal_get_memberNamespaces();

  constexpr ::System::Object* const& __cordl_internal_get_objectLocal() const;

  constexpr ::System::Object*& __cordl_internal_get_objectLocal();

  constexpr ::System::Type* const& __cordl_internal_get_objectType() const;

  constexpr ::System::Type*& __cordl_internal_get_objectType();

  constexpr ::System::Runtime::Serialization::XmlReaderDelegator* const& __cordl_internal_get_xmlReader() const;

  constexpr ::System::Runtime::Serialization::XmlReaderDelegator*& __cordl_internal_get_xmlReader();

  constexpr void __cordl_internal_set_classContract(::System::Runtime::Serialization::ClassDataContract* value);

  constexpr void __cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value);

  constexpr void __cordl_internal_set_context(::System::Runtime::Serialization::XmlObjectSerializerReadContext* value);

  constexpr void __cordl_internal_set_is_get_only_collection(bool value);

  constexpr void __cordl_internal_set_itemName(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_itemNamespace(::System::Xml::XmlDictionaryString* value);

  constexpr void __cordl_internal_set_memberNames(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  constexpr void __cordl_internal_set_memberNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  constexpr void __cordl_internal_set_objectLocal(::System::Object* value);

  constexpr void __cordl_internal_set_objectType(::System::Type* value);

  constexpr void __cordl_internal_set_xmlReader(::System::Runtime::Serialization::XmlReaderDelegator* value);

  /// @brief Method .ctor, addr 0x5fc87a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method .ctor, addr 0x5fc87a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::CollectionDataContract* collectionContract, bool isGetOnly);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatReaderInterpreter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatReaderInterpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatReaderInterpreter(XmlFormatReaderInterpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatReaderInterpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatReaderInterpreter(XmlFormatReaderInterpreter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17127 };

  /// @brief Field is_get_only_collection, offset: 0x10, size: 0x1, def value: None
  bool ___is_get_only_collection;

  /// @brief Field classContract, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::ClassDataContract* ___classContract;

  /// @brief Field collectionContract, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::CollectionDataContract* ___collectionContract;

  /// @brief Field objectLocal, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___objectLocal;

  /// @brief Field objectType, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ___objectType;

  /// @brief Field xmlReader, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlReaderDelegator* ___xmlReader;

  /// @brief Field context, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlObjectSerializerReadContext* ___context;

  /// @brief Field memberNames, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ___memberNames;

  /// @brief Field memberNamespaces, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ___memberNamespaces;

  /// @brief Field itemName, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___itemName;

  /// @brief Field itemNamespace, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___itemNamespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___is_get_only_collection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___classContract) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___collectionContract) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___objectLocal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___objectType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___xmlReader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___context) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___memberNames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___memberNamespaces) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___itemName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatReaderInterpreter, ___itemNamespace) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatReaderInterpreter, 0x68>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatReaderInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatReaderInterpreter*, "System.Runtime.Serialization", "XmlFormatReaderInterpreter");
