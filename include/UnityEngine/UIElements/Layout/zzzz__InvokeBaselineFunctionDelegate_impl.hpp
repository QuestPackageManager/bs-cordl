#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/InvokeBaselineFunctionDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__InvokeBaselineFunctionDelegate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cff088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::*)(
    ::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>, float_t, float_t)>(&::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cff108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::Invoke(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, float_t height) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, node, width, height);
}
inline ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate::InvokeBaselineFunctionDelegate() {}
