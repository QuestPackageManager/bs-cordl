#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationReaderInterpreter.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::*)(
    ::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::ClassMap*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61512a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo.FixupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::FixupMembers)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6152390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>::get(), "FixupMembers",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____map)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sri, map, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::FixupMembers(::System::Object* fixup) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>::get(), "FixupMembers",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fixup);
}
inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*
System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                          ::System::Xml::Serialization::ClassMap* map, bool isValueList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo*>(sri, map, isValueList));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter_FixupCallbackInfo::XmlSerializationReaderInterpreter_FixupCallbackInfo() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::*)(
    ::System::Xml::Serialization::XmlSerializationReaderInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614d238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::*)()>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::ReadObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x61523b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>::get(),
                                                 "ReadObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                                    ::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sri, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::ReadObject() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>::get(),
                                               "ReadObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*
System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::New_ctor(::System::Xml::Serialization::XmlSerializationReaderInterpreter* sri,
                                                                                           ::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo*>(sri, typeMap));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter_ReaderCallbackInfo::XmlSerializationReaderInterpreter_ReaderCallbackInfo() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x614ce44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitCallbacks)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x614ce60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitIDs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x614d240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)()>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x614d244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadRoot",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadEncodedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEncodedObject)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x614d424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadEncodedObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlMembersMapping*)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMessage)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x614d520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x614d354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadRoot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObject)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x614fef0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadClassInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstance)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6150660;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadClassInstanceMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstanceMembers)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6150924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadAttributeMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadAttributeMembers)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x614dacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadAttributeMembers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::ClassMap*, ::System::Object*, bool, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMembers)> {
  constexpr static std::size_t size = 0x2024;
  constexpr static std::size_t addrs = 0x614deb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetListMembersDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetListMembersDefaults)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x615105c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "SetListMembersDefaults",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.FixupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::FixupMembers)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x61515c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "FixupMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ProcessUnknownAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownAttribute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61519a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ProcessUnknownElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownElement)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61519d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Xml::Serialization::TypeData*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::IsReadOnly)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61511a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "IsReadOnly", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetMemberValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValue)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6150b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "SetMemberValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.SetMemberValueFromAttr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValueFromAttr)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x614da30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "SetMemberValueFromAttr",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetMemberValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetMemberValue)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6150c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "GetMemberValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadObjectElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapElementInfo*)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObjectElement)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6151354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadObjectElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadPrimitiveValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapElementInfo*)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6151a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadPrimitiveValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetValueFromXmlString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::StringW, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlTypeMapping*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetValueFromXmlString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x61509d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                 "GetValueFromXmlString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadListElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool, ::System::Object*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListElement)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x614ffe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadListElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadListString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, ::StringW)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListString)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6151b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadListString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.AddListValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(
    ::System::Xml::Serialization::TypeData*, ::ByRef<::System::Object*>, int32_t, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::AddListValue)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6150d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "AddListValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, bool)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615091c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "CreateInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x614d9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "CreateInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CreateList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateList)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61512ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "CreateList",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.InitializeList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::TypeData*)>(&::System::Xml::Serialization::XmlSerializationReaderInterpreter::InitializeList)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6151208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "InitializeList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.FillList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::FillList)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6151e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "FillList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.CopyEnumerableList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationReaderInterpreter::CopyEnumerableList)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x6151e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "CopyEnumerableList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlNodeElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNodeElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x614fed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadXmlNodeElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::TypeData*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x615151c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadXmlNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadPrimitiveElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveElement)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x61503a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                 "ReadPrimitiveElement", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadEnumElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEnumElement)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6150454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadEnumElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.GetEnumValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, ::StringW)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::GetEnumValue)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6151d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "GetEnumValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationReaderInterpreter.ReadXmlSerializableElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationReaderInterpreter::*)(::System::Xml::Serialization::XmlTypeMapping*, bool)>(
        &::System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlSerializableElement)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x61504c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                                 "ReadXmlSerializableElement", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "AnyType",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Serialization::XmlSerializationReaderInterpreter::getStaticF_AnyType() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "AnyType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get>();
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::setStaticF_empty_array(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "empty_array",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get>(
      std::forward<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>(value));
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Xml::Serialization::XmlSerializationReaderInterpreter::getStaticF_empty_array() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "empty_array",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get>();
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::_ctor(::System::Xml::Serialization::XmlMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::InitCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::InitIDs() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadRoot",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEncodedObject(::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadEncodedObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMessage(::System::Xml::Serialization::XmlMembersMapping* typeMap) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadRoot(::System::Xml::Serialization::XmlTypeMapping* rootMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, rootMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObject(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable, checkType);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstance(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable, checkType);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadClassInstanceMembers(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadAttributeMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadAttributeMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList, bool readBySoapOrder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList, readBySoapOrder);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetListMembersDefaults(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "SetListMembersDefaults",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::FixupMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* obfixup, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "FixupMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, obfixup, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownAttribute(::System::Object* target) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::ProcessUnknownElement(::System::Object* target) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline bool System::Xml::Serialization::XmlSerializationReaderInterpreter::IsReadOnly(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* memType,
                                                                                      ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "IsReadOnly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, member, memType, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Object* value,
                                                                                          bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "SetMemberValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member, ob, value, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::SetMemberValueFromAttr(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Object* value,
                                                                                                  bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "SetMemberValueFromAttr",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member, ob, value, isValueList);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "GetMemberValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, member, ob, isValueList);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadObjectElement(::System::Xml::Serialization::XmlTypeMapElementInfo* elem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadObjectElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, elem);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveValue(::System::Xml::Serialization::XmlTypeMapElementInfo* elem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadPrimitiveValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, elem);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetValueFromXmlString(::StringW value, ::System::Xml::Serialization::TypeData* typeData,
                                                                                                              ::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "GetValueFromXmlString",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, typeData, typeMap);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, ::System::Object* list,
                                                                                                        bool canCreateInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadListElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable, list, canCreateInstance);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadListString(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::StringW values) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadListString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, values);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::AddListValue(::System::Xml::Serialization::TypeData* listType, ::ByRef<::System::Object*> list, int32_t index,
                                                                                        ::System::Object* value, bool canCreateInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "AddListValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listType, list, index, value, canCreateInstance);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance(::System::Type* type, bool nonPublic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "CreateInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type, nonPublic);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateInstance(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "CreateInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::CreateList(::System::Type* listType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "CreateList",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, listType);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::InitializeList(::System::Xml::Serialization::TypeData* listType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "InitializeList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, listType);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::FillList(::System::Object* list, ::System::Object* items) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "FillList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, items);
}
inline void System::Xml::Serialization::XmlSerializationReaderInterpreter::CopyEnumerableList(::System::Object* source, ::System::Object* dest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "CopyEnumerableList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, dest);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNodeElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadXmlNodeElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlNode(::System::Xml::Serialization::TypeData* type, bool wrapped) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadXmlNode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, wrapped);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadPrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadPrimitiveElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadEnumElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "ReadEnumElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::GetEnumValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::StringW val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(), "GetEnumValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, val);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationReaderInterpreter::ReadXmlSerializableElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>::get(),
                                               "ReadXmlSerializableElement", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, typeMap, isNullable);
}
inline ::System::Xml::Serialization::XmlSerializationReaderInterpreter* System::Xml::Serialization::XmlSerializationReaderInterpreter::New_ctor(::System::Xml::Serialization::XmlMapping* typeMap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializationReaderInterpreter*>(typeMap));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationReaderInterpreter::XmlSerializationReaderInterpreter() {}
