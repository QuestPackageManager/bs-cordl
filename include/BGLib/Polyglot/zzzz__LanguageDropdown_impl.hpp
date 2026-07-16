#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LanguageDropdown.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDropdown_def.hpp"
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)()>(&::BGLib::Polyglot::LanguageDropdown::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x331952c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)()>(&::BGLib::Polyglot::LanguageDropdown::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3319580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown.CreateDropdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)()>(&::BGLib::Polyglot::LanguageDropdown::CreateDropdown)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x331959c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { "CreateDropdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown.OnLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)(::BGLib::Polyglot::LocalizationModel*)>(&::BGLib::Polyglot::LanguageDropdown::OnLocalize)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3319a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { "OnLocalize", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LanguageDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LanguageDropdown::*)()>(&::BGLib::Polyglot::LanguageDropdown::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3319c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& BGLib::Polyglot::LanguageDropdown::__cordl_internal_get_dropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dropdown;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& BGLib::Polyglot::LanguageDropdown::__cordl_internal_get_dropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dropdown;
}
constexpr void BGLib::Polyglot::LanguageDropdown::__cordl_internal_set_dropdown(::UnityW<::UnityEngine::UI::Dropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dropdown = value;
}
inline void BGLib::Polyglot::LanguageDropdown::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::Polyglot::LanguageDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::Polyglot::LanguageDropdown::CreateDropdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { "CreateDropdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::Polyglot::LanguageDropdown::OnLocalize(::BGLib::Polyglot::LocalizationModel* localization) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { "OnLocalize", {}, { ::i2c::type_of<::BGLib::Polyglot::LocalizationModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localization);
}
inline void BGLib::Polyglot::LanguageDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LanguageDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LanguageDropdown* BGLib::Polyglot::LanguageDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::LanguageDropdown*>());
}
/// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
constexpr BGLib::Polyglot::LanguageDropdown::operator ::BGLib::Polyglot::ILocalize*() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::Polyglot::ILocalize"
constexpr ::BGLib::Polyglot::ILocalize* BGLib::Polyglot::LanguageDropdown::i___BGLib__Polyglot__ILocalize() noexcept {
  return static_cast<::BGLib::Polyglot::ILocalize*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LanguageDropdown::LanguageDropdown() {}
