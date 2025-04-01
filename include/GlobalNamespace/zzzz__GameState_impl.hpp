#pragma once
// IWYU pragma private; include "GlobalNamespace/GameState.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameState_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameState::*)(::GlobalNamespace::GameplayServerFiniteStateMachine*)>(
    &::GlobalNamespace::GameState::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22c80c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameState.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameState::*)()>(&::GlobalNamespace::GameState::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameState*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameState*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameState.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameState::*)()>(&::GlobalNamespace::GameState::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameState*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameState*>::get(), 6));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fsm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameState::_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fsm);
}
inline void GlobalNamespace::GameState::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameState*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameState::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameState*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameState* GlobalNamespace::GameState::New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine* fsm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameState*>(fsm));
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
