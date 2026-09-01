#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleSheets\MatchResult.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultErrorCode_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::MatchResult.get_success
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::MatchResult::*)()>(&::UnityEngine::UIElements::StyleSheets::MatchResult::get_success)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d1a460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::MatchResult>(), { "get_success", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::StyleSheets::MatchResult::get_success() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::MatchResult>(), { "get_success", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "errorCode", ty: "::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "errorValue", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResult::MatchResult(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode errorCode, ::StringW errorValue) noexcept {
  this->errorCode = errorCode;
  this->errorValue = errorValue;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResult::MatchResult() {}
