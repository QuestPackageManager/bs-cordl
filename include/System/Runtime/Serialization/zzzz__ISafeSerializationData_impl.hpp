#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISafeSerializationData.hpp"
#include "System/Runtime/Serialization/zzzz__ISafeSerializationData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ISafeSerializationData.CompleteDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ISafeSerializationData::*)(::System::Object*)>(
    &::System::Runtime::Serialization::ISafeSerializationData::CompleteDeserialization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISafeSerializationData*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ISafeSerializationData*>(), 0 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ISafeSerializationData::CompleteDeserialization(::System::Object* deserialized) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ISafeSerializationData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deserialized);
}
