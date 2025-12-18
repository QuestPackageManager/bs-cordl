#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/WaitForRestartFinish.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__WaitForRestartFinish_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::WaitForRestartFinish._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::WaitForRestartFinish::*)(float_t)>(
    &::UnityEngine::XR::OpenXR::WaitForRestartFinish::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x68246d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::WaitForRestartFinish.get_keepWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::WaitForRestartFinish::*)()>(
    &::UnityEngine::XR::OpenXR::WaitForRestartFinish::get_keepWaiting)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6826340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>::get(), 7));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::OpenXR::WaitForRestartFinish::__cordl_internal_get_m_Timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr float_t const& UnityEngine::XR::OpenXR::WaitForRestartFinish::__cordl_internal_get_m_Timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr void UnityEngine::XR::OpenXR::WaitForRestartFinish::__cordl_internal_set_m_Timeout(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timeout = value;
}
inline void UnityEngine::XR::OpenXR::WaitForRestartFinish::_ctor(float_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeout);
}
inline bool UnityEngine::XR::OpenXR::WaitForRestartFinish::get_keepWaiting() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::WaitForRestartFinish* UnityEngine::XR::OpenXR::WaitForRestartFinish::New_ctor(float_t timeout) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>(timeout));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::WaitForRestartFinish::WaitForRestartFinish() {}
