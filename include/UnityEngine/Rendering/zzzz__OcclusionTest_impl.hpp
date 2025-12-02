#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionTest.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionTest::OcclusionTest(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionTest::OcclusionTest() {}
constexpr ::UnityEngine::Rendering::OcclusionTest UnityEngine::Rendering::OcclusionTest::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::OcclusionTest UnityEngine::Rendering::OcclusionTest::TestAll{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::OcclusionTest UnityEngine::Rendering::OcclusionTest::TestCulled{ static_cast<int32_t>(0x2) };
