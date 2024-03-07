#pragma once
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoCache_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261e8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.ObjectEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261e8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "ObjectEnd",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.PrepareForReuse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2619534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(),
                                                 "PrepareForReuse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*,
                                                                                          ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*,
                                                                                          ::System::Runtime::Serialization::IFormatterConverter*, bool)>(
        &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x261e8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x261e9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::
                    ReadObjectInfo* (*)(::System::Type*, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                                        ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*,
                                        ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(
        &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x261eb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::System::Type*, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Runtime::Serialization::ISurrogateSelector*,
    ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*,
    ::System::Runtime::Serialization::IFormatterConverter*, bool)>(&::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x261ec2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitReadConstructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x261e9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitReadConstructor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitSiRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x261ece4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitSiRead",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitNoMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x261ec7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitNoMembers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitMemberInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x261ed64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitMemberInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetMemberInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(&::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x261f0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetMemberInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x261f3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.AddValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::StringW, ::System::Object*, ByRef<::System::Runtime::Serialization::SerializationInfo*>, ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x261f578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "AddValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::SerializationInfo*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitDataStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ByRef<::System::Runtime::Serialization::SerializationInfo*>, ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2619464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitDataStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::SerializationInfo*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.RecordFixup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(int64_t, ::StringW, int64_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x261f60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "RecordFixup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.PopulateObjectMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x261f6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "PopulateObjectMembers",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x261f298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Position",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetMemberTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (
    ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Type*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x2618c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetMemberTypes",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetMemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::System::Reflection::MemberInfo*)>(
        &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x261ef74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetMemberType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetObjectInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*)>(
        &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x261e968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetObjectInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectInfoId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfoId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectInfoId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfoId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_objectInfoId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectInfoId = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ObjectManager*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectManager;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectManager*> const&
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectManager;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_objectManager(::System::Runtime::Serialization::ObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_isSi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSi;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_isSi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSi;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_isSi(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSi = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_isNamed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNamed;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_isNamed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNamed;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_isNamed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNamed = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_isTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTyped;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_isTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTyped;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_isTyped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTyped = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_bSimpleAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bSimpleAssembly;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_bSimpleAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bSimpleAssembly;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_bSimpleAssembly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bSimpleAssembly = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*> const&
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_wireMemberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMemberNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_wireMemberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMemberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_wireMemberNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wireMemberNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_wireMemberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMemberTypes;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_wireMemberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMemberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_wireMemberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wireMemberTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_lastPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPosition;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_lastPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastPosition;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_lastPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastPosition = value;
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_serializationSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const&
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_serializationSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializationSurrogate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_memberTypesList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypesList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const&
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_memberTypesList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypesList;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_memberTypesList(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberTypesList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_serObjectInfoInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> const&
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_serObjectInfoInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serObjectInfoInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::IFormatterConverter*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_formatterConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterConverter;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::IFormatterConverter*> const&
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_formatterConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterConverter;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___formatterConverter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::setStaticF_readObjectInfoCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "readObjectInfoCounter",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::getStaticF_readObjectInfoCounter() {
  return ::cordl_internals::getStaticField<int32_t, "readObjectInfoCounter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get>();
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "ObjectEnd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "PrepareForReuse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                           ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager,
                                                                           ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                           ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, false>(nullptr, ___internal_method, objectType, surrogateSelector, context,
                                                                                                                           objectManager, serObjectInfoInit, converter, bSimpleAssembly);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                     ::System::Runtime::Serialization::StreamingContext context,
                                                                                     ::System::Runtime::Serialization::ObjectManager* objectManager,
                                                                                     ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                     ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectType, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create(
    ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
    ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, false>(
      nullptr, ___internal_method, objectType, memberNames, memberTypes, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init(
    ::System::Type* objectType, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes,
    ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ObjectManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectType, memberNames, memberTypes, surrogateSelector, context, objectManager, serObjectInfoInit, converter,
                                                          bSimpleAssembly);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitReadConstructor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectType, surrogateSelector, context);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitSiRead",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitNoMembers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitMemberInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetMemberInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*, false>(this, ___internal_method, name);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, name);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue(::StringW name, ::System::Object* value, ByRef<::System::Runtime::Serialization::SerializationInfo*> si,
                                                                                         ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "AddValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::SerializationInfo*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value, si, memberData);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore(ByRef<::System::Runtime::Serialization::SerializationInfo*> si,
                                                                                              ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> memberData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "InitDataStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::SerializationInfo*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, si, memberData);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup(int64_t objectId, ::StringW name, int64_t idRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "RecordFixup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectId, name, idRef);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> memberData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "PopulateObjectMembers",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, memberData);
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "Position",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes(::ArrayW<::StringW, ::Array<::StringW>*> inMemberNames,
                                                                                                                                               ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetMemberTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method, inMemberNames, objectType);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType(::System::Reflection::MemberInfo* objMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetMemberType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, objMember);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get(), "GetObjectInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, false>(nullptr, ___internal_method, serObjectInfoInit);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ReadObjectInfo() {}
