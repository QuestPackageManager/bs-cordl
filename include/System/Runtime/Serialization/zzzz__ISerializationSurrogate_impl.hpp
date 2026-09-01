#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ISerializationSurrogate.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializationSurrogate.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ISerializationSurrogate::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*,
                                                                                                                           ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::ISerializationSurrogate::GetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializationSurrogate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ISerializationSurrogate.SetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::ISerializationSurrogate::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext,
                                                                  ::System::Runtime::Serialization::ISurrogateSelector*)>(&::System::Runtime::Serialization::ISerializationSurrogate::SetObjectData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISerializationSurrogate*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::ISerializationSurrogate::GetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                   ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, info, context);
}
inline ::System::Object* System::Runtime::Serialization::ISerializationSurrogate::SetObjectData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                ::System::Runtime::Serialization::StreamingContext context,
                                                                                                ::System::Runtime::Serialization::ISurrogateSelector* selector) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, info, context, selector);
}
