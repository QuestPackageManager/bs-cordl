#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioHelpers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioHelpers.NormalizedVolumeToDB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioHelpers::NormalizedVolumeToDB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe265e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioHelpers*>::get(), "NormalizedVolumeToDB", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioHelpers.DBToNormalizedVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioHelpers::DBToNormalizedVolume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe26658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioHelpers*>::get(), "DBToNormalizedVolume", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::AudioHelpers::NormalizedVolumeToDB(float_t normalizedVolume) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioHelpers*>::get(), "NormalizedVolumeToDB", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, normalizedVolume);
}
inline float_t GlobalNamespace::AudioHelpers::DBToNormalizedVolume(float_t db) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioHelpers*>::get(), "DBToNormalizedVolume", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, db);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioHelpers::AudioHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
