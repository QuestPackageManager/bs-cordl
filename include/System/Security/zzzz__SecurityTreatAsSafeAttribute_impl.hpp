#pragma once
// IWYU pragma private; include "System\Security\SecurityTreatAsSafeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Security/zzzz__SecurityTreatAsSafeAttribute_def.hpp"
//  Writing Method size for method: ::System::Security::SecurityTreatAsSafeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::SecurityTreatAsSafeAttribute::*)()>(&::System::Security::SecurityTreatAsSafeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aee234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityTreatAsSafeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::SecurityTreatAsSafeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::SecurityTreatAsSafeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::SecurityTreatAsSafeAttribute* System::Security::SecurityTreatAsSafeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::SecurityTreatAsSafeAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Security::SecurityTreatAsSafeAttribute::SecurityTreatAsSafeAttribute() {}
