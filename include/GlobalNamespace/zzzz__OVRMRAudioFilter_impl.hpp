#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMRAudioFilter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMRAudioFilter_def.hpp"
#include "GlobalNamespace/zzzz__OVRExternalComposition_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMRAudioFilter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMRAudioFilter::*)()>(&::GlobalNamespace::OVRMRAudioFilter::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b086bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMRAudioFilter*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMRAudioFilter.OnAudioFilterRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMRAudioFilter::*)(::ArrayW<float_t, ::Array<float_t>*>, int32_t)>(
    &::GlobalNamespace::OVRMRAudioFilter::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b086c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMRAudioFilter*>::get(), "OnAudioFilterRead", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMRAudioFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMRAudioFilter::*)()>(&::GlobalNamespace::OVRMRAudioFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b086e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMRAudioFilter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRMRAudioFilter::__cordl_internal_get_running() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
constexpr bool const& GlobalNamespace::OVRMRAudioFilter::__cordl_internal_get_running() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___running;
}
constexpr void GlobalNamespace::OVRMRAudioFilter::__cordl_internal_set_running(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___running = value;
}
constexpr ::GlobalNamespace::OVRExternalComposition*& GlobalNamespace::OVRMRAudioFilter::__cordl_internal_get_composition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___composition;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRExternalComposition*> const& GlobalNamespace::OVRMRAudioFilter::__cordl_internal_get_composition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___composition;
}
constexpr void GlobalNamespace::OVRMRAudioFilter::__cordl_internal_set_composition(::GlobalNamespace::OVRExternalComposition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___composition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRMRAudioFilter::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMRAudioFilter*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRMRAudioFilter::OnAudioFilterRead(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMRAudioFilter*>::get(), "OnAudioFilterRead", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline ::GlobalNamespace::OVRMRAudioFilter* GlobalNamespace::OVRMRAudioFilter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRMRAudioFilter*>());
}
inline void GlobalNamespace::OVRMRAudioFilter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMRAudioFilter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMRAudioFilter::OVRMRAudioFilter() {}
