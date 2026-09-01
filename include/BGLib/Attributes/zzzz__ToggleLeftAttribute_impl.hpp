#pragma once
// IWYU pragma private; include "BGLib\Attributes\ToggleLeftAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "BGLib/Attributes/zzzz__ToggleLeftAttribute_def.hpp"
//  Writing Method size for method: ::BGLib::Attributes::ToggleLeftAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Attributes::ToggleLeftAttribute::*)()>(&::BGLib::Attributes::ToggleLeftAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330b6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Attributes::ToggleLeftAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BGLib::Attributes::ToggleLeftAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Attributes::ToggleLeftAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Attributes::ToggleLeftAttribute* BGLib::Attributes::ToggleLeftAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Attributes::ToggleLeftAttribute*>());
}
// Ctor Parameters []
constexpr ::BGLib::Attributes::ToggleLeftAttribute::ToggleLeftAttribute() {}
