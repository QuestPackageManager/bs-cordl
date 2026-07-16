#pragma once
// IWYU pragma private; include "GlobalNamespace/LanguageFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LanguageFactory_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LanguageFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LanguageFactory::*)(::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::SettingsManager*,
                                                                                                    ::OculusStudios::Platform::Core::IPlatform*)>(&::GlobalNamespace::LanguageFactory::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37715c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageFactory*>(), { ".ctor",
                                                                                      {},
                                                                                      { ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                                                                                        ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageFactory.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LocalizationLanguage (::GlobalNamespace::LanguageFactory::*)()>(&::GlobalNamespace::LanguageFactory::Create)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x37715d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageFactory*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::LanguageFactory::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::LanguageFactory::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::LanguageFactory::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::LanguageFactory::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::LanguageFactory::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::LanguageFactory::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::LanguageFactory::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::LanguageFactory::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void GlobalNamespace::LanguageFactory::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
inline void GlobalNamespace::LanguageFactory::_ctor(::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager,
                                                    ::OculusStudios::Platform::Core::IPlatform* platform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageFactory*>(), { ".ctor",
                                                                                    {},
                                                                                    { ::i2c::type_of<::GlobalNamespace::PlayerDataModel*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                                                                                      ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerDataModel, settingsManager, platform);
}
inline ::BGLib::Polyglot::LocalizationLanguage GlobalNamespace::LanguageFactory::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageFactory*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationLanguage>(this, ___internal_method);
}
inline ::GlobalNamespace::LanguageFactory* GlobalNamespace::LanguageFactory::New_ctor(::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::SettingsManager* settingsManager,
                                                                                      ::OculusStudios::Platform::Core::IPlatform* platform) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LanguageFactory*>(playerDataModel, settingsManager, platform));
}
/// @brief Convert operator to "::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>"
constexpr GlobalNamespace::LanguageFactory::operator ::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>*() noexcept {
  return static_cast<::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>"
constexpr ::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>* GlobalNamespace::LanguageFactory::i___Zenject__IFactory_1___BGLib__Polyglot__LocalizationLanguage_() noexcept {
  return static_cast<::Zenject::IFactory_1<::BGLib::Polyglot::LocalizationLanguage>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
constexpr GlobalNamespace::LanguageFactory::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
constexpr ::Zenject::IFactory* GlobalNamespace::LanguageFactory::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LanguageFactory::LanguageFactory() {}
