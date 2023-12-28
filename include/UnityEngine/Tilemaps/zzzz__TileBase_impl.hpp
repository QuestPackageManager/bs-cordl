#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__ITilemap_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileAnimationData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.RefreshTile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(
    &::UnityEngine::Tilemaps::TileBase::RefreshTile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d50654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileData>)>(&::UnityEngine::Tilemaps::TileBase::GetTileData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d507d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileDataNoRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::TileData (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(&::UnityEngine::Tilemaps::TileBase::GetTileDataNoRef)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2d507d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileDataNoRef", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileAnimationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileAnimationData>)>(&::UnityEngine::Tilemaps::TileBase::GetTileAnimationData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileAnimationDataNoRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::TileAnimationData (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(&::UnityEngine::Tilemaps::TileBase::GetTileAnimationDataNoRef)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d50828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationDataNoRef", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileAnimationDataRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileAnimationData>, ByRef<bool>)>(&::UnityEngine::Tilemaps::TileBase::GetTileAnimationDataRef)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d50858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationDataRef", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Tilemaps::TileAnimationData>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.StartUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*)>(&::UnityEngine::Tilemaps::TileBase::StartUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d50880;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.StartUpRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*, ByRef<bool>)>(&::UnityEngine::Tilemaps::TileBase::StartUpRef)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d50888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "StartUpRef", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)()>(&::UnityEngine::Tilemaps::TileBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d5064c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::Tilemaps::TileBase::RefreshTile(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "RefreshTile", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap);
}
inline void UnityEngine::Tilemaps::TileBase::GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ByRef<::UnityEngine::Tilemaps::TileData> tileData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Tilemaps::TileData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap, tileData);
}
inline ::UnityEngine::Tilemaps::TileData UnityEngine::Tilemaps::TileBase::GetTileDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileDataNoRef", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileData, false>(this, ___internal_method, position, tilemap);
}
inline bool UnityEngine::Tilemaps::TileBase::GetTileAnimationData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap,
                                                                  ByRef<::UnityEngine::Tilemaps::TileAnimationData> tileAnimationData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Tilemaps::TileAnimationData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, tilemap, tileAnimationData);
}
inline ::UnityEngine::Tilemaps::TileAnimationData UnityEngine::Tilemaps::TileBase::GetTileAnimationDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationDataNoRef", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileAnimationData, false>(this, ___internal_method, position, tilemap);
}
inline void UnityEngine::Tilemaps::TileBase::GetTileAnimationDataRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap,
                                                                     ByRef<::UnityEngine::Tilemaps::TileAnimationData> tileAnimationData, ByRef<bool> hasAnimation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationDataRef", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Tilemaps::TileAnimationData>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap, tileAnimationData, hasAnimation);
}
inline bool UnityEngine::Tilemaps::TileBase::StartUp(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "StartUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, tilemap, go);
}
inline void UnityEngine::Tilemaps::TileBase::StartUpRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go,
                                                        ByRef<bool> startUpInvokedByUser) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "StartUpRef", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap, go, startUpInvokedByUser);
}
inline ::UnityEngine::Tilemaps::TileBase* UnityEngine::Tilemaps::TileBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Tilemaps::TileBase*>());
}
inline void UnityEngine::Tilemaps::TileBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileBase::TileBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
