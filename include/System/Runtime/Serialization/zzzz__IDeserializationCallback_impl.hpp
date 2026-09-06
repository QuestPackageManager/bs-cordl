#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IDeserializationCallback.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IDeserializationCallback.OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::IDeserializationCallback::*)(::System::Object*)>(
    &::System::Runtime::Serialization::IDeserializationCallback::OnDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IDeserializationCallback*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::IDeserializationCallback*>(), 0 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::IDeserializationCallback::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IDeserializationCallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
