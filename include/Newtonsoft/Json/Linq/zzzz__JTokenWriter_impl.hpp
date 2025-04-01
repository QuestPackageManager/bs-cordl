#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JTokenWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenWriter_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool, ::System::Threading::CancellationToken)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteTokenAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3f2635c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.get_CurrentToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(
    &::Newtonsoft::Json::Linq::JTokenWriter::get_CurrentToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f26468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                               "get_CurrentToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.get_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(
    &::Newtonsoft::Json::Linq::JTokenWriter::get_Token)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3f26470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "get_Token",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JContainer*)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3f2648c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f2651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3f26574;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f26578;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3f26580;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JContainer*)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::AddParent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3f26604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "AddParent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.RemoveParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::RemoveParent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3f26644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "RemoveParent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3f26698;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 70));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteStartConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3f2671c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 72));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3f267b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 78));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3f267b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 74));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddRawValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(
    ::System::Object*, ::Newtonsoft::Json::Linq::JTokenType, ::Newtonsoft::Json::JsonToken)>(&::Newtonsoft::Json::Linq::JTokenWriter::AddRawValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3f26898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "AddRawValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JTokenType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.AddJValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::JsonToken)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::AddJValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3f2697c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "AddJValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Object*)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3f26a60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 123));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteNull)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3f26af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 82));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteUndefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)()>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3f26b14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 83));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3f26b90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 84));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteComment)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3f26c0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 124));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::StringW)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3f26c9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 86));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int32_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3f26d20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 87));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint32_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3f26da0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 88));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int64_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f26e20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 89));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint64_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f26f0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 90));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(float_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f26ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 91));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(double_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f270d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 92));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(bool)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3f271c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 93));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3f272b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 94));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3f27330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 95));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(char16_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3f273b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 96));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(uint8_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3f274a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 97));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(int8_t)>(&::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3f27524;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 98));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Decimal)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3f275a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 99));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::DateTime)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3f276a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 100));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::DateTimeOffset)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3f277c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3f278c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 121));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::TimeSpan)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f27940;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 103));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Guid)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3f27a24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 102));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::System::Uri*)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f27b20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 122));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JTokenWriter.WriteToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JTokenWriter::*)(::Newtonsoft::Json::JsonReader*, bool, bool, bool)>(
    &::Newtonsoft::Json::Linq::JTokenWriter::WriteToken)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x3f27c1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 77));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr ::Newtonsoft::Json::Linq::JContainer* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__token(::Newtonsoft::Json::Linq::JContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____token)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JContainer*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::Newtonsoft::Json::Linq::JContainer* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JValue*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::Newtonsoft::Json::Linq::JValue* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__value(::Newtonsoft::Json::Linq::JValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Linq::JToken*& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr ::Newtonsoft::Json::Linq::JToken* const& Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
constexpr void Newtonsoft::Json::Linq::JTokenWriter::__cordl_internal_set__current(::Newtonsoft::Json::Linq::JToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task* Newtonsoft::Json::Linq::JTokenWriter::WriteTokenAsync(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate,
                                                                                               bool writeComments, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments, cancellationToken);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JTokenWriter::get_CurrentToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "get_CurrentToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Linq::JToken* Newtonsoft::Json::Linq::JTokenWriter::get_Token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "get_Token",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::_ctor(::Newtonsoft::Json::Linq::JContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddParent(::Newtonsoft::Json::Linq::JContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "AddParent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::RemoveParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "RemoveParent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 70)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteStartConstructor(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteEnd(::Newtonsoft::Json::JsonToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 78)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WritePropertyName(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddRawValue(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type, ::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "AddRawValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JTokenType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, type, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::AddJValue(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::JsonToken token) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), "AddJValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JValue*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, token);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 123)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 82)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteUndefined() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 83)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteRaw(::StringW json) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 84)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteComment(::StringW text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 124)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 86)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 87)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 88)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 90)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 91)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(double_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 92)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 93)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 94)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 95)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(char16_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 96)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 97)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(int8_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 98)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 99)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 100)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::DateTimeOffset value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 121)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 103)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 102)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteValue(::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 122)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Linq::JTokenWriter::WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JTokenWriter*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, writeChildren, writeDateConstructorAsDate, writeComments);
}
inline ::Newtonsoft::Json::Linq::JTokenWriter* Newtonsoft::Json::Linq::JTokenWriter::New_ctor(::Newtonsoft::Json::Linq::JContainer* container) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JTokenWriter*>(container));
}
inline ::Newtonsoft::Json::Linq::JTokenWriter* Newtonsoft::Json::Linq::JTokenWriter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JTokenWriter*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JTokenWriter::JTokenWriter() {}
