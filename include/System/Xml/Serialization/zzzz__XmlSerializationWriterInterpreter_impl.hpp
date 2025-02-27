#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializationWriterInterpreter.hpp"
#include "System/Xml/Serialization/zzzz__SerializationFormat_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriterInterpreter_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Serialization/zzzz__ClassMap_def.hpp"
#include "System/Xml/Serialization/zzzz__ListMap_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlMapping_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlMembersMapping_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlSerializationWriterInterpreter_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfo_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberAnyElement_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::*)(
    ::System::Xml::Serialization::XmlSerializationWriterInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4394e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo.WriteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::WriteObject)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x439b30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo*>::get(), "WriteObject",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo.WriteEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::WriteEnum)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x439b35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo*>::get(), "WriteEnum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlSerializationWriterInterpreter*& System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::__cordl_internal_get__swi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____swi;
}
constexpr ::System::Xml::Serialization::XmlSerializationWriterInterpreter* const& System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::__cordl_internal_get__swi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____swi;
}
constexpr void System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::__cordl_internal_set__swi(::System::Xml::Serialization::XmlSerializationWriterInterpreter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____swi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::XmlTypeMapping*& System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::__cordl_internal_get__typeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
constexpr ::System::Xml::Serialization::XmlTypeMapping* const& System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::__cordl_internal_get__typeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
constexpr void System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::__cordl_internal_set__typeMap(::System::Xml::Serialization::XmlTypeMapping* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::_ctor(::System::Xml::Serialization::XmlSerializationWriterInterpreter* swi,
                                                                                              ::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, swi, typeMap);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::WriteObject(::System::Object* ob) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo*>::get(), "WriteObject",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ob);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::WriteEnum(::System::Object* ob) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo*>::get(), "WriteEnum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ob);
}
inline ::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo*
System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::New_ctor(::System::Xml::Serialization::XmlSerializationWriterInterpreter* swi,
                                                                                     ::System::Xml::Serialization::XmlTypeMapping* typeMap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo*>(swi, typeMap));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationWriterInterpreter_CallbackInfo::XmlSerializationWriterInterpreter_CallbackInfo() {}
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(::System::Xml::Serialization::XmlMapping*)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x43949d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.InitCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)()>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter::InitCallbacks)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x4394a10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(::System::Object*)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteRoot)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x4394e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteRoot",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::StringW, ::StringW, bool, bool, bool)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObject)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x439506c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlMembersMapping*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMessage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x4395d10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteObjectElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::StringW, ::StringW)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElement)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4395f44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteObjectElementAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElementAttributes)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x439617c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteObjectElementElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElementElements)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4396980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMembers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4395f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteAttributeMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteAttributeMembers)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x4396220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteAttributeMembers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteElementMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::ClassMap*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteElementMembers)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x4396a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteElementMembers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.GetMemberValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, bool)>(
        &::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetMemberValue)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x43973a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "GetMemberValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.MemberHasValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, bool)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::MemberHasValue)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x4397180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "MemberHasValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteMemberElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapElementInfo*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMemberElement)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x4397b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteMemberElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.ImplicitConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter::ImplicitConvert)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x4395874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "ImplicitConvert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WritePrimitiveValueLiteral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Object*, ::StringW, ::StringW, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, bool, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveValueLiteral)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x4399838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WritePrimitiveValueLiteral",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WritePrimitiveValueEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Object*, ::StringW, ::StringW, ::System::Xml::XmlQualifiedName*, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, bool, bool)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveValueEncoded)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x4399b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WritePrimitiveValueEncoded",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteListElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::StringW, ::StringW)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteListElement)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x4399dbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteListContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Object*, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::ListMap*, ::System::Object*, ::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteListContent)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x43980a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteListContent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ListMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.GetListCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::TypeData*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetListCount)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4399fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "GetListCount", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteAnyElementContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapMemberAnyElement*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteAnyElementContent)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x43988a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteAnyElementContent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WritePrimitiveElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::StringW, ::StringW)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveElement)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x439ae68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.WriteEnumElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::StringW, ::StringW)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteEnumElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x439aea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.GetStringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetStringValue)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x4397884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "GetStringValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlSerializationWriterInterpreter.GetEnumXmlValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::XmlSerializationWriterInterpreter::*)(
    ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*)>(&::System::Xml::Serialization::XmlSerializationWriterInterpreter::GetEnumXmlValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x439aed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "GetEnumXmlValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::XmlMapping*& System::Xml::Serialization::XmlSerializationWriterInterpreter::__cordl_internal_get__typeMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
constexpr ::System::Xml::Serialization::XmlMapping* const& System::Xml::Serialization::XmlSerializationWriterInterpreter::__cordl_internal_get__typeMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeMap;
}
constexpr void System::Xml::Serialization::XmlSerializationWriterInterpreter::__cordl_internal_set__typeMap(::System::Xml::Serialization::XmlMapping* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Serialization::SerializationFormat& System::Xml::Serialization::XmlSerializationWriterInterpreter::__cordl_internal_get__format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____format;
}
constexpr ::System::Xml::Serialization::SerializationFormat const& System::Xml::Serialization::XmlSerializationWriterInterpreter::__cordl_internal_get__format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____format;
}
constexpr void System::Xml::Serialization::XmlSerializationWriterInterpreter::__cordl_internal_set__format(::System::Xml::Serialization::SerializationFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____format = value;
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::_ctor(::System::Xml::Serialization::XmlMapping* typeMap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::InitCallbacks() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteRoot(::System::Object* ob) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteRoot",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ob);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObject(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element, ::StringW namesp,
                                                                                       bool isNullable, bool needType, bool writeWrappingElem) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob, element, namesp, isNullable, needType, writeWrappingElem);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMessage(::System::Xml::Serialization::XmlMembersMapping* membersMap,
                                                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, membersMap, parameters);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element,
                                                                                              ::StringW namesp) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob, element, namesp);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElementAttributes(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteObjectElementElements(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteAttributeMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteAttributeMembers",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteElementMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteElementMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ClassMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, map, ob, isValueList);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationWriterInterpreter::GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "GetMemberValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, member, ob, isValueList);
}
inline bool System::Xml::Serialization::XmlSerializationWriterInterpreter::MemberHasValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, bool isValueList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "MemberHasValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, member, ob, isValueList);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteMemberElement(::System::Xml::Serialization::XmlTypeMapElementInfo* elem, ::System::Object* memberValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteMemberElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapElementInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elem, memberValue);
}
inline ::System::Object* System::Xml::Serialization::XmlSerializationWriterInterpreter::ImplicitConvert(::System::Object* obj, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "ImplicitConvert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, obj, type);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveValueLiteral(::System::Object* memberValue, ::StringW name, ::StringW ns,
                                                                                                      ::System::Xml::Serialization::XmlTypeMapping* mappedType,
                                                                                                      ::System::Xml::Serialization::TypeData* typeData, bool wrapped, bool isNullable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WritePrimitiveValueLiteral",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberValue, name, ns, mappedType, typeData, wrapped, isNullable);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveValueEncoded(::System::Object* memberValue, ::StringW name, ::StringW ns,
                                                                                                      ::System::Xml::XmlQualifiedName* xsiType,
                                                                                                      ::System::Xml::Serialization::XmlTypeMapping* mappedType,
                                                                                                      ::System::Xml::Serialization::TypeData* typeData, bool wrapped, bool isNullable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WritePrimitiveValueEncoded",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberValue, name, ns, xsiType, mappedType, typeData, wrapped, isNullable);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteListElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element,
                                                                                            ::StringW namesp) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob, element, namesp);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteListContent(::System::Object* container, ::System::Xml::Serialization::TypeData* listType,
                                                                                            ::System::Xml::Serialization::ListMap* map, ::System::Object* ob,
                                                                                            ::System::Text::StringBuilder* targetString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteListContent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::ListMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container, listType, map, ob, targetString);
}
inline int32_t System::Xml::Serialization::XmlSerializationWriterInterpreter::GetListCount(::System::Xml::Serialization::TypeData* listType, ::System::Object* ob) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "GetListCount", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, listType, ob);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteAnyElementContent(::System::Xml::Serialization::XmlTypeMapMemberAnyElement* member, ::System::Object* memberValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "WriteAnyElementContent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapMemberAnyElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member, memberValue);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WritePrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element,
                                                                                                 ::StringW namesp) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob, element, namesp);
}
inline void System::Xml::Serialization::XmlSerializationWriterInterpreter::WriteEnumElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::StringW element,
                                                                                            ::StringW namesp) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMap, ob, element, namesp);
}
inline ::StringW System::Xml::Serialization::XmlSerializationWriterInterpreter::GetStringValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Xml::Serialization::TypeData* type,
                                                                                               ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "GetStringValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::TypeData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, typeMap, type, value);
}
inline ::StringW System::Xml::Serialization::XmlSerializationWriterInterpreter::GetEnumXmlValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>::get(), "GetEnumXmlValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Serialization::XmlTypeMapping*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, typeMap, ob);
}
inline ::System::Xml::Serialization::XmlSerializationWriterInterpreter* System::Xml::Serialization::XmlSerializationWriterInterpreter::New_ctor(::System::Xml::Serialization::XmlMapping* typeMap) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlSerializationWriterInterpreter*>(typeMap));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlSerializationWriterInterpreter::XmlSerializationWriterInterpreter() {}
