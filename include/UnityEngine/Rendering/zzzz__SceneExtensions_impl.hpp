#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SceneExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SceneExtensions_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SceneExtensions.GetGUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::Rendering::SceneExtensions::GetGUID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x65da708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SceneExtensions*>::get(), "GetGUID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SceneExtensions::setStaticF_s_SceneGUID(::System::Reflection::PropertyInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::PropertyInfo*, "s_SceneGUID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SceneExtensions*>::get>(
      std::forward<::System::Reflection::PropertyInfo*>(value));
}
inline ::System::Reflection::PropertyInfo* UnityEngine::Rendering::SceneExtensions::getStaticF_s_SceneGUID() {
  return ::cordl_internals::getStaticField<::System::Reflection::PropertyInfo*, "s_SceneGUID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SceneExtensions*>::get>();
}
inline ::StringW UnityEngine::Rendering::SceneExtensions::GetGUID(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SceneExtensions*>::get(), "GetGUID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::Scene>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, scene);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SceneExtensions::SceneExtensions() {}
