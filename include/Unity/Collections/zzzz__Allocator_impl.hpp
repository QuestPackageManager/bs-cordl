#pragma once
// IWYU pragma private; include "Unity/Collections/Allocator.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::Allocator::Allocator(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Collections::Allocator::Allocator() {}
constexpr ::Unity::Collections::Allocator Unity::Collections::Allocator::Invalid{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Collections::Allocator Unity::Collections::Allocator::None{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Collections::Allocator Unity::Collections::Allocator::Temp{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Collections::Allocator Unity::Collections::Allocator::TempJob{ static_cast<int32_t>(0x3) };
constexpr ::Unity::Collections::Allocator Unity::Collections::Allocator::Persistent{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Collections::Allocator Unity::Collections::Allocator::AudioKernel{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Collections::Allocator Unity::Collections::Allocator::FirstUserIndex{ static_cast<int32_t>(0x40) };
