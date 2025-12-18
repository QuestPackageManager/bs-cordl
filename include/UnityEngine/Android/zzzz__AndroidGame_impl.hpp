#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidGame.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidGame_def.hpp"
//  Writing Method size for method: ::UnityEngine::Android::AndroidGame.StopLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::Android::AndroidGame::StopLoading)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68630b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidGame*>::get(), "StopLoading", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Android::AndroidGame::StopLoading(int32_t label) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Android::AndroidGame*>::get(), "StopLoading",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, label);
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidGame::AndroidGame() {}
