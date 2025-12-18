#pragma once
// IWYU pragma private; include "UnityEngine/TerrainData.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::TerrainData_BoundaryValueType)>(&::UnityEngine::TerrainData::GetBoundaryValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69ee88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "GetBoundaryValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData_BoundaryValueType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_size)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69ee8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "get_size",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamapResolutionInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::GetAlphamapResolutionInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69ee9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(),
                                                                               "GetAlphamapResolutionInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_users
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> (::UnityEngine::TerrainData::*)()>(&::UnityEngine::TerrainData::get_users)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69ee5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "get_users",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_size_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::TerrainData::get_size_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x69ee990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "get_size_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.GetAlphamapResolutionInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TerrainData::GetAlphamapResolutionInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69eea7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "GetAlphamapResolutionInternal_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainData.get_users_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> (*)(::System::IntPtr)>(
    &::UnityEngine::TerrainData::get_users_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x69eeab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "get_users_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainData::setStaticF_k_MaximumResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumDetailResolutionPerPatch(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MinimumDetailResolutionPerPatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumDetailResolutionPerPatch() {
  return ::cordl_internals::getStaticField<int32_t, "k_MinimumDetailResolutionPerPatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumDetailResolutionPerPatch(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumDetailResolutionPerPatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumDetailResolutionPerPatch() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailResolutionPerPatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumDetailPatchCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumDetailPatchCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumDetailPatchCount() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailPatchCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumAlphamapResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MinimumAlphamapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumAlphamapResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MinimumAlphamapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumAlphamapResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumAlphamapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumAlphamapResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumAlphamapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MinimumBaseMapResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MinimumBaseMapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MinimumBaseMapResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MinimumBaseMapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>();
}
inline void UnityEngine::TerrainData::setStaticF_k_MaximumBaseMapResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_MaximumBaseMapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TerrainData::getStaticF_k_MaximumBaseMapResolution() {
  return ::cordl_internals::getStaticField<int32_t, "k_MaximumBaseMapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get>();
}
inline int32_t UnityEngine::TerrainData::GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "GetBoundaryValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData_BoundaryValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, type);
}
inline ::UnityEngine::Vector3 UnityEngine::TerrainData::get_size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "get_size",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t UnityEngine::TerrainData::GetAlphamapResolutionInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(),
                                                                             "GetAlphamapResolutionInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> UnityEngine::TerrainData::get_users() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "get_users",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*>, false>(this, ___internal_method);
}
inline void UnityEngine::TerrainData::get_size_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "get_size_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline float_t UnityEngine::TerrainData::GetAlphamapResolutionInternal_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "GetAlphamapResolutionInternal_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*> UnityEngine::TerrainData::get_users_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainData*>::get(), "get_users_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Terrain>, ::Array<::UnityW<::UnityEngine::Terrain>>*>, false>(nullptr, ___internal_method, _unity_self);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainData::TerrainData() {}
