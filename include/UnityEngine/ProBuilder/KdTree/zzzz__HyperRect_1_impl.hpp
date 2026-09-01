#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\KdTree\HyperRect_1.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__HyperRect_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::get_MinPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(), { "get_MinPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::set_MinPoint(::ArrayW<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(), { "set_MinPoint", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::get_MaxPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(), { "get_MaxPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::set_MaxPoint(::ArrayW<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(), { "set_MaxPoint", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T>
inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::Infinite(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(),
                                                           { "Infinite", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(nullptr, ___internal_method, dimensions, math);
}
template <typename T> inline ::ArrayW<T> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::GetClosestPoint(::ArrayW<T> toPoint, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(),
                                                           { "GetClosestPoint", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method, toPoint, math);
}
template <typename T> inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "minPoint", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxPoint", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::HyperRect_1(::ArrayW<T> minPoint, ::ArrayW<T> maxPoint) noexcept {
  this->minPoint = minPoint;
  this->maxPoint = maxPoint;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::HyperRect_1() {}
