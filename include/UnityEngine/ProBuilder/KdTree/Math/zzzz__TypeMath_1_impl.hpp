#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/Math/zzzz__TypeMath_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>"
template <typename T> constexpr UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::operator ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>*>(static_cast<void*>(this));
}
template <typename T> inline int32_t UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Compare(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "Compare", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
template <typename T> inline bool UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::AreEqual(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "AreEqual", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a, b);
}
template <typename T> inline bool UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::AreEqual(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "AreEqual", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_MinValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(),
                                                                             "get_MinValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_MaxValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(),
                                                                             "get_MaxValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(),
                                                                             "get_Zero", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_NegativeInfinity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(),
                                                                             "get_NegativeInfinity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::get_PositiveInfinity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(),
                                                                             "get_PositiveInfinity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Add(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "Add", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Subtract(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "Subtract", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::Multiply(T a, T b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "Multiply", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, a, b);
}
template <typename T> inline T UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>::DistanceSquaredBetweenPoints(::ArrayW<T, ::Array<T>*> a, ::ArrayW<T, ::Array<T>*> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T>*>::get(), "DistanceSquaredBetweenPoints", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get() })));
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
