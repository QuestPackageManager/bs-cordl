#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionary_2.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_3_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
template <typename TKey, typename TValue> inline void BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
template <typename TKey, typename TValue>
inline void BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                 ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename TKey, typename TValue> inline TValue BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::GetValue(::ArrayW<TValue> storage, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, storage, i);
}
template <typename TKey, typename TValue> inline void BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::SetValue(::ArrayW<TValue> storage, int32_t i, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, i, value);
}
template <typename TKey, typename TValue> inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>* BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*
BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(dict));
}
template <typename TKey, typename TValue>
inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*
BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>*>(info, context));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>::SerializableDictionary_2() {}
