#pragma once
// IWYU pragma private; include "System\Diagnostics\CodeAnalysis\ExcludeFromCodeCoverageAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__ExcludeFromCodeCoverageAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute::*)()>(
    &::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63a0800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute* System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute::ExcludeFromCodeCoverageAttribute() {}
