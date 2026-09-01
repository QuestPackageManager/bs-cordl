#pragma once
// IWYU pragma private; include "GlobalNamespace\LanguageSettingsController.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_impl.hpp"
#include "GlobalNamespace/zzzz__DropdownSettingsController_impl.hpp"
#include "GlobalNamespace/zzzz__LanguageSettingsController_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController.get_language
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::Polyglot::LocalizationLanguage (::GlobalNamespace::LanguageSettingsController::*)()>(
    &::GlobalNamespace::LanguageSettingsController::get_language)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a154dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), { "get_language", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController.GetInitValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LanguageSettingsController::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::LanguageSettingsController::GetInitValues)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a154e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController.ApplyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LanguageSettingsController::*)(int32_t)>(&::GlobalNamespace::LanguageSettingsController::ApplyValue)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a156ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LanguageSettingsController::*)(int32_t)>(&::GlobalNamespace::LanguageSettingsController::TextForValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a15790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), { ::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LanguageSettingsController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LanguageSettingsController::*)()>(&::GlobalNamespace::LanguageSettingsController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a157f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::LanguageSettingsController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::LanguageSettingsController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::LanguageSettingsController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage& GlobalNamespace::LanguageSettingsController::__cordl_internal_get__language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language;
}
constexpr ::BGLib::Polyglot::LocalizationLanguage const& GlobalNamespace::LanguageSettingsController::__cordl_internal_get__language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____language;
}
constexpr void GlobalNamespace::LanguageSettingsController::__cordl_internal_set__language(::BGLib::Polyglot::LocalizationLanguage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____language = value;
}
inline ::BGLib::Polyglot::LocalizationLanguage GlobalNamespace::LanguageSettingsController::get_language() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), { "get_language", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::LocalizationLanguage>(this, ___internal_method);
}
inline bool GlobalNamespace::LanguageSettingsController::GetInitValues(::by_ref<int32_t> idx, ::by_ref<int32_t> numberOfElements) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idx, numberOfElements);
}
inline void GlobalNamespace::LanguageSettingsController::ApplyValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::LanguageSettingsController::TextForValue(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, idx);
}
inline void GlobalNamespace::LanguageSettingsController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LanguageSettingsController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LanguageSettingsController* GlobalNamespace::LanguageSettingsController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LanguageSettingsController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LanguageSettingsController::LanguageSettingsController() {}
