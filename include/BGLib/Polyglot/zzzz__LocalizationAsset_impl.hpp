#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizationAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsset.get_TextAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::BGLib::Polyglot::LocalizationAsset::*)()>(&::BGLib::Polyglot::LocalizationAsset::get_TextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331a8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsset*>(), { "get_TextAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::LocalizationAsset::*)(::UnityEngine::TextAsset*)>(&::BGLib::Polyglot::LocalizationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331a904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsset*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextAsset>& BGLib::Polyglot::LocalizationAsset::__cordl_internal_get_textAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& BGLib::Polyglot::LocalizationAsset::__cordl_internal_get_textAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAsset;
}
constexpr void BGLib::Polyglot::LocalizationAsset::__cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textAsset = value;
}
inline ::UnityW<::UnityEngine::TextAsset> BGLib::Polyglot::LocalizationAsset::get_TextAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsset*>(), { "get_TextAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline void BGLib::Polyglot::LocalizationAsset::_ctor(::UnityEngine::TextAsset* textAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::LocalizationAsset*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textAsset);
}
inline ::BGLib::Polyglot::LocalizationAsset* BGLib::Polyglot::LocalizationAsset::New_ctor(::UnityEngine::TextAsset* textAsset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::LocalizationAsset*>(textAsset));
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationAsset::LocalizationAsset() {}
