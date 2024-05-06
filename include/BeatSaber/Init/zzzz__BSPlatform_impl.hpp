#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Init/zzzz__BSPlatform_def.hpp"
//  Writing Method size for method: ::BeatSaber::Init::BSPlatform.get_IsSteamPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::BeatSaber::Init::BSPlatform::get_IsSteamPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1061988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSPlatform*>::get(), "get_IsSteamPlatform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool BeatSaber::Init::BSPlatform::get_IsSteamPlatform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSPlatform*>::get(), "get_IsSteamPlatform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::BSPlatform::BSPlatform() {}
