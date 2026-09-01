#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TextureRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "dynamic", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TextureRegistry_TextureInfo::TextureRegistry_TextureInfo(::UnityW<::UnityEngine::Texture> texture, bool dynamic, int32_t refCount) noexcept {
  this->texture = texture;
  this->dynamic = dynamic;
  this->refCount = refCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextureRegistry_TextureInfo::TextureRegistry_TextureInfo() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextureRegistry* (*)()>(&::UnityEngine::UIElements::TextureRegistry::get_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dd7ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.GetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::UIElements::TextureId)>(
    &::UnityEngine::UIElements::TextureRegistry::GetTexture)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6dd7f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "GetTexture", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.AllocAndAcquireDynamic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextureId (::UnityEngine::UIElements::TextureRegistry::*)()>(
    &::UnityEngine::UIElements::TextureRegistry::AllocAndAcquireDynamic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd8128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "AllocAndAcquireDynamic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.UpdateDynamic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::UIElements::TextureId, ::UnityEngine::Texture*)>(
    &::UnityEngine::UIElements::TextureRegistry::UpdateDynamic)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6dd8424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(),
                                                             { "UpdateDynamic", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.AllocAndAcquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextureId (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::Texture*, bool)>(
    &::UnityEngine::UIElements::TextureRegistry::AllocAndAcquire)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6dd8134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(),
                                                                                           { "AllocAndAcquire", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.Acquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextureId (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::UIElements::TextureRegistry::Acquire)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6dd86b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "Acquire", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextureRegistry::*)(::UnityEngine::UIElements::TextureId)>(
    &::UnityEngine::UIElements::TextureRegistry::Release)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6dd8848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextureRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextureRegistry::*)()>(&::UnityEngine::UIElements::TextureRegistry::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6dd8b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextureRegistry_TextureInfo>*& UnityEngine::UIElements::TextureRegistry::__cordl_internal_get_m_Textures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextureRegistry_TextureInfo>* const& UnityEngine::UIElements::TextureRegistry::__cordl_internal_get_m_Textures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures;
}
constexpr void UnityEngine::UIElements::TextureRegistry::__cordl_internal_set_m_Textures(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TextureRegistry_TextureInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Textures = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::TextureId>*&
UnityEngine::UIElements::TextureRegistry::__cordl_internal_get_m_TextureToId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureToId;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::TextureId>* const&
UnityEngine::UIElements::TextureRegistry::__cordl_internal_get_m_TextureToId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureToId;
}
constexpr void UnityEngine::UIElements::TextureRegistry::__cordl_internal_set_m_TextureToId(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::TextureId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureToId = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*& UnityEngine::UIElements::TextureRegistry::__cordl_internal_get_m_FreeIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeIds;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* const& UnityEngine::UIElements::TextureRegistry::__cordl_internal_get_m_FreeIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreeIds;
}
constexpr void UnityEngine::UIElements::TextureRegistry::__cordl_internal_set_m_FreeIds(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreeIds = value;
}
inline void UnityEngine::UIElements::TextureRegistry::setStaticF__instance_k__BackingField(::UnityEngine::UIElements::TextureRegistry* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::TextureRegistry*, "<instance>k__BackingField", ::UnityEngine::UIElements::TextureRegistry*>(
      std::forward<::UnityEngine::UIElements::TextureRegistry*>(value));
}
inline ::UnityEngine::UIElements::TextureRegistry* UnityEngine::UIElements::TextureRegistry::getStaticF__instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TextureRegistry*, "<instance>k__BackingField", ::UnityEngine::UIElements::TextureRegistry*>();
}
inline ::UnityEngine::UIElements::TextureRegistry* UnityEngine::UIElements::TextureRegistry::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureRegistry*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UIElements::TextureRegistry::GetTexture(::UnityEngine::UIElements::TextureId id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "GetTexture", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method, id);
}
inline ::UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::AllocAndAcquireDynamic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "AllocAndAcquireDynamic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureId>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextureRegistry::UpdateDynamic(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(),
                                                           { "UpdateDynamic", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, texture);
}
inline ::UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::AllocAndAcquire(::UnityEngine::Texture* texture, bool dynamic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(),
                                                                                         { "AllocAndAcquire", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureId>(this, ___internal_method, texture, dynamic);
}
inline ::UnityEngine::UIElements::TextureId UnityEngine::UIElements::TextureRegistry::Acquire(::UnityEngine::Texture* tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "Acquire", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextureId>(this, ___internal_method, tex);
}
inline void UnityEngine::UIElements::TextureRegistry::Release(::UnityEngine::UIElements::TextureId id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { "Release", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::TextureRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextureRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextureRegistry* UnityEngine::UIElements::TextureRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextureRegistry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextureRegistry::TextureRegistry() {}
