#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/InvokeBaselineFunctionDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__InvokeBaselineFunctionDelegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b36d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::*)(
    ::ByRef<::UnityEngine::UIElements::Layout::LayoutNode>, float_t, float_t)>(&::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b36dd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline float_t UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::Invoke(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, float_t height) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, node, width, height);
}
inline ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::InvokeBaselineFunctionDelegate() {}
