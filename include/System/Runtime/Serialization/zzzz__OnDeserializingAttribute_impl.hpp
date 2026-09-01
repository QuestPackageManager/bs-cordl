#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\OnDeserializingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__OnDeserializingAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::OnDeserializingAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::OnDeserializingAttribute::*)()>(&::System::Runtime::Serialization::OnDeserializingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b54fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::OnDeserializingAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::OnDeserializingAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::OnDeserializingAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::OnDeserializingAttribute* System::Runtime::Serialization::OnDeserializingAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::OnDeserializingAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::OnDeserializingAttribute::OnDeserializingAttribute() {}
