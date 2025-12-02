#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDelegates.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::UnityEngine::UIElements::Layout::LayoutNode>, float_t, ::UnityEngine::UIElements::Layout::LayoutMeasureMode, float_t, ::UnityEngine::UIElements::Layout::LayoutMeasureMode,
    ::ByRef<::System::IntPtr>, ::ByRef<::UnityEngine::UIElements::Layout::LayoutSize>)>(&::UnityEngine::UIElements::Layout::LayoutDelegates::InvokeMeasureFunction)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6acdf60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get(), "InvokeMeasureFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Layout::LayoutNode>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutMeasureMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutMeasureMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Layout::LayoutSize>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDelegates.InvokeBaselineFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode>, float_t, float_t)>(
    &::UnityEngine::UIElements::Layout::LayoutDelegates::InvokeBaselineFunction)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6ace1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get(), "InvokeBaselineFunction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Layout::LayoutNode>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeMeasureFunctionMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_InvokeMeasureFunctionMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeMeasureFunctionMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_InvokeMeasureFunctionMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeBaselineFunctionMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_InvokeBaselineFunctionMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeBaselineFunctionMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_InvokeBaselineFunctionMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeMeasureDelegate(::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*, "s_InvokeMeasureDelegate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>(
      std::forward<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(value));
}
inline ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeMeasureDelegate() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*, "s_InvokeMeasureDelegate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeBaselineDelegate(::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*, "s_InvokeBaselineDelegate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>(
      std::forward<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(value));
}
inline ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeBaselineDelegate() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*, "s_InvokeBaselineDelegate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeMeasureFunction(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_InvokeMeasureFunction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeMeasureFunction() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_InvokeMeasureFunction",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::setStaticF_s_InvokeBaselineFunction(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "s_InvokeBaselineFunction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>(
      std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::UIElements::Layout::LayoutDelegates::getStaticF_s_InvokeBaselineFunction() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "s_InvokeBaselineFunction",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get>();
}
inline void UnityEngine::UIElements::Layout::LayoutDelegates::InvokeMeasureFunction(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width,
                                                                                    ::UnityEngine::UIElements::Layout::LayoutMeasureMode widthMode, float_t height,
                                                                                    ::UnityEngine::UIElements::Layout::LayoutMeasureMode heightMode, ::ByRef<::System::IntPtr> exception,
                                                                                    ::ByRef<::UnityEngine::UIElements::Layout::LayoutSize> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get(), "InvokeMeasureFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Layout::LayoutNode>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutMeasureMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Layout::LayoutMeasureMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Layout::LayoutSize>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node, width, widthMode, height, heightMode, exception, result);
}
inline float_t UnityEngine::UIElements::Layout::LayoutDelegates::InvokeBaselineFunction(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutDelegates*>::get(), "InvokeBaselineFunction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::Layout::LayoutNode>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, node, width, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDelegates::LayoutDelegates() {}
