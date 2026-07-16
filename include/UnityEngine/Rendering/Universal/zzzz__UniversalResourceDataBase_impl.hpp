#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalResourceDataBase.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceDataBase_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceDataBase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID::UniversalResourceDataBase_ActiveID(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID::UniversalResourceDataBase_ActiveID() {}
constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID::Camera{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID UnityEngine::Rendering::Universal::UniversalResourceDataBase_ActiveID::BackBuffer{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.get_isAccessible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalResourceDataBase::get_isAccessible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687155c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "get_isAccessible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.set_isAccessible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalResourceDataBase::set_isAccessible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6871564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "set_isAccessible", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.InitFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalResourceDataBase::InitFrame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x687156c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "InitFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.EndFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalResourceDataBase::EndFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6871578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "EndFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.CheckAndSetTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndSetTextureHandle)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x686fd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(),
                                                                                           { "CheckAndSetTextureHandle",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.CheckAndGetTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)(
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndGetTextureHandle)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x686fcac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(),
                                                             { "CheckAndGetTextureHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.CheckAndSetTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)(
    ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>, ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndSetTextureHandle)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x686fba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(),
                                                                                           { "CheckAndSetTextureHandle",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>(),
                                                                                               ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.CheckAndGetTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)(
    ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>)>(&::UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndGetTextureHandle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x686fa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(),
                                                { "CheckAndGetTextureHandle", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase.CheckAndWarnAboutAccessibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndWarnAboutAccessibility)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x686f904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "CheckAndWarnAboutAccessibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalResourceDataBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalResourceDataBase::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalResourceDataBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6870230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::UniversalResourceDataBase::__cordl_internal_get__isAccessible_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAccessible_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalResourceDataBase::__cordl_internal_get__isAccessible_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAccessible_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalResourceDataBase::__cordl_internal_set__isAccessible_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAccessible_k__BackingField = value;
}
inline bool UnityEngine::Rendering::Universal::UniversalResourceDataBase::get_isAccessible() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "get_isAccessible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalResourceDataBase::set_isAccessible(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "set_isAccessible", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalResourceDataBase::InitFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "InitFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalResourceDataBase::EndFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "EndFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndSetTextureHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::TextureHandle newHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(),
                                                                                         { "CheckAndSetTextureHandle",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, newHandle);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndGetTextureHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(),
                                                           { "CheckAndGetTextureHandle", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, handle);
}
inline void UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndSetTextureHandle(::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> handle,
                                                                                                   ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> newHandle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(),
                                                                                         { "CheckAndSetTextureHandle",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>(),
                                                                                             ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, newHandle);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>
UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndGetTextureHandle(::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(),
                                                           { "CheckAndGetTextureHandle", {}, { ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(this, ___internal_method, handle);
}
inline bool UnityEngine::Rendering::Universal::UniversalResourceDataBase::CheckAndWarnAboutAccessibility() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { "CheckAndWarnAboutAccessibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalResourceDataBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalResourceDataBase* UnityEngine::Rendering::Universal::UniversalResourceDataBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalResourceDataBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalResourceDataBase::UniversalResourceDataBase() {}
