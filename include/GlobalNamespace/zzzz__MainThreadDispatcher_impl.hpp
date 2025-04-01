#pragma once
// IWYU pragma private; include "GlobalNamespace/MainThreadDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ITickable_impl.hpp"
#include "GlobalNamespace/zzzz__MainThreadDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__MainThreadDispatcher_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
template <typename A> constexpr ::System::Action_1<A>*& GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A> constexpr ::System::Action_1<A>* const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::__cordl_internal_set_action(::System::Action_1<A>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___action, value);
}
template <typename A> constexpr A& GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::__cordl_internal_get_firstParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A> constexpr A const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::__cordl_internal_get_firstParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::__cordl_internal_set_firstParameter(A value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___firstParameter, value);
}
template <typename A> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>*>::get(),
                                               "<DispatchOnMainThread>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A> inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>* GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>*>());
}
// Ctor Parameters []
template <typename A> constexpr ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::MainThreadDispatcher___c__DisplayClass2_0_1() {}
template <typename A, typename B> constexpr ::System::Action_2<A, B>*& GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B> constexpr ::System::Action_2<A, B>* const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_set_action(::System::Action_2<A, B>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___action, value);
}
template <typename A, typename B> constexpr A& GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_get_firstParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B> constexpr A const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_get_firstParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_set_firstParameter(A value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___firstParameter, value);
}
template <typename A, typename B> constexpr B& GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_get_secondParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B> constexpr B const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_get_secondParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::__cordl_internal_set_secondParameter(B value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___secondParameter, value);
}
template <typename A, typename B> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>*>::get(),
                                               "<DispatchOnMainThread>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B> inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>* GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>*>());
}
// Ctor Parameters []
template <typename A, typename B> constexpr ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::MainThreadDispatcher___c__DisplayClass3_0_2() {}
template <typename A, typename B, typename C> constexpr ::System::Action_3<A, B, C>*& GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B, typename C> constexpr ::System::Action_3<A, B, C>* const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B, typename C> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_set_action(::System::Action_3<A, B, C>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___action, value);
}
template <typename A, typename B, typename C> constexpr A& GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_firstParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B, typename C> constexpr A const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_firstParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B, typename C> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_set_firstParameter(A value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___firstParameter, value);
}
template <typename A, typename B, typename C> constexpr B& GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_secondParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B, typename C> constexpr B const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_secondParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B, typename C> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_set_secondParameter(B value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___secondParameter, value);
}
template <typename A, typename B, typename C> constexpr C& GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_thirdParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdParameter;
}
template <typename A, typename B, typename C> constexpr C const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_get_thirdParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdParameter;
}
template <typename A, typename B, typename C> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::__cordl_internal_set_thirdParameter(C value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___thirdParameter, value);
}
template <typename A, typename B, typename C> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B, typename C> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>*>::get(),
                                               "<DispatchOnMainThread>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B, typename C>
inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>* GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>*>());
}
// Ctor Parameters []
template <typename A, typename B, typename C> constexpr ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::MainThreadDispatcher___c__DisplayClass4_0_3() {}
template <typename A, typename B, typename C, typename D>
constexpr ::System::Action_4<A, B, C, D>*& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B, typename C, typename D>
constexpr ::System::Action_4<A, B, C, D>* const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
template <typename A, typename B, typename C, typename D>
constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_action(::System::Action_4<A, B, C, D>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___action, value);
}
template <typename A, typename B, typename C, typename D> constexpr A& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_firstParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B, typename C, typename D> constexpr A const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_firstParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstParameter;
}
template <typename A, typename B, typename C, typename D> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_firstParameter(A value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___firstParameter, value);
}
template <typename A, typename B, typename C, typename D> constexpr B& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_secondParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B, typename C, typename D> constexpr B const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_secondParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondParameter;
}
template <typename A, typename B, typename C, typename D> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_secondParameter(B value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___secondParameter, value);
}
template <typename A, typename B, typename C, typename D> constexpr C& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_thirdParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdParameter;
}
template <typename A, typename B, typename C, typename D> constexpr C const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_thirdParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdParameter;
}
template <typename A, typename B, typename C, typename D> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_thirdParameter(C value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___thirdParameter, value);
}
template <typename A, typename B, typename C, typename D> constexpr D& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_fourthParameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fourthParameter;
}
template <typename A, typename B, typename C, typename D> constexpr D const& GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_get_fourthParameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fourthParameter;
}
template <typename A, typename B, typename C, typename D> constexpr void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::__cordl_internal_set_fourthParameter(D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___fourthParameter, value);
}
template <typename A, typename B, typename C, typename D> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B, typename C, typename D> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>*>::get(),
                                               "<DispatchOnMainThread>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B, typename C, typename D>
inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>* GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>*>());
}
// Ctor Parameters []
template <typename A, typename B, typename C, typename D> constexpr ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::MainThreadDispatcher___c__DisplayClass5_0_4() {}
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher.DispatchOnMainThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)(::System::Action*)>(
    &::GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x39b8ef8;

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
  constexpr static std::size_t addrs = 0x39b8f50;

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
  constexpr static std::size_t addrs = 0x39b9054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*& GlobalNamespace::MainThreadDispatcher::__cordl_internal_get__dispatchQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatchQueue;
}
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* const& GlobalNamespace::MainThreadDispatcher::__cordl_internal_get__dispatchQueue() const {
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
inline void GlobalNamespace::MainThreadDispatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainThreadDispatcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainThreadDispatcher* GlobalNamespace::MainThreadDispatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainThreadDispatcher*>());
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::MainThreadDispatcher::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::MainThreadDispatcher::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainThreadDispatcher::MainThreadDispatcher() {}
