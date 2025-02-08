#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
// Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Delegate", ty: "::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair::OVRSpatialAnchor_MultiAnchorDelegatePair(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* Anchors,
    ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Delegate) noexcept {
  this->Anchors = Anchors;
  this->Delegate = Delegate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair::OVRSpatialAnchor_MultiAnchorDelegatePair() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_StorageLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpace_StorageLocation (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401e160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                               "get_StorageLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_StorageLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(::GlobalNamespace::OVRSpace_StorageLocation)>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401e168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(), "set_StorageLocation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_MaxAnchorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401e170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                               "get_MaxAnchorCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_MaxAnchorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(int32_t)>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401e178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(), "set_MaxAnchorCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401e180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                               "get_Timeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(double_t)>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401e188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(), "set_Timeout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_Uuids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Uuids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401e190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                               "get_Uuids", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_Uuids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Uuids)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x401e198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(), "set_Uuids", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.ToQueryOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpaceQuery_Options (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::ToQueryOptions)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x401e310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                               "ToQueryOptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_StorageLocation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                             "get_StorageLocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace_StorageLocation, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_StorageLocation(::GlobalNamespace::OVRSpace_StorageLocation value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(), "set_StorageLocation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_MaxAnchorCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                             "get_MaxAnchorCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_MaxAnchorCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(), "set_MaxAnchorCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                             "get_Timeout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Timeout(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(), "set_Timeout",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Uuids() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                             "get_Uuids", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Uuids(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(), "set_Uuids", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpaceQuery_Options GlobalNamespace::OVRSpatialAnchor_LoadOptions::ToQueryOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                                                             "ToQueryOptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpaceQuery_Options, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_uuids", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_LoadOptions::OVRSpatialAnchor_LoadOptions(::GlobalNamespace::OVRSpace_StorageLocation _StorageLocation_k__BackingField,
                                                                                        int32_t _MaxAnchorCount_k__BackingField, double_t _Timeout_k__BackingField,
                                                                                        ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* _uuids) noexcept {
  this->_StorageLocation_k__BackingField = _StorageLocation_k__BackingField;
  this->_MaxAnchorCount_k__BackingField = _MaxAnchorCount_k__BackingField;
  this->_Timeout_k__BackingField = _Timeout_k__BackingField;
  this->_uuids = _uuids;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_LoadOptions::OVRSpatialAnchor_LoadOptions() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x401e45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                               "get_Uuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Localized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localized)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x401e468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                               "get_Localized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Localizing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localizing)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x401e500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                               "get_Localizing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Pose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Pose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x401e5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                               "get_Pose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.Localize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(
    ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>*, double_t)>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::Localize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x401e6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), "Localize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.ValidateLocalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::ValidateLocalization)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x401e880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                               "ValidateLocalization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.LocalizeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(double_t)>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::LocalizeAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x401e798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), "LocalizeAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.AddStorableAndShareableComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::AddStorableAndShareableComponents)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x401ea14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), "AddStorableAndShareableComponents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.BindTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::GlobalNamespace::OVRSpatialAnchor*)>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::BindTo)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x401eac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), "BindTo", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x401ee18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
inline ::System::Guid GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Uuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                             "get_Uuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                             "get_Localized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localizing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                             "get_Localizing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Pose GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Pose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                             "get_Pose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::Localize(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>* onComplete, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), "Localize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete, timeout);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::ValidateLocalization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(),
                                                                             "ValidateLocalization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::LocalizeAsync(double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), "LocalizeAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method, timeout);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::AddStorableAndShareableComponents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), "AddStorableAndShareableComponents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::BindTo(::GlobalNamespace::OVRSpatialAnchor* spatialAnchor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), "BindTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spatialAnchor);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::_ctor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, space, uuid);
}
// Ctor Parameters [CppParam { name: "_space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::OVRSpatialAnchor_UnboundAnchor(::GlobalNamespace::OVRSpace _space, ::System::Guid _Uuid_k__BackingField) noexcept {
  this->_space = _space;
  this->_Uuid_k__BackingField = _Uuid_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::OVRSpatialAnchor_UnboundAnchor() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType::OVRSpatialAnchor_MultiAnchorActionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType::OVRSpatialAnchor_MultiAnchorActionType() {}
