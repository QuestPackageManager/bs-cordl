#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\AttachmentDescriptor.hpp"
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
  constexpr static std::size_t addrs = 0x6b1d590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                           { "set_loadAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.set_storeAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Rendering::RenderBufferStoreAction)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::set_storeAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1d598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                           { "set_storeAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.get_graphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::AttachmentDescriptor::*)()>(
    &::UnityEngine::Rendering::AttachmentDescriptor::get_graphicsFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b1d5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "get_graphicsFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.get_loadStoreTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::AttachmentDescriptor::*)()>(
    &::UnityEngine::Rendering::AttachmentDescriptor::get_loadStoreTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b1d5a8;

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
  constexpr static std::size_t addrs = 0x6b1d5bc;

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
  constexpr static std::size_t addrs = 0x6b1d5d0;

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
  constexpr static std::size_t addrs = 0x6b1d5e8;

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
  constexpr static std::size_t addrs = 0x6b1d5f4;

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
  constexpr static std::size_t addrs = 0x6b1d5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "set_clearStencil", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.ConfigureTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Rendering::RenderTargetIdentifier, bool, bool)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::ConfigureTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b1d604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.ConfigureResolveTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::ConfigureResolveTarget)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b1d648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                           { "ConfigureResolveTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.ConfigureClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Color, float_t, uint32_t)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::ConfigureClear)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b1d674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                             { "ConfigureClear", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AttachmentDescriptor::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b1d690;

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
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6b1d6f4;

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
  constexpr static std::size_t addrs = 0x6b1d8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { ::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::AttachmentDescriptor::*)()>(&::UnityEngine::Rendering::AttachmentDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6b1d990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { ::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AttachmentDescriptor.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::AttachmentDescriptor, ::UnityEngine::Rendering::AttachmentDescriptor)>(
    &::UnityEngine::Rendering::AttachmentDescriptor::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b1da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::AttachmentDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::AttachmentDescriptor>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AttachmentDescriptor::set_loadAction(::UnityEngine::Rendering::RenderBufferLoadAction value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                         { "set_loadAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::set_storeAction(::UnityEngine::Rendering::RenderBufferStoreAction value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                         { "set_storeAction", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::AttachmentDescriptor::get_graphicsFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(), { "get_graphicsFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(*this, ___internal_method);
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
inline void UnityEngine::Rendering::AttachmentDescriptor::ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier target, bool loadExistingContents, bool storeResults) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                              { "ConfigureTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, loadExistingContents, storeResults);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::ConfigureResolveTarget(::UnityEngine::Rendering::RenderTargetIdentifier target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                                                         { "ConfigureResolveTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target);
}
inline void UnityEngine::Rendering::AttachmentDescriptor::ConfigureClear(::UnityEngine::Color clearColor, float_t clearDepth, uint32_t clearStencil) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                                                           { "ConfigureClear", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, clearColor, clearDepth, clearStencil);
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
inline bool UnityEngine::Rendering::AttachmentDescriptor::op_Inequality(::UnityEngine::Rendering::AttachmentDescriptor left, ::UnityEngine::Rendering::AttachmentDescriptor right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AttachmentDescriptor>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Rendering::AttachmentDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::AttachmentDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
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
// Ctor Parameters [CppParam { name: "m_LoadAction", ty: "::UnityEngine::Rendering::RenderBufferLoadAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StoreAction", ty:
// "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_LoadStoreTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_ResolveTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClearColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_ClearDepth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClearStencil", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
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
