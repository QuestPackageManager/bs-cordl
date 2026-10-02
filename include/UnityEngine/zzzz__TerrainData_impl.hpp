#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include "UnityEngine/zzzz__TreePrototype_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TerrainData_BoundaryValueType::TerrainData_BoundaryValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainData_BoundaryValueType::TerrainData_BoundaryValueType() {}
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MaxHeightmapRes{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MinDetailResPerPatch{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MaxDetailResPerPatch{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MaxDetailPatchCount{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MaxCoveragePerRes{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MinAlphamapRes{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MaxAlphamapRes{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MinBaseMapRes{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::TerrainData_BoundaryValueType UnityEngine::TerrainData_BoundaryValueType::MaxBaseMapRes{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::TerrainData.GetBoundaryValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::TerrainData_BoundaryValueType)>(&::UnityEngine::TerrainData::GetBoundaryValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7018898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "GetBoundaryValue", {}, { ::i2c::type_of<::UnityEngine::TerrainData_BoundaryValueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_heightmapTexture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x70188d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_heightmapTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_heightmapResolution)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7018a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_heightmapResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_internalHeightmapResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_internalHeightmapResolution)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7018a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_internalHeightmapResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_heightmapScale)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x7018b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_heightmapScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_holesResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_holesResolution)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x7018c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_holesResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_size)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x7018c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_bounds)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7018d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_bounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetHeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::GetHeights)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x7018eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                                             { "GetHeights", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetHeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetHeights)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7018f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                                { "Internal_GetHeights", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetHoles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::GetHoles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x70190c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                                             { "GetHoles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetHoles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetHoles)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7019194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                                { "Internal_GetHoles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_treeInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TreeInstance> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_treeInstances)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x70192d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_treeInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetTreeInstances
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TreeInstance> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::Internal_GetTreeInstances)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x70192dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "Internal_GetTreeInstances", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_treePrototypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TreePrototype*> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_treePrototypes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x70194a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_treePrototypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamapResolutionInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::GetAlphamapResolutionInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x701958c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "GetAlphamapResolutionInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_users
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Terrain>> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_users)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x70185cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_users", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapTexture_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_heightmapTexture_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7018a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_heightmapTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_internalHeightmapResolution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_internalHeightmapResolution_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7018b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_internalHeightmapResolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_heightmapScale_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::TerrainData::get_heightmapScale_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7018c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                                             { "get_heightmapScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_size_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::TerrainData::get_size_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7018d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_size_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_bounds_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::TerrainData::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7018e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetHeights_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetHeights_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x7019058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "Internal_GetHeights_Injected",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetHoles_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::TerrainData::Internal_GetHoles_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x701926c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::TerrainData*>(),
            { "Internal_GetHoles_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.Internal_GetTreeInstances_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(
    &::UnityEngine::TerrainData::Internal_GetTreeInstances_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x7019464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                            { "Internal_GetTreeInstances_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_treePrototypes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::TreePrototype*> (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_treePrototypes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7019550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_treePrototypes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamapResolutionInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::GetAlphamapResolutionInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7019634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "GetAlphamapResolutionInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_users_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Terrain>> (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::get_users_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x7019670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_users_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainData::setStaticF_k_MaximumResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumResolution", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumDetailResolutionPerPatch(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MinimumDetailResolutionPerPatch", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumDetailResolutionPerPatch() {
  return ::cordl_internals::getStaticField<int32_t, "k_MinimumDetailResolutionPerPatch", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumDetailResolutionPerPatch(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumDetailResolutionPerPatch", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumDetailResolutionPerPatch() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailResolutionPerPatch", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumDetailPatchCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumDetailPatchCount", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumDetailPatchCount() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailPatchCount", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumAlphamapResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MinimumAlphamapResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumAlphamapResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MinimumAlphamapResolution", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumAlphamapResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumAlphamapResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumAlphamapResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumAlphamapResolution", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumBaseMapResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MinimumBaseMapResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumBaseMapResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MinimumBaseMapResolution", ::UnityEngine::TerrainData*>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumBaseMapResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumBaseMapResolution", ::UnityEngine::TerrainData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumBaseMapResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumBaseMapResolution", ::UnityEngine::TerrainData*>();
}
inline int32_t UnityEngine::TerrainData::GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "GetBoundaryValue", {}, { ::i2c::type_of<::UnityEngine::TerrainData_BoundaryValueType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::TerrainData::get_heightmapTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_heightmapTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_heightmapResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_heightmapResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_internalHeightmapResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_internalHeightmapResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::TerrainData::get_heightmapScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_heightmapScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t UnityEngine::TerrainData::get_holesResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_holesResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::TerrainData::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::TerrainData::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_bounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::TerrainData::GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                                           { "GetHeights", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                              { "Internal_GetHeights", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::GetHoles(int32_t xBase, int32_t yBase, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                                           { "GetHoles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetHoles(int32_t xBase, int32_t yBase, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                              { "Internal_GetHoles", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xBase, yBase, width, height);
}
inline ::ArrayW<::UnityEngine::TreeInstance> UnityEngine::TerrainData::get_treeInstances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_treeInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TreeInstance>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TreeInstance> UnityEngine::TerrainData::Internal_GetTreeInstances() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "Internal_GetTreeInstances", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TreeInstance>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::TreePrototype*> UnityEngine::TerrainData::get_treePrototypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_treePrototypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TreePrototype*>>(this, ___internal_method);
}
inline float_t UnityEngine::TerrainData::GetAlphamapResolutionInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "GetAlphamapResolutionInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> UnityEngine::TerrainData::get_users() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_users", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Terrain>>>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::TerrainData::get_heightmapTexture_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_heightmapTexture_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::TerrainData::get_internalHeightmapResolution_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_internalHeightmapResolution_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TerrainData::get_heightmapScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                                                           { "get_heightmapScale_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::TerrainData::get_size_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_size_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::TerrainData::get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_bounds_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetHeights_Injected(::System::IntPtr _unity_self, int32_t xBase, int32_t yBase, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TerrainData*>(),
          { "Internal_GetHeights_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, _unity_self, xBase, yBase, width, height);
}
inline ::System::Object* UnityEngine::TerrainData::Internal_GetHoles_Injected(::System::IntPtr _unity_self, int32_t xBase, int32_t yBase, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::TerrainData*>(),
          { "Internal_GetHoles_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, _unity_self, xBase, yBase, width, height);
}
inline void UnityEngine::TerrainData::Internal_GetTreeInstances_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(),
                          { "Internal_GetTreeInstances_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::ArrayW<::UnityEngine::TreePrototype*> UnityEngine::TerrainData::get_treePrototypes_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_treePrototypes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::TreePrototype*>>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::TerrainData::GetAlphamapResolutionInternal_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "GetAlphamapResolutionInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>> UnityEngine::TerrainData::get_users_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TerrainData*>(), { "get_users_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Terrain>>>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainData::TerrainData() {}
