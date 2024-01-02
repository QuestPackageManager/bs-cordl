#pragma once
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__WriteObjectInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectWriter_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoCache_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c7f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.ObjectEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24c7f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "ObjectEnd",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InternalInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24c7f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InternalInit",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::
                    WriteObjectInfo* (*)(::System::Object*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
                                         ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*,
                                         ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*)>(
        &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24c7f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "Serialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(
    ::System::Object*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*,
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x24c80e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitSerialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::
                    WriteObjectInfo* (*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
                                         ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*,
                                         ::System::Runtime::Serialization::SerializationBinder*)>(&::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24c8df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "Serialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(
    ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::SerializationBinder*)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x24c8e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitSerialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitSiWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x24c86d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitSiWrite",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.CheckTypeForwardedFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, ::System::Type*, ::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x24c89c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "CheckTypeForwardedFrom", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitNoMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x24c85c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitNoMembers",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitMemberInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x24c8b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                                 "InitMemberInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetTypeFullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c04bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                                 "GetTypeFullName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetAssemblyString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c0494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                                 "GetAssemblyString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InvokeSerializationBinder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(
    ::System::Runtime::Serialization::SerializationBinder*)>(&::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c86a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InvokeSerializationBinder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetMemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(::System::Reflection::MemberInfo*)>(
        &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x24c915c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "GetMemberType",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetMemberInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(
    ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>, ByRef<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>, ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24c92c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "GetMemberInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetObjectInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*)>(
        &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24c8010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "GetObjectInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.PutObjectInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(
        &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24c7f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "PutObjectInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_objectInfoId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfoId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_objectInfoId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfoId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_objectInfoId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectInfoId = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_obj(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_isSi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSi;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_isSi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSi;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_isSi(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSi = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_isNamed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNamed;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_isNamed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNamed;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_isNamed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNamed = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_isTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTyped;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_isTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTyped;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_isTyped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTyped = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_isArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isArray;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_isArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isArray;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_isArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isArray = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_si() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___si;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_si() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___si;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_si(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___si)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*> const&
System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_memberData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberData;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_memberData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberData;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_memberData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_serializationSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> const&
System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_serializationSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializationSurrogate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_serObjectInfoInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> const&
System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_serObjectInfoInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serObjectInfoInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_objectId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectId = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_assemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_assemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_assemId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemId = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_binderTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binderTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_binderTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binderTypeName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_binderTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___binderTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_binderAssemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binderAssemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__get_binderAssemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binderAssemblyString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__set_binderAssemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___binderAssemblyString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "ObjectEnd",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InternalInit",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize(
    ::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "Serialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, false>(nullptr, ___internal_method, obj, surrogateSelector, context,
                                                                                                                            serObjectInfoInit, converter, objectWriter, binder);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize(::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                               ::System::Runtime::Serialization::StreamingContext context,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                               ::System::Runtime::Serialization::IFormatterConverter* converter,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                                                                                               ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitSerialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, surrogateSelector, context, serObjectInfoInit, converter, objectWriter, binder);
}
inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize(
    ::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
    ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "Serialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, false>(nullptr, ___internal_method, objectType, surrogateSelector, context,
                                                                                                                            serObjectInfoInit, converter, binder);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                               ::System::Runtime::Serialization::StreamingContext context,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                               ::System::Runtime::Serialization::IFormatterConverter* converter,
                                                                                               ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitSerialize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISurrogateSelector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IFormatterConverter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objectType, surrogateSelector, context, serObjectInfoInit, converter, binder);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitSiWrite",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache,
                                                                                                        ::System::Type* objectType, ::StringW binderAssemblyString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "CheckTypeForwardedFrom", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cache, objectType, binderAssemblyString);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitNoMembers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InitMemberInfo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "GetTypeFullName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(),
                                               "GetAssemblyString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder(::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "InvokeSerializationBinder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binder);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType(::System::Reflection::MemberInfo* objMember) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "GetMemberType",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, objMember);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo(ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> outMemberNames,
                                                                                               ByRef<::ArrayW<::System::Type*, ::Array<::System::Type*>*>> outMemberTypes,
                                                                                               ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>> outMemberData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "GetMemberInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outMemberNames, outMemberTypes, outMemberData);
}
inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*
System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "GetObjectInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, false>(nullptr, ___internal_method, serObjectInfoInit);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get(), "PutObjectInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, serObjectInfoInit, objectInfo);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::WriteObjectInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
