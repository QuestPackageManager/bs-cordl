#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Core\AssignableOf_2.hpp"
#include "OculusStudios/Platform/Core/zzzz__AssignableOf_1_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__AssignableOf_2_def.hpp"
template <typename TBase, typename TDerived> inline void OculusStudios::Platform::Core::AssignableOf_2<TBase, TDerived>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::AssignableOf_2<TBase, TDerived>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TBase, typename TDerived> inline ::OculusStudios::Platform::Core::AssignableOf_2<TBase, TDerived>* OculusStudios::Platform::Core::AssignableOf_2<TBase, TDerived>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::AssignableOf_2<TBase, TDerived>*>());
}
// Ctor Parameters []
template <typename TBase, typename TDerived> constexpr ::OculusStudios::Platform::Core::AssignableOf_2<TBase, TDerived>::AssignableOf_2() {}
