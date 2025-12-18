#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutState.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutState_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutState.get_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Layout::LayoutState (*)()>(&::UnityEngine::UIElements::Layout::LayoutState::get_Default)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b38698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutState>::get(),
                                                                               "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Layout::LayoutState UnityEngine::UIElements::Layout::LayoutState::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutState>::get(),
                                                                             "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutState, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "measureFunctionCallback", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "baselineFunctionCallback", ty: "::System::IntPtr",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "unusedExceptionPointer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "currentGenerationCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "error", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutState::LayoutState(::System::IntPtr measureFunctionCallback, ::System::IntPtr baselineFunctionCallback, ::System::IntPtr unusedExceptionPointer,
                                                                      uint32_t depth, uint32_t currentGenerationCount, bool error) noexcept {
  this->measureFunctionCallback = measureFunctionCallback;
  this->baselineFunctionCallback = baselineFunctionCallback;
  this->unusedExceptionPointer = unusedExceptionPointer;
  this->depth = depth;
  this->currentGenerationCount = currentGenerationCount;
  this->error = error;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutState::LayoutState() {}
