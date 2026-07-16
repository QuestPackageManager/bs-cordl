#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutState.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutState_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutState.get_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutState (*)()>(&::UnityEngine::UIElements::Layout::LayoutState::get_Default)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6d009d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutState>(), { "get_Default", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::Layout::LayoutState UnityEngine::UIElements::Layout::LayoutState::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutState>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutState>(nullptr, ___internal_method);
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
