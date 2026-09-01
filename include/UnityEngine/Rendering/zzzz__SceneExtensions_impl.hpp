#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\SceneExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SceneExtensions_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SceneExtensions.GetGUID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::SceneManagement::Scene)>(&::UnityEngine::Rendering::SceneExtensions::GetGUID)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6791870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SceneExtensions*>(), { "GetGUID", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SceneExtensions::setStaticF_s_SceneGUID(::System::Reflection::PropertyInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::PropertyInfo*, "s_SceneGUID", ::UnityEngine::Rendering::SceneExtensions*>(std::forward<::System::Reflection::PropertyInfo*>(value));
}
inline ::System::Reflection::PropertyInfo* UnityEngine::Rendering::SceneExtensions::getStaticF_s_SceneGUID() {
  return ::cordl_internals::getStaticField<::System::Reflection::PropertyInfo*, "s_SceneGUID", ::UnityEngine::Rendering::SceneExtensions*>();
}
inline ::StringW UnityEngine::Rendering::SceneExtensions::GetGUID(::UnityEngine::SceneManagement::Scene scene) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SceneExtensions*>(), { "GetGUID", {}, { ::i2c::type_of<::UnityEngine::SceneManagement::Scene>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, scene);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SceneExtensions::SceneExtensions() {}
