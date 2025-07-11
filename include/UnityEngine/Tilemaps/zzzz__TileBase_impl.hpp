#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TileBase.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__ITilemap_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileAnimationData_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.RefreshTile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*)>(
    &::UnityEngine::Tilemaps::TileBase::RefreshTile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4956124;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::ByRef<::UnityEngine::Tilemaps::TileData>)>(&::UnityEngine::Tilemaps::TileBase::GetTileData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x495613c;

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
  constexpr static std::size_t addrs = 0x4956140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileDataNoRef", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileAnimationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::ByRef<::UnityEngine::Tilemaps::TileAnimationData>)>(&::UnityEngine::Tilemaps::TileBase::GetTileAnimationData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495618c;

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
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4956194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationDataNoRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.GetTileAnimationDataRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::ByRef<::UnityEngine::Tilemaps::TileAnimationData>, ::ByRef<bool>)>(&::UnityEngine::Tilemaps::TileBase::GetTileAnimationDataRef)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x49561d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationDataRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Tilemaps::TileAnimationData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.StartUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Tilemaps::TileBase::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*)>(&::UnityEngine::Tilemaps::TileBase::StartUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4956200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase.StartUpRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)(
    ::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*, ::ByRef<bool>)>(&::UnityEngine::Tilemaps::TileBase::StartUpRef)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4956208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "StartUpRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TileBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TileBase::*)()>(&::UnityEngine::Tilemaps::TileBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495611c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Tilemaps::TileBase::RefreshTile(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap);
}
inline void UnityEngine::Tilemaps::TileBase::GetTileData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::ByRef<::UnityEngine::Tilemaps::TileData> tileData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap, tileData);
}
inline ::UnityEngine::Tilemaps::TileData UnityEngine::Tilemaps::TileBase::GetTileDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileDataNoRef", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileData, false>(this, ___internal_method, position, tilemap);
}
inline bool UnityEngine::Tilemaps::TileBase::GetTileAnimationData(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap,
                                                                  ::ByRef<::UnityEngine::Tilemaps::TileAnimationData> tileAnimationData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, tilemap, tileAnimationData);
}
inline ::UnityEngine::Tilemaps::TileAnimationData UnityEngine::Tilemaps::TileBase::GetTileAnimationDataNoRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationDataNoRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileAnimationData, false>(this, ___internal_method, position, tilemap);
}
inline void UnityEngine::Tilemaps::TileBase::GetTileAnimationDataRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap,
                                                                     ::ByRef<::UnityEngine::Tilemaps::TileAnimationData> tileAnimationData, ::ByRef<bool> hasAnimation) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "GetTileAnimationDataRef", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Tilemaps::TileAnimationData>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap, tileAnimationData, hasAnimation);
}
inline bool UnityEngine::Tilemaps::TileBase::StartUp(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, tilemap, go);
}
inline void UnityEngine::Tilemaps::TileBase::StartUpRef(::UnityEngine::Vector3Int position, ::UnityEngine::Tilemaps::ITilemap* tilemap, ::UnityEngine::GameObject* go,
                                                        ::ByRef<bool> startUpInvokedByUser) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), "StartUpRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap, go, startUpInvokedByUser);
}
inline void UnityEngine::Tilemaps::TileBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TileBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Tilemaps::TileBase* UnityEngine::Tilemaps::TileBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Tilemaps::TileBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TileBase::TileBase() {}
