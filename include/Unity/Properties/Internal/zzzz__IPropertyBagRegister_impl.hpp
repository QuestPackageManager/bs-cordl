#pragma once
// IWYU pragma private; include "Unity\Properties\Internal\IPropertyBagRegister.hpp"
#include "Unity/Properties/Internal/zzzz__IPropertyBagRegister_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::IPropertyBagRegister.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::Internal::IPropertyBagRegister::*)()>(&::Unity::Properties::Internal::IPropertyBagRegister::Register)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::Internal::IPropertyBagRegister*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::Internal::IPropertyBagRegister*>(), 0 }));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::IPropertyBagRegister::Register() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::Internal::IPropertyBagRegister*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
