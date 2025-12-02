#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LookDev/StageRuntimeInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/LookDev/zzzz__StageRuntimeInterface_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::StageRuntimeInterface._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LookDev::StageRuntimeInterface::*)(
    ::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>*, ::System::Func_1<::UnityW<::UnityEngine::Camera>>*, ::System::Func_1<::UnityW<::UnityEngine::Light>>*)>(
    &::UnityEngine::Rendering::LookDev::StageRuntimeInterface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65df4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityW<::UnityEngine::Camera>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityW<::UnityEngine::Light>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::StageRuntimeInterface.AddGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Rendering::LookDev::StageRuntimeInterface::*)(bool)>(
    &::UnityEngine::Rendering::LookDev::StageRuntimeInterface::AddGameObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65df4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>::get(), "AddGameObject",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::StageRuntimeInterface.get_camera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Rendering::LookDev::StageRuntimeInterface::*)()>(
    &::UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_camera)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65df4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>::get(),
                                                                               "get_camera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::StageRuntimeInterface.get_sunLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Light> (::UnityEngine::Rendering::LookDev::StageRuntimeInterface::*)()>(
    &::UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_sunLight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65df510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>::get(),
                                                                               "get_sunLight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>*& UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_get_m_AddGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddGameObject;
}
constexpr ::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* const& UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_get_m_AddGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddGameObject;
}
constexpr void UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_set_m_AddGameObject(::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AddGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::UnityW<::UnityEngine::Camera>>*& UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_get_m_GetCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetCamera;
}
constexpr ::System::Func_1<::UnityW<::UnityEngine::Camera>>* const& UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_get_m_GetCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetCamera;
}
constexpr void UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_set_m_GetCamera(::System::Func_1<::UnityW<::UnityEngine::Camera>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GetCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<::UnityW<::UnityEngine::Light>>*& UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_get_m_GetSunLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetSunLight;
}
constexpr ::System::Func_1<::UnityW<::UnityEngine::Light>>* const& UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_get_m_GetSunLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GetSunLight;
}
constexpr void UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_set_m_GetSunLight(::System::Func_1<::UnityW<::UnityEngine::Light>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GetSunLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_get_SRPData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SRPData;
}
constexpr ::System::Object* const& UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_get_SRPData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SRPData;
}
constexpr void UnityEngine::Rendering::LookDev::StageRuntimeInterface::__cordl_internal_set_SRPData(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SRPData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::LookDev::StageRuntimeInterface::_ctor(::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* AddGameObject,
                                                                          ::System::Func_1<::UnityW<::UnityEngine::Camera>>* GetCamera, ::System::Func_1<::UnityW<::UnityEngine::Light>>* GetSunLight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityW<::UnityEngine::Camera>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityW<::UnityEngine::Light>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, AddGameObject, GetCamera, GetSunLight);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Rendering::LookDev::StageRuntimeInterface::AddGameObject(bool persistent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>::get(), "AddGameObject",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, persistent);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_camera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>::get(),
                                                                             "get_camera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Light> UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_sunLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>::get(),
                                                                             "get_sunLight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::LookDev::StageRuntimeInterface*
UnityEngine::Rendering::LookDev::StageRuntimeInterface::New_ctor(::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* AddGameObject,
                                                                 ::System::Func_1<::UnityW<::UnityEngine::Camera>>* GetCamera, ::System::Func_1<::UnityW<::UnityEngine::Light>>* GetSunLight) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(AddGameObject, GetCamera, GetSunLight));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LookDev::StageRuntimeInterface::StageRuntimeInterface() {}
