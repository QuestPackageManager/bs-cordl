#pragma once
// IWYU pragma private; include "BGLib\Polyglot\SaveLanguagePreference.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/Polyglot/zzzz__SaveLanguagePreference_def.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::SaveLanguagePreference.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::SaveLanguagePreference::*)()>(&::BGLib::Polyglot::SaveLanguagePreference::Start)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3321794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::SaveLanguagePreference*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::SaveLanguagePreference.OnLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::SaveLanguagePreference::*)(::BGLib::Polyglot::LocalizationModel*)>(
    &::BGLib::Polyglot::SaveLanguagePreference::OnLocalize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x33217d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::SaveLanguagePreference*>(), { "OnLocalize", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::SaveLanguagePreference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::SaveLanguagePreference::*)()>(&::BGLib::Polyglot::SaveLanguagePreference::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3321800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::SaveLanguagePreference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BGLib::Polyglot::SaveLanguagePreference::__cordl_internal_get_preferenceKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preferenceKey;
}
constexpr ::StringW const& BGLib::Polyglot::SaveLanguagePreference::__cordl_internal_get_preferenceKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preferenceKey;
}
constexpr void BGLib::Polyglot::SaveLanguagePreference::__cordl_internal_set_preferenceKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preferenceKey = value;
}
inline void BGLib::Polyglot::SaveLanguagePreference::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::SaveLanguagePreference*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::Polyglot::SaveLanguagePreference::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::SaveLanguagePreference*>(), { "OnLocalize", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localization);
}
inline void BGLib::Polyglot::SaveLanguagePreference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::SaveLanguagePreference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::SaveLanguagePreference* BGLib::Polyglot::SaveLanguagePreference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::SaveLanguagePreference*>());
}
/// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
constexpr BGLib::Polyglot::SaveLanguagePreference::operator ::BGLib::Polyglot::ILocalize*() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::Polyglot::ILocalize"
constexpr ::BGLib::Polyglot::ILocalize* BGLib::Polyglot::SaveLanguagePreference::i___BGLib__Polyglot__ILocalize() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::SaveLanguagePreference::SaveLanguagePreference() {}
