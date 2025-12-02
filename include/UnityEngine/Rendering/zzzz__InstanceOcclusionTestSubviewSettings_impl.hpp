#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionTestSubviewSettings.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubviewOcclusionTest_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings.FromSpan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings (*)(
    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>)>(&::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings::FromSpan)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6610f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>::get(), "FromSpan", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings
UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings::FromSpan(::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings>::get(), "FromSpan", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings, false>(nullptr, ___internal_method, subviewOcclusionTests);
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
