#pragma once
// IWYU pragma private; include "GlobalNamespace/AutocompleteResult.hpp"
#include "GlobalNamespace/zzzz__AutocompleteResult_def.hpp"
// Ctor Parameters [CppParam { name: "userWrittenCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "matches", ty: "::ArrayW<::StringW>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AutocompleteResult::AutocompleteResult(int32_t userWrittenCount, ::ArrayW<::StringW> matches, bool isValid) noexcept {
  this->userWrittenCount = userWrittenCount;
  this->matches = matches;
  this->isValid = isValid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutocompleteResult::AutocompleteResult() {}
