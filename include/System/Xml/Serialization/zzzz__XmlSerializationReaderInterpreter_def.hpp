#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationReaderInterpreter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__SerializationFormat_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializationReaderInterpreter)
namespace System::Xml::Serialization {
class ClassMap;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml::Serialization {
class XmlMapping;
}
namespace System::Xml::Serialization {
class XmlMembersMapping;
}
namespace System::Xml::Serialization {
class XmlTypeMapElementInfo;
}
namespace System::Xml::Serialization {
class XmlTypeMapMember;
}
namespace System::Xml::Serialization {
class XmlTypeMapping;
}
namespace System::Xml::Serialization {
class __XmlSerializationReaderInterpreter__FixupCallbackInfo;
}
namespace System::Xml::Serialization {
class __XmlSerializationReaderInterpreter__ReaderCallbackInfo;
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
namespace System::Xml::Serialization {
class XmlSerializationReaderInterpreter;
}
namespace System::Xml::Serialization {
class __XmlSerializationReaderInterpreter__FixupCallbackInfo;
}
namespace System::Xml::Serialization {
class __XmlSerializationReaderInterpreter__ReaderCallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationReaderInterpreter);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo);
// Type: ::FixupCallbackInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializationReaderInterpreter::FixupCallbackInfo*
class CORDL_TYPE __XmlSerializationReaderInterpreter__FixupCallbackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isValueList, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isValueList, put = __cordl_internal_set__isValueList)) bool _isValueList;

  /// @brief Field _map, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__map, put = __cordl_internal_set__map))::System::Xml::Serialization::ClassMap* _map;

  /// @brief Field _sri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sri, put = __cordl_internal_set__sri))::System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri;

  /// @brief Method FixupMembers, addr 0x2f01a40, size 0x28, virtual false, abstract: false, final false
  inline void FixupMembers(::System::Object* fixup);

  static inline ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo* New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                                               ::System::Xml::Serialization::ClassMap* map, bool isValueList);

  constexpr bool const& __cordl_internal_get__isValueList() const;

  constexpr bool& __cordl_internal_get__isValueList();

  constexpr ::System::Xml::Serialization::ClassMap*& __cordl_internal_get__map();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::ClassMap*> const& __cordl_internal_get__map() const;

  constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter*& __cordl_internal_get__sri();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationReaderInterpreter*> const& __cordl_internal_get__sri() const;

  constexpr void __cordl_internal_set__isValueList(bool value);

  constexpr void __cordl_internal_set__map(::System::Xml::Serialization::ClassMap* value);

  constexpr void __cordl_internal_set__sri(::System::Xml::Serialization::XmlSerializationReaderInterpreter* value);

  /// @brief Method .ctor, addr 0x2f00900, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri, ::System::Xml::Serialization::ClassMap* map, bool isValueList);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializationReaderInterpreter__FixupCallbackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReaderInterpreter__FixupCallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializationReaderInterpreter__FixupCallbackInfo(__XmlSerializationReaderInterpreter__FixupCallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReaderInterpreter__FixupCallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializationReaderInterpreter__FixupCallbackInfo(__XmlSerializationReaderInterpreter__FixupCallbackInfo const&) = delete;

  /// @brief Field _sri, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializationReaderInterpreter* ____sri;

  /// @brief Field _map, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Serialization::ClassMap* ____map;

  /// @brief Field _isValueList, offset: 0x20, size: 0x1, def value: None
  bool ____isValueList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo, ____sri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo, ____map) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo, ____isValueList) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: ::ReaderCallbackInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializationReaderInterpreter::ReaderCallbackInfo*
class CORDL_TYPE __XmlSerializationReaderInterpreter__ReaderCallbackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _sri, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__sri, put = __cordl_internal_set__sri))::System::Xml::Serialization::XmlSerializationReaderInterpreter* _sri;

  /// @brief Field _typeMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__typeMap, put = __cordl_internal_set__typeMap))::System::Xml::Serialization::XmlTypeMapping* _typeMap;

  static inline ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo* New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                                                ::System::Xml::Serialization::XmlTypeMapping* typeMap);

  /// @brief Method ReadObject, addr 0x2f01a68, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject();

  constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter*& __cordl_internal_get__sri();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationReaderInterpreter*> const& __cordl_internal_get__sri() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapping*& __cordl_internal_get__typeMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapping*> const& __cordl_internal_get__typeMap() const;

  constexpr void __cordl_internal_set__sri(::System::Xml::Serialization::XmlSerializationReaderInterpreter* value);

  constexpr void __cordl_internal_set__typeMap(::System::Xml::Serialization::XmlTypeMapping* value);

  /// @brief Method .ctor, addr 0x2efc678, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri, ::System::Xml::Serialization::XmlTypeMapping* typeMap);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializationReaderInterpreter__ReaderCallbackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReaderInterpreter__ReaderCallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializationReaderInterpreter__ReaderCallbackInfo(__XmlSerializationReaderInterpreter__ReaderCallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationReaderInterpreter__ReaderCallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializationReaderInterpreter__ReaderCallbackInfo(__XmlSerializationReaderInterpreter__ReaderCallbackInfo const&) = delete;

  /// @brief Field _sri, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializationReaderInterpreter* ____sri;

  /// @brief Field _typeMap, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapping* ____typeMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo, ____sri) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo, ____typeMap) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: System.Xml.Serialization::XmlSerializationReaderInterpreter
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 220, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializationReaderInterpreter*
class CORDL_TYPE XmlSerializationReaderInterpreter : public ::System::Xml::Serialization::XmlSerializationReader {
public:
  // Declarations
  using FixupCallbackInfo = ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo;

