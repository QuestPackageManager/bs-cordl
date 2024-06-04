#pragma once
// IWYU pragma private; include "UnityEngine/TerrainCallbacks.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TerrainCallbacks_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__TerrainCallbacks_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x349e0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::*)(
    ::UnityEngine::Terrain*, ::UnityEngine::RectInt, bool)>(&::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x349e1cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>(object, method));
}
inline void UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::Invoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, bool synched) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, terrain, heightRegion, synched);
}
// Ctor Parameters []
constexpr ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::__TerrainCallbacks__HeightmapChangedCallback() {}
//  Writing Method size for method: ::UnityEngine::__TerrainCallbacks__TextureChangedCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__TerrainCallbacks__TextureChangedCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::__TerrainCallbacks__TextureChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x349e1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__TerrainCallbacks__TextureChangedCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__TerrainCallbacks__TextureChangedCallback::*)(
    ::UnityEngine::Terrain*, ::StringW, ::UnityEngine::RectInt, bool)>(&::UnityEngine::__TerrainCallbacks__TextureChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x349e2bc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* UnityEngine::__TerrainCallbacks__TextureChangedCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>(object, method));
}
inline void UnityEngine::__TerrainCallbacks__TextureChangedCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::__TerrainCallbacks__TextureChangedCallback::Invoke(::UnityEngine::Terrain* terrain, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, terrain, textureName, texelRegion, synched);
}
// Ctor Parameters []
constexpr ::UnityEngine::__TerrainCallbacks__TextureChangedCallback::__TerrainCallbacks__TextureChangedCallback() {}
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks.InvokeHeightmapChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainData*, ::UnityEngine::RectInt, bool)>(
    &::UnityEngine::TerrainCallbacks::InvokeHeightmapChangedCallback)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x349decc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get(), "InvokeHeightmapChangedCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks.InvokeTextureChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainData*, ::StringW, ::UnityEngine::RectInt, bool)>(
    &::UnityEngine::TerrainCallbacks::InvokeTextureChangedCallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x349dfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get(), "InvokeTextureChangedCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainCallbacks::setStaticF_heightmapChanged(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*, "heightmapChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get>(
      std::forward<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>(value));
}
inline ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* UnityEngine::TerrainCallbacks::getStaticF_heightmapChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*, "heightmapChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get>();
}
inline void UnityEngine::TerrainCallbacks::setStaticF_textureChanged(::UnityEngine::__TerrainCallbacks__TextureChangedCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*, "textureChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get>(
      std::forward<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>(value));
}
inline ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* UnityEngine::TerrainCallbacks::getStaticF_textureChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*, "textureChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get>();
}
inline void UnityEngine::TerrainCallbacks::InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* terrainData, ::UnityEngine::RectInt heightRegion, bool synched) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get(), "InvokeHeightmapChangedCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, terrainData, heightRegion, synched);
}
inline void UnityEngine::TerrainCallbacks::InvokeTextureChangedCallback(::UnityEngine::TerrainData* terrainData, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get(), "InvokeTextureChangedCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, terrainData, textureName, texelRegion, synched);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainCallbacks::TerrainCallbacks() {}
