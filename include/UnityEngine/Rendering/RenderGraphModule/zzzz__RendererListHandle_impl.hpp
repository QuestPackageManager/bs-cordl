#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RendererListHandle.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandleType_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandleType_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle.get_handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::get_handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67e4334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(), { "get_handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle.set_handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::set_handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67e433c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(), { "set_handle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::*)(
    int32_t, ::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType)>(&::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67e2348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle.op_Implicit_int32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67df930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(),
                                                             { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle.op_Implicit___UnityEngine__Rendering__RendererList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererList (*)(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::op_Implicit___UnityEngine__Rendering__RendererList)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x67e4344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(),
                                                             { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67e4460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::RenderGraphModule::RendererListHandle::get_handle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(), { "get_handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RendererListHandle::set_handle(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(), { "set_handle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RendererListHandle::_ctor(int32_t handle, ::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, type);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::RendererListHandle::op_Implicit_int32_t(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(),
                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RendererList
UnityEngine::Rendering::RenderGraphModule::RendererListHandle::op_Implicit___UnityEngine__Rendering__RendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(),
                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererList>(nullptr, ___internal_method, rendererList);
}
inline bool UnityEngine::Rendering::RenderGraphModule::RendererListHandle::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsValid", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::RendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandleType type, bool m_IsValid,
                                                                                              int32_t _handle_k__BackingField) noexcept {
  this->type = type;
  this->m_IsValid = m_IsValid;
  this->_handle_k__BackingField = _handle_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle::RendererListHandle() {}