  using ReaderCallbackInfo = ::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo;

  /// @brief Field AnyType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AnyType, put = setStaticF_AnyType))::System::Xml::XmlQualifiedName* AnyType;

  /// @brief Field _format, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get__format, put = __cordl_internal_set__format))::System::Xml::Serialization::SerializationFormat _format;

  /// @brief Field _typeMap, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__typeMap, put = __cordl_internal_set__typeMap))::System::Xml::Serialization::XmlMapping* _typeMap;

  /// @brief Field empty_array, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_empty_array, put = setStaticF_empty_array))::ArrayW<::System::Object*, ::Array<::System::Object*>*> empty_array;

  /// @brief Method AddListValue, addr 0x2f003f4, size 0x2d4, virtual false, abstract: false, final false
  inline void AddListValue(::System::Xml::Serialization::TypeData* listType, ByRef<::System::Object*> list, int32_t index, ::System::Object* value, bool canCreateInstance);

  /// @brief Method CopyEnumerableList, addr 0x2f01534, size 0x438, virtual false, abstract: false, final false
  inline void CopyEnumerableList(::System::Object* source, ::System::Object* dest);

  /// @brief Method CreateInstance, addr 0x2efce14, size 0x64, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstance(::System::Type* type);

  /// @brief Method CreateInstance, addr 0x2efffb0, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstance(::System::Type* type, bool nonPublic);

  /// @brief Method CreateList, addr 0x2f0093c, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Object* CreateList(::System::Type* listType);

  /// @brief Method FillList, addr 0x2f01524, size 0x10, virtual false, abstract: false, final false
  inline void FillList(::System::Object* list, ::System::Object* items);

