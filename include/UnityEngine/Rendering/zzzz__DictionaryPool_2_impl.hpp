#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DictionaryPool_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DictionaryPool_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__DictionaryPool_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template <typename TKey, typename TValue> inline void UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>::setStaticF___9(::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>*, "<>9", ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>*>(
      std::forward<::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue> inline ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>* UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>*, "<>9", ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>*>();
}
template <typename TKey, typename TValue> inline void UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>::__cctor_b__4_0(::System::Collections::Generic::Dictionary_2<TKey, TValue>* l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>*>(),
                                                                                         { "<.cctor>b__4_0", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, l);
}
template <typename TKey, typename TValue> inline ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>* UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::Rendering::DictionaryPool_2___c<TKey, TValue>::DictionaryPool_2___c() {}
template <typename TKey, typename TValue>
inline void UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>::setStaticF_s_Pool(::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>*, "s_Pool",
                                    ::UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>*>(
      std::forward<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>*>(value));
}
template <typename TKey, typename TValue>
inline ::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ObjectPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>*, "s_Pool",
                                           ::UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>*>();
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>
UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>::Get(::by_ref<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>*>(),
                                                                                         { "Get", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObjectPool_1_PooledObject<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>>(nullptr, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>::Release(::System::Collections::Generic::Dictionary_2<TKey, TValue>* toRelease) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>*>(),
                                                                                         { "Release", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::Rendering::DictionaryPool_2<TKey, TValue>::DictionaryPool_2() {}
