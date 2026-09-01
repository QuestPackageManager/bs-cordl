#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\TextUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextUtilities_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.ToUpperFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c14d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextUtilities*>(), { "ToUpperFast", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.GetHashCodeCaseInSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::TextCore::Text::TextUtilities::GetHashCodeCaseInSensitive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c13814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextUtilities*>(), { "GetHashCodeCaseInSensitive", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.GetTextFontWeightIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::TextCore::Text::TextFontWeight)>(&::UnityEngine::TextCore::Text::TextUtilities::GetTextFontWeightIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c14dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextUtilities*>(),
                                                                                           { "GetTextFontWeightIndex", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
    return ___internal_method;
  }
};
inline char16_t UnityEngine::TextCore::Text::TextUtilities::ToUpperFast(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextUtilities*>(), { "ToUpperFast", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, c);
}
inline int32_t UnityEngine::TextCore::Text::TextUtilities::GetHashCodeCaseInSensitive(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextUtilities*>(), { "GetHashCodeCaseInSensitive", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline int32_t UnityEngine::TextCore::Text::TextUtilities::GetTextFontWeightIndex(::UnityEngine::TextCore::Text::TextFontWeight fontWeight) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextUtilities*>(),
                                                                                         { "GetTextFontWeightIndex", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextFontWeight>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fontWeight);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextUtilities::TextUtilities() {}
