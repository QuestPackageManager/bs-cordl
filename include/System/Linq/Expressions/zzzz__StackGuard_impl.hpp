#pragma once
// IWYU pragma private; include "System\Linq\Expressions\StackGuard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__StackGuard_def.hpp"
#include "System/Linq/Expressions/zzzz__StackGuard_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2> inline void System::Linq::Expressions::StackGuard___c__3_2<T1, T2>::setStaticF___9(::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*, "<>9", ::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*>(
      std::forward<::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*>(value));
}
template <typename T1, typename T2> inline ::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>* System::Linq::Expressions::StackGuard___c__3_2<T1, T2>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*, "<>9", ::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*>();
}
template <typename T1, typename T2> inline void System::Linq::Expressions::StackGuard___c__3_2<T1, T2>::setStaticF___9__3_0(::System::Func_2<::System::Object*, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Object*, ::System::Object*>*, "<>9__3_0", ::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*>(
      std::forward<::System::Func_2<::System::Object*, ::System::Object*>*>(value));
}
template <typename T1, typename T2> inline ::System::Func_2<::System::Object*, ::System::Object*>* System::Linq::Expressions::StackGuard___c__3_2<T1, T2>::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Object*, ::System::Object*>*, "<>9__3_0", ::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*>();
}
template <typename T1, typename T2> inline void System::Linq::Expressions::StackGuard___c__3_2<T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T1, typename T2> inline ::System::Object* System::Linq::Expressions::StackGuard___c__3_2<T1, T2>::_RunOnEmptyStack_b__3_0(::System::Object* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*>(), { "<RunOnEmptyStack>b__3_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, s);
}
template <typename T1, typename T2> inline ::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>* System::Linq::Expressions::StackGuard___c__3_2<T1, T2>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>*>());
}
// Ctor Parameters []
template <typename T1, typename T2> constexpr ::System::Linq::Expressions::StackGuard___c__3_2<T1, T2>::StackGuard___c__3_2() {}
//  Writing Method size for method: ::System::Linq::Expressions::StackGuard.TryEnterOnCurrentStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::StackGuard::*)()>(&::System::Linq::Expressions::StackGuard::TryEnterOnCurrentStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::StackGuard*>(), { "TryEnterOnCurrentStack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::StackGuard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::StackGuard::*)()>(&::System::Linq::Expressions::StackGuard::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f89538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::StackGuard*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::StackGuard::__cordl_internal_get__executionStackCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionStackCount;
}
constexpr int32_t const& System::Linq::Expressions::StackGuard::__cordl_internal_get__executionStackCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionStackCount;
}
constexpr void System::Linq::Expressions::StackGuard::__cordl_internal_set__executionStackCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____executionStackCount = value;
}
inline bool System::Linq::Expressions::StackGuard::TryEnterOnCurrentStack() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::StackGuard*>(), { "TryEnterOnCurrentStack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T1, typename T2> inline void System::Linq::Expressions::StackGuard::RunOnEmptyStack(::System::Action_2<T1, T2>* action, T1 arg1, T2 arg2) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::StackGuard*>(),
                          { "RunOnEmptyStack", { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() }, { ::i2c::type_of<::System::Action_2<T1, T2>*>(), ::i2c::type_of<T1>(), ::i2c::type_of<T2>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, arg1, arg2);
}
template <typename R> inline R System::Linq::Expressions::StackGuard::RunOnEmptyStackCore(::System::Func_2<::System::Object*, R>* action, ::System::Object* state) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::StackGuard*>(),
                                       { "RunOnEmptyStackCore", { ::i2c::class_of<R>() }, { ::i2c::type_of<::System::Func_2<::System::Object*, R>*>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<R>() })));
  return ::cordl_internals::RunMethodRethrow<R>(this, ___internal_method, action, state);
}
inline void System::Linq::Expressions::StackGuard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::StackGuard*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::StackGuard* System::Linq::Expressions::StackGuard::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::StackGuard*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::StackGuard::StackGuard() {}
