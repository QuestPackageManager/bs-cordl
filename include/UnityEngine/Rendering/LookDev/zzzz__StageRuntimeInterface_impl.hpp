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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LookDev::StageRuntimeInterface::*)(
    ::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>*, ::System::Func_1<::UnityW<::UnityEngine::Camera>>*, ::System::Func_1<::UnityW<::UnityEngine::Light>>*)>(
    &::UnityEngine::Rendering::LookDev::StageRuntimeInterface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67f899c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>*>(),
                                                    ::i2c::type_of<::System::Func_1<::UnityW<::UnityEngine::Camera>>*>(), ::i2c::type_of<::System::Func_1<::UnityW<::UnityEngine::Light>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::StageRuntimeInterface.AddGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Rendering::LookDev::StageRuntimeInterface::*)(bool)>(
    &::UnityEngine::Rendering::LookDev::StageRuntimeInterface::AddGameObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x67f89a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(), { "AddGameObject", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::StageRuntimeInterface.get_camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::Rendering::LookDev::StageRuntimeInterface::*)()>(
    &::UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_camera)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67f89cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(), { "get_camera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LookDev::StageRuntimeInterface.get_sunLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (::UnityEngine::Rendering::LookDev::StageRuntimeInterface::*)()>(
    &::UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_sunLight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67f89ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(), { "get_sunLight", {}, {} })));
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
  this->___m_AddGameObject = value;
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
  this->___m_GetCamera = value;
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
  this->___m_GetSunLight = value;
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
  this->___SRPData = value;
}
inline void UnityEngine::Rendering::LookDev::StageRuntimeInterface::_ctor(::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* AddGameObject,
                                                                          ::System::Func_1<::UnityW<::UnityEngine::Camera>>* GetCamera, ::System::Func_1<::UnityW<::UnityEngine::Light>>* GetSunLight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::System::Func_1<::UnityW<::UnityEngine::Camera>>*>(),
                                                  ::i2c::type_of<::System::Func_1<::UnityW<::UnityEngine::Light>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, AddGameObject, GetCamera, GetSunLight);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Rendering::LookDev::StageRuntimeInterface::AddGameObject(bool persistent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(), { "AddGameObject", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, persistent);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_camera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(), { "get_camera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Light> UnityEngine::Rendering::LookDev::StageRuntimeInterface::get_sunLight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(), { "get_sunLight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::LookDev::StageRuntimeInterface*
UnityEngine::Rendering::LookDev::StageRuntimeInterface::New_ctor(::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* AddGameObject,
                                                                 ::System::Func_1<::UnityW<::UnityEngine::Camera>>* GetCamera, ::System::Func_1<::UnityW<::UnityEngine::Light>>* GetSunLight) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LookDev::StageRuntimeInterface*>(AddGameObject, GetCamera, GetSunLight));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LookDev::StageRuntimeInterface::StageRuntimeInterface() {}
