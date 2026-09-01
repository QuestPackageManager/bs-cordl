#pragma once
// IWYU pragma private; include "UnityEngine\TerrainCallbacks.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TerrainCallbacks_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__TerrainCallbacks_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainCallbacks_HeightmapChangedCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::TerrainCallbacks_HeightmapChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6bb9c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainCallbacks_HeightmapChangedCallback::*)(::UnityEngine::Terrain*, ::UnityEngine::RectInt, bool)>(
    &::UnityEngine::TerrainCallbacks_HeightmapChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bb9cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainCallbacks_HeightmapChangedCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::TerrainCallbacks_HeightmapChangedCallback::Invoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, bool synched) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, heightRegion, synched);
}
inline ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback* UnityEngine::TerrainCallbacks_HeightmapChangedCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback::TerrainCallbacks_HeightmapChangedCallback() {}
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks_TextureChangedCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainCallbacks_TextureChangedCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::TerrainCallbacks_TextureChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6bb9cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainCallbacks_TextureChangedCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks_TextureChangedCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainCallbacks_TextureChangedCallback::*)(::UnityEngine::Terrain*, ::StringW, ::UnityEngine::RectInt, bool)>(
    &::UnityEngine::TerrainCallbacks_TextureChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bb9d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainCallbacks_TextureChangedCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::TerrainCallbacks_TextureChangedCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainCallbacks_TextureChangedCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainCallbacks_TextureChangedCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::TerrainCallbacks_TextureChangedCallback::Invoke(::UnityEngine::Terrain* terrain, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::TerrainCallbacks_TextureChangedCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, textureName, texelRegion, synched);
}
inline ::UnityEngine::TerrainCallbacks_TextureChangedCallback* UnityEngine::TerrainCallbacks_TextureChangedCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TerrainCallbacks_TextureChangedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainCallbacks_TextureChangedCallback::TerrainCallbacks_TextureChangedCallback() {}
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks.InvokeHeightmapChangedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, ::UnityEngine::RectInt, bool)>(&::UnityEngine::TerrainCallbacks::InvokeHeightmapChangedCallback)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6bb99b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainCallbacks*>(),
                            { "InvokeHeightmapChangedCallback", {}, { ::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks.InvokeTextureChangedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, ::StringW, ::UnityEngine::RectInt, bool)>(
    &::UnityEngine::TerrainCallbacks::InvokeTextureChangedCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bb9b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TerrainCallbacks*>(),
            { "InvokeTextureChangedCallback", {}, { ::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainCallbacks::setStaticF_heightmapChanged(::UnityEngine::TerrainCallbacks_HeightmapChangedCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*, "heightmapChanged", ::UnityEngine::TerrainCallbacks*>(
      std::forward<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*>(value));
}
inline ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback* UnityEngine::TerrainCallbacks::getStaticF_heightmapChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*, "heightmapChanged", ::UnityEngine::TerrainCallbacks*>();
}
inline void UnityEngine::TerrainCallbacks::setStaticF_textureChanged(::UnityEngine::TerrainCallbacks_TextureChangedCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TerrainCallbacks_TextureChangedCallback*, "textureChanged", ::UnityEngine::TerrainCallbacks*>(
      std::forward<::UnityEngine::TerrainCallbacks_TextureChangedCallback*>(value));
}
inline ::UnityEngine::TerrainCallbacks_TextureChangedCallback* UnityEngine::TerrainCallbacks::getStaticF_textureChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::TerrainCallbacks_TextureChangedCallback*, "textureChanged", ::UnityEngine::TerrainCallbacks*>();
}
inline void UnityEngine::TerrainCallbacks::InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* terrainData, ::UnityEngine::RectInt heightRegion, bool synched) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainCallbacks*>(),
                                       { "InvokeHeightmapChangedCallback", {}, { ::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, heightRegion, synched);
}
inline void UnityEngine::TerrainCallbacks::InvokeTextureChangedCallback(::UnityEngine::TerrainData* terrainData, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TerrainCallbacks*>(),
          { "InvokeTextureChangedCallback", {}, { ::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, textureName, texelRegion, synched);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainCallbacks::TerrainCallbacks() {}
