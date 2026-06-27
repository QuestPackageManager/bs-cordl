#pragma once
// IWYU pragma private; include "Unity/Collections/LeakCategory.hpp"
#include "Unity/Collections/zzzz__LeakCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LeakCategory::LeakCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LeakCategory::LeakCategory()   {
}
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::Malloc{static_cast<int32_t>(0x1)};
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::TempJob{static_cast<int32_t>(0x2)};
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::Persistent{static_cast<int32_t>(0x3)};
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::LightProbesQuery{static_cast<int32_t>(0x4)};
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::NativeTest{static_cast<int32_t>(0x5)};
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::MeshDataArray{static_cast<int32_t>(0x6)};
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::TransformAccessArray{static_cast<int32_t>(0x7)};
constexpr ::Unity::Collections::LeakCategory  Unity::Collections::LeakCategory::NavMeshQuery{static_cast<int32_t>(0x8)};
