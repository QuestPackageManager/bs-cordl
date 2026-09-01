#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\ReadObjectInfo.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5f46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.ObjectEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5f470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "ObjectEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.PrepareForReuse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5f474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "PrepareForReuse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*,
                                                                                          ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*,
                                                                                          ::System::Runtime::Serialization::IFormatterConverter*, bool)>(
        &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b5f47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                { "Create",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b5f56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                { "Init",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(::System::Type*, ::ArrayW<::StringW>, ::ArrayW<::System::Type*>, ::System::Runtime::Serialization::ISurrogateSelector*,
                                                                              ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*,
                                                                              ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*,
                                                                              ::System::Runtime::Serialization::IFormatterConverter*, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b5f744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                            { "Create",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                                ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::System::Type*, ::ArrayW<::StringW>, ::ArrayW<::System::Type*>, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
    ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b5f7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                            { "Init",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                                ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitReadConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b5f584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                             { "InitReadConstructor",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitSiRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b5f888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "InitSiRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitNoMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b5f828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "InitNoMembers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitMemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5b5f908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "InitMemberInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetMemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5b5fc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "GetMemberInfo", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5b5ff48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "GetType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.AddValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::StringW, ::System::Object*, ::by_ref<::System::Runtime::Serialization::SerializationInfo*>, ::by_ref<::ArrayW<::System::Object*>>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b600e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                { "AddValue",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::SerializationInfo*>>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.InitDataStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(
    ::by_ref<::System::Runtime::Serialization::SerializationInfo*>, ::by_ref<::ArrayW<::System::Object*>>)>(&::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b60180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                            { "InitDataStore", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Serialization::SerializationInfo*>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.RecordFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(int64_t, ::StringW, int64_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b60254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                             { "RecordFixup", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.PopulateObjectMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::System::Object*, ::ArrayW<::System::Object*>)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b602f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                             { "PopulateObjectMembers", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b5fe2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "Position", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetMemberTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::ArrayW<::StringW>, ::System::Type*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5b60398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                                                           { "GetMemberTypes", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::*)(::System::Reflection::MemberInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b5fb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                                                           { "GetMemberType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo.GetObjectInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*)>(
        &::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b5f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                             { "GetObjectInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>() } })));
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
constexpr ::System::Type* const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectType = value;
}
constexpr ::System::Runtime::Serialization::ObjectManager*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectManager;
}
constexpr ::System::Runtime::Serialization::ObjectManager* const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_objectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectManager;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_objectManager(::System::Runtime::Serialization::ObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectManager = value;
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
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cache = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_wireMemberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMemberNames;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_wireMemberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMemberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_wireMemberNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wireMemberNames = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_wireMemberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMemberTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_wireMemberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wireMemberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_wireMemberTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wireMemberTypes = value;
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
constexpr ::System::Runtime::Serialization::ISerializationSurrogate* const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_serializationSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializationSurrogate = value;
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
constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_memberTypesList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypesList;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_memberTypesList(::System::Collections::Generic::List_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberTypesList = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_serObjectInfoInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* const&
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_serObjectInfoInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serObjectInfoInit = value;
}
constexpr ::System::Runtime::Serialization::IFormatterConverter*& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_formatterConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterConverter;
}
constexpr ::System::Runtime::Serialization::IFormatterConverter* const& System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_get_formatterConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterConverter;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::__cordl_internal_set_formatterConverter(::System::Runtime::Serialization::IFormatterConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___formatterConverter = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::setStaticF_readObjectInfoCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "readObjectInfoCounter", ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::getStaticF_readObjectInfoCounter() {
  return ::cordl_internals::getStaticField<int32_t, "readObjectInfoCounter", ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>();
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ObjectEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "ObjectEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PrepareForReuse() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "PrepareForReuse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                           ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager,
                                                                           ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                           ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(nullptr, ___internal_method, objectType, surrogateSelector, context, objectManager,
                                                                                                                    serObjectInfoInit, converter, bSimpleAssembly);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                     ::System::Runtime::Serialization::StreamingContext context,
                                                                                     ::System::Runtime::Serialization::ObjectManager* objectManager,
                                                                                     ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                     ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectType, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Create(
    ::System::Type* objectType, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type*> memberTypes, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
    ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                          { "Create",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                              ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                              ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(
      nullptr, ___internal_method, objectType, memberNames, memberTypes, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Init(::System::Type* objectType, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type*> memberTypes,
                                                                                     ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                     ::System::Runtime::Serialization::StreamingContext context,
                                                                                     ::System::Runtime::Serialization::ObjectManager* objectManager,
                                                                                     ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                     ::System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(),
                              ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                              ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectType, memberNames, memberTypes, surrogateSelector, context, objectManager, serObjectInfoInit, converter,
                                                   bSimpleAssembly);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitReadConstructor(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                                                         { "InitReadConstructor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectType, surrogateSelector, context);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitSiRead() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "InitSiRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitNoMembers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "InitNoMembers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitMemberInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "InitMemberInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberInfo(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "GetMemberInfo", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method, name);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetType(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "GetType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::AddValue(::StringW name, ::System::Object* value, ::by_ref<::System::Runtime::Serialization::SerializationInfo*> si,
                                                                                         ::by_ref<::ArrayW<::System::Object*>> memberData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                              { "AddValue",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::SerializationInfo*>>(),
                                                  ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value, si, memberData);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::InitDataStore(::by_ref<::System::Runtime::Serialization::SerializationInfo*> si,
                                                                                              ::by_ref<::ArrayW<::System::Object*>> memberData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                          { "InitDataStore", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Serialization::SerializationInfo*>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, si, memberData);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::RecordFixup(int64_t objectId, ::StringW name, int64_t idRef) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                           { "RecordFixup", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectId, name, idRef);
}
inline void System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::PopulateObjectMembers(::System::Object* obj, ::ArrayW<::System::Object*> memberData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                           { "PopulateObjectMembers", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, memberData);
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::Position(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(), { "Position", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Type*> System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberTypes(::ArrayW<::StringW> inMemberNames, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                                                         { "GetMemberTypes", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, inMemberNames, objectType);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetMemberType(::System::Reflection::MemberInfo* objMember) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                                                         { "GetMemberType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objMember);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*
System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(),
                                                           { "GetObjectInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(nullptr, ___internal_method, serObjectInfoInit);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo::ReadObjectInfo() {}
