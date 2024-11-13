#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationWriterInterpreter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__SerializationFormat_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSerializationWriterInterpreter)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Serialization {
class ClassMap;
}
namespace System::Xml::Serialization {
class ListMap;
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
class XmlTypeMapMemberAnyElement;
}
namespace System::Xml::Serialization {
class XmlTypeMapMember;
}
namespace System::Xml::Serialization {
class XmlTypeMapping;
}
namespace System::Xml::Serialization {
class __XmlSerializationWriterInterpreter__CallbackInfo;
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
class XmlSerializationWriterInterpreter;
}
namespace System::Xml::Serialization {
class __XmlSerializationWriterInterpreter__CallbackInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializationWriterInterpreter);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlSerializationWriterInterpreter__CallbackInfo);
// Type: ::CallbackInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlSerializationWriterInterpreter::CallbackInfo*
class CORDL_TYPE __XmlSerializationWriterInterpreter__CallbackInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _swi, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__swi, put = __cordl_internal_set__swi)) ::System::Xml::Serialization::XmlSerializationWriterInterpreter* _swi;

  /// @brief Field _typeMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__typeMap, put = __cordl_internal_set__typeMap)) ::System::Xml::Serialization::XmlTypeMapping* _typeMap;

  static inline ::System::Xml::Serialization::__XmlSerializationWriterInterpreter__CallbackInfo* New_ctor(::System::Xml::Serialization::XmlSerializationWriterInterpreter* swi,
                                                                                                          ::System::Xml::Serialization::XmlTypeMapping* typeMap);

  /// @brief Method WriteEnum, addr 0x432b15c, size 0x50, virtual false, abstract: false, final false
  inline void WriteEnum(::System::Object* ob);

  /// @brief Method WriteObject, addr 0x432b10c, size 0x50, virtual false, abstract: false, final false
  inline void WriteObject(::System::Object* ob);

  constexpr ::System::Xml::Serialization::XmlSerializationWriterInterpreter*& __cordl_internal_get__swi();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlSerializationWriterInterpreter*> const& __cordl_internal_get__swi() const;

  constexpr ::System::Xml::Serialization::XmlTypeMapping*& __cordl_internal_get__typeMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlTypeMapping*> const& __cordl_internal_get__typeMap() const;

  constexpr void __cordl_internal_set__swi(::System::Xml::Serialization::XmlSerializationWriterInterpreter* value);

  constexpr void __cordl_internal_set__typeMap(::System::Xml::Serialization::XmlTypeMapping* value);

  /// @brief Method .ctor, addr 0x4324c2c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Serialization::XmlSerializationWriterInterpreter* swi, ::System::Xml::Serialization::XmlTypeMapping* typeMap);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSerializationWriterInterpreter__CallbackInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationWriterInterpreter__CallbackInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlSerializationWriterInterpreter__CallbackInfo(__XmlSerializationWriterInterpreter__CallbackInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlSerializationWriterInterpreter__CallbackInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlSerializationWriterInterpreter__CallbackInfo(__XmlSerializationWriterInterpreter__CallbackInfo const&) = delete;

  /// @brief Field _swi, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlSerializationWriterInterpreter* ____swi;

  /// @brief Field _typeMap, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlTypeMapping* ____typeMap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7418 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlSerializationWriterInterpreter__CallbackInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationWriterInterpreter__CallbackInfo, ____swi) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__XmlSerializationWriterInterpreter__CallbackInfo, ____typeMap) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Serialization
// Type: System.Xml.Serialization::XmlSerializationWriterInterpreter
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlSerializationWriterInterpreter*
class CORDL_TYPE XmlSerializationWriterInterpreter : public ::System::Xml::Serialization::XmlSerializationWriter {
public:
  // Declarations
  using CallbackInfo = ::System::Xml::Serialization::__XmlSerializationWriterInterpreter__CallbackInfo;

  /// @brief Field _format, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__format, put = __cordl_internal_set__format)) ::System::Xml::Serialization::SerializationFormat _format;

  /// @brief Field _typeMap, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__typeMap, put = __cordl_internal_set__typeMap)) ::System::Xml::Serialization::XmlMapping* _typeMap;

  /// @brief Method GetEnumXmlValue, addr 0x432acd4, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetEnumXmlValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob);

  /// @brief Method GetListCount, addr 0x4329da4, size 0x128, virtual false, abstract: false, final false
  inline int32_t GetListCount(::System::Xml::Serialization::TypeData* listType, ::System::Object* ob);

  /// @brief Method GetMemberValue, addr 0x43271a8, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, bool isValueList);

