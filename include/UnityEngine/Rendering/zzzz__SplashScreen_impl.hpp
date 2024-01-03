#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SplashScreen_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SplashScreen.get_isFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::SplashScreen::get_isFinished)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ceca88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SplashScreen*>::get(), "get_isFinished",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::SplashScreen::get_isFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SplashScreen*>::get(), "get_isFinished",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SplashScreen::SplashScreen() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
