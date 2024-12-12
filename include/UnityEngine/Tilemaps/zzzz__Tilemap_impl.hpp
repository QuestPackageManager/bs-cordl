#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_impl.hpp"
#include "UnityEngine/zzzz__GridLayout_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Grid_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Tile", ty:
// "::UnityW<::UnityEngine::Tilemaps::TileBase>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TileData", ty: "::UnityEngine::Tilemaps::TileData", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::Tilemaps::Tilemap_SyncTile::Tilemap_SyncTile(::UnityEngine::Vector3Int m_Position, ::UnityW<::UnityEngine::Tilemaps::TileBase> m_Tile,
                                                                      ::UnityEngine::Tilemaps::TileData m_TileData) noexcept {
  this->m_Position = m_Position;
  this->m_Tile = m_Tile;
  this->m_TileData = m_TileData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tilemap_SyncTile::Tilemap_SyncTile() {}
// Ctor Parameters [CppParam { name: "hasSyncTileCallback", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasPositionsChangedCallback", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "isBufferSyncTile", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings::Tilemap_SyncTileCallbackSettings(bool hasSyncTileCallback, bool hasPositionsChangedCallback, bool isBufferSyncTile) noexcept {
  this->hasSyncTileCallback = hasSyncTileCallback;
  this->hasPositionsChangedCallback = hasPositionsChangedCallback;
  this->isBufferSyncTile = isBufferSyncTile;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings::Tilemap_SyncTileCallbackSettings() {}
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_bufferSyncTile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Tilemaps::Tilemap::*)()>(&::UnityEngine::Tilemaps::Tilemap::get_bufferSyncTile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4953ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_bufferSyncTile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HasSyncTileCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Tilemaps::Tilemap::HasSyncTileCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4953aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "HasSyncTileCallback",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HasPositionsChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Tilemaps::Tilemap::HasPositionsChangedCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4953b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(),
                                                                               "HasPositionsChangedCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HandleSyncTileCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(
    ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>)>(&::UnityEngine::Tilemaps::Tilemap::HandleSyncTileCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4953b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "HandleSyncTileCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HandlePositionsChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(int32_t, ::System::IntPtr)>(
    &::UnityEngine::Tilemaps::Tilemap::HandlePositionsChangedCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4953d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "HandlePositionsChangedCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.SendTilemapTileChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(
    ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>)>(&::UnityEngine::Tilemaps::Tilemap::SendTilemapTileChangedCallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x4953c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "SendTilemapTileChangedCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.SendTilemapPositionsChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>)>(
    &::UnityEngine::Tilemaps::Tilemap::SendTilemapPositionsChangedCallback)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4953dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "SendTilemapPositionsChangedCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_layoutGrid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Grid> (::UnityEngine::Tilemaps::Tilemap::*)()>(
    &::UnityEngine::Tilemaps::Tilemap::get_layoutGrid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4953eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_layoutGrid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_cellBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BoundsInt (::UnityEngine::Tilemaps::Tilemap::*)()>(
    &::UnityEngine::Tilemaps::Tilemap::get_cellBounds)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4953f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_cellBounds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_origin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Tilemaps::Tilemap::*)()>(&::UnityEngine::Tilemaps::Tilemap::get_origin)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4953f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_origin",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3Int (::UnityEngine::Tilemaps::Tilemap::*)()>(&::UnityEngine::Tilemaps::Tilemap::get_size)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4953fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_size",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_tileAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Tilemaps::Tilemap::*)()>(&::UnityEngine::Tilemaps::Tilemap::get_tileAnchor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x49540b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_tileAnchor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_orientationMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Tilemaps::Tilemap::*)()>(
    &::UnityEngine::Tilemaps::Tilemap::get_orientationMatrix)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4954150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(),
                                                                               "get_orientationMatrix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetTileAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Tilemaps::Tilemap::*)(::UnityEngine::Vector3Int)>(
    &::UnityEngine::Tilemaps::Tilemap::GetTileAsset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4954200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTileAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetTileAssetsBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> (
    ::UnityEngine::Tilemaps::Tilemap::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(&::UnityEngine::Tilemaps::Tilemap::GetTileAssetsBlock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4954298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTileAssetsBlock", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetTilesBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Tilemaps::TileBase>, ::Array<::UnityW<::UnityEngine::Tilemaps::TileBase>>*> (
    ::UnityEngine::Tilemaps::Tilemap::*)(::UnityEngine::BoundsInt)>(&::UnityEngine::Tilemaps::Tilemap::GetTilesBlock)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x495434c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTilesBlock", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::BoundsInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.HasTile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Tilemaps::Tilemap::*)(::UnityEngine::Vector3Int)>(&::UnityEngine::Tilemaps::Tilemap::HasTile)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x49544d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "HasTile", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.RefreshTile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::UnityEngine::Vector3Int)>(
    &::UnityEngine::Tilemaps::Tilemap::RefreshTile)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x49530d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "RefreshTile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.RefreshTilesNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::cordl_internals::Ptr<void>, int32_t)>(
    &::UnityEngine::Tilemaps::Tilemap::RefreshTilesNative)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x495349c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "RefreshTilesNative", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetUsedTilesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Tilemaps::Tilemap::*)()>(&::UnityEngine::Tilemaps::Tilemap::GetUsedTilesCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4954598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetUsedTilesCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetUsedTilesNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Tilemaps::Tilemap::*)(
    ::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*>)>(&::UnityEngine::Tilemaps::Tilemap::GetUsedTilesNonAlloc)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x49545d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetUsedTilesNonAlloc", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.Internal_GetUsedTilesNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Tilemaps::Tilemap::*)(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>)>(
    &::UnityEngine::Tilemaps::Tilemap::Internal_GetUsedTilesNonAlloc)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4954618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "Internal_GetUsedTilesNonAlloc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetSyncTileCallbackSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ByRef<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings>)>(
    &::UnityEngine::Tilemaps::Tilemap::GetSyncTileCallbackSettings)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x495465c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetSyncTileCallbackSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.DoSyncTileCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(
    ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>)>(&::UnityEngine::Tilemaps::Tilemap::DoSyncTileCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x49546fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "DoSyncTileCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.DoPositionsChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(int32_t, ::System::IntPtr)>(
    &::UnityEngine::Tilemaps::Tilemap::DoPositionsChangedCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4954700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "DoPositionsChangedCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_origin_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ByRef<::UnityEngine::Vector3Int>)>(
    &::UnityEngine::Tilemaps::Tilemap::get_origin_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4954028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_origin_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_size_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ByRef<::UnityEngine::Vector3Int>)>(
    &::UnityEngine::Tilemaps::Tilemap::get_size_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x495406c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_size_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_tileAnchor_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ByRef<::UnityEngine::Vector3>)>(
    &::UnityEngine::Tilemaps::Tilemap::get_tileAnchor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x495410c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_tileAnchor_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.get_orientationMatrix_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ByRef<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::Tilemaps::Tilemap::get_orientationMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x49541bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_orientationMatrix_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetTileAsset_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Tilemaps::Tilemap::*)(::ByRef<::UnityEngine::Vector3Int>)>(
    &::UnityEngine::Tilemaps::Tilemap::GetTileAsset_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4954254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTileAsset_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.GetTileAssetsBlock_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> (
    ::UnityEngine::Tilemaps::Tilemap::*)(::ByRef<::UnityEngine::Vector3Int>, ::ByRef<::UnityEngine::Vector3Int>)>(&::UnityEngine::Tilemaps::Tilemap::GetTileAssetsBlock_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x49542f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTileAssetsBlock_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tilemap.RefreshTile_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tilemap::*)(::ByRef<::UnityEngine::Vector3Int>)>(
    &::UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4954554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "RefreshTile_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Tilemaps::Tilemap::__cordl_internal_get_m_BufferSyncTile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferSyncTile;
}
constexpr bool const& UnityEngine::Tilemaps::Tilemap::__cordl_internal_get_m_BufferSyncTile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferSyncTile;
}
constexpr void UnityEngine::Tilemaps::Tilemap::__cordl_internal_set_m_BufferSyncTile(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BufferSyncTile = value;
}
inline void UnityEngine::Tilemaps::Tilemap::setStaticF_tilemapTileChanged(
    ::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>*,
                                    "tilemapTileChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>*
UnityEngine::Tilemaps::Tilemap::getStaticF_tilemapTileChanged() {
  return ::cordl_internals::getStaticField<
      ::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>*, "tilemapTileChanged",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get>();
}
inline void
UnityEngine::Tilemaps::Tilemap::setStaticF_tilemapPositionsChanged(::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*, "tilemapPositionsChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*>(value));
}
inline ::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* UnityEngine::Tilemaps::Tilemap::getStaticF_tilemapPositionsChanged() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Tilemaps::Tilemap*, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*, "tilemapPositionsChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get>();
}
inline bool UnityEngine::Tilemaps::Tilemap::get_bufferSyncTile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_bufferSyncTile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Tilemaps::Tilemap::HasSyncTileCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "HasSyncTileCallback",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Tilemaps::Tilemap::HasPositionsChangedCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(),
                                                                             "HasPositionsChangedCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tilemap::HandleSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*> syncTiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "HandleSyncTileCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, syncTiles);
}
inline void UnityEngine::Tilemaps::Tilemap::HandlePositionsChangedCallback(int32_t count, ::System::IntPtr positionsIntPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "HandlePositionsChangedCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count, positionsIntPtr);
}
inline void UnityEngine::Tilemaps::Tilemap::SendTilemapTileChangedCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*> syncTiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "SendTilemapTileChangedCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, syncTiles);
}
inline void UnityEngine::Tilemaps::Tilemap::SendTilemapPositionsChangedCallback(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> positions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "SendTilemapPositionsChangedCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions);
}
inline ::UnityW<::UnityEngine::Grid> UnityEngine::Tilemaps::Tilemap::get_layoutGrid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_layoutGrid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Grid>, false>(this, ___internal_method);
}
inline ::UnityEngine::BoundsInt UnityEngine::Tilemaps::Tilemap::get_cellBounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_cellBounds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundsInt, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int UnityEngine::Tilemaps::Tilemap::get_origin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_origin",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3Int UnityEngine::Tilemaps::Tilemap::get_size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_size",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Tilemaps::Tilemap::get_tileAnchor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_tileAnchor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Tilemaps::Tilemap::get_orientationMatrix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_orientationMatrix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Tilemaps::Tilemap::GetTileAsset(::UnityEngine::Vector3Int position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTileAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method, position);
}
template <typename T> inline T UnityEngine::Tilemaps::Tilemap::GetTile(::UnityEngine::Vector3Int position) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTile",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, position);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> UnityEngine::Tilemaps::Tilemap::GetTileAssetsBlock(::UnityEngine::Vector3Int position,
                                                                                                                                               ::UnityEngine::Vector3Int blockDimensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTileAssetsBlock", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, false>(this, ___internal_method, position, blockDimensions);
}
inline ::ArrayW<::UnityW<::UnityEngine::Tilemaps::TileBase>, ::Array<::UnityW<::UnityEngine::Tilemaps::TileBase>>*> UnityEngine::Tilemaps::Tilemap::GetTilesBlock(::UnityEngine::BoundsInt bounds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTilesBlock", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::BoundsInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Tilemaps::TileBase>, ::Array<::UnityW<::UnityEngine::Tilemaps::TileBase>>*>, false>(this, ___internal_method, bounds);
}
inline bool UnityEngine::Tilemaps::Tilemap::HasTile(::UnityEngine::Vector3Int position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "HasTile", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position);
}
inline void UnityEngine::Tilemaps::Tilemap::RefreshTile(::UnityEngine::Vector3Int position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "RefreshTile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void UnityEngine::Tilemaps::Tilemap::RefreshTilesNative(::cordl_internals::Ptr<void> positions, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "RefreshTilesNative", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, count);
}
inline int32_t UnityEngine::Tilemaps::Tilemap::GetUsedTilesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetUsedTilesCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Tilemaps::Tilemap::GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*> usedTiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetUsedTilesNonAlloc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Tilemaps::TileBase*, ::Array<::UnityEngine::Tilemaps::TileBase*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, usedTiles);
}
inline int32_t UnityEngine::Tilemaps::Tilemap::Internal_GetUsedTilesNonAlloc(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> usedTiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "Internal_GetUsedTilesNonAlloc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, usedTiles);
}
inline void UnityEngine::Tilemaps::Tilemap::GetSyncTileCallbackSettings(::ByRef<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings> settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetSyncTileCallbackSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Tilemaps::Tilemap_SyncTileCallbackSettings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void UnityEngine::Tilemaps::Tilemap::DoSyncTileCallback(::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*> syncTiles) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "DoSyncTileCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Tilemaps::Tilemap_SyncTile, ::Array<::UnityEngine::Tilemaps::Tilemap_SyncTile>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, syncTiles);
}
inline void UnityEngine::Tilemaps::Tilemap::DoPositionsChangedCallback(int32_t count, ::System::IntPtr positionsIntPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "DoPositionsChangedCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, count, positionsIntPtr);
}
inline void UnityEngine::Tilemaps::Tilemap::get_origin_Injected(::ByRef<::UnityEngine::Vector3Int> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_origin_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Tilemaps::Tilemap::get_size_Injected(::ByRef<::UnityEngine::Vector3Int> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_size_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Tilemaps::Tilemap::get_tileAnchor_Injected(::ByRef<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_tileAnchor_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline void UnityEngine::Tilemaps::Tilemap::get_orientationMatrix_Injected(::ByRef<::UnityEngine::Matrix4x4> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "get_orientationMatrix_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Tilemaps::Tilemap::GetTileAsset_Injected(::ByRef<::UnityEngine::Vector3Int> position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTileAsset_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method, position);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>
UnityEngine::Tilemaps::Tilemap::GetTileAssetsBlock_Injected(::ByRef<::UnityEngine::Vector3Int> position, ::ByRef<::UnityEngine::Vector3Int> blockDimensions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "GetTileAssetsBlock_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, false>(this, ___internal_method, position, blockDimensions);
}
inline void UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected(::ByRef<::UnityEngine::Vector3Int> position) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tilemap*>::get(), "RefreshTile_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3Int>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tilemap::Tilemap() {}
