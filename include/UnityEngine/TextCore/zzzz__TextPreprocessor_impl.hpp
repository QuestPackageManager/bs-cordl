#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/TextPreprocessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/zzzz__TextPreprocessor_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyle_def.hpp"
#include "UnityEngine/TextCore/zzzz__PreProcessFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::TextPreprocessor.PreProcessString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::StringW>, ::UnityEngine::TextCore::PreProcessFlags, ::UnityEngine::TextCore::Text::TextSettings*)>(
    &::UnityEngine::TextCore::TextPreprocessor::PreProcessString)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x702c3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(),
                                                                                           { "PreProcessString",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::UnityEngine::TextCore::PreProcessFlags>(),
                                                                                               ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::TextPreprocessor.GetStyleHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>)>(&::UnityEngine::TextCore::TextPreprocessor::GetStyleHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x702d498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(), { "GetStyleHashCode", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::TextPreprocessor.GetStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextStyle* (*)(::UnityEngine::TextCore::Text::TextSettings*, int32_t)>(
    &::UnityEngine::TextCore::TextPreprocessor::GetStyle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x702d520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(),
                                                             { "GetStyle", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::TextPreprocessor.ReplaceStyleTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::UnityEngine::TextCore::Text::TextSettings*)>(&::UnityEngine::TextCore::TextPreprocessor::ReplaceStyleTags)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x702cac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(),
                                                             { "ReplaceStyleTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::TextPreprocessor.ReplaceNobrTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::TextCore::TextPreprocessor::ReplaceNobrTags)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x702d110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(), { "ReplaceNobrTags", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::TextPreprocessor::PreProcessString(::by_ref<::StringW> text, ::UnityEngine::TextCore::PreProcessFlags flags,
                                                                      /* [Nullable(2)] */ ::UnityEngine::TextCore::Text::TextSettings* textSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(),
                          { "PreProcessString",
                            {},
                            { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::UnityEngine::TextCore::PreProcessFlags>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, text, flags, textSettings);
}
inline int32_t UnityEngine::TextCore::TextPreprocessor::GetStyleHashCode(::System::ReadOnlySpan_1<char16_t> text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(), { "GetStyleHashCode", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, text);
}
inline ::UnityEngine::TextCore::Text::TextStyle* UnityEngine::TextCore::TextPreprocessor::GetStyle(::UnityEngine::TextCore::Text::TextSettings* textSettings, int32_t hashCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(),
                                                           { "GetStyle", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextStyle*>(nullptr, ___internal_method, textSettings, hashCode);
}
inline ::StringW UnityEngine::TextCore::TextPreprocessor::ReplaceStyleTags(::StringW text, ::UnityEngine::TextCore::Text::TextSettings* textSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(),
                                                           { "ReplaceStyleTags", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::TextCore::Text::TextSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, textSettings);
}
inline ::StringW UnityEngine::TextCore::TextPreprocessor::ReplaceNobrTags(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::TextPreprocessor*>(), { "ReplaceNobrTags", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::TextPreprocessor::TextPreprocessor() {}
