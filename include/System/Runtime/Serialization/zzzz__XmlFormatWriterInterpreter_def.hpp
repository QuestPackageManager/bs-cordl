#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatWriterInterpreter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlFormatWriterInterpreter)
namespace System::Reflection {
class MemberInfo;
}
namespace System::Runtime::Serialization {
class ClassDataContract;
}
namespace System::Runtime::Serialization {
class CollectionDataContract;
}
namespace System::Runtime::Serialization {
class DataContract;
}
namespace System::Runtime::Serialization {
class DataMember;
}
namespace System::Runtime::Serialization {
class ExtensionDataObject;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterInterpreter___c__DisplayClass24_0;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterInterpreter___c__DisplayClass25_0;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterInterpreter___c__DisplayClass33_0;
}
namespace System::Runtime::Serialization {
class XmlObjectSerializerWriteContext;
}
namespace System::Runtime::Serialization {
class XmlWriterDelegator;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class XmlFormatWriterInterpreter;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterInterpreter___c__DisplayClass24_0;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterInterpreter___c__DisplayClass25_0;
}
namespace System::Runtime::Serialization {
class XmlFormatWriterInterpreter___c__DisplayClass33_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatWriterInterpreter);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass24_0);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass25_0);
MARK_REF_PTR_T(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass33_0);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatWriterInterpreter/<>c__DisplayClass24_0
class CORDL_TYPE XmlFormatWriterInterpreter___c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field currentValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentValue, put = __cordl_internal_set_currentValue)) ::System::Object* currentValue;

  static inline ::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass24_0* New_ctor();

  /// @brief Method <WriteCollection>b__1, addr 0x5f67494, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* _WriteCollection_b__1();

  constexpr ::System::Object* const& __cordl_internal_get_currentValue() const;

  constexpr ::System::Object*& __cordl_internal_get_currentValue();

  constexpr void __cordl_internal_set_currentValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x5f66ba0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatWriterInterpreter___c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterInterpreter___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatWriterInterpreter___c__DisplayClass24_0(XmlFormatWriterInterpreter___c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterInterpreter___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatWriterInterpreter___c__DisplayClass24_0(XmlFormatWriterInterpreter___c__DisplayClass24_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17114 };

  /// @brief Field currentValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___currentValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass24_0, ___currentValue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass24_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatWriterInterpreter/<>c__DisplayClass25_0
class CORDL_TYPE XmlFormatWriterInterpreter___c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field memberValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_memberValue, put = __cordl_internal_set_memberValue)) ::System::Object* memberValue;

  static inline ::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass25_0* New_ctor();

  /// @brief Method <WriteMembers>b__0, addr 0x5f6749c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* _WriteMembers_b__0();

  constexpr ::System::Object* const& __cordl_internal_get_memberValue() const;

  constexpr ::System::Object*& __cordl_internal_get_memberValue();

  constexpr void __cordl_internal_set_memberValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x5f66ba4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatWriterInterpreter___c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterInterpreter___c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatWriterInterpreter___c__DisplayClass25_0(XmlFormatWriterInterpreter___c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterInterpreter___c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatWriterInterpreter___c__DisplayClass25_0(XmlFormatWriterInterpreter___c__DisplayClass25_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17115 };

  /// @brief Field memberValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___memberValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass25_0, ___memberValue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass25_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatWriterInterpreter/<>c__DisplayClass33_0
class CORDL_TYPE XmlFormatWriterInterpreter___c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field memberValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_memberValue, put = __cordl_internal_set_memberValue)) ::System::Object* memberValue;

  static inline ::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass33_0* New_ctor();

  /// @brief Method <WriteValue>b__0, addr 0x5f674a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* _WriteValue_b__0();

  constexpr ::System::Object* const& __cordl_internal_get_memberValue() const;

  constexpr ::System::Object*& __cordl_internal_get_memberValue();

  constexpr void __cordl_internal_set_memberValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x5f67098, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatWriterInterpreter___c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterInterpreter___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatWriterInterpreter___c__DisplayClass33_0(XmlFormatWriterInterpreter___c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterInterpreter___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatWriterInterpreter___c__DisplayClass33_0(XmlFormatWriterInterpreter___c__DisplayClass33_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17116 };

  /// @brief Field memberValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___memberValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass33_0, ___memberValue) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass33_0, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XmlFormatWriterInterpreter
class CORDL_TYPE XmlFormatWriterInterpreter : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass24_0 = ::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass24_0;

  using __c__DisplayClass25_0 = ::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass25_0;

  using __c__DisplayClass33_0 = ::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass33_0;

  /// @brief Field childElementIndex, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_childElementIndex, put = __cordl_internal_set_childElementIndex)) int32_t childElementIndex;

  /// @brief Field childElementNamespaces, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_childElementNamespaces,
                      put = __cordl_internal_set_childElementNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
      childElementNamespaces;

  /// @brief Field classContract, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_classContract, put = __cordl_internal_set_classContract)) ::System::Runtime::Serialization::ClassDataContract* classContract;

  __declspec(property(get = get_classDataContract)) ::System::Runtime::Serialization::ClassDataContract* classDataContract;

  /// @brief Field collectionContract, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_collectionContract, put = __cordl_internal_set_collectionContract)) ::System::Runtime::Serialization::CollectionDataContract* collectionContract;

  __declspec(property(get = get_collectionDataContract)) ::System::Runtime::Serialization::CollectionDataContract* collectionDataContract;

  /// @brief Field contractNamespaces, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_contractNamespaces,
                      put = __cordl_internal_set_contractNamespaces)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
      contractNamespaces;

  /// @brief Field ctx, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx)) ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* ctx;

  /// @brief Field dataContract, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dataContract, put = __cordl_internal_set_dataContract)) ::System::Runtime::Serialization::DataContract* dataContract;

  /// @brief Field memberNames, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNames, put = __cordl_internal_set_memberNames)) ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>
      memberNames;

  /// @brief Field obj, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::System::Object* obj;

  /// @brief Field objLocal, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_objLocal, put = __cordl_internal_set_objLocal)) ::System::Object* objLocal;

  /// @brief Field typeIndex, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_typeIndex, put = __cordl_internal_set_typeIndex)) int32_t typeIndex;

  /// @brief Field writer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Runtime::Serialization::XmlWriterDelegator* writer;

  /// @brief Method CheckIfConflictingMembersHaveDifferentTypes, addr 0x5f66f50, size 0x98, virtual false, abstract: false, final false
  inline bool CheckIfConflictingMembersHaveDifferentTypes(::System::Runtime::Serialization::DataMember* member);

  /// @brief Method CheckIfMemberHasConflict, addr 0x5f66c04, size 0x180, virtual false, abstract: false, final false
  inline bool CheckIfMemberHasConflict(::System::Runtime::Serialization::DataMember* member, ::System::Runtime::Serialization::ClassDataContract* classContract,
                                       ::System::Runtime::Serialization::ClassDataContract* derivedMostClassContract);

  /// @brief Method GetDefaultValue, addr 0x5f66d84, size 0x1cc, virtual false, abstract: false, final false
  inline ::System::Object* GetDefaultValue(::System::Type* type);

  /// @brief Method InitArgs, addr 0x5f63aec, size 0x154, virtual false, abstract: false, final false
  inline void InitArgs(::System::Type* objType);

  /// @brief Method InvokeOnSerialized, addr 0x5f651b8, size 0x15c, virtual false, abstract: false, final false
  inline void InvokeOnSerialized(::System::Runtime::Serialization::ClassDataContract* classContract, ::System::Object* objSerialized,
                                 ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* ctx);

  /// @brief Method InvokeOnSerializing, addr 0x5f6505c, size 0x15c, virtual false, abstract: false, final false
  inline void InvokeOnSerializing(::System::Runtime::Serialization::ClassDataContract* classContract, ::System::Object* objSerialized,
                                  ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* ctx);

  /// @brief Method IsDefaultValue, addr 0x5f66bd0, size 0x34, virtual false, abstract: false, final false
  inline bool IsDefaultValue(::System::Type* type, ::System::Object* value);

  /// @brief Method LoadMemberValue, addr 0x5f66ba8, size 0x28, virtual false, abstract: false, final false
  inline ::System::Object* LoadMemberValue(::System::Runtime::Serialization::DataMember* member);

  /// @brief Method NeedsPrefix, addr 0x5f66fe8, size 0xb0, virtual false, abstract: false, final false
  inline bool NeedsPrefix(::System::Type* type, ::System::Xml::XmlDictionaryString* ns);

  static inline ::System::Runtime::Serialization::XmlFormatWriterInterpreter* New_ctor(::System::Runtime::Serialization::ClassDataContract* classContract);

  static inline ::System::Runtime::Serialization::XmlFormatWriterInterpreter* New_ctor(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method TryWritePrimitive, addr 0x5f65b04, size 0x484, virtual false, abstract: false, final false
  inline bool TryWritePrimitive(::System::Type* type, ::System::Func_1<::System::Object*>* value, ::System::Reflection::MemberInfo* memberInfo, ::System::Nullable_1<int32_t> arrayItemIndex,
                                ::System::Xml::XmlDictionaryString* ns, ::System::Xml::XmlDictionaryString* name, int32_t nameIndex);

  /// @brief Method TryWritePrimitiveArray, addr 0x5f65778, size 0x38c, virtual false, abstract: false, final false
  inline bool TryWritePrimitiveArray(::System::Type* type, ::System::Type* itemType, ::System::Func_1<::System::Object*>* value, ::System::Xml::XmlDictionaryString* itemName,
                                     ::System::Xml::XmlDictionaryString* itemNamespace);

  /// @brief Method UnwrapNullableObject, addr 0x5f6709c, size 0x3f0, virtual false, abstract: false, final false
  inline ::System::Object* UnwrapNullableObject(::System::Func_1<::System::Object*>* memberValue, ::ByRef<::System::Type*> memberType, ::ByRef<bool> isNull);

  /// @brief Method WriteClass, addr 0x5f63c40, size 0x2b0, virtual false, abstract: false, final false
  inline void WriteClass(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method WriteCollection, addr 0x5f63f5c, size 0x1100, virtual false, abstract: false, final false
  inline void WriteCollection(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method WriteCollectionToXml, addr 0x5f63ef0, size 0x6c, virtual false, abstract: false, final false
  inline void WriteCollectionToXml(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context,
                                   ::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method WriteEndElement, addr 0x5f66b8c, size 0x14, virtual false, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteMembers, addr 0x5f65314, size 0x464, virtual false, abstract: false, final false
  inline int32_t WriteMembers(::System::Runtime::Serialization::ClassDataContract* classContract, ::System::Runtime::Serialization::ExtensionDataObject* extensionData,
                              ::System::Runtime::Serialization::ClassDataContract* derivedMostClassContract);

  /// @brief Method WriteStartElement, addr 0x5f65f88, size 0xd0, virtual false, abstract: false, final false
  inline void WriteStartElement(::System::Type* type, ::System::Xml::XmlDictionaryString* ns, ::System::Xml::XmlDictionaryString* namespaceLocal, ::System::Xml::XmlDictionaryString* nameLocal,
                                int32_t nameIndex);

  /// @brief Method WriteToXml, addr 0x5f63a80, size 0x6c, virtual false, abstract: false, final false
  inline void WriteToXml(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context,
                         ::System::Runtime::Serialization::ClassDataContract* dataContract);

  /// @brief Method WriteValue, addr 0x5f66058, size 0xb34, virtual false, abstract: false, final false
  inline void WriteValue(::System::Type* memberType, ::System::Object* memberValue, bool writeXsiType);

  /// @brief Method <WriteCollection>b__24_0, addr 0x5f6748c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* _WriteCollection_b__24_0();

  constexpr int32_t const& __cordl_internal_get_childElementIndex() const;

  constexpr int32_t& __cordl_internal_get_childElementIndex();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& __cordl_internal_get_childElementNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& __cordl_internal_get_childElementNamespaces();

  constexpr ::System::Runtime::Serialization::ClassDataContract* const& __cordl_internal_get_classContract() const;

  constexpr ::System::Runtime::Serialization::ClassDataContract*& __cordl_internal_get_classContract();

  constexpr ::System::Runtime::Serialization::CollectionDataContract* const& __cordl_internal_get_collectionContract() const;

  constexpr ::System::Runtime::Serialization::CollectionDataContract*& __cordl_internal_get_collectionContract();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& __cordl_internal_get_contractNamespaces() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& __cordl_internal_get_contractNamespaces();

  constexpr ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* const& __cordl_internal_get_ctx() const;

  constexpr ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*& __cordl_internal_get_ctx();

  constexpr ::System::Runtime::Serialization::DataContract* const& __cordl_internal_get_dataContract() const;

  constexpr ::System::Runtime::Serialization::DataContract*& __cordl_internal_get_dataContract();

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const& __cordl_internal_get_memberNames() const;

  constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& __cordl_internal_get_memberNames();

  constexpr ::System::Object* const& __cordl_internal_get_obj() const;

  constexpr ::System::Object*& __cordl_internal_get_obj();

  constexpr ::System::Object* const& __cordl_internal_get_objLocal() const;

  constexpr ::System::Object*& __cordl_internal_get_objLocal();

  constexpr int32_t const& __cordl_internal_get_typeIndex() const;

  constexpr int32_t& __cordl_internal_get_typeIndex();

  constexpr ::System::Runtime::Serialization::XmlWriterDelegator* const& __cordl_internal_get_writer() const;

  constexpr ::System::Runtime::Serialization::XmlWriterDelegator*& __cordl_internal_get_writer();

  constexpr void __cordl_internal_set_childElementIndex(int32_t value);

  constexpr void __cordl_internal_set_childElementNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  constexpr void __cordl_internal_set_classContract(::System::Runtime::Serialization::ClassDataContract* value);

  constexpr void __cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value);

  constexpr void __cordl_internal_set_contractNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  constexpr void __cordl_internal_set_ctx(::System::Runtime::Serialization::XmlObjectSerializerWriteContext* value);

  constexpr void __cordl_internal_set_dataContract(::System::Runtime::Serialization::DataContract* value);

  constexpr void __cordl_internal_set_memberNames(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value);

  constexpr void __cordl_internal_set_obj(::System::Object* value);

  constexpr void __cordl_internal_set_objLocal(::System::Object* value);

  constexpr void __cordl_internal_set_typeIndex(int32_t value);

  constexpr void __cordl_internal_set_writer(::System::Runtime::Serialization::XmlWriterDelegator* value);

  /// @brief Method .ctor, addr 0x5f639a0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::ClassDataContract* classContract);

  /// @brief Method .ctor, addr 0x5f639b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::CollectionDataContract* collectionContract);

  /// @brief Method get_classDataContract, addr 0x5f639c0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::ClassDataContract* get_classDataContract();

  /// @brief Method get_collectionDataContract, addr 0x5f63a20, size 0x60, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::CollectionDataContract* get_collectionDataContract();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlFormatWriterInterpreter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterInterpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlFormatWriterInterpreter(XmlFormatWriterInterpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlFormatWriterInterpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlFormatWriterInterpreter(XmlFormatWriterInterpreter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17117 };

  /// @brief Field classContract, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::ClassDataContract* ___classContract;

  /// @brief Field collectionContract, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Serialization::CollectionDataContract* ___collectionContract;

  /// @brief Field writer, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlWriterDelegator* ___writer;

  /// @brief Field obj, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___obj;

  /// @brief Field ctx, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* ___ctx;

  /// @brief Field dataContract, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::DataContract* ___dataContract;

  /// @brief Field objLocal, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___objLocal;

  /// @brief Field contractNamespaces, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ___contractNamespaces;

  /// @brief Field memberNames, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ___memberNames;

  /// @brief Field childElementNamespaces, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> ___childElementNamespaces;

  /// @brief Field typeIndex, offset: 0x60, size: 0x4, def value: None
  int32_t ___typeIndex;

  /// @brief Field childElementIndex, offset: 0x64, size: 0x4, def value: None
  int32_t ___childElementIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___classContract) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___collectionContract) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___writer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___obj) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___ctx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___dataContract) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___objLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___contractNamespaces) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___memberNames) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___childElementNamespaces) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___typeIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::XmlFormatWriterInterpreter, ___childElementIndex) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XmlFormatWriterInterpreter, 0x68>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatWriterInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatWriterInterpreter*, "System.Runtime.Serialization", "XmlFormatWriterInterpreter");
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass24_0*, "System.Runtime.Serialization", "XmlFormatWriterInterpreter/<>c__DisplayClass24_0");
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass25_0*, "System.Runtime.Serialization", "XmlFormatWriterInterpreter/<>c__DisplayClass25_0");
NEED_NO_BOX(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XmlFormatWriterInterpreter___c__DisplayClass33_0*, "System.Runtime.Serialization", "XmlFormatWriterInterpreter/<>c__DisplayClass33_0");
