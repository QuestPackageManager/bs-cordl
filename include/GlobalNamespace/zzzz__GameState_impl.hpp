#pragma once
// IWYU pragma private; include "GlobalNamespace\GameState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameState_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameState::*)(::GlobalNamespace::GameplayServerFiniteStateMachine*)>(&::GlobalNamespace::GameState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b2ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameState*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameState.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameState::*)()>(&::GlobalNamespace::GameState::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameState*>(), { ::i2c::class_of<::GlobalNamespace::GameState*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameState.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameState::*)()>(&::GlobalNamespace::GameState::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameState*>(), { ::i2c::class_of<::GlobalNamespace::GameState*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine*& GlobalNamespace::GameState::__cordl_internal_get_fsm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsm;
}
constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine* const& GlobalNamespace::GameState::__cordl_internal_get_fsm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsm;
}
constexpr void GlobalNamespace::GameState::__cordl_internal_set_fsm(::GlobalNamespace::GameplayServerFiniteStateMachine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fsm = value;
}
inline void GlobalNamespace::GameState::_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameState*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fsm);
}
inline void GlobalNamespace::GameState::Dispose() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameState*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameState::Init() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameState*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameState* GlobalNamespace::GameState::New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameState*>(fsm));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameState::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameState::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameState::GameState() {}
