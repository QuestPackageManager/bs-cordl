#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutCacheData.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutCachedMeasurement_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutCacheData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutCacheData.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::Layout::LayoutCacheData::*)()>(&::UnityEngine::UIElements::Layout::LayoutCacheData::ToString)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x7198508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), { ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutCacheData.MeasurementCacheCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Layout::LayoutCacheData::*)()>(&::UnityEngine::UIElements::Layout::LayoutCacheData::MeasurementCacheCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x7198664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), { "MeasurementCacheCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutCacheData.ClearCachedMeasurements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutCacheData::*)()>(&::UnityEngine::UIElements::Layout::LayoutCacheData::ClearCachedMeasurements)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x71978d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), { "ClearCachedMeasurements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutCacheData.ClearCachedMeasurements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::UnityEngine::UIElements::Layout::LayoutCacheData::ClearCachedMeasurements)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x71986f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), { "ClearCachedMeasurements", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutCacheData::setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutCacheData value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::LayoutCacheData, "Default", ::UnityEngine::UIElements::Layout::LayoutCacheData>(
      std::forward<::UnityEngine::UIElements::Layout::LayoutCacheData>(value));
}
inline ::UnityEngine::UIElements::Layout::LayoutCacheData UnityEngine::UIElements::Layout::LayoutCacheData::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::LayoutCacheData, "Default", ::UnityEngine::UIElements::Layout::LayoutCacheData>();
}
inline ::StringW UnityEngine::UIElements::Layout::LayoutCacheData::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::Layout::LayoutCacheData::MeasurementCacheCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), { "MeasurementCacheCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutCacheData::ClearCachedMeasurements() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), { "ClearCachedMeasurements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutCacheData::ClearCachedMeasurements(void* LayoutCacheData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutCacheData>(), { "ClearCachedMeasurements", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, LayoutCacheData);
}
// Ctor Parameters [CppParam { name: "CachedLayout", ty: "::UnityEngine::UIElements::Layout::LayoutCachedMeasurement", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::Layout::LayoutCacheData::LayoutCacheData(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement CachedLayout) noexcept {
  this->CachedLayout = CachedLayout;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutCacheData::LayoutCacheData() {}
