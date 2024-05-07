#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectWriter.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_impl.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectWriter_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__Header_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalFE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__WriteObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectIDGenerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationObjectManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*,
    ::System::Runtime::Serialization::SerializationBinder*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2850378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalFE*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Object*, ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>,
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, bool)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Serialize)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x2850470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.get_ObjectManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationObjectManager* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::get_ObjectManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28510ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(),
                                                 "get_ObjectManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2850b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
    ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x28518a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteMemberSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::StringW, ::System::Type*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMemberSetup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2851b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteMemberSetup",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*,
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMembers)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2851c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArray)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x28510b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteArrayMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArrayMember)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2852234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteArrayMember",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteRectangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Array*,
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::ArrayW<int32_t, ::Array<int32_t>*>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteRectangle)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x28524a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteRectangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.GetNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(ByRef<int64_t>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2850f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "GetNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.InternalGetId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Object*, bool, ::System::Type*, ByRef<bool>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::InternalGetId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2850874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "InternalGetId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Schedule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Object*, bool, ::System::Type*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2852730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.Schedule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Object*, bool, ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2852098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteKnownValueClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteKnownValueClass)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2852140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteKnownValueClass",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteObjectRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, int64_t)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteObjectRef)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2852124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteObjectRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x285273c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.CheckForNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckForNull)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2851f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "CheckForNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.WriteSerializedStreamHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(int64_t, int64_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteSerializedStreamHeader)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2850850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteSerializedStreamHeader",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::NameInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*,
                                                                           ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE,
                                                                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x285283c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::NameInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::System::Type*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2851bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::NameInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2850b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::NameInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*,
                                                                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2852048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.TypeToNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2852010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.MemberToNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::NameInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::StringW)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::MemberToNameInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2851af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "MemberToNameInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.ToCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::System::Type*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::ToCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2851820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "ToCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.GetAssemblyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetAssemblyId)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2850938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "GetAssemblyId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2851808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "GetType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.GetNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::NameInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNameInfo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x28528cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "GetNameInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.CheckTypeFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::FormatterTypeStyle, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckTypeFormat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28517fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "CheckTypeFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::FormatterTypeStyle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::FormatterTypeStyle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter.PutNameInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::PutNameInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2850f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "PutNameInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Queue*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_objectQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objectQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_objectQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objectQueue;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_m_objectQueue(::System::Collections::Queue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_objectQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ObjectIDGenerator*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_idGenerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_idGenerator;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectIDGenerator*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_idGenerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_idGenerator;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_m_idGenerator(::System::Runtime::Serialization::ObjectIDGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_idGenerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_currentId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_currentId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_m_currentId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentId = value;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_surrogates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_surrogates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogates;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_surrogates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_context;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_m_context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_context = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_serWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serWriter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_serWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serWriter;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_serWriter(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationObjectManager*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_objectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objectManager;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationObjectManager*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_objectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_objectManager;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_m_objectManager(::System::Runtime::Serialization::SerializationObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_objectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_topId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_topId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_topId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topId = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_topName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_topName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_topName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___topName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_headers(
    ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_formatterEnums() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterEnums;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::InternalFE*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_formatterEnums() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterEnums;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_formatterEnums(::System::Runtime::Serialization::Formatters::Binary::InternalFE* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___formatterEnums)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationBinder*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_binder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_binder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_binder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_binder;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_m_binder(::System::Runtime::Serialization::SerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_binder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_serObjectInfoInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_serObjectInfoInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serObjectInfoInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::IFormatterConverter*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_formatterConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_formatterConverter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::IFormatterConverter*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_m_formatterConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_formatterConverter;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_m_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_formatterConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_crossAppDomainArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossAppDomainArray;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_crossAppDomainArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossAppDomainArray;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_crossAppDomainArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___crossAppDomainArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_previousObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousObj;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_previousObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousObj;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_previousObj(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousObj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_previousId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_previousId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_previousId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousId = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_previousType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_previousType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_previousType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_previousCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousCode;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_previousCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousCode;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_previousCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousCode = value;
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_assemblyToIdTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyToIdTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_assemblyToIdTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyToIdTable;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_assemblyToIdTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyToIdTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_niPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___niPool;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const&
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_get_niPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___niPool;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::__cordl_internal_set_niPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___niPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::New_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context,
                                                                           ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums,
                                                                           ::System::Runtime::Serialization::SerializationBinder* binder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(selector, context, formatterEnums, binder));
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::_ctor(::System::Runtime::Serialization::ISurrogateSelector* selector,
                                                                                    ::System::Runtime::Serialization::StreamingContext context,
                                                                                    ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums,
                                                                                    ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalFE*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selector, context, formatterEnums, binder);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Serialize(
    ::System::Object* graph, ::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*> inHeaders,
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter, bool fCheck) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::Remoting::Messaging::Header*, ::Array<::System::Runtime::Remoting::Messaging::Header*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graph, inHeaders, serWriter, fCheck);
}
inline ::System::Runtime::Serialization::SerializationObjectManager* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::get_ObjectManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "get_ObjectManager",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationObjectManager*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                    ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                    ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectInfo, memberNameInfo, typeNameInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Write(
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
    ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> memberData,
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*> memberObjectInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::Array<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectInfo, memberNameInfo, typeNameInfo, memberNames, memberTypes, memberData, memberObjectInfos);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMemberSetup(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::StringW memberName,
                                                                                               ::System::Type* memberType, ::System::Object* memberData,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteMemberSetup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectInfo, memberNameInfo, typeNameInfo, memberName, memberType, memberData, memberObjectInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteMembers(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberTypeNameInfo,
                                                                                           ::System::Object* memberData,
                                                                                           ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                                                                                           ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberNameInfo, memberTypeNameInfo, memberData, objectInfo, typeNameInfo, memberObjectInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArray(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                         ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                         ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectInfo, memberNameInfo, memberObjectInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteArrayMember(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                                                                                               ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteArrayMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectInfo, arrayElemTypeNameInfo, data);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteRectangle(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, int32_t rank,
                                                                                             ::ArrayW<int32_t, ::Array<int32_t>*> maxA, ::System::Array* array,
                                                                                             ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemNameTypeInfo,
                                                                                             ::ArrayW<int32_t, ::Array<int32_t>*> lowerBoundA) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteRectangle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectInfo, rank, maxA, array, arrayElemNameTypeInfo, lowerBoundA);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNext(ByRef<int64_t> objID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "GetNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, objID);
}
inline int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::InternalGetId(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type, ByRef<bool> isNew) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "InternalGetId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, obj, assignUniqueIdToValueType, type, isNew);
}
inline int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, obj, assignUniqueIdToValueType, type);
}
inline int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::Schedule(::System::Object* obj, bool assignUniqueIdToValueType, ::System::Type* type,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "Schedule", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, obj, assignUniqueIdToValueType, type, objectInfo);
}
inline bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteKnownValueClass(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                                   ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                                                                                                   ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteKnownValueClass",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, memberNameInfo, typeNameInfo, data);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int64_t objectId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteObjectRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameInfo, objectId);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo,
                                                                                          ::System::Object* stringObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberNameInfo, typeNameInfo, stringObject);
}
inline bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckForNull(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                           ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "CheckForNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectInfo, memberNameInfo, typeNameInfo, data);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::WriteSerializedStreamHeader(int64_t topId, int64_t headerId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "WriteSerializedStreamHeader",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topId, headerId);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo*
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::NameInfo*, false>(this, ___internal_method, type, objectInfo, code, nameInfo);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::NameInfo*, false>(this, ___internal_method, type);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo*
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::NameInfo*, false>(this, ___internal_method, objectInfo);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo*
System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                 ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::NameInfo*, false>(this, ___internal_method, objectInfo, nameInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::TypeToNameInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "TypeToNameInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, nameInfo);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::MemberToNameInfo(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "MemberToNameInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::NameInfo*, false>(this, ___internal_method, name);
}
inline ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE System::Runtime::Serialization::Formatters::Binary::ObjectWriter::ToCode(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "ToCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, false>(this, ___internal_method, type);
}
inline int64_t System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetAssemblyId(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "GetAssemblyId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, objectInfo);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetType(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "GetType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, obj);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::ObjectWriter::GetNameInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "GetNameInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::NameInfo*, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::Formatters::Binary::ObjectWriter::CheckTypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle test,
                                                                                              ::System::Runtime::Serialization::Formatters::FormatterTypeStyle want) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "CheckTypeFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::FormatterTypeStyle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::FormatterTypeStyle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, test, want);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectWriter::PutNameInfo(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(), "PutNameInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameInfo);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter::ObjectWriter() {}
