#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/LanguageDirectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__LanguageDirectionExtensions_def.hpp"
#include "UnityEngine/TextCore/zzzz__LanguageDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__LanguageDirection_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::LanguageDirectionExtensions.toTextCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::LanguageDirection (*)(::UnityEngine::UIElements::LanguageDirection)>(
    &::UnityEngine::UIElements::LanguageDirectionExtensions::toTextCore)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6cc5e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LanguageDirectionExtensions*>(),
                                                                                           { "toTextCore", {}, { ::i2c::type_of<::UnityEngine::UIElements::LanguageDirection>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::TextCore::LanguageDirection UnityEngine::UIElements::LanguageDirectionExtensions::toTextCore(::UnityEngine::UIElements::LanguageDirection dir) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::LanguageDirectionExtensions*>(),
                                                                                         { "toTextCore", {}, { ::i2c::type_of<::UnityEngine::UIElements::LanguageDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::LanguageDirection>(nullptr, ___internal_method, dir);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::LanguageDirectionExtensions::LanguageDirectionExtensions() {}
