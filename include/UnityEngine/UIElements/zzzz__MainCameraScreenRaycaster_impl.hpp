#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MainCameraScreenRaycaster.hpp"
#include "UnityEngine/UIElements/zzzz__CameraScreenRaycaster_impl.hpp"
#include "UnityEngine/zzzz__Camera_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MainCameraScreenRaycaster_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MainCameraScreenRaycaster._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MainCameraScreenRaycaster::*)()>(&::UnityEngine::UIElements::MainCameraScreenRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7245a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MainCameraScreenRaycaster*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MainCameraScreenRaycaster.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MainCameraScreenRaycaster::*)()>(&::UnityEngine::UIElements::MainCameraScreenRaycaster::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7248bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MainCameraScreenRaycaster*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::MainCameraScreenRaycaster*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MainCameraScreenRaycaster.ResolveCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::MainCameraScreenRaycaster::*)()>(&::UnityEngine::UIElements::MainCameraScreenRaycaster::ResolveCamera)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x7248aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MainCameraScreenRaycaster*>(), { "ResolveCamera", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>>& UnityEngine::UIElements::MainCameraScreenRaycaster::__cordl_internal_get_singleCameraArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleCameraArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>> const& UnityEngine::UIElements::MainCameraScreenRaycaster::__cordl_internal_get_singleCameraArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___singleCameraArray;
}
constexpr void UnityEngine::UIElements::MainCameraScreenRaycaster::__cordl_internal_set_singleCameraArray(::ArrayW<::UnityW<::UnityEngine::Camera>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___singleCameraArray = value;
}
inline void UnityEngine::UIElements::MainCameraScreenRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MainCameraScreenRaycaster*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MainCameraScreenRaycaster::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MainCameraScreenRaycaster*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::MainCameraScreenRaycaster::ResolveCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MainCameraScreenRaycaster*>(), { "ResolveCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::MainCameraScreenRaycaster* UnityEngine::UIElements::MainCameraScreenRaycaster::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MainCameraScreenRaycaster*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MainCameraScreenRaycaster::MainCameraScreenRaycaster() {}
