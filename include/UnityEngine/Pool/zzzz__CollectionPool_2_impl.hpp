#pragma once
// IWYU pragma private; include "UnityEngine/Pool/CollectionPool_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__CollectionPool_2_def.hpp"
#include "UnityEngine/Pool/zzzz__CollectionPool_2_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
template <typename TCollection, typename TItem>
inline void UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>::setStaticF___9(::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*, "<>9", ::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*>(
      std::forward<::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*>(value));
}
template <typename TCollection, typename TItem> inline ::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>* UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*, "<>9", ::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*>();
}
template <typename TCollection, typename TItem> inline void UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TCollection, typename TItem> inline TCollection UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>::__cctor_b__5_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*>(), { "<.cctor>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TCollection>(this, ___internal_method);
}
template <typename TCollection, typename TItem> inline void UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>::__cctor_b__5_1(TCollection l) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*>(), { "<.cctor>b__5_1", {}, { ::i2c::type_of<TCollection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, l);
}
template <typename TCollection, typename TItem> inline ::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>* UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>*>());
}
// Ctor Parameters []
template <typename TCollection, typename TItem> constexpr ::UnityEngine::Pool::CollectionPool_2___c<TCollection, TItem>::CollectionPool_2___c() {}
template <typename TCollection, typename TItem> inline void UnityEngine::Pool::CollectionPool_2<TCollection, TItem>::setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<TCollection>*, "s_Pool", ::UnityEngine::Pool::CollectionPool_2<TCollection, TItem>*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<TCollection>*>(value));
}
template <typename TCollection, typename TItem> inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* UnityEngine::Pool::CollectionPool_2<TCollection, TItem>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<TCollection>*, "s_Pool", ::UnityEngine::Pool::CollectionPool_2<TCollection, TItem>*>();
}
template <typename TCollection, typename TItem> inline TCollection UnityEngine::Pool::CollectionPool_2<TCollection, TItem>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::CollectionPool_2<TCollection, TItem>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TCollection>(nullptr, ___internal_method);
}
template <typename TCollection, typename TItem> inline ::UnityEngine::Pool::PooledObject_1<TCollection> UnityEngine::Pool::CollectionPool_2<TCollection, TItem>::Get(::by_ref<TCollection> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::CollectionPool_2<TCollection, TItem>*>(), { "Get", {}, { ::i2c::type_of<::by_ref<TCollection>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<TCollection>>(nullptr, ___internal_method, value);
}
template <typename TCollection, typename TItem> inline void UnityEngine::Pool::CollectionPool_2<TCollection, TItem>::Release(TCollection toRelease) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::CollectionPool_2<TCollection, TItem>*>(), { "Release", {}, { ::i2c::type_of<TCollection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toRelease);
}
// Ctor Parameters []
template <typename TCollection, typename TItem> constexpr ::UnityEngine::Pool::CollectionPool_2<TCollection, TItem>::CollectionPool_2() {}
