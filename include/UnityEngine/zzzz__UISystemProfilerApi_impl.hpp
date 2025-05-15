#pragma once
// IWYU pragma private; include "UnityEngine/UISystemProfilerApi.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__UISystemProfilerApi_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UISystemProfilerApi_SampleType)>(&::UnityEngine::UISystemProfilerApi::BeginSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4aad9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(), "BeginSample", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UISystemProfilerApi_SampleType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.EndSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UISystemProfilerApi_SampleType)>(&::UnityEngine::UISystemProfilerApi::EndSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4aad9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(), "EndSample", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UISystemProfilerApi_SampleType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UISystemProfilerApi.AddMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::UnityEngine::UISystemProfilerApi::AddMarker)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4aada28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(), "AddMarker", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UISystemProfilerApi::BeginSample(::UnityEngine::UISystemProfilerApi_SampleType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(), "BeginSample", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UISystemProfilerApi_SampleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void UnityEngine::UISystemProfilerApi::EndSample(::UnityEngine::UISystemProfilerApi_SampleType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(), "EndSample", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UISystemProfilerApi_SampleType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void UnityEngine::UISystemProfilerApi::AddMarker(::StringW name, ::UnityEngine::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UISystemProfilerApi*>::get(), "AddMarker", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, obj);
}
// Ctor Parameters []
constexpr ::UnityEngine::UISystemProfilerApi::UISystemProfilerApi() {}
