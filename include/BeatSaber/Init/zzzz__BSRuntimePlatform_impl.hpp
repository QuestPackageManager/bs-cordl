#pragma once
// IWYU pragma private; include "BeatSaber/Init/BSRuntimePlatform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__BSRuntimePlatform_def.hpp"
#include "BeatSaber/Init/zzzz__RuntimePlatformType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Init::BSRuntimePlatform.GetPlatformType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Init::RuntimePlatformType (*)()>(&::BeatSaber::Init::BSRuntimePlatform::GetPlatformType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223f314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSRuntimePlatform*>::get(), "GetPlatformType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::BSRuntimePlatform.get_IsSteam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::BeatSaber::Init::BSRuntimePlatform::get_IsSteam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223f31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSRuntimePlatform*>::get(), "get_IsSteam",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::BeatSaber::Init::RuntimePlatformType BeatSaber::Init::BSRuntimePlatform::GetPlatformType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSRuntimePlatform*>::get(), "GetPlatformType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Init::RuntimePlatformType, false>(nullptr, ___internal_method);
}
inline bool BeatSaber::Init::BSRuntimePlatform::get_IsSteam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSRuntimePlatform*>::get(), "get_IsSteam",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::BSRuntimePlatform::BSRuntimePlatform() {}
