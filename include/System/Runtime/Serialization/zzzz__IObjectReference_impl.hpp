#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\IObjectReference.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::IObjectReference.GetRealObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::IObjectReference::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::IObjectReference::GetRealObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::IObjectReference*>(), { ::i2c::class_of<::System::Runtime::Serialization::IObjectReference*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::Runtime::Serialization::IObjectReference::GetRealObject(::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::IObjectReference*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
