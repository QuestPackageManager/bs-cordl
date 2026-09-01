#pragma once
// IWYU pragma private; include "UnityEngine\DefaultExecutionOrder.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__DefaultExecutionOrder_def.hpp"
//  Writing Method size for method: ::UnityEngine::DefaultExecutionOrder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::DefaultExecutionOrder::*)(int32_t)>(&::UnityEngine::DefaultExecutionOrder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6adab98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DefaultExecutionOrder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DefaultExecutionOrder.get_order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::DefaultExecutionOrder::*)()>(&::UnityEngine::DefaultExecutionOrder::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ada9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DefaultExecutionOrder*>(), { "get_order", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DefaultExecutionOrder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, order);
}
inline int32_t UnityEngine::DefaultExecutionOrder::get_order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::DefaultExecutionOrder*>(), { "get_order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::DefaultExecutionOrder* UnityEngine::DefaultExecutionOrder::New_ctor(int32_t order) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::DefaultExecutionOrder*>(order));
}
// Ctor Parameters []
constexpr ::UnityEngine::DefaultExecutionOrder::DefaultExecutionOrder() {}
