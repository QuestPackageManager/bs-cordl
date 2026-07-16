#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/WriteObjectInfo.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__WriteObjectInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectWriter_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoCache_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Runtime/Serialization/zzzz__IFormatterConverter_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5bbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.ObjectEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b5bbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "ObjectEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InternalInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5bbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "InternalInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::
                    WriteObjectInfo* (*)(::System::Object*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
                                         ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*,
                                         ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*)>(
        &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b5bbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
            { "Serialize",
              {},
              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(),
                ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(
    ::System::Object*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*,
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x5b5bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
            { "InitSerialize",
              {},
              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(),
                ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::
                    WriteObjectInfo* (*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
                                         ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*,
                                         ::System::Runtime::Serialization::SerializationBinder*)>(&::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b5c9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                            { "Serialize",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(
    ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::SerializationBinder*)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5b5ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                            { "InitSerialize",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitSiWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5b5c364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "InitSiWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.CheckTypeForwardedFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, ::System::Type*, ::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b5c664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                            { "CheckTypeForwardedFrom",
                              {},
                              { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitNoMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b5c258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "InitNoMembers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InitMemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5b5c728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "InitMemberInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetTypeFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b5cf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "GetTypeFullName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetAssemblyString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b5cfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "GetAssemblyString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.InvokeSerializationBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(::System::Runtime::Serialization::SerializationBinder*)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b5c33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                             { "InvokeSerializationBinder", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetMemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(::System::Reflection::MemberInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b5ce00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                                                           { "GetMemberType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetMemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::*)(
    ::by_ref<::ArrayW<::StringW>>, ::by_ref<::ArrayW<::System::Type*>>, ::by_ref<::ArrayW<::System::Object*>>)>(
    &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b5cfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                            { "GetMemberInfo",
                              {},
                              { ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Type*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.GetObjectInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*)>(
        &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b5bc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                             { "GetObjectInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo.PutObjectInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*)>(
        &::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b5bbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                                                           { "PutObjectInfo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_objectInfoId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfoId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_objectInfoId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfoId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_objectInfoId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectInfoId = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_obj(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obj = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectType = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_isSi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSi;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_isSi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSi;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_isSi(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSi = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_isNamed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNamed;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_isNamed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNamed;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_isNamed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNamed = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_isTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTyped;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_isTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTyped;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_isTyped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTyped = value;
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_isArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isArray;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_isArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isArray;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_isArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isArray = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_si() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___si;
}
constexpr ::System::Runtime::Serialization::SerializationInfo* const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_si() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___si;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_si(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___si = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cache;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cache = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_memberData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberData;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_memberData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberData;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_memberData(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberData = value;
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_serializationSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate* const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_serializationSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationSurrogate;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializationSurrogate = value;
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_serObjectInfoInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* const&
System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_serObjectInfoInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serObjectInfoInit;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serObjectInfoInit = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_objectId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_objectId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_objectId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectId = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_assemId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_assemId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_assemId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemId = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_binderTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binderTypeName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_binderTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binderTypeName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_binderTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binderTypeName = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_binderAssemblyString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binderAssemblyString;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_get_binderAssemblyString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binderAssemblyString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::__cordl_internal_set_binderAssemblyString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binderAssemblyString = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::ObjectEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "ObjectEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InternalInit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "InternalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize(
    ::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
    ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
          { "Serialize",
            {},
            { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
              ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(),
              ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(nullptr, ___internal_method, obj, surrogateSelector, context, serObjectInfoInit,
                                                                                                                     converter, objectWriter, binder);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize(::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                               ::System::Runtime::Serialization::StreamingContext context,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                               ::System::Runtime::Serialization::IFormatterConverter* converter,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                                                                                               ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
          { "InitSerialize",
            {},
            { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
              ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(),
              ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, surrogateSelector, context, serObjectInfoInit, converter, objectWriter, binder);
}
inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::Serialize(
    ::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context,
    ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter,
    ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                          { "Serialize",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(nullptr, ___internal_method, objectType, surrogateSelector, context,
                                                                                                                     serObjectInfoInit, converter, binder);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSerialize(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                               ::System::Runtime::Serialization::StreamingContext context,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                               ::System::Runtime::Serialization::IFormatterConverter* converter,
                                                                                               ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                          { "InitSerialize",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::IFormatterConverter*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectType, surrogateSelector, context, serObjectInfoInit, converter, binder);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitSiWrite() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "InitSiWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::CheckTypeForwardedFrom(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache,
                                                                                                        ::System::Type* objectType, ::StringW binderAssemblyString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                          { "CheckTypeForwardedFrom",
                            {},
                            { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cache, objectType, binderAssemblyString);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitNoMembers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "InitNoMembers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InitMemberInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "InitMemberInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetTypeFullName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "GetTypeFullName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetAssemblyString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), { "GetAssemblyString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::InvokeSerializationBinder(::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                           { "InvokeSerializationBinder", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binder);
}
inline ::System::Type* System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberType(::System::Reflection::MemberInfo* objMember) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                                                         { "GetMemberType", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objMember);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetMemberInfo(::by_ref<::ArrayW<::StringW>> outMemberNames, ::by_ref<::ArrayW<::System::Type*>> outMemberTypes,
                                                                                               ::by_ref<::ArrayW<::System::Object*>> outMemberData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                          { "GetMemberInfo",
                            {},
                            { ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Type*>>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::Object*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outMemberNames, outMemberTypes, outMemberData);
}
inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*
System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                           { "GetObjectInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(nullptr, ___internal_method, serObjectInfoInit);
}
inline void System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::PutObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                                                         { "PutObjectInfo",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, serObjectInfoInit, objectInfo);
}
inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::WriteObjectInfo() {}
