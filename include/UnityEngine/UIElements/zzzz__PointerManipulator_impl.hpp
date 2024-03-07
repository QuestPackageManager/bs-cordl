#pragma once
#include "UnityEngine/UIElements/zzzz__MouseManipulator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerManipulator.CanStartManipulation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::PointerManipulator::*)(::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::PointerManipulator::CanStartManipulation)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2f25450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerManipulator*>::get(), "CanStartManipulation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerManipulator.CanStopManipulation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::PointerManipulator::*)(::UnityEngine::UIElements::IPointerEvent*)>(
    &::UnityEngine::UIElements::PointerManipulator::CanStopManipulation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2f25888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerManipulator*>::get(), "CanStopManipulation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerManipulator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerManipulator::*)()>(&::UnityEngine::UIElements::PointerManipulator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2f244f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerManipulator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::PointerManipulator::__cordl_internal_get_m_CurrentPointerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPointerId;
}
constexpr int32_t const& UnityEngine::UIElements::PointerManipulator::__cordl_internal_get_m_CurrentPointerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPointerId;
}
constexpr void UnityEngine::UIElements::PointerManipulator::__cordl_internal_set_m_CurrentPointerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPointerId = value;
}
inline bool UnityEngine::UIElements::PointerManipulator::CanStartManipulation(::UnityEngine::UIElements::IPointerEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerManipulator*>::get(), "CanStartManipulation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline bool UnityEngine::UIElements::PointerManipulator::CanStopManipulation(::UnityEngine::UIElements::IPointerEvent* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerManipulator*>::get(), "CanStopManipulation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPointerEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::PointerManipulator* UnityEngine::UIElements::PointerManipulator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PointerManipulator*>());
}
inline void UnityEngine::UIElements::PointerManipulator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerManipulator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerManipulator::PointerManipulator() {}
