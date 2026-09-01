#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlSerializationReaderInterpreter.hpp"
#include "System/Xml/Serialization/zzzz__SerializationFormat_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReader_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReaderInterpreter_def.hpp"
#include "System/Xml/Serialization/zzzz__ClassMap_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlMapping_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlMembersMapping_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationReaderInterpreter_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfo_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::*)(
    ::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::ClassMap*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6305df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                               ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo.FixupMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::FixupMembers)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6306ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>(),
                                                                                           { "FixupMembers", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter*& System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_get__sri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sri;
}
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter* const& System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_get__sri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sri;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_set__sri(::System::Xml::Serialization::XmlSerializationReaderInterpreter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sri = value;
}
constexpr ::System::Xml::Serialization::ClassMap*& System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_get__map() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____map;
}
constexpr ::System::Xml::Serialization::ClassMap* const& System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_get__map() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____map;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_set__map(::System::Xml::Serialization::ClassMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____map = value;
}
constexpr bool& System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_get__isValueList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValueList;
}
constexpr bool const& System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_get__isValueList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValueList;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::__cordl_internal_set__isValueList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isValueList = value;
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                                   ::System::Xml::Serialization::ClassMap* map, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sri, map, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::FixupMembers(::System::Object* fixup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>(),
                                                                                         { "FixupMembers", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixup);
}
inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*
System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                          ::System::Xml::Serialization::ClassMap* map, bool isValueList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>(sri, map, isValueList));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::XmlSerializationReaderInterpreter_FixupCallbackInfo() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::*)(
    ::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6301d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::*)()>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::ReadObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6306f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>(), { "ReadObject", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter*& System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::__cordl_internal_get__sri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sri;
}
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter* const& System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::__cordl_internal_get__sri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sri;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::__cordl_internal_set__sri(::System::Xml::Serialization::XmlSerializationReaderInterpreter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sri = value;
}
constexpr ::System::Xml::Serialization::XmlTypeMapping*& System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::__cordl_internal_get__typeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
constexpr ::System::Xml::Serialization::XmlTypeMapping* const& System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::__cordl_internal_get__typeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::__cordl_internal_set__typeMap(::System::Xml::Serialization::XmlTypeMapping* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeMap = value;
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                                    ::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sri, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::ReadObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>(), { "ReadObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*
System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                           ::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>(sri, typeMap));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::XmlSerializationReaderInterpreter_ReaderCallbackInfo() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x630199c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlMapping*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitCallbacks)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x63019b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitIDs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6301d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6301d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), { "ReadRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadEncodedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEncodedObject)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6301f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "ReadEncodedObject", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlMembersMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMessage)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x6302078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6301eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "ReadRoot", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObject)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6304a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadClassInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstance)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x63051b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadClassInstanceMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstanceMembers)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x630547c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadAttributeMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadAttributeMembers)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x6302624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                         { "ReadAttributeMembers", {}, { ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::ClassMap*, ::System::Object*, bool, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMembers)> {
  constexpr static std::size_t size = 0x2024;
  constexpr static std::size_t addrs = 0x6302a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                         { "ReadMembers", {}, { ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetListMembersDefaults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetListMembersDefaults)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6305bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                            { "SetListMembersDefaults", {}, { ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.FixupMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::FixupMembers)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x630611c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                { "FixupMembers", {}, { ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ProcessUnknownAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x63064f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ProcessUnknownElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x630652c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Xml::Serialization::TypeData*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::IsReadOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6305cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "IsReadOnly",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMember*>(), ::i2c::type_of<::System::Xml::Serialization::TypeData*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetMemberValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValue)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x630565c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "SetMemberValue",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMember*>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetMemberValueFromAttr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValueFromAttr)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6302588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "SetMemberValueFromAttr",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMember*>(), ::i2c::type_of<::System::Object*>(),
                                                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetMemberValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetMemberValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x63057e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                            { "GetMemberValue", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMember*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadObjectElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapElementInfo*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObjectElement)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6305eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "ReadObjectElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapElementInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadPrimitiveValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapElementInfo*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6306560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "ReadPrimitiveValue", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapElementInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetValueFromXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::StringW, ::System::Xml::Serialization::TypeData*,
                                                                                                                                              ::System::Xml::Serialization::XmlTypeMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetValueFromXmlString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6305528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                            { "GetValueFromXmlString",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadListElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, ::System::Object*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListElement)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x6304b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
            { "ReadListElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadListString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, ::StringW)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6306660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "ReadListString", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.AddListValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::TypeData*, ::by_ref<::System::Object*>, int32_t, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::AddListValue)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x63058b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "AddListValue",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::by_ref<::System::Object*>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6305474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6302514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateList)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6305e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), { "CreateList", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitializeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::TypeData*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitializeList)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6305d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "InitializeList", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.FillList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::FillList)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x63069ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                           { "FillList", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CopyEnumerableList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::CopyEnumerableList)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x63069bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "CopyEnumerableList", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlNodeElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNodeElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6304a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "ReadXmlNodeElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::TypeData*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6306074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "ReadXmlNode", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadPrimitiveElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveElement)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6304ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "ReadPrimitiveElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadEnumElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEnumElement)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6304fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "ReadEnumElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetEnumValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, ::StringW)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetEnumValue)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6306884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "GetEnumValue", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlSerializableElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlSerializableElement)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6305018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                             { "ReadXmlSerializableElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlMapping*& System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_get__typeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
constexpr ::System::Xml::Serialization::XmlMapping* const& System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_get__typeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_set__typeMap(::System::Xml::Serialization::XmlMapping* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeMap = value;
}
constexpr ::System::Xml::Serialization::SerializationFormat& System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_get__format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____format;
}
constexpr ::System::Xml::Serialization::SerializationFormat const& System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_get__format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____format;
}
constexpr void System::Xml::Serialization::XmlSerializationReaderInterpreter::__cordl_internal_set__format(::System::Xml::Serialization::SerializationFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____format = value;
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::setStaticF_AnyType(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "AnyType", ::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReaderInterpreter::getStaticF_AnyType() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "AnyType", ::System::Xml::Serialization::XmlSerializationReaderInterpreter*>();
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::setStaticF_empty_array(::ArrayW<::System::Object*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "empty_array", ::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> System::Xml::Serialization::XmlSerializationReaderInterpreter::getStaticF_empty_array() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "empty_array", ::System::Xml::Serialization::XmlSerializationReaderInterpreter*>();
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::_ctor(::System::Xml::Serialization::XmlMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlMapping*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeMap);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::InitCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::InitIDs() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), { "ReadRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEncodedObject(::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "ReadEncodedObject", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMessage(::System::Xml::Serialization::XmlMembersMapping* typeMap) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot(::System::Xml::Serialization::XmlTypeMapping* rootMap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "ReadRoot", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, rootMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObject(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, isNullable, checkType);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstance(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, isNullable, checkType);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstanceMembers(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeMap, ob);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadAttributeMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                       { "ReadAttributeMembers", {}, { ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList, bool readBySoapOrder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                          { "ReadMembers", {}, { ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, ob, isValueList, readBySoapOrder);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetListMembersDefaults(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                       { "SetListMembersDefaults", {}, { ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::FixupMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* obfixup, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                              { "FixupMembers", {}, { ::i2c::type_of<::System::Xml::Serialization::ClassMap*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, obfixup, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownAttribute(::System::Object* target) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownElement(::System::Object* target) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline bool System::Xml::Serialization::XmlSerializationReaderInterpreter::IsReadOnly(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* memType,
                                                                                      ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                           { "IsReadOnly",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMember*>(), ::i2c::type_of<::System::Xml::Serialization::TypeData*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, member, memType, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Object* value,
                                                                                          bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "SetMemberValue",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMember*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, member, ob, value, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValueFromAttr(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Object* value,
                                                                                                  bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "SetMemberValueFromAttr",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMember*>(), ::i2c::type_of<::System::Object*>(),
                                                                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, member, ob, value, isValueList);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                       { "GetMemberValue", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapMember*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, member, ob, isValueList);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObjectElement(::System::Xml::Serialization::XmlTypeMapElementInfo* elem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "ReadObjectElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapElementInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, elem);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveValue(::System::Xml::Serialization::XmlTypeMapElementInfo* elem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "ReadPrimitiveValue", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapElementInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, elem);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetValueFromXmlString(::StringW value, ::System::Xml::Serialization::TypeData* typeData,
                                                                                                              ::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                          { "GetValueFromXmlString",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, typeData, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, ::System::Object* list,
                                                                                                        bool canCreateInstance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
          { "ReadListElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, isNullable, list, canCreateInstance);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListString(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::StringW values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                           { "ReadListString", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, values);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::AddListValue(::System::Xml::Serialization::TypeData* listType, ::by_ref<::System::Object*> list, int32_t index,
                                                                                        ::System::Object* value, bool canCreateInstance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "AddListValue",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::by_ref<::System::Object*>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listType, list, index, value, canCreateInstance);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance(::System::Type* type, bool nonPublic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, nonPublic);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), { "CreateInstance", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateList(::System::Type* listType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(), { "CreateList", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, listType);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::InitializeList(::System::Xml::Serialization::TypeData* listType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "InitializeList", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, listType);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::FillList(::System::Object* list, ::System::Object* items) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "FillList", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, items);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::CopyEnumerableList(::System::Object* source, ::System::Object* dest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                                                         { "CopyEnumerableList", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, dest);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNodeElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                           { "ReadXmlNodeElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNode(::System::Xml::Serialization::TypeData* type, bool wrapped) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                           { "ReadXmlNode", {}, { ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, wrapped);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                           { "ReadPrimitiveElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEnumElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                           { "ReadEnumElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetEnumValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::StringW val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                           { "GetEnumValue", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, val);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlSerializableElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(),
                                                           { "ReadXmlSerializableElement", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter* System::Xml::Serialization::XmlSerializationReaderInterpreter::New_ctor(::System::Xml::Serialization::XmlMapping* typeMap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(typeMap));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter::XmlSerializationReaderInterpreter() {}
