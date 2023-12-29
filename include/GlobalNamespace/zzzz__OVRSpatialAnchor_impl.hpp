#pragma once
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
// Ctor Parameters [CppParam { name: "Anchor", ty: "::GlobalNamespace::OVRSpatialAnchor*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Delegate", ty:
// "::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*,bool>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair::__OVRSpatialAnchor__SingleAnchorDelegatePair(
    ::GlobalNamespace::OVRSpatialAnchor* Anchor, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* Delegate) noexcept {
  this->Anchor = Anchor;
  this->Delegate = Delegate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair::__OVRSpatialAnchor__SingleAnchorDelegatePair() {}
// Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "Delegate", ty: "::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair::__OVRSpatialAnchor__MultiAnchorDelegatePair(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>* Anchors,
    ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* Delegate) noexcept {
  this->Anchors = Anchors;
  this->Delegate = Delegate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair::__OVRSpatialAnchor__MultiAnchorDelegatePair() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.get_StorageLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSpace__StorageLocation (::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)()>(
    &::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::get_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26275ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                               "get_StorageLocation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.set_StorageLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)(::GlobalNamespace::__OVRSpace__StorageLocation)>(
    &::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::set_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26275b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(), "set_StorageLocation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpace__StorageLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.get_MaxAnchorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)()>(
    &::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::get_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26275bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                               "get_MaxAnchorCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.set_MaxAnchorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)(int32_t)>(
    &::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::set_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26275c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(), "set_MaxAnchorCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)()>(
    &::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26275cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                               "get_Timeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)(double_t)>(
    &::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26275d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(), "set_Timeout",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.get_Uuids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* (
    ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)()>(&::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::get_Uuids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26275dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                               "get_Uuids", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.set_Uuids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*)>(&::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::set_Uuids)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x26275e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(), "set_Uuids", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions.ToQueryOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSpaceQuery__Options (::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::*)()>(
    &::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::ToQueryOptions)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2626ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                               "ToQueryOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRSpace__StorageLocation GlobalNamespace::__OVRSpatialAnchor__LoadOptions::get_StorageLocation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                             "get_StorageLocation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSpace__StorageLocation, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpatialAnchor__LoadOptions::set_StorageLocation(::GlobalNamespace::__OVRSpace__StorageLocation value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(), "set_StorageLocation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpace__StorageLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__OVRSpatialAnchor__LoadOptions::get_MaxAnchorCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                             "get_MaxAnchorCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpatialAnchor__LoadOptions::set_MaxAnchorCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(), "set_MaxAnchorCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t GlobalNamespace::__OVRSpatialAnchor__LoadOptions::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                             "get_Timeout", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpatialAnchor__LoadOptions::set_Timeout(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(), "set_Timeout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* GlobalNamespace::__OVRSpatialAnchor__LoadOptions::get_Uuids() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                             "get_Uuids", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSpatialAnchor__LoadOptions::set_Uuids(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(), "set_Uuids", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__OVRSpaceQuery__Options GlobalNamespace::__OVRSpatialAnchor__LoadOptions::ToQueryOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
                                                                             "ToQueryOptions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSpaceQuery__Options, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_uuids", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::__OVRSpatialAnchor__LoadOptions(::GlobalNamespace::__OVRSpace__StorageLocation _StorageLocation_k__BackingField,
                                                                                              int32_t _MaxAnchorCount_k__BackingField, double_t _Timeout_k__BackingField,
                                                                                              ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* _uuids) noexcept {
  this->_StorageLocation_k__BackingField = _StorageLocation_k__BackingField;
  this->_MaxAnchorCount_k__BackingField = _MaxAnchorCount_k__BackingField;
  this->_Timeout_k__BackingField = _Timeout_k__BackingField;
  this->_uuids = _uuids;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions::__OVRSpatialAnchor__LoadOptions() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor.get_Uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::*)()>(
    &::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2627768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(),
                                                                               "get_Uuid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor.get_Localized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::*)()>(
    &::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::get_Localized)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2627774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(),
                                                                               "get_Localized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor.get_Localizing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::*)()>(
    &::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::get_Localizing)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26277fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(),
                                                                               "get_Localizing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor.get_Pose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::*)()>(
    &::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::get_Pose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2627890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(),
                                                                               "get_Pose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor.Localize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::*)(
    ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*, double_t)>(&::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::Localize)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x26279b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(), "Localize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor.BindTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::*)(::GlobalNamespace::OVRSpatialAnchor*)>(
    &::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::BindTo)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2627c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(), "BindTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2627358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
inline ::System::Guid GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::get_Uuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(),
                                                                             "get_Uuid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::get_Localized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(),
                                                                             "get_Localized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::get_Localizing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(),
                                                                             "get_Localizing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Pose GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::get_Pose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(),
                                                                             "get_Pose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method);
}
/// @param onComplete: ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor,bool>* (default: nullptr)
/// @param timeout: double_t (default: 0.0)
inline void GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::Localize(::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>* onComplete, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(), "Localize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete, timeout);
}
inline void GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::BindTo(::GlobalNamespace::OVRSpatialAnchor* spatialAnchor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(), "BindTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spatialAnchor);
}
inline void GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::_ctor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, space, uuid);
}
// Ctor Parameters [CppParam { name: "_space", ty: "::GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::__OVRSpatialAnchor__UnboundAnchor(::GlobalNamespace::OVRSpace _space, ::System::Guid _Uuid_k__BackingField) noexcept {
  this->_space = _space;
  this->_Uuid_k__BackingField = _Uuid_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor::__OVRSpatialAnchor__UnboundAnchor() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType::__OVRSpatialAnchor__MultiAnchorActionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType::__OVRSpatialAnchor__MultiAnchorActionType() {}
constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType::Save{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType::Share{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__Development.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::__OVRSpatialAnchor__Development::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2627fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "Log", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__Development.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::__OVRSpatialAnchor__Development::LogWarning)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2628040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "LogWarning",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__Development.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::__OVRSpatialAnchor__Development::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26280cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "LogError",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__Development.LogRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::StringW)>(&::GlobalNamespace::__OVRSpatialAnchor__Development::LogRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2628158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "LogRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor__Development.LogRequestResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::StringW, ::StringW)>(
    &::GlobalNamespace::__OVRSpatialAnchor__Development::LogRequestResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x262815c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "LogRequestResult", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSpatialAnchor__Development::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "Log", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::__OVRSpatialAnchor__Development::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "LogWarning",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::__OVRSpatialAnchor__Development::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "LogError",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::__OVRSpatialAnchor__Development::LogRequest(uint64_t requestId, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "LogRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, message);
}
inline void GlobalNamespace::__OVRSpatialAnchor__Development::LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor__Development*>::get(), "LogRequestResult", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, successMessage, failureMessage);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__Development::__OVRSpatialAnchor__Development() {}
// Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions::__OVRSpatialAnchor__SaveOptions(::GlobalNamespace::__OVRSpace__StorageLocation Storage) noexcept {
  this->Storage = Storage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions::__OVRSpatialAnchor__SaveOptions() {}
// Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::__OVRSpace__StorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions::__OVRSpatialAnchor__EraseOptions(::GlobalNamespace::__OVRSpace__StorageLocation Storage) noexcept {
  this->Storage = Storage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions::__OVRSpatialAnchor__EraseOptions() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult::__OVRSpatialAnchor__OperationResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult::__OVRSpatialAnchor__OperationResult() {}
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult GlobalNamespace::__OVRSpatialAnchor__OperationResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult GlobalNamespace::__OVRSpatialAnchor__OperationResult::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult GlobalNamespace::__OVRSpatialAnchor__OperationResult::Failure_SpaceCloudStorageDisabled{ static_cast<int32_t>(0xfffff830) };
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult GlobalNamespace::__OVRSpatialAnchor__OperationResult::Failure_SpaceMappingInsufficient{ static_cast<int32_t>(0xfffff82f) };
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult GlobalNamespace::__OVRSpatialAnchor__OperationResult::Failure_SpaceLocalizationFailed{ static_cast<int32_t>(0xfffff82e) };
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult GlobalNamespace::__OVRSpatialAnchor__OperationResult::Failure_SpaceNetworkTimeout{ static_cast<int32_t>(0xfffff82d) };
constexpr ::GlobalNamespace::__OVRSpatialAnchor__OperationResult GlobalNamespace::__OVRSpatialAnchor__OperationResult::Failure_SpaceNetworkRequestFailed{ static_cast<int32_t>(0xfffff82c) };
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSpatialAnchor____c::*)()>(&::GlobalNamespace::__OVRSpatialAnchor____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26281c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSpatialAnchor____c._GetListToStoreTheShareRequest_b__34_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRSpatialAnchor____c::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::__OVRSpatialAnchor____c::_GetListToStoreTheShareRequest_b__34_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26281cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor____c*>::get(), "<GetListToStoreTheShareRequest>b__34_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSpatialAnchor____c::setStaticF___9(::GlobalNamespace::__OVRSpatialAnchor____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRSpatialAnchor____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor____c*>::get>(
      std::forward<::GlobalNamespace::__OVRSpatialAnchor____c*>(value));
}
inline ::GlobalNamespace::__OVRSpatialAnchor____c* GlobalNamespace::__OVRSpatialAnchor____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRSpatialAnchor____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor____c*>::get>();
}
inline void GlobalNamespace::__OVRSpatialAnchor____c::setStaticF___9__34_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*, "<>9__34_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor____c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* GlobalNamespace::__OVRSpatialAnchor____c::getStaticF___9__34_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*, "<>9__34_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor____c*>::get>();
}
inline ::GlobalNamespace::__OVRSpatialAnchor____c* GlobalNamespace::__OVRSpatialAnchor____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSpatialAnchor____c*>());
}
inline void GlobalNamespace::__OVRSpatialAnchor____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__OVRSpatialAnchor____c::_GetListToStoreTheShareRequest_b__34_0(::GlobalNamespace::OVRSpaceUser x, ::GlobalNamespace::OVRSpaceUser y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSpatialAnchor____c*>::get(), "<GetListToStoreTheShareRequest>b__34_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSpatialAnchor____c::__OVRSpatialAnchor____c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.add_OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::add_OnLocalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2622744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "add_OnLocalize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.remove_OnLocalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26227f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "remove_OnLocalize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Space
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpace (::GlobalNamespace::OVRSpatialAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor::get_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26228a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Space",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.set_Space
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace)>(
    &::GlobalNamespace::OVRSpatialAnchor::set_Space)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26228ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "set_Space", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26228b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Uuid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.set_Uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::set_Uuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26228c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "set_Uuid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Created
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Created)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26228c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Created",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_PendingCreation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_PendingCreation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26228d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                               "get_PendingCreation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Localized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Localized)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26228e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Localized",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeFromExisting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2622978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeFromExisting", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2622dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ToNativeArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (*)(
    ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*)>(&::GlobalNamespace::OVRSpatialAnchor::ToNativeArray)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x2622f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ToNativeArray", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2622dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__SaveOptions>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions,
                         ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2623494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__SaveOptions>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.CopyAnchorListIntoListFromPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>* (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpatialAnchor*>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26236e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "CopyAnchorListIntoListFromPool", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpatialAnchor*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2623790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2623974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2623ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser,
                                                              ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2623c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x2623e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*,
                         ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x26241e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::ShareInternal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x262386c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.GetListToStoreTheShareRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>* (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x262481c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "GetListToStoreTheShareRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.AreSortedUserListsEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2624b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "AreSortedUserListsEqual", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Erase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2624e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Erase", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Erase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2624ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Erase", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__EraseOptions>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ThrowIfBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::ThrowIfBound)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2622b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ThrowIfBound", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeUnchecked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2622cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeUnchecked", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x262506c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26251f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::LateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2625200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveBatchAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2625250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "SaveBatchAnchors",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareBatchAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x262543c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareBatchAnchors",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::OnDestroy)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26256a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.GetTrackingSpacePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (::GlobalNamespace::OVRSpatialAnchor::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2625760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                               "GetTrackingSpacePose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.CreateSpatialAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2625084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                               "CreateSpatialAnchor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.TryGetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ByRef<::GlobalNamespace::OVRPose>)>(
    &::GlobalNamespace::OVRSpatialAnchor::TryGetPose)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2625828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "TryGetPose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRPose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.UpdateTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::UpdateTransform)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2624fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "UpdateTransform",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeOnLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x26259b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeOnLoad",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InvokeSingleAnchorDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool)>(&::GlobalNamespace::OVRSpatialAnchor::InvokeSingleAnchorDelegate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26261d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InvokeSingleAnchorDelegate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InvokeMultiAnchorDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType)>(&::GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x2626298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InvokeMultiAnchorDelegate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpatialAnchorCreateComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2626714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpatialAnchorCreateComplete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceSaveComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26268b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceSaveComplete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceEraseComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2626914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceEraseComplete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::__OVRSpatialAnchor__LoadOptions,
                         ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2626978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LoadUnboundAnchors", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceQueryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, bool)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x2626be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceQueryComplete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType, bool)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2627364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceSetComponentStatusComplete", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceListSaveComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26274d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceListSaveComplete", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnShareSpacesComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2627538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnShareSpacesComplete", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26275a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRSpatialAnchor::__get__startCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startCalled;
}
constexpr bool const& GlobalNamespace::OVRSpatialAnchor::__get__startCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startCalled;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__startCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startCalled = value;
}
constexpr uint64_t& GlobalNamespace::OVRSpatialAnchor::__get__requestId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr uint64_t const& GlobalNamespace::OVRSpatialAnchor::__get__requestId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__requestId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestId = value;
}
constexpr ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions& GlobalNamespace::OVRSpatialAnchor::__get__defaultSaveOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSaveOptions;
}
constexpr ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions const& GlobalNamespace::OVRSpatialAnchor::__get__defaultSaveOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSaveOptions;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__defaultSaveOptions(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultSaveOptions = value;
}
constexpr ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions& GlobalNamespace::OVRSpatialAnchor::__get__defaultEraseOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEraseOptions;
}
constexpr ::GlobalNamespace::__OVRSpatialAnchor__EraseOptions const& GlobalNamespace::OVRSpatialAnchor::__get__defaultEraseOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultEraseOptions;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__defaultEraseOptions(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultEraseOptions = value;
}
constexpr ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*& GlobalNamespace::OVRSpatialAnchor::__get_OnLocalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnLocalize;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*> const& GlobalNamespace::OVRSpatialAnchor::__get_OnLocalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnLocalize;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnLocalize)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSpace& GlobalNamespace::OVRSpatialAnchor::__get__Space_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Space_k__BackingField;
}
constexpr ::GlobalNamespace::OVRSpace const& GlobalNamespace::OVRSpatialAnchor::__get__Space_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Space_k__BackingField;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__Space_k__BackingField(::GlobalNamespace::OVRSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Space_k__BackingField = value;
}
constexpr ::System::Guid& GlobalNamespace::OVRSpatialAnchor::__get__Uuid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Uuid_k__BackingField;
}
constexpr ::System::Guid const& GlobalNamespace::OVRSpatialAnchor::__get__Uuid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Uuid_k__BackingField;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__set__Uuid_k__BackingField(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Uuid_k__BackingField = value;
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSpatialAnchor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSpatialAnchor*>*, "SpatialAnchors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSpatialAnchor*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSpatialAnchor*>* GlobalNamespace::OVRSpatialAnchor::getStaticF_SpatialAnchors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSpatialAnchor*>*, "SpatialAnchors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor*>*, "CreationRequests",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor*>* GlobalNamespace::OVRSpatialAnchor::getStaticF_CreationRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor*>*, "CreationRequests",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SaveRequests(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>*, "SaveRequests",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_SaveRequests() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__OVRSpace__StorageLocation, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>*, "SaveRequests",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SaveRequestCallbacks(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>*,
                                    "SaveRequestCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_SaveRequestCallbacks() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>*,
                                           "SaveRequestCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_ShareRequests(
    ::System::Collections::Generic::List_1<
        ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                                  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>>*,
                                    "ShareRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::List_1<
          ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>>*>(value));
}
inline ::System::Collections::Generic::List_1<
    ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_ShareRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*>>*,
                                           "ShareRequests", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_ShareRequestCallbacks(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>*,
                                    "ShareRequestCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_ShareRequestCallbacks() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpatialAnchor*, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>*, "ShareRequestCallbacks",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SingleAnchorCompletionDelegates(
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair>*, "SingleAnchorCompletionDelegates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_SingleAnchorCompletionDelegates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__SingleAnchorDelegatePair>*, "SingleAnchorCompletionDelegates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_MultiAnchorCompletionDelegates(
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>*, "MultiAnchorCompletionDelegates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_MultiAnchorCompletionDelegates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorDelegatePair>*, "MultiAnchorCompletionDelegates",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_LocalizationDelegates(
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>*, "LocalizationDelegates",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_LocalizationDelegates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::System::Action_2<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, bool>*>*,
                                           "LocalizationDelegates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_Queries(
    ::System::Collections::Generic::Dictionary_2<
        uint64_t, ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<
                                        uint64_t, ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>*,
                                    "Queries", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<
          uint64_t, ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<
    uint64_t, ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_Queries() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<
          uint64_t, ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>*,
      "Queries", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_UnboundAnchorBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*, "UnboundAnchorBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>* GlobalNamespace::OVRSpatialAnchor::getStaticF_UnboundAnchorBuffer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*, "UnboundAnchorBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void
GlobalNamespace::OVRSpatialAnchor::setStaticF_ComponentTypeBuffer(::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>, "ComponentTypeBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*> GlobalNamespace::OVRSpatialAnchor::getStaticF_ComponentTypeBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::__OVRPlugin__SpaceComponentType, ::Array<::GlobalNamespace::__OVRPlugin__SpaceComponentType>*>, "ComponentTypeBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get>();
}
inline void GlobalNamespace::OVRSpatialAnchor::add_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "add_OnLocalize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize(::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "remove_OnLocalize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpace GlobalNamespace::OVRSpatialAnchor::get_Space() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Space",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::set_Space(::GlobalNamespace::OVRSpace value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "set_Space", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Guid GlobalNamespace::OVRSpatialAnchor::get_Uuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Uuid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::set_Uuid(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "set_Uuid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_Created() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Created",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_PendingCreation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_PendingCreation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_Localized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "get_Localized",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeFromExisting", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, space, uuid);
}
/// @param onComplete: ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*,bool>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Save(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> GlobalNamespace::OVRSpatialAnchor::ToNativeArray(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ToNativeArray", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>, false>(nullptr, ___internal_method, anchors);
}
/// @param onComplete: ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*,bool>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Save(::GlobalNamespace::__OVRSpatialAnchor__SaveOptions saveOptions, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__SaveOptions>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveOptions, onComplete);
}
/// @param onComplete: ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* (default:
/// nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Save(
    ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>* anchors, ::GlobalNamespace::__OVRSpatialAnchor__SaveOptions saveOptions,
    ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Save", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__SaveOptions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, saveOptions, onComplete);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*
GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpatialAnchor*>* anchorList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "CopyAnchorListIntoListFromPool", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpatialAnchor*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*, false>(nullptr, ___internal_method, anchorList);
}
/// @param onComplete: ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user, onComplete);
}
/// @param onComplete: ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                     ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user1, user2, onComplete);
}
/// @param onComplete: ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                                                     ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user1, user2, user3, onComplete);
}
/// @param onComplete: ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                                                     ::GlobalNamespace::OVRSpaceUser user4, ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, user1, user2, user3, user4, onComplete);
}
/// @param onComplete: ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Share(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users,
                                                     ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, users, onComplete);
}
/// @param onComplete: ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*,::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* (default:
/// nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Share(
    ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>* anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users,
    ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Share", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_2<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpatialAnchor*>*, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, anchors, users, onComplete);
}
/// @param onComplete: ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::ShareInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users,
                                                             ::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, users, onComplete);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*
GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "GetListToStoreTheShareRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor*>*, false>(this, ___internal_method, users);
}
inline bool GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList1,
                                                                       ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "AreSortedUserListsEqual", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sortedList1, sortedList2);
}
/// @param onComplete: ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*,bool>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Erase(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Erase", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onComplete);
}
/// @param onComplete: ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*,bool>* (default: nullptr)
inline void GlobalNamespace::OVRSpatialAnchor::Erase(::GlobalNamespace::__OVRSpatialAnchor__EraseOptions eraseOptions, ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Erase", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__EraseOptions>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eraseOptions, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::ThrowIfBound(::System::Guid uuid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ThrowIfBound", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeUnchecked", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "SaveBatchAnchors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "ShareBatchAnchors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                             "GetTrackingSpacePose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "CreateSpatialAnchor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::TryGetPose(::GlobalNamespace::OVRSpace space, ByRef<::GlobalNamespace::OVRPose> pose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "TryGetPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRPose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, space, pose);
}
inline void GlobalNamespace::OVRSpatialAnchor::UpdateTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "UpdateTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool GlobalNamespace::OVRSpatialAnchor::TryExtractValue(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dict, TKey key, ByRef<TValue> value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "TryExtractValue",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dict, key, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InitializeOnLoad",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::InvokeSingleAnchorDelegate(uint64_t requestId, bool result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InvokeSingleAnchorDelegate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result,
                                                                         ::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType actionType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "InvokeMultiAnchorDelegate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__MultiAnchorActionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, actionType);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpatialAnchorCreateComplete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, success, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpace space, bool result, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceSaveComplete", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, space, result, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete(uint64_t requestId, bool result, ::System::Guid uuid, ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation location) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceEraseComplete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceStorageLocation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, uuid, location);
}
inline bool GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors(
    ::GlobalNamespace::__OVRSpatialAnchor__LoadOptions options,
    ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "LoadUnboundAnchors", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__LoadOptions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Action_1<::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor, ::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, options, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete(uint64_t requestId, bool queryResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceQueryComplete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, queryResult);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                                                 ::GlobalNamespace::__OVRPlugin__SpaceComponentType componentType, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceSetComponentStatusComplete", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__SpaceComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, space, uuid, componentType, enabled);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnSpaceListSaveComplete", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete(uint64_t requestId, ::GlobalNamespace::__OVRSpatialAnchor__OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), "OnShareSpacesComplete", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSpatialAnchor__OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline ::GlobalNamespace::OVRSpatialAnchor* GlobalNamespace::OVRSpatialAnchor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSpatialAnchor*>());
}
inline void GlobalNamespace::OVRSpatialAnchor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSpatialAnchor*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor::OVRSpatialAnchor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
