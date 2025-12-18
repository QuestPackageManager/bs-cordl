#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/InvokeMeasureFunctionDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__InvokeMeasureFunctionDelegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureMode_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutSize_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b36cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::*)(
    ::ByRef<::UnityEngine::UIElements::Layout::LayoutNode>, float_t, ::UnityEngine::UIElements::Layout::LayoutMeasureMode, float_t, ::UnityEngine::UIElements::Layout::LayoutMeasureMode,
    ::ByRef<::System::IntPtr>, ::ByRef<::UnityEngine::UIElements::Layout::LayoutSize>)>(&::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b36d3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::Invoke(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width,
                                                                                   ::UnityEngine::UIElements::Layout::LayoutMeasureMode widthMode, float_t height,
                                                                                   ::UnityEngine::UIElements::Layout::LayoutMeasureMode heightMode, ::ByRef<::System::IntPtr> exception,
                                                                                   ::ByRef<::UnityEngine::UIElements::Layout::LayoutSize> result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, width, widthMode, height, heightMode, exception, result);
}
inline ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::InvokeMeasureFunctionDelegate() {}
