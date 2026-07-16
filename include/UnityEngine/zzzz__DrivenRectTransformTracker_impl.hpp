#pragma once
// IWYU pragma private; include "UnityEngine/DrivenRectTransformTracker.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__DrivenTransformProperties_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::UnityEngine::DrivenRectTransformTracker.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DrivenRectTransformTracker::*)(
    ::UnityEngine::Object*, ::UnityEngine::RectTransform*, ::UnityEngine::DrivenTransformProperties)>(&::UnityEngine::DrivenRectTransformTracker::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6af0e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::DrivenRectTransformTracker>(),
                            { "Add", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::DrivenTransformProperties>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DrivenRectTransformTracker.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DrivenRectTransformTracker::*)()>(&::UnityEngine::DrivenRectTransformTracker::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6af0e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DrivenRectTransformTracker>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::DrivenRectTransformTracker::Add(::UnityEngine::Object* driver, ::UnityEngine::RectTransform* rectTransform, ::UnityEngine::DrivenTransformProperties drivenProperties) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::DrivenRectTransformTracker>(),
                          { "Add", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::DrivenTransformProperties>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, driver, rectTransform, drivenProperties);
}
inline void UnityEngine::DrivenRectTransformTracker::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DrivenRectTransformTracker>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::DrivenRectTransformTracker::DrivenRectTransformTracker() {}
