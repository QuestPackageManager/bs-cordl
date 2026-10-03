#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AttachmentDescriptor.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.set_loadAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Rendering::RenderBufferLoadAction)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::set_loadAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f7b930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                           { "set_loadAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.get_storeAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderBufferStoreAction (::UnityEngine::Rendering::AttachmentDescriptor::*)()>(
    &::UnityEngine::Rendering::AttachmentDescriptor::get_storeAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f7b938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "get_storeAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.set_storeAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Rendering::RenderBufferStoreAction)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::set_storeAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f7b940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                           { "set_storeAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.get_loadStoreTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::AttachmentDescriptor::*)()>(
    &::UnityEngine::Rendering::AttachmentDescriptor::get_loadStoreTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f7b948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "get_loadStoreTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.set_loadStoreTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::set_loadStoreTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6f7b95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                           { "set_loadStoreTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.set_resolveTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::set_resolveTarget)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f7b970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                           { "set_resolveTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.set_clearColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Color)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::set_clearColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6f7b988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "set_clearColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.set_clearDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(float_t)>(&::UnityEngine::Rendering::AttachmentDescriptor::set_clearDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f7b994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "set_clearDepth", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.set_clearStencil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(uint32_t)>(&::UnityEngine::Rendering::AttachmentDescriptor::set_clearStencil)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f7b99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "set_clearStencil", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6f7b9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Rendering::AttachmentDescriptor)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::Equals)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6f7ba08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::AttachmentDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::AttachmentDescriptor::*)(::System::Object*)>(&::UnityEngine::Rendering::AttachmentDescriptor::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6f7bc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { ::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::AttachmentDescriptor::*)()>(&::UnityEngine::Rendering::AttachmentDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6f7bcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { ::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AttachmentDescriptor::set_loadAction(::UnityEngine::Rendering::RenderBufferLoadAction value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                         { "set_loadAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::AttachmentDescriptor::get_storeAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "get_storeAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderBufferStoreAction>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::set_storeAction(::UnityEngine::Rendering::RenderBufferStoreAction value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                         { "set_storeAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::AttachmentDescriptor::get_loadStoreTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "get_loadStoreTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::set_loadStoreTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                         { "set_loadStoreTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::set_resolveTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                         { "set_resolveTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::set_clearColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "set_clearColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::set_clearDepth(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "set_clearDepth", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::set_clearStencil(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "set_clearStencil", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::_ctor(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, format);
}
inline bool UnityEngine::Rendering::AttachmentDescriptor::Equals(::UnityEngine::Rendering::AttachmentDescriptor other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::AttachmentDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::AttachmentDescriptor::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::AttachmentDescriptor::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>"
constexpr UnityEngine::Rendering::AttachmentDescriptor::operator ::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>*
UnityEngine::Rendering::AttachmentDescriptor::i___System__IEquatable_1___UnityEngine__Rendering__AttachmentDescriptor_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::AttachmentDescriptor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_LoadAction", ty: "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StoreAction",
// ty: "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Format", ty:
// "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LoadStoreTarget", ty:
// "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ResolveTarget", ty:
// "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ClearColor", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_ClearDepth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ClearStencil", ty: "uint32_t", modifiers: "",
// def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::AttachmentDescriptor::AttachmentDescriptor(::UnityEngine::Rendering::RenderBufferLoadAction m_LoadAction,
                                                                               ::UnityEngine::Rendering::RenderBufferStoreAction m_StoreAction,
                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format,
                                                                               ::UnityEngine::Rendering::RenderTargetIdentifier m_LoadStoreTarget,
                                                                               ::UnityEngine::Rendering::RenderTargetIdentifier m_ResolveTarget, ::UnityEngine::Color m_ClearColor,
                                                                               float_t m_ClearDepth, uint32_t m_ClearStencil) noexcept {
  this->m_LoadAction = m_LoadAction;
  this->m_StoreAction = m_StoreAction;
  this->m_Format = m_Format;
  this->m_LoadStoreTarget = m_LoadStoreTarget;
  this->m_ResolveTarget = m_ResolveTarget;
  this->m_ClearColor = m_ClearColor;
  this->m_ClearDepth = m_ClearDepth;
  this->m_ClearStencil = m_ClearStencil;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AttachmentDescriptor::AttachmentDescriptor() {}
