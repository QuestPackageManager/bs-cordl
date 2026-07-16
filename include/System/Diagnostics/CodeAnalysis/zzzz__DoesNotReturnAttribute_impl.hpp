#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/DoesNotReturnAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__DoesNotReturnAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute::*)()>(&::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5be0cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute* System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::DoesNotReturnAttribute::DoesNotReturnAttribute() {}
