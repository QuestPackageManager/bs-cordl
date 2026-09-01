#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\CallerMemberNameAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallerMemberNameAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallerMemberNameAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::CallerMemberNameAttribute::*)()>(
    &::System::Runtime::CompilerServices::CallerMemberNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6fccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallerMemberNameAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::CallerMemberNameAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallerMemberNameAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::CallerMemberNameAttribute* System::Runtime::CompilerServices::CallerMemberNameAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::CallerMemberNameAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CallerMemberNameAttribute::CallerMemberNameAttribute() {}
