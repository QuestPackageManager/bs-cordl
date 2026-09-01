#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\RuleMatcher.hpp"
#include "UnityEngine/UIElements/zzzz__RuleMatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuleMatcher.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::RuleMatcher::*)()>(&::UnityEngine::UIElements::RuleMatcher::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6cba5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RuleMatcher>(), { ::i2c::class_of<::UnityEngine::UIElements::RuleMatcher>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::RuleMatcher::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RuleMatcher>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}") }, CppParam { name: "complexSelector", ty:
// "::UnityEngine::UIElements::StyleComplexSelector*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::RuleMatcher::RuleMatcher(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet, ::UnityEngine::UIElements::StyleComplexSelector* complexSelector) noexcept {
  this->sheet = sheet;
  this->complexSelector = complexSelector;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuleMatcher::RuleMatcher() {}
