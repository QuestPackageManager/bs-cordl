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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cfeff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::*)(
    ::by_ref<::UnityEngine::UIElements::Layout::LayoutNode>, float_t, ::UnityEngine::UIElements::Layout::LayoutMeasureMode, float_t, ::UnityEngine::UIElements::Layout::LayoutMeasureMode,
    ::by_ref<::System::IntPtr>, ::by_ref<::UnityEngine::UIElements::Layout::LayoutSize>)>(&::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cff074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::Invoke(::by_ref<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width,
                                                                                   ::UnityEngine::UIElements::Layout::LayoutMeasureMode widthMode, float_t height,
                                                                                   ::UnityEngine::UIElements::Layout::LayoutMeasureMode heightMode, ::by_ref<::System::IntPtr> exception,
                                                                                   ::by_ref<::UnityEngine::UIElements::Layout::LayoutSize> result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, width, widthMode, height, heightMode, exception, result);
}
inline ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate::InvokeMeasureFunctionDelegate() {}
