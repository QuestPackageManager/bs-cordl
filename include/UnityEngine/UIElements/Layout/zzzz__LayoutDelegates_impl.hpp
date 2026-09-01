#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\LayoutDelegates.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDelegates_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__InvokeBaselineFunctionDelegate_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__InvokeMeasureFunctionDelegate_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureMode_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutSize_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDelegates.InvokeMeasureFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>, float_t, ::UnityEngine::UIElements::Layout::LayoutMeasureMode, float_t,
                                                                ::UnityEngine::UIElements::Layout::LayoutMeasureMode, ::by_ref<::System::IntPtr>,
                                                                ::by_ref<::UnityEngine::UIElements::Layout::LayoutSize>)>(&::UnityEngine::UIElements::Layout::LayoutDelegates::InvokeMeasureFunction)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6d026a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDelegates*>(),
                                                             { "InvokeMeasureFunction",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureMode>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureMode>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutSize>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDelegates.InvokeBaselineFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>, float_t, float_t)>(
    &::UnityEngine::UIElements::Layout::LayoutDelegates::InvokeBaselineFunction)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6d02938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDelegates*>(),
                            { "InvokeBaselineFunction", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeMeasureFunctionMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_InvokeMeasureFunctionMarker", ::UnityEngine::UIElements::Layout::LayoutDelegates*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeMeasureFunctionMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_InvokeMeasureFunctionMarker", ::UnityEngine::UIElements::Layout::LayoutDelegates*>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeBaselineFunctionMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_InvokeBaselineFunctionMarker", ::UnityEngine::UIElements::Layout::LayoutDelegates*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeBaselineFunctionMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_InvokeBaselineFunctionMarker", ::UnityEngine::UIElements::Layout::LayoutDelegates*>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeMeasureDelegate(::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*, "s_InvokeMeasureDelegate", ::UnityEngine::UIElements::Layout::LayoutDelegates*>(
      std::forward<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(value));
}
inline ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeMeasureDelegate() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*, "s_InvokeMeasureDelegate", ::UnityEngine::UIElements::Layout::LayoutDelegates*>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeBaselineDelegate(::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*, "s_InvokeBaselineDelegate", ::UnityEngine::UIElements::Layout::LayoutDelegates*>(
      std::forward<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(value));
}
inline ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeBaselineDelegate() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*, "s_InvokeBaselineDelegate", ::UnityEngine::UIElements::Layout::LayoutDelegates*>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeMeasureFunction(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_InvokeMeasureFunction", ::UnityEngine::UIElements::Layout::LayoutDelegates*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeMeasureFunction() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_InvokeMeasureFunction", ::UnityEngine::UIElements::Layout::LayoutDelegates*>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeBaselineFunction(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_InvokeBaselineFunction", ::UnityEngine::UIElements::Layout::LayoutDelegates*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeBaselineFunction() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_InvokeBaselineFunction", ::UnityEngine::UIElements::Layout::LayoutDelegates*>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::InvokeMeasureFunction(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width,
                                                                                    ::UnityEngine::UIElements::Layout::LayoutMeasureMode widthMode, float_t height,
                                                                                    ::UnityEngine::UIElements::Layout::LayoutMeasureMode heightMode, ::by_ref<::System::IntPtr> exception,
                                                                                    ::by_ref<::UnityEngine::UIElements::Layout::LayoutSize> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDelegates*>(),
                          { "InvokeMeasureFunction",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureMode>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::UIElements::Layout::LayoutMeasureMode>(),
                              ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutSize>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, width, widthMode, height, heightMode, exception, result);
}
inline float_t UnityEngine::UIElements::Layout::LayoutDelegates::InvokeBaselineFunction(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDelegates*>(),
                          { "InvokeBaselineFunction", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, node, width, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDelegates::LayoutDelegates() {}
