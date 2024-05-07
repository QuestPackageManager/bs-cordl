#pragma once
// IWYU pragma private; include "System/Net/Http/HttpCompletionOption.hpp"
#include "System/Net/Http/zzzz__HttpCompletionOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::HttpCompletionOption::HttpCompletionOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpCompletionOption::HttpCompletionOption() {}
constexpr ::System::Net::Http::HttpCompletionOption System::Net::Http::HttpCompletionOption::ResponseContentRead{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Http::HttpCompletionOption System::Net::Http::HttpCompletionOption::ResponseHeadersRead{ static_cast<int32_t>(0x1) };
