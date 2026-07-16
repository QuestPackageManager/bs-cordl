#pragma once
// IWYU pragma private; include "UnityEngine/UISystemProfilerApi.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__UISystemProfilerApi_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__UISystemProfilerApi_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UISystemProfilerApi_SampleType::UISystemProfilerApi_SampleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UISystemProfilerApi_SampleType::UISystemProfilerApi_SampleType() {}
constexpr ::UnityEngine::UISystemProfilerApi_SampleType UnityEngine::UISystemProfilerApi_SampleType::Layout{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UISystemProfilerApi_SampleType UnityEngine::UISystemProfilerApi_SampleType::Render{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.BeginSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UISystemProfilerApi_SampleType)>(&::UnityEngine::UISystemProfilerApi::BeginSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6dea29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UISystemProfilerApi*>(), { "BeginSample", {}, { ::i2c::type_of<::UnityEngine::UISystemProfilerApi_SampleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.EndSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UISystemProfilerApi_SampleType)>(&::UnityEngine::UISystemProfilerApi::EndSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6dea2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UISystemProfilerApi*>(), { "EndSample", {}, { ::i2c::type_of<::UnityEngine::UISystemProfilerApi_SampleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.AddMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::UnityEngine::UISystemProfilerApi::AddMarker)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6dea314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UISystemProfilerApi*>(), { "AddMarker", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.AddMarker_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::IntPtr)>(&::UnityEngine::UISystemProfilerApi::AddMarker_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6dea478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UISystemProfilerApi*>(),
                                                { "AddMarker_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UISystemProfilerApi::BeginSample(::UnityEngine::UISystemProfilerApi_SampleType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UISystemProfilerApi*>(), { "BeginSample", {}, { ::i2c::type_of<::UnityEngine::UISystemProfilerApi_SampleType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void UnityEngine::UISystemProfilerApi::EndSample(::UnityEngine::UISystemProfilerApi_SampleType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UISystemProfilerApi*>(), { "EndSample", {}, { ::i2c::type_of<::UnityEngine::UISystemProfilerApi_SampleType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void UnityEngine::UISystemProfilerApi::AddMarker(::StringW name, ::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UISystemProfilerApi*>(), { "AddMarker", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, obj);
}
inline void UnityEngine::UISystemProfilerApi::AddMarker_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::System::IntPtr obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UISystemProfilerApi*>(),
                                              { "AddMarker_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, obj);
}
// Ctor Parameters []
constexpr ::UnityEngine::UISystemProfilerApi::UISystemProfilerApi() {}
