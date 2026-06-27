#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheLevel.hpp"
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Cache::RequestCacheLevel::RequestCacheLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheLevel::RequestCacheLevel()   {
}
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::Default{static_cast<int32_t>(0x0)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::BypassCache{static_cast<int32_t>(0x1)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::CacheOnly{static_cast<int32_t>(0x2)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::CacheIfAvailable{static_cast<int32_t>(0x3)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::Revalidate{static_cast<int32_t>(0x4)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::Reload{static_cast<int32_t>(0x5)};
constexpr ::System::Net::Cache::RequestCacheLevel  System::Net::Cache::RequestCacheLevel::NoCacheNoStore{static_cast<int32_t>(0x6)};
