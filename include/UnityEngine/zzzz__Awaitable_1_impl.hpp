#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
template <typename T> inline void UnityEngine::Awaitable_1___c<T>::setStaticF___9(::UnityEngine::Awaitable_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Awaitable_1___c<T>*, "<>9", ::UnityEngine::Awaitable_1___c<T>*>(std::forward<::UnityEngine::Awaitable_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::Awaitable_1___c<T>* UnityEngine::Awaitable_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Awaitable_1___c<T>*, "<>9", ::UnityEngine::Awaitable_1___c<T>*>();
}
template <typename T> inline void UnityEngine::Awaitable_1___c<T>::setStaticF___9__15_1(::System::Func_1<::UnityEngine::Awaitable_1<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::Awaitable_1<T>*>*, "<>9__15_1", ::UnityEngine::Awaitable_1___c<T>*>(
      std::forward<::System::Func_1<::UnityEngine::Awaitable_1<T>*>*>(value));
}
template <typename T> inline ::System::Func_1<::UnityEngine::Awaitable_1<T>*>* UnityEngine::Awaitable_1___c<T>::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::Awaitable_1<T>*>*, "<>9__15_1", ::UnityEngine::Awaitable_1___c<T>*>();
}
template <typename T> inline void UnityEngine::Awaitable_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Awaitable_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>* UnityEngine::Awaitable_1___c<T>::__cctor_b__15_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Awaitable_1___c<T>*>(), { "<.cctor>b__15_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Awaitable_1<T>* UnityEngine::Awaitable_1___c<T>::__cctor_b__15_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Awaitable_1___c<T>*>(), { "<.cctor>b__15_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Awaitable_1___c<T>* UnityEngine::Awaitable_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Awaitable_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Awaitable_1___c<T>::Awaitable_1___c() {}
template <typename T> constexpr ::UnityEngine::Awaitable*& UnityEngine::Awaitable_1<T>::__cordl_internal_get__awaitable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____awaitable;
}
template <typename T> constexpr ::UnityEngine::Awaitable* const& UnityEngine::Awaitable_1<T>::__cordl_internal_get__awaitable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____awaitable;
}
template <typename T> constexpr void UnityEngine::Awaitable_1<T>::__cordl_internal_set__awaitable(::UnityEngine::Awaitable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____awaitable = value;
}
template <typename T> constexpr T& UnityEngine::Awaitable_1<T>::__cordl_internal_get__result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____result;
}
template <typename T> constexpr T const& UnityEngine::Awaitable_1<T>::__cordl_internal_get__result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____result;
}
template <typename T> constexpr void UnityEngine::Awaitable_1<T>::__cordl_internal_set__result(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____result = value;
}
template <typename T> inline void UnityEngine::Awaitable_1<T>::setStaticF__pool(::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>* value) {
  ::cordl_internals::setStaticField<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>*, "_pool", ::UnityEngine::Awaitable_1<T>*>(
      std::forward<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>*>(value));
}
template <typename T> inline ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>* UnityEngine::Awaitable_1<T>::getStaticF__pool() {
  return ::cordl_internals::getStaticField<::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable_1<T>*>*>*, "_pool", ::UnityEngine::Awaitable_1<T>*>();
}
template <typename T> inline void UnityEngine::Awaitable_1<T>::SetResultAndRaiseContinuation(T result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Awaitable_1<T>*>(), { "SetResultAndRaiseContinuation", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename T> inline void UnityEngine::Awaitable_1<T>::SetExceptionAndRaiseContinuation(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Awaitable_1<T>*>(), { "SetExceptionAndRaiseContinuation", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
template <typename T> inline void UnityEngine::Awaitable_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Awaitable_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Awaitable_1<T>* UnityEngine::Awaitable_1<T>::GetManaged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Awaitable_1<T>*>(), { "GetManaged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityEngine::Awaitable_1<T>* UnityEngine::Awaitable_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Awaitable_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Awaitable_1<T>::Awaitable_1() {}
