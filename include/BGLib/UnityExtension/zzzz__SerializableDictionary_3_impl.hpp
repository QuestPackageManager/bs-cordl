#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\SerializableDictionary_3.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_3_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionary_3_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
template <typename TKey, typename TValue, typename TValueStorage> inline void BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline TValue BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::GetValue(::ArrayW<TValueStorage> storage, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, storage, i);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::SetValue(::ArrayW<TValueStorage> storage, int32_t i, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, i, value);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>* BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*>());
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*
BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*>(dict));
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*
BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>*>(info, context));
}
// Ctor Parameters []
template <typename TKey, typename TValue, typename TValueStorage> constexpr ::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>::SerializableDictionary_3() {}
