#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\InstanceOcclusionTestSubviewSettings.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubviewOcclusionTest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings.FromSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings (*)(::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>)>(
    &::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings::FromSpan)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x682fc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>(),
                                                             { "FromSpan", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings
UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings::FromSpan(::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>(),
                                                           { "FromSpan", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>(nullptr, ___internal_method, subviewOcclusionTests);
}
// Ctor Parameters [CppParam { name: "testCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderSubviewIndices", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "occluderSubviewMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingSplitIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "cullingSplitMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings::InstanceOcclusionTestSubviewSettings(int32_t testCount, int32_t occluderSubviewIndices, int32_t occluderSubviewMask,
                                                                                                               int32_t cullingSplitIndices, int32_t cullingSplitMask) noexcept {
  this->testCount = testCount;
  this->occluderSubviewIndices = occluderSubviewIndices;
  this->occluderSubviewMask = occluderSubviewMask;
  this->cullingSplitIndices = cullingSplitIndices;
  this->cullingSplitMask = cullingSplitMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings::InstanceOcclusionTestSubviewSettings() {}
