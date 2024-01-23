#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__HyperRect_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
template <typename T> inline ::ArrayW<T, ::Array<T>*> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::get_MinPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>::get(),
                                                                             "get_MinPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::set_MinPoint(::ArrayW<T, ::Array<T>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>::get(), "set_MinPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::get_MaxPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>::get(),
                                                                             "get_MaxPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::set_MaxPoint(::ArrayW<T, ::Array<T>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>::get(), "set_MaxPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::Infinite(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>::get(), "Infinite", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>, false>(nullptr, ___internal_method, dimensions, math);
}
template <typename T>
inline ::ArrayW<T, ::Array<T>*> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::GetClosestPoint(::ArrayW<T, ::Array<T>*> toPoint, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* math) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>::get(), "GetClosestPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, toPoint, math);
}
template <typename T> inline ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T> UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "minPoint", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "maxPoint", ty: "::ArrayW<T,::Array<T>*>", modifiers: "",
// def_value: Some("nullptr") }]
template <typename T> constexpr ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::HyperRect_1(::ArrayW<T, ::Array<T>*> minPoint, ::ArrayW<T, ::Array<T>*> maxPoint) noexcept {
  this->minPoint = minPoint;
  this->maxPoint = maxPoint;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::KdTree::HyperRect_1<T>::HyperRect_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
