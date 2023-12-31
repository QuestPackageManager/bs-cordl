#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaberSwingRating_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRating.NormalRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::SaberSwingRating::NormalRating)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2324854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRating*>::get(), "NormalRating", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRating.BeforeCutStepRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::SaberSwingRating::BeforeCutStepRating)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2324818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRating*>::get(), "BeforeCutStepRating", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRating.AfterCutStepRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::SaberSwingRating::AfterCutStepRating)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2324880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRating*>::get(), "AfterCutStepRating", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::SaberSwingRating::NormalRating(float_t normalDiff) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRating*>::get(), "NormalRating", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, normalDiff);
}
inline float_t GlobalNamespace::SaberSwingRating::BeforeCutStepRating(float_t angleDiff, float_t normalDiff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRating*>::get(), "BeforeCutStepRating", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, angleDiff, normalDiff);
}
inline float_t GlobalNamespace::SaberSwingRating::AfterCutStepRating(float_t angleDiff, float_t normalDiff) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRating*>::get(), "AfterCutStepRating", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, angleDiff, normalDiff);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberSwingRating::SaberSwingRating() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
