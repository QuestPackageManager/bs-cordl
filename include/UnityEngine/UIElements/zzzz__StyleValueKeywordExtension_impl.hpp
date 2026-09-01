#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleValueKeywordExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeywordExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueKeywordExtension.ToUssString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleValueKeyword)>(&::UnityEngine::UIElements::StyleValueKeywordExtension::ToUssString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6c9d428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueKeywordExtension*>(),
                                                                                           { "ToUssString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueKeyword>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleValueKeywordExtension::ToUssString(::UnityEngine::UIElements::StyleValueKeyword svk) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleValueKeywordExtension*>(),
                                                                                         { "ToUssString", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleValueKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, svk);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueKeywordExtension::StyleValueKeywordExtension() {}
