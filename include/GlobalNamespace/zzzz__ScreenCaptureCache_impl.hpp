#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenCaptureCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType::ScreenCaptureCache_ScreenshotType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType::ScreenCaptureCache_ScreenshotType() {}
constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType GlobalNamespace::ScreenCaptureCache_ScreenshotType::Game{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType GlobalNamespace::ScreenCaptureCache_ScreenshotType::Menu{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ScreenCaptureCache_ScreenshotType GlobalNamespace::ScreenCaptureCache_ScreenshotType::Other{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache.GetLastScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::ScreenCaptureCache::*)(::GlobalNamespace::ScreenCaptureCache_ScreenshotType)>(
    &::GlobalNamespace::ScreenCaptureCache::GetLastScreenshot)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f468e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenCaptureCache*>(),
                                                                                           { "GetLastScreenshot", {}, { ::i2c::type_of<::GlobalNamespace::ScreenCaptureCache_ScreenshotType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache.StoreScreenshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenCaptureCache::*)(::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityEngine::Texture2D*)>(
    &::GlobalNamespace::ScreenCaptureCache::StoreScreenshot)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f465ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenCaptureCache*>(),
                                                { "StoreScreenshot", {}, { ::i2c::type_of<::GlobalNamespace::ScreenCaptureCache_ScreenshotType>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenCaptureCache::*)()>(&::GlobalNamespace::ScreenCaptureCache::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f46964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenCaptureCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>*&
GlobalNamespace::ScreenCaptureCache::__cordl_internal_get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* const&
GlobalNamespace::ScreenCaptureCache::__cordl_internal_get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr void GlobalNamespace::ScreenCaptureCache::__cordl_internal_set__cache(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ScreenCaptureCache_ScreenshotType, ::UnityW<::UnityEngine::Texture2D>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cache = value;
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::ScreenCaptureCache::GetLastScreenshot(::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenCaptureCache*>(),
                                                                                         { "GetLastScreenshot", {}, { ::i2c::type_of<::GlobalNamespace::ScreenCaptureCache_ScreenshotType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, screenshotType);
}
inline void GlobalNamespace::ScreenCaptureCache::StoreScreenshot(::GlobalNamespace::ScreenCaptureCache_ScreenshotType screenshotType, ::UnityEngine::Texture2D* texture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenCaptureCache*>(),
                                              { "StoreScreenshot", {}, { ::i2c::type_of<::GlobalNamespace::ScreenCaptureCache_ScreenshotType>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenshotType, texture);
}
inline void GlobalNamespace::ScreenCaptureCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScreenCaptureCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScreenCaptureCache* GlobalNamespace::ScreenCaptureCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScreenCaptureCache*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenCaptureCache::ScreenCaptureCache() {}
