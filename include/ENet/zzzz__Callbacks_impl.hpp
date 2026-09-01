#pragma once
// IWYU pragma private; include "ENet\Callbacks.hpp"
#include "ENet/zzzz__ENetCallbacks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ENet/zzzz__Callbacks_def.hpp"
#include "ENet/zzzz__AllocCallback_def.hpp"
#include "ENet/zzzz__ENetCallbacks_def.hpp"
#include "ENet/zzzz__FreeCallback_def.hpp"
#include "ENet/zzzz__NoMemoryCallback_def.hpp"
//  Writing Method size for method: ::ENet::Callbacks.get_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::ENetCallbacks (::ENet::Callbacks::*)()>(&::ENet::Callbacks::get_NativeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5892434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Callbacks*>(), { "get_NativeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Callbacks.set_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Callbacks::*)(::ENet::ENetCallbacks)>(&::ENet::Callbacks::set_NativeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5892448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Callbacks*>(), { "set_NativeData", {}, { ::i2c::type_of<::ENet::ENetCallbacks>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Callbacks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Callbacks::*)(::ENet::AllocCallback*, ::ENet::FreeCallback*, ::ENet::NoMemoryCallback*)>(&::ENet::Callbacks::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x589245c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Callbacks*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ENet::AllocCallback*>(), ::i2c::type_of<::ENet::FreeCallback*>(), ::i2c::type_of<::ENet::NoMemoryCallback*>() } })));
    return ___internal_method;
  }
};
constexpr ::ENet::ENetCallbacks& ENet::Callbacks::__cordl_internal_get_nativeCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeCallbacks;
}
constexpr ::ENet::ENetCallbacks const& ENet::Callbacks::__cordl_internal_get_nativeCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeCallbacks;
}
constexpr void ENet::Callbacks::__cordl_internal_set_nativeCallbacks(::ENet::ENetCallbacks value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativeCallbacks = value;
}
inline ::ENet::ENetCallbacks ENet::Callbacks::get_NativeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Callbacks*>(), { "get_NativeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::ENetCallbacks>(this, ___internal_method);
}
inline void ENet::Callbacks::set_NativeData(::ENet::ENetCallbacks value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Callbacks*>(), { "set_NativeData", {}, { ::i2c::type_of<::ENet::ENetCallbacks>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ENet::Callbacks::_ctor(::ENet::AllocCallback* allocCallback, ::ENet::FreeCallback* freeCallback, ::ENet::NoMemoryCallback* noMemoryCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Callbacks*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ENet::AllocCallback*>(), ::i2c::type_of<::ENet::FreeCallback*>(), ::i2c::type_of<::ENet::NoMemoryCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allocCallback, freeCallback, noMemoryCallback);
}
inline ::ENet::Callbacks* ENet::Callbacks::New_ctor(::ENet::AllocCallback* allocCallback, ::ENet::FreeCallback* freeCallback, ::ENet::NoMemoryCallback* noMemoryCallback) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ENet::Callbacks*>(allocCallback, freeCallback, noMemoryCallback));
}
// Ctor Parameters []
constexpr ::ENet::Callbacks::Callbacks() {}
