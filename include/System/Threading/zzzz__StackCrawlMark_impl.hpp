#pragma once
// IWYU pragma private; include "System/Threading/StackCrawlMark.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::StackCrawlMark::StackCrawlMark(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::StackCrawlMark::StackCrawlMark()   {
}
constexpr ::System::Threading::StackCrawlMark  System::Threading::StackCrawlMark::LookForMe{static_cast<int32_t>(0x0)};
constexpr ::System::Threading::StackCrawlMark  System::Threading::StackCrawlMark::LookForMyCaller{static_cast<int32_t>(0x1)};
constexpr ::System::Threading::StackCrawlMark  System::Threading::StackCrawlMark::LookForMyCallersCaller{static_cast<int32_t>(0x2)};
constexpr ::System::Threading::StackCrawlMark  System::Threading::StackCrawlMark::LookForThread{static_cast<int32_t>(0x3)};
