#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ThreadSafeStore_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__cordl_internal_get__concurrentStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concurrentStore;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* const& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__cordl_internal_get__concurrentStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____concurrentStore;
}
template <typename TKey, typename TValue>
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__cordl_internal_set__concurrentStore(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____concurrentStore = value;
}
template <typename TKey, typename TValue> constexpr ::System::Func_2<TKey, TValue>*& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__cordl_internal_get__creator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creator;
}
template <typename TKey, typename TValue> constexpr ::System::Func_2<TKey, TValue>* const& Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__cordl_internal_get__creator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creator;
}
template <typename TKey, typename TValue> constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::__cordl_internal_set__creator(::System::Func_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creator = value;
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::_ctor(::System::Func_2<TKey, TValue>* creator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, creator);
}
template <typename TKey, typename TValue> inline TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::Get(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>*>(), { "Get", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>* Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::New_ctor(::System::Func_2<TKey, TValue>* creator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>*>(creator));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>::ThreadSafeStore_2() {}
