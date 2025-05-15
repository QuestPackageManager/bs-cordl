#pragma once
// IWYU pragma private; include "UnityEngine/DefaultExecutionOrder.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__DefaultExecutionOrder_def.hpp"
//  Writing Method size for method: ::UnityEngine::DefaultExecutionOrder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::DefaultExecutionOrder::*)(int32_t)>(&::UnityEngine::DefaultExecutionOrder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48a9064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DefaultExecutionOrder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DefaultExecutionOrder.get_order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::DefaultExecutionOrder::*)()>(&::UnityEngine::DefaultExecutionOrder::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48a8d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DefaultExecutionOrder*>::get(), "get_order",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::DefaultExecutionOrder::__cordl_internal_get_m_Order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Order;
}
constexpr int32_t const& UnityEngine::DefaultExecutionOrder::__cordl_internal_get_m_Order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Order;
}
constexpr void UnityEngine::DefaultExecutionOrder::__cordl_internal_set_m_Order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Order = value;
}
inline void UnityEngine::DefaultExecutionOrder::_ctor(int32_t order) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DefaultExecutionOrder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, order);
}
inline int32_t UnityEngine::DefaultExecutionOrder::get_order() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DefaultExecutionOrder*>::get(), "get_order",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::DefaultExecutionOrder* UnityEngine::DefaultExecutionOrder::New_ctor(int32_t order) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::DefaultExecutionOrder*>(order));
}
// Ctor Parameters []
constexpr ::UnityEngine::DefaultExecutionOrder::DefaultExecutionOrder() {}
