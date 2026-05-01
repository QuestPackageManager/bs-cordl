#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpHeaderKind.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::Headers::HttpHeaderKind::HttpHeaderKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpHeaderKind::HttpHeaderKind() {}
constexpr ::System::Net::Http::Headers::HttpHeaderKind System::Net::Http::Headers::HttpHeaderKind::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::Http::Headers::HttpHeaderKind System::Net::Http::Headers::HttpHeaderKind::Request{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::Http::Headers::HttpHeaderKind System::Net::Http::Headers::HttpHeaderKind::Response{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::Http::Headers::HttpHeaderKind System::Net::Http::Headers::HttpHeaderKind::Content{ static_cast<int32_t>(0x4) };
