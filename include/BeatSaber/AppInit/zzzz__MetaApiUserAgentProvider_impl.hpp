#pragma once
// IWYU pragma private; include "BeatSaber/AppInit/MetaApiUserAgentProvider.hpp"
#include "OculusStudios/MetaNetworking/Utils/zzzz__MetaApiUserAgentProviderBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AppInit/zzzz__MetaApiUserAgentProvider_def.hpp"
#include "BeatSaber/AppInit/zzzz__MetaApiUserAgentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentProvider___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AppInit::MetaApiUserAgentProvider___c::*)()>(&::BeatSaber::AppInit::MetaApiUserAgentProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a04ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentProvider___c._Rebuild_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::AppInit::MetaApiUserAgentProvider___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>)>(&::BeatSaber::AppInit::MetaApiUserAgentProvider___c::_Rebuild_b__10_0)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3a04bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>(),
                                         { "<Rebuild>b__10_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::AppInit::MetaApiUserAgentProvider___c::setStaticF___9(::BeatSaber::AppInit::MetaApiUserAgentProvider___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::AppInit::MetaApiUserAgentProvider___c*, "<>9", ::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>(
      std::forward<::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>(value));
}
inline ::BeatSaber::AppInit::MetaApiUserAgentProvider___c* BeatSaber::AppInit::MetaApiUserAgentProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::AppInit::MetaApiUserAgentProvider___c*, "<>9", ::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>();
}
inline void BeatSaber::AppInit::MetaApiUserAgentProvider___c::setStaticF___9__10_0(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>, ::StringW>*, "<>9__10_0",
                                    ::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>, ::StringW>*
BeatSaber::AppInit::MetaApiUserAgentProvider___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>, ::StringW>*, "<>9__10_0",
                                           ::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>();
}
inline void BeatSaber::AppInit::MetaApiUserAgentProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW BeatSaber::AppInit::MetaApiUserAgentProvider___c::_Rebuild_b__10_0(
    /* [TupleElementNames(new[] { "original", "sanitized" })] */ ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>> part) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>(),
                                       { "<Rebuild>b__10_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, part);
}
inline ::BeatSaber::AppInit::MetaApiUserAgentProvider___c* BeatSaber::AppInit::MetaApiUserAgentProvider___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AppInit::MetaApiUserAgentProvider___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AppInit::MetaApiUserAgentProvider___c::MetaApiUserAgentProvider___c() {}
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AppInit::MetaApiUserAgentProvider::*)()>(&::BeatSaber::AppInit::MetaApiUserAgentProvider::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3a04744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentProvider.SetLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AppInit::MetaApiUserAgentProvider::*)(::StringW)>(&::BeatSaber::AppInit::MetaApiUserAgentProvider::SetLocale)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3a04704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider*>(), { "SetLocale", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentProvider.Rebuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AppInit::MetaApiUserAgentProvider::*)()>(&::BeatSaber::AppInit::MetaApiUserAgentProvider::Rebuild)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x3a048b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider*>(), { "Rebuild", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__baseUserAgent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUserAgent;
}
constexpr ::StringW const& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__baseUserAgent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUserAgent;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_set__baseUserAgent(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseUserAgent = value;
}
constexpr ::StringW& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__appVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appVersion;
}
constexpr ::StringW const& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__appVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appVersion;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_set__appVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appVersion = value;
}
constexpr ::StringW& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__buildVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildVersion;
}
constexpr ::StringW const& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__buildVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buildVersion;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_set__buildVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buildVersion = value;
}
constexpr ::StringW& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__systemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemName;
}
constexpr ::StringW const& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__systemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemName;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_set__systemName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____systemName = value;
}
constexpr ::StringW& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__systemVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemVersion;
}
constexpr ::StringW const& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__systemVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemVersion;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_set__systemVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____systemVersion = value;
}
constexpr ::StringW& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device;
}
constexpr ::StringW const& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____device;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_set__device(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____device = value;
}
constexpr ::StringW& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__locale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locale;
}
constexpr ::StringW const& BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_get__locale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locale;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentProvider::__cordl_internal_set__locale(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____locale = value;
}
inline void BeatSaber::AppInit::MetaApiUserAgentProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AppInit::MetaApiUserAgentProvider::SetLocale(::StringW locale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider*>(), { "SetLocale", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline void BeatSaber::AppInit::MetaApiUserAgentProvider::Rebuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentProvider*>(), { "Rebuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AppInit::MetaApiUserAgentProvider* BeatSaber::AppInit::MetaApiUserAgentProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AppInit::MetaApiUserAgentProvider*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AppInit::MetaApiUserAgentProvider::MetaApiUserAgentProvider() {}
