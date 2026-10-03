#pragma once
// IWYU pragma private; include "BeatSaber/AppInit/MetaApiUserAgentLocaleUpdater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AppInit/zzzz__MetaApiUserAgentLocaleUpdater_def.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "BeatSaber/AppInit/zzzz__MetaApiUserAgentProvider_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::*)()>(&::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::Initialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a04694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::*)()>(&::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a046b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater.OnLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::*)(::BGLib::Polyglot::LocalizationModel*)>(
    &::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::OnLocalize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a046cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>(), { "OnLocalize", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::*)()>(&::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a04740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::AppInit::MetaApiUserAgentProvider*& BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::__cordl_internal_get__metaApiUserAgentProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaApiUserAgentProvider;
}
constexpr ::BeatSaber::AppInit::MetaApiUserAgentProvider* const& BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::__cordl_internal_get__metaApiUserAgentProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaApiUserAgentProvider;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::__cordl_internal_set__metaApiUserAgentProvider(::BeatSaber::AppInit::MetaApiUserAgentProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metaApiUserAgentProvider = value;
}
constexpr ::BGLib::Polyglot::LocalizationModel*& BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::__cordl_internal_get__localizationModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationModel;
}
constexpr ::BGLib::Polyglot::LocalizationModel* const& BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::__cordl_internal_get__localizationModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationModel;
}
constexpr void BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::__cordl_internal_set__localizationModel(::BGLib::Polyglot::LocalizationModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizationModel = value;
}
inline void BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>(), { "OnLocalize", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localization);
}
inline void BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater* BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
constexpr BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::operator ::BGLib::Polyglot::ILocalize*() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::Polyglot::ILocalize"
constexpr ::BGLib::Polyglot::ILocalize* BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::i___BGLib__Polyglot__ILocalize() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AppInit::MetaApiUserAgentLocaleUpdater::MetaApiUserAgentLocaleUpdater() {}
