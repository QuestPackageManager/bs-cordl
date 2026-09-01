#pragma once
// IWYU pragma private; include "Tayx\Graphy\UI\IModifiableState.hpp"
#include "Tayx/Graphy/UI/zzzz__IModifiableState_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::UI::IModifiableState.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::UI::IModifiableState::*)(::Tayx::Graphy::GraphyManager_ModuleState, bool)>(
    &::Tayx::Graphy::UI::IModifiableState::SetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tayx::Graphy::UI::IModifiableState*>(), { ::i2c::class_of<::Tayx::Graphy::UI::IModifiableState*>(), 0 }));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::UI::IModifiableState::SetState(::Tayx::Graphy::GraphyManager_ModuleState newState, bool silentUpdate) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tayx::Graphy::UI::IModifiableState*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, silentUpdate);
}