constexpr ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType::Save{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType::Share{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x401ee24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogWarning)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x401eeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "LogWarning",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x401ef3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "LogError",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x401efc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "LogRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogRequestResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::StringW, ::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogRequestResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x401efcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "LogRequestResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor_Development::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogWarning(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "LogWarning",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogRequest(uint64_t requestId, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "LogRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_Development*>::get(), "LogRequestResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, successMessage, failureMessage);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_Development::OVRSpatialAnchor_Development() {}
// Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions::OVRSpatialAnchor_SaveOptions(::GlobalNamespace::OVRSpace_StorageLocation Storage) noexcept {
  this->Storage = Storage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions::OVRSpatialAnchor_SaveOptions() {}
// Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions::OVRSpatialAnchor_EraseOptions(::GlobalNamespace::OVRSpace_StorageLocation Storage) noexcept {
  this->Storage = Storage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions::OVRSpatialAnchor_EraseOptions() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult::OVRSpatialAnchor_OperationResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult::OVRSpatialAnchor_OperationResult() {}
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceCloudStorageDisabled{ static_cast<int32_t>(0xfffff830) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceMappingInsufficient{ static_cast<int32_t>(0xfffff82f) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceLocalizationFailed{ static_cast<int32_t>(0xfffff82e) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceNetworkTimeout{ static_cast<int32_t>(0xfffff82d) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceNetworkRequestFailed{ static_cast<int32_t>(0xfffff82c) };
template <typename TResult, typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::setStaticF_Delegate(
    ::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>*, "Delegate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>::get>(
      std::forward<::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>*>(value));
}
template <typename TResult, typename TCapture>
inline ::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>*
GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::getStaticF_Delegate() {
  return ::cordl_internals::getStaticField<::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>*, "Delegate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>::get>();
}
template <typename TResult, typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::_ctor(::System::Action_2<TCapture, TResult>* callback, TCapture capture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TCapture, TResult>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCapture>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, capture);
}
template <typename TResult, typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::Invoke(TResult result, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture> invertedCapture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, result, invertedCapture);
}
template <typename TResult, typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::ContinueTaskWith(::GlobalNamespace::OVRTask_1<TResult> task, ::System::Action_2<TCapture, TResult>* onCompleted,
                                                                                                     TCapture state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>::get(),
                                               "ContinueTaskWith", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTask_1<TResult>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TCapture, TResult>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCapture>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, task, onCompleted, state);
}
// Ctor Parameters [CppParam { name: "_capture", ty: "TCapture", modifiers: "", def_value: Some("{}") }, CppParam { name: "_callback", ty: "::System::Action_2<TCapture,TResult>*", modifiers: "",
// def_value: Some("{}") }]
template <typename TResult, typename TCapture>
constexpr ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::OVRSpatialAnchor_InvertedCapture_2(TCapture _capture, ::System::Action_2<TCapture, TResult>* _callback) noexcept {
  this->_capture = _capture;
  this->_callback = _callback;
}
// Ctor Parameters []
template <typename TResult, typename TCapture> constexpr ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::OVRSpatialAnchor_InvertedCapture_2() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor___c::*)()>(&::GlobalNamespace::OVRSpatialAnchor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401f02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c._GetListToStoreTheShareRequest_b__41_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRSpatialAnchor___c::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor___c::_GetListToStoreTheShareRequest_b__41_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x401f034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor___c*>::get(), "<GetListToStoreTheShareRequest>b__41_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor___c::setStaticF___9(::GlobalNamespace::OVRSpatialAnchor___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRSpatialAnchor___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor___c*>::get>(
      std::forward<::GlobalNamespace::OVRSpatialAnchor___c*>(value));
}
inline ::GlobalNamespace::OVRSpatialAnchor___c* GlobalNamespace::OVRSpatialAnchor___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRSpatialAnchor___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor___c*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor___c::setStaticF___9__41_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*, "<>9__41_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor___c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* GlobalNamespace::OVRSpatialAnchor___c::getStaticF___9__41_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*, "<>9__41_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor___c*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSpatialAnchor___c::_GetListToStoreTheShareRequest_b__41_0(::GlobalNamespace::OVRSpaceUser x, ::GlobalNamespace::OVRSpaceUser y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor___c*>::get(), "<GetListToStoreTheShareRequest>b__41_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::OVRSpatialAnchor___c* GlobalNamespace::OVRSpatialAnchor___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSpatialAnchor___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor___c::OVRSpatialAnchor___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.add_OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::add_OnLocalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x40194f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "add_OnLocalize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.remove_OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x40195a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "remove_OnLocalize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Space
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpace (::GlobalNamespace::OVRSpatialAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor::get_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4019650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Space",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.set_Space
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace)>(
    &::GlobalNamespace::OVRSpatialAnchor::set_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4019658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "set_Space", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4019660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Uuid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.set_Uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::set_Uuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401966c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "set_Uuid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Created
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Created)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4019674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Created",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_PendingCreation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_PendingCreation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4019684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                               "get_PendingCreation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Localized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Localized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4019694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Localized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeFromExisting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x4019724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeFromExisting", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4019b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ToNativeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (*)(
    ::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(&::GlobalNamespace::OVRSpatialAnchor::ToNativeArray)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x4019c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ToNativeArray", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpatialAnchor_SaveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4019b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401a038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "SaveAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpatialAnchor_SaveOptions)>(&::GlobalNamespace::OVRSpatialAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x4019ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions,
                         ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x401a040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.CopyAnchorListIntoListFromPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x401a2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "CopyAnchorListIntoListFromPool", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x401a370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x401a410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x401a618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x401a6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x401a7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x401a8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser,
                                                              ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x401aa28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(
    &::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x401aae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x401acc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x401ad68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*,
                         ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x401adf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsyncInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsyncInternal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x401a4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsyncInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.GetListToStoreTheShareRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x401b424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "GetListToStoreTheShareRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.AreSortedUserListsEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x401b768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "AreSortedUserListsEqual", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Erase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x401ba08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Erase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Erase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpatialAnchor_EraseOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x401ba18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Erase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401bb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "EraseAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpatialAnchor_EraseOptions)>(&::GlobalNamespace::OVRSpatialAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x401bac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "EraseAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ThrowIfBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::ThrowIfBound)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4019924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ThrowIfBound", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x4019a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeUnchecked", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x401bc48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x401be84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::LateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x401be94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveBatchAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x401bee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "SaveBatchAnchors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareBatchAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x401c0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareBatchAnchors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::OnDestroy)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x401c338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.GetTrackingSpacePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (::GlobalNamespace::OVRSpatialAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x401c3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                               "GetTrackingSpacePose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.CreateSpatialAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x401bc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                               "CreateSpatialAnchor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.TryGetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ::ByRef<::GlobalNamespace::OVRPose>)>(
    &::GlobalNamespace::OVRSpatialAnchor::TryGetPose)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x401c4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "TryGetPose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.UpdateTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::UpdateTransform)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x401bba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "UpdateTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeOnLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x401c694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeOnLoad",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InvokeMultiAnchorDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType)>(&::GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x401ccd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InvokeMultiAnchorDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpatialAnchorCreateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x401d26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpatialAnchorCreateComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceSaveComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x401d478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceSaveComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceEraseComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x401d47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceEraseComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::GlobalNamespace::OVRSpatialAnchor_LoadOptions, ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x401d480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LoadUnboundAnchors", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchorsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>> (*)(
        ::GlobalNamespace::OVRSpatialAnchor_LoadOptions)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x401d584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LoadUnboundAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceQueryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x401d6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.PopulateUnbound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Guid, uint64_t)>(&::GlobalNamespace::OVRSpatialAnchor::PopulateUnbound)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x401dc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "PopulateUnbound", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType,
                                                                                           bool)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x401dfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceListSaveComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x401e084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceListSaveComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnShareSpacesComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x401e0ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnShareSpacesComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x401e154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__startCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startCalled;
}
constexpr bool const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__startCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startCalled;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__startCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startCalled = value;
}
constexpr uint64_t& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__requestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr uint64_t const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__requestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__requestId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestId = value;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__defaultSaveOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSaveOptions;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__defaultSaveOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSaveOptions;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__defaultSaveOptions(::GlobalNamespace::OVRSpatialAnchor_SaveOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultSaveOptions = value;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__defaultEraseOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEraseOptions;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__defaultEraseOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEraseOptions;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__defaultEraseOptions(::GlobalNamespace::OVRSpatialAnchor_EraseOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultEraseOptions = value;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get_OnLocalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnLocalize;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get_OnLocalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnLocalize;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLocalize)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSpace& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__Space_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Space_k__BackingField;
}
constexpr ::GlobalNamespace::OVRSpace const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__Space_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Space_k__BackingField;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__Space_k__BackingField(::GlobalNamespace::OVRSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Space_k__BackingField = value;
}
constexpr ::System::Guid& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__Uuid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Uuid_k__BackingField;
}
constexpr ::System::Guid const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__Uuid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Uuid_k__BackingField;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__Uuid_k__BackingField(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Uuid_k__BackingField = value;
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "SpatialAnchors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GlobalNamespace::OVRSpatialAnchor::getStaticF_SpatialAnchors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "SpatialAnchors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "CreationRequests",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GlobalNamespace::OVRSpatialAnchor::getStaticF_CreationRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "CreationRequests",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SaveRequests(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*,
      "SaveRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_SaveRequests() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*,
      "SaveRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_AsyncRequestTaskIds(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>*, "AsyncRequestTaskIds",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* GlobalNamespace::OVRSpatialAnchor::getStaticF_AsyncRequestTaskIds() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>*, "AsyncRequestTaskIds",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_ShareRequests(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                                  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*,
                                    "ShareRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::List_1<
          ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*>(
          value));
}
inline ::System::Collections::Generic::List_1<
    ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_ShareRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                                         ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*,
                                           "ShareRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_MultiAnchorCompletionDelegates(
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*, "MultiAnchorCompletionDelegates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_MultiAnchorCompletionDelegates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*, "MultiAnchorCompletionDelegates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_UnboundAnchorBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, "UnboundAnchorBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* GlobalNamespace::OVRSpatialAnchor::getStaticF_UnboundAnchorBuffer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, "UnboundAnchorBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void
GlobalNamespace::OVRSpatialAnchor::setStaticF_ComponentTypeBuffer(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>, "ComponentTypeBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*> GlobalNamespace::OVRSpatialAnchor::getStaticF_ComponentTypeBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType, ::Array<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>, "ComponentTypeBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::add_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "add_OnLocalize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "remove_OnLocalize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpace GlobalNamespace::OVRSpatialAnchor::get_Space() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Space",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::set_Space(::GlobalNamespace::OVRSpace value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "set_Space", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Guid GlobalNamespace::OVRSpatialAnchor::get_Uuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Uuid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::set_Uuid(::System::Guid value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "set_Uuid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_Created() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Created",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_PendingCreation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_PendingCreation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_Localized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Localized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeFromExisting", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete);
}
inline ::Unity::Collections::NativeArray_1<uint64_t>
GlobalNamespace::OVRSpatialAnchor::ToNativeArray(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ToNativeArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>, false>(nullptr, ___internal_method, anchors);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveOptions, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "SaveAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::SaveAsync(::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method, saveOptions);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(
    ::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions,
    ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, saveOptions, onComplete);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchorList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "CopyAnchorListIntoListFromPool", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, false>(nullptr, ___internal_method, anchorList);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser user) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>, false>(this, ___internal_method, user);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                     ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user1, user2, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser user1,
                                                                                                                                       ::GlobalNamespace::OVRSpaceUser user2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>, false>(this, ___internal_method, user1, user2);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                                                     ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user1, user2, user3, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>, false>(this, ___internal_method, user1, user2, user3);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                                                     ::GlobalNamespace::OVRSpaceUser user4, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user1, user2, user3, user4, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser user1,
                                                                                                                                       ::GlobalNamespace::OVRSpaceUser user2,
                                                                                                                                       ::GlobalNamespace::OVRSpaceUser user3,
                                                                                                                                       ::GlobalNamespace::OVRSpaceUser user4) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>, false>(this, ___internal_method, user1, user2, user3, user4);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users,
                                                     ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, users, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>, false>(this, ___internal_method, users);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(
    ::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users,
    ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, users, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
GlobalNamespace::OVRSpatialAnchor::ShareAsyncInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareAsyncInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>, false>(this, ___internal_method, users);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "GetListToStoreTheShareRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, false>(this, ___internal_method, users);
}
inline bool GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList1,
                                                                       ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "AreSortedUserListsEqual", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sortedList1, sortedList2);
}
inline void GlobalNamespace::OVRSpatialAnchor::Erase(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Erase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Erase(::GlobalNamespace::OVRSpatialAnchor_EraseOptions eraseOptions,
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Erase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eraseOptions, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::EraseAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "EraseAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::EraseAsync(::GlobalNamespace::OVRSpatialAnchor_EraseOptions eraseOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "EraseAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method, eraseOptions);
}
inline void GlobalNamespace::OVRSpatialAnchor::ThrowIfBound(::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ThrowIfBound", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeUnchecked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "SaveBatchAnchors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareBatchAnchors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                             "GetTrackingSpacePose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "CreateSpatialAnchor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::TryGetPose(::GlobalNamespace::OVRSpace space, ::ByRef<::GlobalNamespace::OVRPose> pose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "TryGetPose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRPose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, space, pose);
}
inline void GlobalNamespace::OVRSpatialAnchor::UpdateTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "UpdateTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool GlobalNamespace::OVRSpatialAnchor::TryExtractValue(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict, TKey key, ::ByRef<TValue> value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "TryExtractValue",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dict, key, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeOnLoad",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result,
                                                                         ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType actionType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InvokeMultiAnchorDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, actionType);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpatialAnchorCreateComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, success, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpace space, bool result, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceSaveComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, space, result, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete(uint64_t requestId, bool result, ::System::Guid uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceEraseComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, uuid, location);
}
inline bool GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors(
    ::GlobalNamespace::OVRSpatialAnchor_LoadOptions options,
    ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LoadUnboundAnchors", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                          ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, options, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>
GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync(::GlobalNamespace::OVRSpatialAnchor_LoadOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LoadUnboundAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, ::Array<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>>,
                                             false>(nullptr, ___internal_method, options);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete(uint64_t requestId, bool queryResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, queryResult);
}
inline void GlobalNamespace::OVRSpatialAnchor::PopulateUnbound(::System::Guid uuid, uint64_t space) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "PopulateUnbound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uuid, space);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                                                 ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, space, uuid, componentType, enabled);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceListSaveComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnShareSpacesComplete", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSpatialAnchor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSpatialAnchor* GlobalNamespace::OVRSpatialAnchor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSpatialAnchor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor::OVRSpatialAnchor() {}
