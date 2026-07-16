#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicAtlasCustomFilter.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasCustomFilter_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFilters_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasCustomFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasCustomFilter::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::DynamicAtlasCustomFilter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c2aecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasCustomFilter.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::DynamicAtlasCustomFilter::*)(
    ::UnityEngine::Texture2D*, ::by_ref<::UnityEngine::UIElements::DynamicAtlasFilters>)>(&::UnityEngine::UIElements::DynamicAtlasCustomFilter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c2af4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DynamicAtlasCustomFilter::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool UnityEngine::UIElements::DynamicAtlasCustomFilter::Invoke(::UnityEngine::Texture2D* texture, ::by_ref<::UnityEngine::UIElements::DynamicAtlasFilters> filtersToApply) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture, filtersToApply);
}
inline ::UnityEngine::UIElements::DynamicAtlasCustomFilter* UnityEngine::UIElements::DynamicAtlasCustomFilter::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DynamicAtlasCustomFilter::DynamicAtlasCustomFilter() {}