  /// @brief Method GetStringValue, addr 0x4327684, size 0x248, virtual false, abstract: false, final false
  inline ::StringW GetStringValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Xml::Serialization::TypeData* type, ::System::Object* value);

  /// @brief Method ImplicitConvert, addr 0x4325674, size 0x2d8, virtual false, abstract: false, final false
  static inline ::System::Object* ImplicitConvert(::System::Object* obj, ::System::Type* type);

  /// @brief Method InitCallbacks, addr 0x4324810, size 0x41c, virtual true, abstract: false, final false
  inline void InitCallbacks();

  /// @brief Method MemberHasValue, addr 0x4326f80, size 0x228, virtual false, abstract: false, final false
  inline bool MemberHasValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, bool isValueList);

  static inline ::System::Xml::Serialization::XmlSerializationWriterInterpreter* New_ctor(::System::Xml::Serialization::XmlMapping* typeMap);

  /// @brief Method WriteAnyElementContent, addr 0x43286a0, size 0x658, virtual false, abstract: false, final false
  inline void WriteAnyElementContent(::System::Xml::Serialization::XmlTypeMapMemberAnyElement* member, ::System::Object* memberValue);

  /// @brief Method WriteAttributeMembers, addr 0x4326020, size 0x760, virtual false, abstract: false, final false
  inline void WriteAttributeMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList);

  /// @brief Method WriteElementMembers, addr 0x4326824, size 0x75c, virtual false, abstract: false, final false
  inline void WriteElementMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList);

  /// @brief Method WriteEnumElement, addr 0x432aca4, size 0x30, virtual true, abstract: false, final false
  inline void WriteEnumElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element, ::StringW namesp);

  /// @brief Method WriteListContent, addr 0x4327ea4, size 0x7fc, virtual false, abstract: false, final false
  inline void WriteListContent(::System::Object* container, ::System::Xml::Serialization::TypeData* listType, ::System::Xml::Serialization::ListMap* map, ::System::Object* ob,
                               ::System::Text::StringBuilder* targetString);

  /// @brief Method WriteListElement, addr 0x4329bbc, size 0x1e8, virtual true, abstract: false, final false
  inline void WriteListElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element, ::StringW namesp);

  /// @brief Method WriteMemberElement, addr 0x4327930, size 0x574, virtual false, abstract: false, final false
  inline void WriteMemberElement(::System::Xml::Serialization::XmlTypeMapElementInfo* elem, ::System::Object* memberValue);

  /// @brief Method WriteMembers, addr 0x4325d00, size 0x44, virtual false, abstract: false, final false
  inline void WriteMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList);

  /// @brief Method WriteMessage, addr 0x4325b10, size 0x1f0, virtual true, abstract: false, final false
  inline void WriteMessage(::System::Xml::Serialization::XmlMembersMapping* membersMap, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters);

  /// @brief Method WriteObject, addr 0x4324e6c, size 0x808, virtual true, abstract: false, final false
  inline void WriteObject(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element, ::StringW namesp, bool isNullable, bool needType, bool writeWrappingElem);

  /// @brief Method WriteObjectElement, addr 0x4325d44, size 0x128, virtual true, abstract: false, final false
  inline void WriteObjectElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element, ::StringW namesp);

  /// @brief Method WriteObjectElementAttributes, addr 0x4325f7c, size 0xa4, virtual true, abstract: false, final false
  inline void WriteObjectElementAttributes(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob);

  /// @brief Method WriteObjectElementElements, addr 0x4326780, size 0xa4, virtual true, abstract: false, final false
  inline void WriteObjectElementElements(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob);

  /// @brief Method WritePrimitiveElement, addr 0x432ac68, size 0x3c, virtual true, abstract: false, final false
  inline void WritePrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element, ::StringW namesp);

  /// @brief Method WritePrimitiveValueEncoded, addr 0x4329940, size 0x27c, virtual false, abstract: false, final false
  inline void WritePrimitiveValueEncoded(::System::Object* memberValue, ::StringW name, ::StringW ns, ::System::Xml::XmlQualifiedName* xsiType,
                                         ::System::Xml::Serialization::XmlTypeMapping* mappedType, ::System::Xml::Serialization::TypeData* typeData, bool wrapped, bool isNullable);

  /// @brief Method WritePrimitiveValueLiteral, addr 0x4329638, size 0x250, virtual false, abstract: false, final false
  inline void WritePrimitiveValueLiteral(::System::Object* memberValue, ::StringW name, ::StringW ns, ::System::Xml::Serialization::XmlTypeMapping* mappedType,
                                         ::System::Xml::Serialization::TypeData* typeData, bool wrapped, bool isNullable);

  /// @brief Method WriteRoot, addr 0x4324c58, size 0x214, virtual false, abstract: false, final false
  inline void WriteRoot(::System::Object* ob);

  constexpr ::System::Xml::Serialization::SerializationFormat const& __cordl_internal_get__format() const;

  constexpr ::System::Xml::Serialization::SerializationFormat& __cordl_internal_get__format();

  constexpr ::System::Xml::Serialization::XmlMapping*& __cordl_internal_get__typeMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlMapping*> const& __cordl_internal_get__typeMap() const;

  constexpr void __cordl_internal_set__format(::System::Xml::Serialization::SerializationFormat value);

  constexpr void __cordl_internal_set__typeMap(::System::Xml::Serialization::XmlMapping* value);

  /// @brief Method .ctor, addr 0x43247d8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Serialization::XmlMapping* typeMap);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializationWriterInterpreter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriterInterpreter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializationWriterInterpreter(XmlSerializationWriterInterpreter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializationWriterInterpreter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializationWriterInterpreter(XmlSerializationWriterInterpreter const&) = delete;

  /// @brief Field _typeMap, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlMapping* ____typeMap;

  /// @brief Field _format, offset: 0x50, size: 0x4, def value: None
  ::System::Xml::Serialization::SerializationFormat ____format;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7419 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializationWriterInterpreter, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriterInterpreter, ____typeMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializationWriterInterpreter, ____format) == 0x50, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationWriterInterpreter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationWriterInterpreter*, "System.Xml.Serialization", "XmlSerializationWriterInterpreter");
NEED_NO_BOX(::System::Xml::Serialization::__XmlSerializationWriterInterpreter__CallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlSerializationWriterInterpreter__CallbackInfo*, "System.Xml.Serialization", "XmlSerializationWriterInterpreter/CallbackInfo");
