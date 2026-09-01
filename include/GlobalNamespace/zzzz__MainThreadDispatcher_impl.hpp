#pragma once
// IWYU pragma private; include "GlobalNamespace\MainThreadDispatcher.hpp"
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
  this->___action = value;
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
  this->___firstParameter = value;
}
template <typename A> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>*>(), { "<DispatchOnMainThread>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A> inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>* GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass2_0_1<A>*>());
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
  this->___action = value;
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
  this->___firstParameter = value;
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
  this->___secondParameter = value;
}
template <typename A, typename B> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A, typename B> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>*>(), { "<DispatchOnMainThread>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A, typename B> inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>* GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass3_0_2<A, B>*>());
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
  this->___action = value;
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
  this->___firstParameter = value;
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
  this->___secondParameter = value;
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
  this->___thirdParameter = value;
}
template <typename A, typename B, typename C> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A, typename B, typename C> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>*>(), { "<DispatchOnMainThread>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A, typename B, typename C>
inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>* GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass4_0_3<A, B, C>*>());
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
  this->___action = value;
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
  this->___firstParameter = value;
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
  this->___secondParameter = value;
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
  this->___thirdParameter = value;
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
  this->___fourthParameter = value;
}
template <typename A, typename B, typename C, typename D> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A, typename B, typename C, typename D> inline void GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::_DispatchOnMainThread_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>*>(), { "<DispatchOnMainThread>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename A, typename B, typename C, typename D>
inline ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>* GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>*>());
}
// Ctor Parameters []
template <typename A, typename B, typename C, typename D> constexpr ::GlobalNamespace::MainThreadDispatcher___c__DisplayClass5_0_4<A, B, C, D>::MainThreadDispatcher___c__DisplayClass5_0_4() {}
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher.DispatchOnMainThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)(::System::Action*)>(&::GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5852c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(), { "DispatchOnMainThread", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)()>(&::GlobalNamespace::MainThreadDispatcher::Tick)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5852cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainThreadDispatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainThreadDispatcher::*)()>(&::GlobalNamespace::MainThreadDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5852ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(), { ".ctor", {}, {} })));
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
  this->____dispatchQueue = value;
}
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(), { "DispatchOnMainThread", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action);
}
template <typename A> inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_1<A>* action, A firstParameter) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(),
                                                           { "DispatchOnMainThread", { ::i2c::class_of<A>() }, { ::i2c::type_of<::System::Action_1<A>*>(), ::i2c::type_of<A>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<A>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, firstParameter);
}
template <typename A, typename B> inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_2<A, B>* action, A firstParameter, B secondParameter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(),
                          { "DispatchOnMainThread", { ::i2c::class_of<A>(), ::i2c::class_of<B>() }, { ::i2c::type_of<::System::Action_2<A, B>*>(), ::i2c::type_of<A>(), ::i2c::type_of<B>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<A>(), ::i2c::class_of<B>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, firstParameter, secondParameter);
}
template <typename A, typename B, typename C>
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_3<A, B, C>* action, A firstParameter, B secondParameter, C thirdParameter) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(),
                                                           { "DispatchOnMainThread",
                                                             { ::i2c::class_of<A>(), ::i2c::class_of<B>(), ::i2c::class_of<C>() },
                                                             { ::i2c::type_of<::System::Action_3<A, B, C>*>(), ::i2c::type_of<A>(), ::i2c::type_of<B>(), ::i2c::type_of<C>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<A>(), ::i2c::class_of<B>(), ::i2c::class_of<C>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, firstParameter, secondParameter, thirdParameter);
}
template <typename A, typename B, typename C, typename D>
inline void GlobalNamespace::MainThreadDispatcher::DispatchOnMainThread(::System::Action_4<A, B, C, D>* action, A firstParameter, B secondParameter, C thirdParameter, D fourthParameter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(),
                                              { "DispatchOnMainThread",
                                                { ::i2c::class_of<A>(), ::i2c::class_of<B>(), ::i2c::class_of<C>(), ::i2c::class_of<D>() },
                                                { ::i2c::type_of<::System::Action_4<A, B, C, D>*>(), ::i2c::type_of<A>(), ::i2c::type_of<B>(), ::i2c::type_of<C>(), ::i2c::type_of<D>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<A>(), ::i2c::class_of<B>(), ::i2c::class_of<C>(), ::i2c::class_of<D>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, firstParameter, secondParameter, thirdParameter, fourthParameter);
}
inline void GlobalNamespace::MainThreadDispatcher::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainThreadDispatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainThreadDispatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainThreadDispatcher* GlobalNamespace::MainThreadDispatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainThreadDispatcher*>());
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