  /// @brief Method FixupMembers, addr 0x2f00c34, size 0x404, virtual false, abstract: false, final false
  inline void FixupMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* obfixup, bool isValueList);

  /// @brief Method GetEnumValue, addr 0x2f013f4, size 0x130, virtual false, abstract: false, final false
  inline ::System::Object* GetEnumValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::StringW val);

  /// @brief Method GetMemberValue, addr 0x2f00328, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, bool isValueList);

  /// @brief Method GetValueFromXmlString, addr 0x2f00064, size 0x138, virtual false, abstract: false, final false
  inline ::System::Object* GetValueFromXmlString(::StringW value, ::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlTypeMapping* typeMap);

  /// @brief Method InitCallbacks, addr 0x2efc28c, size 0x3ec, virtual true, abstract: false, final false
  inline void InitCallbacks();

  /// @brief Method InitIDs, addr 0x2efc6a4, size 0x4, virtual true, abstract: false, final false
  inline void InitIDs();

  /// @brief Method InitializeList, addr 0x2f00874, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Object* InitializeList(::System::Xml::Serialization::TypeData* listType);

  /// @brief Method IsReadOnly, addr 0x2f00810, size 0x64, virtual false, abstract: false, final false
  inline bool IsReadOnly(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* memType, ::System::Object* ob, bool isValueList);

  static inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter* New_ctor(::System::Xml::Serialization::XmlMapping* typeMap);

  /// @brief Method ProcessUnknownAttribute, addr 0x2f01038, size 0x34, virtual true, abstract: false, final false
  inline void ProcessUnknownAttribute(::System::Object* target);

  /// @brief Method ProcessUnknownElement, addr 0x2f0106c, size 0x34, virtual true, abstract: false, final false
  inline void ProcessUnknownElement(::System::Object* target);

  /// @brief Method ReadAttributeMembers, addr 0x2efcf38, size 0x404, virtual false, abstract: false, final false
  inline void ReadAttributeMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList);

  /// @brief Method ReadClassInstance, addr 0x2effcd4, size 0x2dc, virtual true, abstract: false, final false
  inline ::System::Object* ReadClassInstance(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType);

  /// @brief Method ReadClassInstanceMembers, addr 0x2efffbc, size 0xa8, virtual true, abstract: false, final false
  inline void ReadClassInstanceMembers(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob);

  /// @brief Method ReadEncodedObject, addr 0x2efc888, size 0x104, virtual false, abstract: false, final false
  inline ::System::Object* ReadEncodedObject(::System::Xml::Serialization::XmlTypeMapping* typeMap);

  /// @brief Method ReadEnumElement, addr 0x2effad0, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* ReadEnumElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable);

  /// @brief Method ReadListElement, addr 0x2eff66c, size 0x3a8, virtual false, abstract: false, final false
  inline ::System::Object* ReadListElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, ::System::Object* list, bool canCreateInstance);

  /// @brief Method ReadListString, addr 0x2f011c4, size 0x230, virtual false, abstract: false, final false
  inline ::System::Object* ReadListString(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::StringW values);

  /// @brief Method ReadMembers, addr 0x2efd33c, size 0x222c, virtual false, abstract: false, final false
  inline void ReadMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList, bool readBySoapOrder);

  /// @brief Method ReadMessage, addr 0x2efc98c, size 0x488, virtual true, abstract: false, final false
  inline ::System::Object* ReadMessage(::System::Xml::Serialization::XmlMembersMapping* typeMap);

  /// @brief Method ReadObject, addr 0x2eff584, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Object* ReadObject(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType);

  /// @brief Method ReadObjectElement, addr 0x2f009d8, size 0x19c, virtual false, abstract: false, final false
  inline ::System::Object* ReadObjectElement(::System::Xml::Serialization::XmlTypeMapElementInfo* elem);

  /// @brief Method ReadPrimitiveElement, addr 0x2effa14, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Object* ReadPrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable);

  /// @brief Method ReadPrimitiveValue, addr 0x2f010a0, size 0x124, virtual false, abstract: false, final false
  inline ::System::Object* ReadPrimitiveValue(::System::Xml::Serialization::XmlTypeMapElementInfo* elem);

  /// @brief Method ReadRoot, addr 0x2efc6a8, size 0x108, virtual false, abstract: false, final false
  inline ::System::Object* ReadRoot();

  /// @brief Method ReadRoot, addr 0x2efc7b0, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Object* ReadRoot(::System::Xml::Serialization::XmlTypeMapping* rootMap);

  /// @brief Method ReadXmlNode, addr 0x2f00b74, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Object* ReadXmlNode(::System::Xml::Serialization::TypeData* type, bool wrapped);

  /// @brief Method ReadXmlNodeElement, addr 0x2eff568, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Object* ReadXmlNodeElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable);

  /// @brief Method ReadXmlSerializableElement, addr 0x2effb40, size 0x194, virtual false, abstract: false, final false
  inline ::System::Object* ReadXmlSerializableElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable);

  /// @brief Method SetListMembersDefaults, addr 0x2f006c8, size 0x148, virtual false, abstract: false, final false
  inline void SetListMembersDefaults(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList);

  /// @brief Method SetMemberValue, addr 0x2f0019c, size 0x18c, virtual false, abstract: false, final false
  inline void SetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Object* value, bool isValueList);

  /// @brief Method SetMemberValueFromAttr, addr 0x2efce78, size 0xc0, virtual false, abstract: false, final false
  inline void SetMemberValueFromAttr(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Object* value, bool isValueList);

  constexpr ::System::Xml::Serialization::SerializationFormat const& __cordl_internal_get__format() const;

  constexpr ::System::Xml::Serialization::SerializationFormat& __cordl_internal_get__format();

  constexpr ::System::Xml::Serialization::XmlMapping*& __cordl_internal_get__typeMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlMapping*> const& __cordl_internal_get__typeMap() const;

  constexpr void __cordl_internal_set__format(::System::Xml::Serialization::SerializationFormat value);

  constexpr void __cordl_internal_set__typeMap(::System::Xml::Serialization::XmlMapping* value);

  /// @brief Method .ctor, addr 0x2efc254, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Serialization::XmlMapping* typeMap);

  static inline ::System::Xml::XmlQualifiedName* getStaticF_AnyType();

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_empty_array();

  static inline void setStaticF_AnyType(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_empty_array(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationReaderInterpreter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReaderInterpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationReaderInterpreter(XmlSerializationReaderInterpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationReaderInterpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationReaderInterpreter(XmlSerializationReaderInterpreter const&) = delete;

  /// @brief Field _typeMap, offset: 0xd0, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlMapping* ____typeMap;

  /// @brief Field _format, offset: 0xd8, size: 0x4, def value: None
  ::System::Xml::Serialization::SerializationFormat ____format;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationReaderInterpreter, 0xe0>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter, ____typeMap) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationReaderInterpreter, ____format) == 0xd8, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReaderInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReaderInterpreter*, "System.Xml.Serialization", "XmlSerializationReaderInterpreter");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__FixupCallbackInfo*, "System.Xml.Serialization", "XmlSerializationReaderInterpreter/FixupCallbackInfo");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializationReaderInterpreter__ReaderCallbackInfo*, "System.Xml.Serialization", "XmlSerializationReaderInterpreter/ReaderCallbackInfo");
