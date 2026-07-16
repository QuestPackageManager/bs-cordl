#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderTargetHandle.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.set_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)(int32_t)>(&::UnityEngine::Rendering::Universal::RenderTargetHandle::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b2138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)()>(&::UnityEngine::Rendering::Universal::RenderTargetHandle::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b2140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.set_rtid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::set_rtid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68b2148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                           { "set_rtid", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.get_rtid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)()>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::get_rtid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68b2160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "get_rtid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68b2178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x68b21f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.GetCameraTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (*)(::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::GetCameraTarget)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x68b23ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                             { "GetCameraTarget", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)(::StringW)>(&::UnityEngine::Rendering::Universal::RenderTargetHandle::Init)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68b24c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "Init", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::Init)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68b2540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.Identifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)()>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::Identifier)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x68b25bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "Identifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.HasInternalRenderTargetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)()>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::HasInternalRenderTargetId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68b26c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "HasInternalRenderTargetId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)(::UnityEngine::Rendering::Universal::RenderTargetHandle)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::Equals)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x68b2728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)(::System::Object*)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68b286c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::RenderTargetHandle::*)()>(&::UnityEngine::Rendering::Universal::RenderTargetHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68b2934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::RenderTargetHandle, ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::op_Equality)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68b298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderTargetHandle.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::RenderTargetHandle, ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(
    &::UnityEngine::Rendering::Universal::RenderTargetHandle::op_Inequality)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x68b2a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
            { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderTargetHandle::setStaticF_CameraTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::RenderTargetHandle, "CameraTarget", ::UnityEngine::Rendering::Universal::RenderTargetHandle>(
      std::forward<::UnityEngine::Rendering::Universal::RenderTargetHandle>(value));
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::RenderTargetHandle::getStaticF_CameraTarget() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::RenderTargetHandle, "CameraTarget", ::UnityEngine::Rendering::Universal::RenderTargetHandle>();
}
inline void UnityEngine::Rendering::Universal::RenderTargetHandle::set_id(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::RenderTargetHandle::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderTargetHandle::set_rtid(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                         { "set_rtid", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::RenderTargetHandle::get_rtid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "get_rtid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderTargetHandle::_ctor(::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderTargetIdentifier);
}
inline void UnityEngine::Rendering::Universal::RenderTargetHandle::_ctor(::UnityEngine::Rendering::RTHandle* rtHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rtHandle);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle
UnityEngine::Rendering::Universal::RenderTargetHandle::GetCameraTarget(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                         { "GetCameraTarget", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle>(nullptr, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::RenderTargetHandle::Init(::StringW shaderProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "Init", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, shaderProperty);
}
inline void UnityEngine::Rendering::Universal::RenderTargetHandle::Init(::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, renderTargetIdentifier);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::RenderTargetHandle::Identifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "Identifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RenderTargetHandle::HasInternalRenderTargetId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), { "HasInternalRenderTargetId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RenderTargetHandle::Equals(::UnityEngine::Rendering::Universal::RenderTargetHandle other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::Universal::RenderTargetHandle::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::Universal::RenderTargetHandle::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::RenderTargetHandle::op_Equality(::UnityEngine::Rendering::Universal::RenderTargetHandle c1, ::UnityEngine::Rendering::Universal::RenderTargetHandle c2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c1, c2);
}
inline bool UnityEngine::Rendering::Universal::RenderTargetHandle::op_Inequality(::UnityEngine::Rendering::Universal::RenderTargetHandle c1,
                                                                                 ::UnityEngine::Rendering::Universal::RenderTargetHandle c2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(),
          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderTargetHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c1, c2);
}
// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rtid_k__BackingField", ty:
// "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle::RenderTargetHandle(int32_t _id_k__BackingField, ::UnityEngine::Rendering::RenderTargetIdentifier _rtid_k__BackingField) noexcept {
  this->_id_k__BackingField = _id_k__BackingField;
  this->_rtid_k__BackingField = _rtid_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle::RenderTargetHandle() {}
