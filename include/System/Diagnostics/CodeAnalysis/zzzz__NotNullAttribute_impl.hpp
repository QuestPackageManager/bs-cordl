#pragma once
// IWYU pragma private; include "System\Diagnostics\CodeAnalysis\NotNullAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__NotNullAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::NotNullAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::CodeAnalysis::NotNullAttribute::*)()>(&::System::Diagnostics::CodeAnalysis::NotNullAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be2fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::NotNullAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Diagnostics::CodeAnalysis::NotNullAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::NotNullAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::CodeAnalysis::NotNullAttribute* System::Diagnostics::CodeAnalysis::NotNullAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::CodeAnalysis::NotNullAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::NotNullAttribute::NotNullAttribute() {}
