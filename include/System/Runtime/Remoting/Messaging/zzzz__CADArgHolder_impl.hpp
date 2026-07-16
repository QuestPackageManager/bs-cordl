#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/CADArgHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADArgHolder_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADArgHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::CADArgHolder::*)(int32_t)>(&::System::Runtime::Remoting::Messaging::CADArgHolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3ddf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADArgHolder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Remoting::Messaging::CADArgHolder::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& System::Runtime::Remoting::Messaging::CADArgHolder::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void System::Runtime::Remoting::Messaging::CADArgHolder::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
inline void System::Runtime::Remoting::Messaging::CADArgHolder::_ctor(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::CADArgHolder*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::System::Runtime::Remoting::Messaging::CADArgHolder* System::Runtime::Remoting::Messaging::CADArgHolder::New_ctor(int32_t i) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::CADArgHolder*>(i));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder::CADArgHolder() {}
