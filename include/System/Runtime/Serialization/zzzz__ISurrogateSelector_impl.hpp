#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ISurrogateSelector.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ISurrogateSelector.GetSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (
    ::System::Runtime::Serialization::ISurrogateSelector::*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::by_ref<::System::Runtime::Serialization::ISurrogateSelector*>)>(
    &::System::Runtime::Serialization::ISurrogateSelector::GetSurrogate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::ISurrogateSelector*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Runtime::Serialization::ISerializationSurrogate*
System::Runtime::Serialization::ISurrogateSelector::GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context,
                                                                 ::by_ref<::System::Runtime::Serialization::ISurrogateSelector*> selector) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::ISurrogateSelector*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*>(this, ___internal_method, type, context, selector);
}
