#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/Math/zzzz__TypeMath_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>"
template <typename T> constexpr UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::operator ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>"
template <typename T>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>* UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::i___UnityEngine__ProBuilder__KdTree__ITypeMath_1_T_() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*>(static_cast<void*>(this));
}
template <typename T> inline int32_t UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Compare(T a, T b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
template <typename T> inline bool UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::AreEqual(T a, T b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a, b);
}
template <typename T> inline bool UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::AreEqual(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_MinValue() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_MaxValue() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Min(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "Min", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Max(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "Max", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_Zero() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_NegativeInfinity() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_PositiveInfinity() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Add(T a, T b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Subtract(T a, T b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Multiply(T a, T b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::DistanceSquaredBetweenPoints(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>* UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>());
}
template <typename T> inline void UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::TypeMath_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
