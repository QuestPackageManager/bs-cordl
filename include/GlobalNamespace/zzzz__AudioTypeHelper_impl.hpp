#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioTypeHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioTypeHelper_def.hpp"
#include "UnityEngine/zzzz__AudioType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioTypeHelper.GetAudioTypeFromPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioType (*)(::StringW)>(&::GlobalNamespace::AudioTypeHelper::GetAudioTypeFromPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b013c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTypeHelper*>::get(), "GetAudioTypeFromPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::AudioType GlobalNamespace::AudioTypeHelper::GetAudioTypeFromPath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioTypeHelper*>::get(), "GetAudioTypeFromPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioType, false>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioTypeHelper::AudioTypeHelper() {}
