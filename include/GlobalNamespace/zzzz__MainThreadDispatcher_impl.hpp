#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainThreadDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__MainThreadDispatcher_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
template <typename A> constexpr ::System::Action_1<A>*& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<A>*> const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__cordl_internal_set_action(::System::Action_1<A>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A> constexpr A& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__cordl_internal_get_firstParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A> constexpr A const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__cordl_internal_get_firstParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__cordl_internal_set_firstParameter(A value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A> inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>*>());
}
template <typename A> inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A> inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>*>::get(),
                                               "<DispatchOnMainThread>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename A> constexpr ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass2_0_1<A>::__MainThreadDispatcher____c__DisplayClass2_0_1() {}
template <typename A, typename B> constexpr ::System::Action_2<A, B>*& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<A, B>*> const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_set_action(::System::Action_2<A, B>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B> constexpr A& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_get_firstParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B> constexpr A const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_get_firstParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_set_firstParameter(A value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B> constexpr B& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_get_secondParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B> constexpr B const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_get_secondParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__cordl_internal_set_secondParameter(B value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secondParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B> inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>*>());
}
template <typename A, typename B> inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B> inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>*>::get(),
                                               "<DispatchOnMainThread>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename A, typename B> constexpr ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass3_0_2<A, B>::__MainThreadDispatcher____c__DisplayClass3_0_2() {}
template <typename A, typename B, typename C> constexpr ::System::Action_3<A, B, C>*& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B, typename C>
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<A, B, C>*> const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B, typename C> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_set_action(::System::Action_3<A, B, C>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C> constexpr A& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_firstParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B, typename C> constexpr A const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_firstParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B, typename C> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_set_firstParameter(A value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C> constexpr B& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_secondParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B, typename C> constexpr B const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_secondParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B, typename C> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_set_secondParameter(B value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secondParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C> constexpr C& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_thirdParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdParameter;
}
template <typename A, typename B, typename C> constexpr C const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_thirdParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdParameter;
}
template <typename A, typename B, typename C> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__cordl_internal_set_thirdParameter(C value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thirdParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C>
inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>*>());
}
template <typename A, typename B, typename C> inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B, typename C> inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>*>::get(),
                                               "<DispatchOnMainThread>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename A, typename B, typename C> constexpr ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass4_0_3<A, B, C>::__MainThreadDispatcher____c__DisplayClass4_0_3() {}
template <typename A, typename B, typename C, typename D>
constexpr ::System::Action_4<A, B, C, D>*& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B, typename C, typename D>
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<A, B, C, D>*> const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B, typename C, typename D>
constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_action(::System::Action_4<A, B, C, D>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C, typename D> constexpr A& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_firstParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B, typename C, typename D> constexpr A const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_firstParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B, typename C, typename D> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_firstParameter(A value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___firstParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C, typename D> constexpr B& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_secondParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B, typename C, typename D> constexpr B const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_secondParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B, typename C, typename D> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_secondParameter(B value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secondParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C, typename D> constexpr C& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_thirdParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdParameter;
}
template <typename A, typename B, typename C, typename D> constexpr C const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_thirdParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdParameter;
}
template <typename A, typename B, typename C, typename D> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_thirdParameter(C value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thirdParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C, typename D> constexpr D& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_fourthParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fourthParameter;
}
template <typename A, typename B, typename C, typename D> constexpr D const& GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_fourthParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fourthParameter;
}
template <typename A, typename B, typename C, typename D> constexpr void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_fourthParameter(D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fourthParameter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename A, typename B, typename C, typename D>
inline ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>* GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>*>());
}
template <typename A, typename B, typename C, typename D> inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B, typename C, typename D> inline void GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>*>::get(),
                                               "<DispatchOnMainThread>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename A, typename B, typename C, typename D> constexpr ::GlobalNamespace::__MainThreadDispatcher____c__DisplayClass5_0_4<A, B, C, D>::__MainThreadDispatcher____c__DisplayClass5_0_4() {}
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher.DispatchOnMainThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)(::System::Action*)>(
    &::GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2181fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), "DispatchOnMainThread",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)()>(&::GlobalNamespace::MainThreadDispatcher::Tick)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2182000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), "Tick",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)()>(&::GlobalNamespace::MainThreadDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2182104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::MainThreadDispatcher::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::MainThreadDispatcher::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*& GlobalNamespace::MainThreadDispatcher::__cordl_internal_get__dispatchQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatchQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*> const&
GlobalNamespace::MainThreadDispatcher::__cordl_internal_get__dispatchQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatchQueue;
}
constexpr void GlobalNamespace::MainThreadDispatcher::__cordl_internal_set__dispatchQueue(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dispatchQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), "DispatchOnMainThread",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
template <typename A> inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_1<A>* action, A firstParameter) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), "DispatchOnMainThread",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<A>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, firstParameter);
}
template <typename A, typename B> inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_2<A, B>* action, A firstParameter, B secondParameter) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), "DispatchOnMainThread",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<A, B>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, firstParameter, secondParameter);
}
template <typename A, typename B, typename C>
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_3<A, B, C>* action, A firstParameter, B secondParameter, C thirdParameter) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), "DispatchOnMainThread",
      std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<A, B, C>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, firstParameter, secondParameter, thirdParameter);
}
template <typename A, typename B, typename C, typename D>
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_4<A, B, C, D>* action, A firstParameter, B secondParameter, C thirdParameter, D fourthParameter) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), "DispatchOnMainThread",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<D>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<A, B, C, D>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<D>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<D>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, firstParameter, secondParameter, thirdParameter, fourthParameter);
}
inline void GlobalNamespace::MainThreadDispatcher::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), "Tick",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainThreadDispatcher* GlobalNamespace::MainThreadDispatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainThreadDispatcher*>());
}
inline void GlobalNamespace::MainThreadDispatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainThreadDispatcher::MainThreadDispatcher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
