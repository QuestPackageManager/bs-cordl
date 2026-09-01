#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\CacheControlHeaderValue.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Net/Http/Headers/zzzz__CacheControlHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_Extensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* (
    ::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_Extensions)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e2c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_Extensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_MaxAge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeSpan> (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::get_MaxAge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e2c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MaxAge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_MaxAge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::set_MaxAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                           { "set_MaxAge", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_MaxStale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MaxStale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_MaxStale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&::System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_MaxStale", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_MaxStaleLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeSpan> (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStaleLimit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e2cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MaxStaleLimit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_MaxStaleLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStaleLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                           { "set_MaxStaleLimit", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_MinFresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeSpan> (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::get_MinFresh)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e2cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MinFresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_MinFresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::set_MinFresh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                           { "set_MinFresh", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_MustRevalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_MustRevalidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MustRevalidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_MustRevalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::set_MustRevalidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_MustRevalidate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_NoCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_NoCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_NoCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_NoCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&::System::Net::Http::Headers::CacheControlHeaderValue::set_NoCache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_NoCache", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_NoCacheHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::get_NoCacheHeaders)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e2d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_NoCacheHeaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_NoStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_NoStore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_NoStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_NoStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&::System::Net::Http::Headers::CacheControlHeaderValue::set_NoStore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_NoStore", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_NoTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_NoTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_NoTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_NoTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::set_NoTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_NoTransform", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_OnlyIfCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_OnlyIfCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_OnlyIfCached", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_OnlyIfCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::set_OnlyIfCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_OnlyIfCached", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_Private
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_Private)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_Private", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_Private
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&::System::Net::Http::Headers::CacheControlHeaderValue::set_Private)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_Private", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_PrivateHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::StringW>* (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::get_PrivateHeaders)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60e2dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_PrivateHeaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_ProxyRevalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::get_ProxyRevalidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_ProxyRevalidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_ProxyRevalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::set_ProxyRevalidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_ProxyRevalidate", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_Public
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::get_Public)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_Public", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_Public
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(bool)>(&::System::Net::Http::Headers::CacheControlHeaderValue::set_Public)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_Public", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.get_SharedMaxAge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeSpan> (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::get_SharedMaxAge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e2e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_SharedMaxAge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.set_SharedMaxAge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::set_SharedMaxAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e2e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                           { "set_SharedMaxAge", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x60e2e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::CacheControlHeaderValue::*)(::System::Object*)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::Equals)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x60e32f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x60e3668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Net::Http::Headers::CacheControlHeaderValue*>)>(
    &::System::Net::Http::Headers::CacheControlHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0x9ac;
  constexpr static std::size_t addrs = 0x60e3830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                             { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::CacheControlHeaderValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::ToString)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x60e438c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CacheControlHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::CacheControlHeaderValue::*)()>(&::System::Net::Http::Headers::CacheControlHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e41dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* const&
System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void
System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set_extensions(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensions = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get_no_cache_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___no_cache_headers;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get_no_cache_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___no_cache_headers;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set_no_cache_headers(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___no_cache_headers = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get_private_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___private_headers;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get_private_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___private_headers;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set_private_headers(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___private_headers = value;
}
constexpr ::System::Nullable_1<::System::TimeSpan>& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MaxAge_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxAge_k__BackingField;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MaxAge_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxAge_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__MaxAge_k__BackingField(::System::Nullable_1<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxAge_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MaxStale_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxStale_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MaxStale_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxStale_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__MaxStale_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxStale_k__BackingField = value;
}
constexpr ::System::Nullable_1<::System::TimeSpan>& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MaxStaleLimit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxStaleLimit_k__BackingField;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MaxStaleLimit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxStaleLimit_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__MaxStaleLimit_k__BackingField(::System::Nullable_1<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxStaleLimit_k__BackingField = value;
}
constexpr ::System::Nullable_1<::System::TimeSpan>& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MinFresh_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinFresh_k__BackingField;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MinFresh_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinFresh_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__MinFresh_k__BackingField(::System::Nullable_1<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinFresh_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MustRevalidate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MustRevalidate_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__MustRevalidate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MustRevalidate_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__MustRevalidate_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MustRevalidate_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__NoCache_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NoCache_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__NoCache_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NoCache_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__NoCache_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NoCache_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__NoStore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NoStore_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__NoStore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NoStore_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__NoStore_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NoStore_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__NoTransform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NoTransform_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__NoTransform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NoTransform_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__NoTransform_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NoTransform_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__OnlyIfCached_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OnlyIfCached_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__OnlyIfCached_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OnlyIfCached_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__OnlyIfCached_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OnlyIfCached_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__Private_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Private_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__Private_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Private_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__Private_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Private_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__ProxyRevalidate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyRevalidate_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__ProxyRevalidate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProxyRevalidate_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__ProxyRevalidate_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProxyRevalidate_k__BackingField = value;
}
constexpr bool& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__Public_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Public_k__BackingField;
}
constexpr bool const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__Public_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Public_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__Public_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Public_k__BackingField = value;
}
constexpr ::System::Nullable_1<::System::TimeSpan>& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__SharedMaxAge_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SharedMaxAge_k__BackingField;
}
constexpr ::System::Nullable_1<::System::TimeSpan> const& System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_get__SharedMaxAge_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SharedMaxAge_k__BackingField;
}
constexpr void System::Net::Http::Headers::CacheControlHeaderValue::__cordl_internal_set__SharedMaxAge_k__BackingField(::System::Nullable_1<::System::TimeSpan> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SharedMaxAge_k__BackingField = value;
}
inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* System::Net::Http::Headers::CacheControlHeaderValue::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_Extensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::TimeSpan> System::Net::Http::Headers::CacheControlHeaderValue::get_MaxAge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MaxAge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_MaxAge(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                         { "set_MaxAge", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MaxStale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStale(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_MaxStale", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::TimeSpan> System::Net::Http::Headers::CacheControlHeaderValue::get_MaxStaleLimit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MaxStaleLimit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_MaxStaleLimit(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                         { "set_MaxStaleLimit", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::TimeSpan> System::Net::Http::Headers::CacheControlHeaderValue::get_MinFresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MinFresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_MinFresh(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                         { "set_MinFresh", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_MustRevalidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_MustRevalidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_MustRevalidate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_MustRevalidate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_NoCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_NoCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_NoCache(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_NoCache", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* System::Net::Http::Headers::CacheControlHeaderValue::get_NoCacheHeaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_NoCacheHeaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_NoStore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_NoStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_NoStore(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_NoStore", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_NoTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_NoTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_NoTransform(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_NoTransform", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_OnlyIfCached() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_OnlyIfCached", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_OnlyIfCached(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_OnlyIfCached", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_Private() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_Private", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_Private(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_Private", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::ICollection_1<::StringW>* System::Net::Http::Headers::CacheControlHeaderValue::get_PrivateHeaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_PrivateHeaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::StringW>*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_ProxyRevalidate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_ProxyRevalidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_ProxyRevalidate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_ProxyRevalidate", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::get_Public() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_Public", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_Public(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "set_Public", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::TimeSpan> System::Net::Http::Headers::CacheControlHeaderValue::get_SharedMaxAge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "get_SharedMaxAge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::set_SharedMaxAge(::System::Nullable_1<::System::TimeSpan> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                                                         { "set_SharedMaxAge", {}, { ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Net::Http::Headers::CacheControlHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::CacheControlHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::CacheControlHeaderValue::TryParse(::StringW input, ::by_ref<::System::Net::Http::Headers::CacheControlHeaderValue*> parsedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(),
                                                           { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::CacheControlHeaderValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, parsedValue);
}
inline ::StringW System::Net::Http::Headers::CacheControlHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Http::Headers::CacheControlHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CacheControlHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::CacheControlHeaderValue* System::Net::Http::Headers::CacheControlHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::CacheControlHeaderValue*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::CacheControlHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::CacheControlHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::CacheControlHeaderValue::CacheControlHeaderValue() {}
