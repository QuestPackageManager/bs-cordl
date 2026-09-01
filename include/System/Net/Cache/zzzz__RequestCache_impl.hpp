#pragma once
// IWYU pragma private; include "System\Net\Cache\RequestCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCache_def.hpp"
inline void System::Net::Cache::RequestCache::setStaticF_LineSplits(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "LineSplits", ::System::Net::Cache::RequestCache*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::Cache::RequestCache::getStaticF_LineSplits() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "LineSplits", ::System::Net::Cache::RequestCache*>();
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCache::RequestCache() {}
