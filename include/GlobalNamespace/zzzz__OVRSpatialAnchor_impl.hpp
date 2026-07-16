#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
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
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Uuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ed87a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "get_Uuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Localized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localized)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ed87b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "get_Localized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Localizing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localizing)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ed8840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "get_Localizing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.TryGetPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::by_ref<::UnityEngine::Pose>)>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::TryGetPose)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5ed88d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "TryGetPose", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.LocalizeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(double_t)>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::LocalizeAsync)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5ed8b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "LocalizeAsync", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.BindTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::GlobalNamespace::OVRSpatialAnchor*)>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::BindTo)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5ed8d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "BindTo", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ed6820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.Localize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>*,
                                                                                                                   double_t)>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::Localize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ed9098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                                                { "Localize", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>*>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor.get_Pose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Pose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ed9174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "get_Pose", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Guid GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Uuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "get_Uuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "get_Localized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Localizing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "get_Localizing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::TryGetPose(::by_ref<::UnityEngine::Pose> pose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "TryGetPose", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, pose);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::LocalizeAsync(double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "LocalizeAsync", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(*this, ___internal_method, timeout);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::BindTo(::GlobalNamespace::OVRSpatialAnchor* spatialAnchor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "BindTo", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, spatialAnchor);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::_ctor(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::Localize(::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>* onComplete, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(),
                                              { "Localize", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor, bool>*>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, onComplete, timeout);
}
inline ::UnityEngine::Pose GlobalNamespace::OVRSpatialAnchor_UnboundAnchor::get_Pose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>(), { "get_Pose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ed9234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogWarning)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ed92c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ed934c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogRequestOrError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result, ::StringW, ::StringW)>(
    &::GlobalNamespace::OVRSpatialAnchor_Development::LogRequestOrError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ed93d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
            { "LogRequestOrError", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed9430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(), { "LogRequest", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_Development.LogRequestResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool, ::StringW, ::StringW)>(&::GlobalNamespace::OVRSpatialAnchor_Development::LogRequestResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed9434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                                                { "LogRequestResult", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor_Development::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogRequestOrError(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result, ::StringW successMessage, ::StringW failureMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                       { "LogRequestOrError", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, successMessage, failureMessage);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogRequest(uint64_t requestId, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(), { "LogRequest", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, message);
}
inline void GlobalNamespace::OVRSpatialAnchor_Development::LogRequestResult(uint64_t requestId, bool result, ::StringW successMessage, ::StringW failureMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_Development*>(),
                                              { "LogRequestResult", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, successMessage, failureMessage);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_Development::OVRSpatialAnchor_Development() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult::OVRSpatialAnchor_OperationResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult::OVRSpatialAnchor_OperationResult() {}
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_DataIsInvalid{ static_cast<int32_t>(0xfffffc10) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_InvalidParameter{ static_cast<int32_t>(0xfffffc17) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceCloudStorageDisabled{ static_cast<int32_t>(0xfffff830) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceMappingInsufficient{ static_cast<int32_t>(0xfffff82f) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceLocalizationFailed{ static_cast<int32_t>(0xfffff82e) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceNetworkTimeout{ static_cast<int32_t>(0xfffff82d) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_SpaceNetworkRequestFailed{ static_cast<int32_t>(0xfffff82c) };
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult GlobalNamespace::OVRSpatialAnchor_OperationResult::Failure_GroupNotFound{ static_cast<int32_t>(0xfffff827) };
template <typename TResult, typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::setStaticF_s_delegate(
    ::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>*, "s_delegate",
                                    ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>(
      std::forward<::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>*>(value));
}
template <typename TResult, typename TCapture>
inline ::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>*
GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::getStaticF_s_delegate() {
  return ::cordl_internals::getStaticField<::System::Action_2<TResult, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>*, "s_delegate",
                                           ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>();
}
template <typename TResult, typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::_ctor(::System::Action_2<TCapture, TResult>* callback, TCapture capture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Action_2<TCapture, TResult>*>(), ::i2c::type_of<TCapture>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback, capture);
}
template <typename TResult, typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::Invoke(TResult result, ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture> invertedCapture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>(),
                                              { "Invoke", {}, { ::i2c::type_of<TResult>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, invertedCapture);
}
template <typename TResult, typename TCapture>
inline void GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>::ContinueTaskWith(::GlobalNamespace::OVRTask_1<TResult> task, ::System::Action_2<TCapture, TResult>* onCompleted,
                                                                                                     TCapture state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>>(),
                       { "ContinueTaskWith", {}, { ::i2c::type_of<::GlobalNamespace::OVRTask_1<TResult>>(), ::i2c::type_of<::System::Action_2<TCapture, TResult>*>(), ::i2c::type_of<TCapture>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task, onCompleted, state);
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
// Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions::OVRSpatialAnchor_EraseOptions(::GlobalNamespace::OVRSpace_StorageLocation Storage) noexcept {
  this->Storage = Storage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions::OVRSpatialAnchor_EraseOptions() {}
// Ctor Parameters [CppParam { name: "Storage", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions::OVRSpatialAnchor_SaveOptions(::GlobalNamespace::OVRSpace_StorageLocation Storage) noexcept {
  this->Storage = Storage;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions::OVRSpatialAnchor_SaveOptions() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_StorageLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpace_StorageLocation (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed9438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "get_StorageLocation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_StorageLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(::GlobalNamespace::OVRSpace_StorageLocation)>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_StorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed9440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                                                                                           { "set_StorageLocation", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_MaxAnchorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed9448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "get_MaxAnchorCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_MaxAnchorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(int32_t)>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_MaxAnchorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed9450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "set_MaxAnchorCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed9458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "get_Timeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(double_t)>(&::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed9460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "set_Timeout", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.get_Uuids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Uuids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed9468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "get_Uuids", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.set_Uuids
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*)>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Uuids)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ed9470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                                                             { "set_Uuids", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor_LoadOptions.ToQueryOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpaceQuery_Options (::GlobalNamespace::OVRSpatialAnchor_LoadOptions::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor_LoadOptions::ToQueryOptions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ed8164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "ToQueryOptions", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_StorageLocation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "get_StorageLocation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace_StorageLocation>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_StorageLocation(::GlobalNamespace::OVRSpace_StorageLocation value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                                                                                         { "set_StorageLocation", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_MaxAnchorCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "get_MaxAnchorCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_MaxAnchorCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "set_MaxAnchorCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "get_Timeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Timeout(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "set_Timeout", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* GlobalNamespace::OVRSpatialAnchor_LoadOptions::get_Uuids() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "get_Uuids", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor_LoadOptions::set_Uuids(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                                                                                         { "set_Uuids", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpaceQuery_Options GlobalNamespace::OVRSpatialAnchor_LoadOptions::ToQueryOptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(), { "ToQueryOptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpaceQuery_Options>(*this, ___internal_method);
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
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor___c::*)()>(&::GlobalNamespace::OVRSpatialAnchor___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed9638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c._GetListToStoreTheShareRequest_b__33_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSpatialAnchor___c::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(
    &::GlobalNamespace::OVRSpatialAnchor___c::_GetListToStoreTheShareRequest_b__33_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ed963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c*>(),
                                         { "<GetListToStoreTheShareRequest>b__33_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor___c::setStaticF___9(::GlobalNamespace::OVRSpatialAnchor___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRSpatialAnchor___c*, "<>9", ::GlobalNamespace::OVRSpatialAnchor___c*>(std::forward<::GlobalNamespace::OVRSpatialAnchor___c*>(value));
}
inline ::GlobalNamespace::OVRSpatialAnchor___c* GlobalNamespace::OVRSpatialAnchor___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRSpatialAnchor___c*, "<>9", ::GlobalNamespace::OVRSpatialAnchor___c*>();
}
inline void GlobalNamespace::OVRSpatialAnchor___c::setStaticF___9__33_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*, "<>9__33_0", ::GlobalNamespace::OVRSpatialAnchor___c*>(
      std::forward<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* GlobalNamespace::OVRSpatialAnchor___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*, "<>9__33_0", ::GlobalNamespace::OVRSpatialAnchor___c*>();
}
inline void GlobalNamespace::OVRSpatialAnchor___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSpatialAnchor___c::_GetListToStoreTheShareRequest_b__33_0(::GlobalNamespace::OVRSpaceUser x, ::GlobalNamespace::OVRSpaceUser y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c*>(),
                                       { "<GetListToStoreTheShareRequest>b__33_0", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::OVRSpatialAnchor___c* GlobalNamespace::OVRSpatialAnchor___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSpatialAnchor___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor___c::OVRSpatialAnchor___c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::*)()>(&::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed9674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0._LoadUnboundAnchorsAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t)>(&::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::_LoadUnboundAnchorsAsync_b__0)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5ed9678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>(),
                            { "<LoadUnboundAnchorsAsync>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*& GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_get_unboundAnchors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unboundAnchors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* const&
GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_get_unboundAnchors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unboundAnchors;
}
constexpr void
GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_set_unboundAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unboundAnchors = value;
}
constexpr ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>*&
GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_get_resultsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultsHandler;
}
constexpr ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* const&
GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_get_resultsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultsHandler;
}
constexpr void GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::__cordl_internal_set_resultsHandler(
    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resultsHandler = value;
}
inline void GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::_LoadUnboundAnchorsAsync_b__0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* incrementalResults,
                                                                                                   int32_t staringIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>(),
                          { "<LoadUnboundAnchorsAsync>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, incrementalResults, staringIndex);
}
inline ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0* GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0::OVRSpatialAnchor___c__DisplayClass65_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x5ed98e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5eda0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "resultsHandler", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "fetchOptions", ty: "::GlobalNamespace::OVRAnchor_FetchOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty:
// "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65(
    int32_t __1__state,
    ::GlobalNamespace::OVRTaskBuilder_1<
        ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
        __t__builder,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* resultsHandler, ::GlobalNamespace::OVRAnchor_FetchOptions fetchOptions,
    ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0* __8__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap1,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
        __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->unboundAnchors = unboundAnchors;
  this->resultsHandler = resultsHandler;
  this->fetchOptions = fetchOptions;
  this->__8__1 = __8__1;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x5eda128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5eda8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_anchorBuff_5__2", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62(
    int32_t __1__state,
    ::GlobalNamespace::OVRTaskBuilder_1<
        ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
        __t__builder,
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->uuids = uuids;
  this->unboundAnchors = unboundAnchors;
  this->_anchorBuff_5__2 = _anchorBuff_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::MoveNext)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x5eda918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5edb080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "_anchorBuff_5__2", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63(
    int32_t __1__state,
    ::GlobalNamespace::OVRTaskBuilder_1<
        ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
        __t__builder,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors, ::System::Guid groupUuid,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->unboundAnchors = unboundAnchors;
  this->groupUuid = groupUuid;
  this->_anchorBuff_5__2 = _anchorBuff_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x5edb0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5edb874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "allowedAnchorUuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupUuid", ty:
// "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "_anchorBuff_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64(
    int32_t __1__state,
    ::GlobalNamespace::OVRTaskBuilder_1<
        ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
        __t__builder,
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
    ::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorBuff_5__2,
    ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->allowedAnchorUuids = allowedAnchorUuids;
  this->unboundAnchors = unboundAnchors;
  this->groupUuid = groupUuid;
  this->_anchorBuff_5__2 = _anchorBuff_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5edb8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5edbb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::OVRSpatialAnchor__WhenCreatedAsync_d__19(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder,
                                                                                                                ::UnityW<::GlobalNamespace::OVRSpatialAnchor> __4__this,
                                                                                                                ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19::OVRSpatialAnchor__WhenCreatedAsync_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::*)()>(
    &::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5edbb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5edbf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::OVRSpatialAnchor__WhenLocalizedAsync_d__22(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder,
                                                                                                                    ::UnityW<::GlobalNamespace::OVRSpatialAnchor> __4__this,
                                                                                                                    ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1,
                                                                                                                    ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22::OVRSpatialAnchor__WhenLocalizedAsync_d__22() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.add__onLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::add__onLocalize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ed1270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "add__onLocalize", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.remove__onLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::remove__onLocalize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ed1330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "remove__onLocalize", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get__anchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get__anchor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ed13f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get__anchor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.set__anchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRSpatialAnchor::set__anchor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ed1404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "set__anchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.add_OnLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::add_OnLocalize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ed1418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "add_OnLocalize", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.remove_OnLocalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed15f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "remove_OnLocalize", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Uuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ed15f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_Uuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Created
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Created)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ed1518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_Created", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_PendingCreation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_PendingCreation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ed1654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_PendingCreation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.WhenCreatedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::WhenCreatedAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ed16cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "WhenCreatedAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Localized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Localized)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ed1784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_Localized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.WhenLocalizedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::WhenLocalizedAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ed184c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "WhenLocalizedAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ed1908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ed1b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "ShareAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ed1c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
            { "ShareAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ed1df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareAsync",
                                                                                       {},
                                                                                       { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(),
                                                                                         ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ed1fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "ShareAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ed2080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareAsync", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x5ed2128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "ShareAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5ed28f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                         { "ShareAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5ed2ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "ShareAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::ShareAsyncInternal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ed19e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "ShareAsyncInternal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.GetListToStoreTheShareRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* (
    ::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5ed31bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "GetListToStoreTheShareRequest", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.AreSortedUserListsEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5ed34ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "AreSortedUserListsEqual",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>(),
                                                                                         ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(&::GlobalNamespace::OVRSpatialAnchor::SaveAnchorsAsync)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5ed3748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                { "SaveAnchorsAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAnchorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (
    ::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::SaveAnchorAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ed3af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveAnchorAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAnchorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (
    ::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::EraseAnchorAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ed3b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "EraseAnchorAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::EraseAnchorsAsync)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5ed3be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "EraseAnchorsAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ThrowIfBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::ThrowIfBound)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ed3fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ThrowIfBound", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5ed40ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "InitializeUnchecked", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ed4458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ed460c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::LateUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ed4630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ShareBatchAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5ed486c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareBatchAnchors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::OnDestroy)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5ed50dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.GetTrackingSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPose (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ed5214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "GetTrackingSpacePose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.CreateSpatialAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5ed4484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "CreateSpatialAnchor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.TryGetPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpace, ::by_ref<::GlobalNamespace::OVRPose>)>(&::GlobalNamespace::OVRSpatialAnchor::TryGetPose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ed5328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "TryGetPose", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.UpdateTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::UpdateTransform)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ed437c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "UpdateTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeOnLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ed54c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "InitializeOnLoad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InvokeMultiAnchorDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType)>(
    &::GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5ed5bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "InvokeMultiAnchorDelegate",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>(),
                                                                                                      ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpatialAnchorCreateComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5ed5f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
            { "OnSpatialAnchorCreateComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,
    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ed6174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                { "LoadUnboundAnchorsAsync",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(),
                                                    ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundSharedAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ed6348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "LoadUnboundSharedAnchorsAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundSharedAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> (*)(
    ::System::Guid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ed6414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                         { "LoadUnboundSharedAnchorsAsync",
                                           {},
                                           { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundSharedAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> (*)(
    ::System::Guid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ed64e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "LoadUnboundSharedAnchorsAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
    ::GlobalNamespace::OVRAnchor_FetchOptions, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,
    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>*)>(&::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ed626c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                { "LoadUnboundAnchorsAsync",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchOptions>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(),
                                                    ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.FromOVRAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>)>(
    &::GlobalNamespace::OVRSpatialAnchor::FromOVRAnchor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ed65c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                         { "FromOVRAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.TryGetUnbound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>)>(
    &::GlobalNamespace::OVRSpatialAnchor::TryGetUnbound)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ed66f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                         { "TryGetUnbound", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool, ::GlobalNamespace::OVRSpace, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ed682c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "OnSpaceSetComponentStatusComplete",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>(),
                                                                 ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnShareSpacesComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ed6924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "OnShareSpacesComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.InitializeFromExisting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpace, ::System::Guid)>(
    &::GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5ed69b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "InitializeFromExisting", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ed6bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Save", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpatialAnchor_SaveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ed6bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
            { "Save", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>(), ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.get_Space
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpace (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::get_Space)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ed6e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_Space", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ed6e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                            { "Share", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ed6f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                                                           { "Share",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(),
                                                                                               ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser,
                                                                                                     ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ed6fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                         { "Share",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(),
                                             ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser,
                                                              ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ed70a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                         { "Share",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(),
                                             ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                                     ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ed7174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Share",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>(),
                                                                                                      ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Erase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ed721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Erase", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Erase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)(
    ::GlobalNamespace::OVRSpatialAnchor_EraseOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*)>(&::GlobalNamespace::OVRSpatialAnchor::Erase)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ed722c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
            { "Erase", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>(), ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ed73f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "LoadUnboundAnchors",
                                                                                       {},
                                                                                       { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                                                                                         ::i2c::type_of<::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Share
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*,
                         ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::Share)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x5ed4ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "Share",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>(),
                                                                 ::i2c::type_of<::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,
                                                                                                   ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions,
                         ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
        &::GlobalNamespace::OVRSpatialAnchor::Save)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5ed79d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
            { "Save",
              {},
              { ::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>(),
                ::i2c::type_of<
                    ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed7c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "EraseAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.EraseAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpatialAnchor_EraseOptions)>(
    &::GlobalNamespace::OVRSpatialAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ed72e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "EraseAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed7c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRSpatialAnchor::*)(::GlobalNamespace::OVRSpatialAnchor_SaveOptions)>(
    &::GlobalNamespace::OVRSpatialAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5ed6ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> (*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions)>(&::GlobalNamespace::OVRSpatialAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5ed7c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                             { "SaveAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.LoadUnboundAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>> (*)(::GlobalNamespace::OVRSpatialAnchor_LoadOptions)>(
    &::GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5ed74f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                                                           { "LoadUnboundAnchorsAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.ToNativeArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (*)(
    ::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(&::GlobalNamespace::OVRSpatialAnchor::ToNativeArray)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5ed766c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                { "ToNativeArray", {}, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.CopyAnchorListIntoListFromPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* (*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(
    &::GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ed7940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                            { "CopyAnchorListIntoListFromPool", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.SaveBatchAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ed4684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveBatchAnchors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceSaveComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpace, bool, ::System::Guid)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed81c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                            { "OnSpaceSaveComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceEraseComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool, ::System::Guid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation)>(
    &::GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ed81c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "OnSpaceEraseComplete",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>(),
                                                                                                             ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceQueryComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5ed81c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "OnSpaceQueryComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor.OnSpaceListSaveComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ed870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                { "OnSpaceListSaveComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor::*)()>(&::GlobalNamespace::OVRSpatialAnchor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ed87a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { ".ctor", {}, {} })));
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
constexpr bool& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__creationFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creationFailed;
}
constexpr bool const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__creationFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creationFailed;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__creationFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creationFailed = value;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__onLocalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onLocalize;
}
constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get__onLocalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onLocalize;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onLocalize = value;
}
constexpr ::GlobalNamespace::OVRAnchor& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get___anchor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____anchor_k__BackingField;
}
constexpr ::GlobalNamespace::OVRAnchor const& GlobalNamespace::OVRSpatialAnchor::__cordl_internal_get___anchor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____anchor_k__BackingField;
}
constexpr void GlobalNamespace::OVRSpatialAnchor::__cordl_internal_set___anchor_k__BackingField(::GlobalNamespace::OVRAnchor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____anchor_k__BackingField = value;
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
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "SpatialAnchors",
                                    ::GlobalNamespace::OVRSpatialAnchor*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GlobalNamespace::OVRSpatialAnchor::getStaticF_SpatialAnchors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "SpatialAnchors",
                                           ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "CreationRequests", ::GlobalNamespace::OVRSpatialAnchor*>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GlobalNamespace::OVRSpatialAnchor::getStaticF_CreationRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, "CreationRequests",
                                           ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_AsyncRequestTaskIds(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>*, "AsyncRequestTaskIds",
                                    ::GlobalNamespace::OVRSpatialAnchor*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>* GlobalNamespace::OVRSpatialAnchor::getStaticF_AsyncRequestTaskIds() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::System::Guid>*, "AsyncRequestTaskIds",
                                           ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_ShareRequests(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                                  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*,
                                    "ShareRequests", ::GlobalNamespace::OVRSpatialAnchor*>(
      std::forward<::System::Collections::Generic::List_1<
          ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*>(
          value));
}
inline ::System::Collections::Generic::List_1<
    ::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_ShareRequests() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,
                                                                                                         ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*,
                                           "ShareRequests", ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_MultiAnchorCompletionDelegates(
    ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*, "MultiAnchorCompletionDelegates",
                                    ::GlobalNamespace::OVRSpatialAnchor*>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_MultiAnchorCompletionDelegates() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*, "MultiAnchorCompletionDelegates",
                                           ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::setStaticF_SaveRequests(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*,
      "SaveRequests", ::GlobalNamespace::OVRSpatialAnchor*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
GlobalNamespace::OVRSpatialAnchor::getStaticF_SaveRequests() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*,
      "SaveRequests", ::GlobalNamespace::OVRSpatialAnchor*>();
}
inline void GlobalNamespace::OVRSpatialAnchor::add__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "add__onLocalize", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::remove__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "remove__onLocalize", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRAnchor GlobalNamespace::OVRSpatialAnchor::get__anchor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get__anchor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::set__anchor(::GlobalNamespace::OVRAnchor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "set__anchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::add_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "add_OnLocalize", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSpatialAnchor::remove_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "remove_OnLocalize", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid GlobalNamespace::OVRSpatialAnchor::get_Uuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_Uuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_Created() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_Created", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_PendingCreation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_PendingCreation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::WhenCreatedAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "WhenCreatedAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::get_Localized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_Localized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::WhenLocalizedAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "WhenLocalizedAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser user) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, user);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser user1,
                                                                                                                                       ::GlobalNamespace::OVRSpaceUser user2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "ShareAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, user1, user2);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
          { "ShareAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, user1, user2, user3);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::GlobalNamespace::OVRSpaceUser user1,
                                                                                                                                       ::GlobalNamespace::OVRSpaceUser user2,
                                                                                                                                       ::GlobalNamespace::OVRSpaceUser user3,
                                                                                                                                       ::GlobalNamespace::OVRSpaceUser user4) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareAsync",
                                                                                     {},
                                                                                     { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(),
                                                                                       ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, user1, user2, user3, user4);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "ShareAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Guid groupUuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareAsync", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(this, ___internal_method, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors,
                                              ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareAsync",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                                       ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(nullptr, ___internal_method, anchors, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Guid groupUuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                       { "ShareAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRSpatialAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors,
                                              ::System::Collections::Generic::IEnumerable_1<::System::Guid>* groupUuids) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareAsync",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                                       ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, groupUuids);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
GlobalNamespace::OVRSpatialAnchor::ShareAsyncInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "ShareAsyncInternal", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(this, ___internal_method, users);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
GlobalNamespace::OVRSpatialAnchor::GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "GetListToStoreTheShareRequest", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(this, ___internal_method, users);
}
inline bool GlobalNamespace::OVRSpatialAnchor::AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList1,
                                                                       ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>* sortedList2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                                                         { "AreSortedUserListsEqual",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sortedList1, sortedList2);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>
GlobalNamespace::OVRSpatialAnchor::SaveAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                              { "SaveAnchorsAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(nullptr, ___internal_method, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRSpatialAnchor::SaveAnchorAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveAnchorAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> GlobalNamespace::OVRSpatialAnchor::EraseAnchorAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "EraseAnchorAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>
GlobalNamespace::OVRSpatialAnchor::EraseAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors,
                                                     ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "EraseAnchorsAsync",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                                       ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(nullptr, ___internal_method, anchors, uuids);
}
inline void GlobalNamespace::OVRSpatialAnchor::ThrowIfBound(::System::Guid uuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ThrowIfBound", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeUnchecked(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "InitializeUnchecked", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::ShareBatchAnchors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "ShareBatchAnchors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPose GlobalNamespace::OVRSpatialAnchor::GetTrackingSpacePose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "GetTrackingSpacePose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPose>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::CreateSpatialAnchor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "CreateSpatialAnchor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpatialAnchor::TryGetPose(::GlobalNamespace::OVRSpace space, ::by_ref<::GlobalNamespace::OVRPose> pose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "TryGetPose", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, space, pose);
}
inline void GlobalNamespace::OVRSpatialAnchor::UpdateTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "UpdateTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeOnLoad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "InitializeOnLoad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::InvokeMultiAnchorDelegate(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result,
                                                                         ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType actionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "InvokeMultiAnchorDelegate",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>(),
                                                                                                    ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, actionType);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpatialAnchorCreateComplete(uint64_t requestId, bool success, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
          { "OnSpatialAnchorCreateComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, success, space, uuid);
}
inline ::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync(
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* onIncrementalResultsAvailable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                              { "LoadUnboundAnchorsAsync",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(),
                                                  ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>>(
      nullptr, ___internal_method, uuids, unboundAnchors, onIncrementalResultsAvailable);
}
inline ::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                                                 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "LoadUnboundSharedAnchorsAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>>(
      nullptr, ___internal_method, uuids, unboundAnchors);
}
inline ::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                              { "LoadUnboundSharedAnchorsAsync",
                                                {},
                                                { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>>(
      nullptr, ___internal_method, groupUuid, unboundAnchors);
}
inline ::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
GlobalNamespace::OVRSpatialAnchor::LoadUnboundSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids,
                                                                 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "LoadUnboundSharedAnchorsAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>>(
      nullptr, ___internal_method, groupUuid, allowedAnchorUuids, unboundAnchors);
}
inline ::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync(::GlobalNamespace::OVRAnchor_FetchOptions fetchOptions,
                                                           ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* unboundAnchors,
                                                           ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>* resultsHandler) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                          { "LoadUnboundAnchorsAsync",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*>(),
                              ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<
      ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>>(
      nullptr, ___internal_method, fetchOptions, unboundAnchors, resultsHandler);
}
inline bool GlobalNamespace::OVRSpatialAnchor::FromOVRAnchor(::GlobalNamespace::OVRAnchor anchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> unboundAnchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                       { "FromOVRAnchor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, anchor, unboundAnchor);
}
inline bool GlobalNamespace::OVRSpatialAnchor::TryGetUnbound(::GlobalNamespace::OVRAnchor anchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> unboundAnchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                       { "TryGetUnbound", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, anchor, unboundAnchor);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceSetComponentStatusComplete(uint64_t requestId, bool result, ::GlobalNamespace::OVRSpace space, ::System::Guid uuid,
                                                                                 ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "OnSpaceSetComponentStatusComplete",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>(),
                                                               ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, space, uuid, componentType, enabled);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnShareSpacesComplete(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "OnShareSpacesComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSpatialAnchor::InitializeFromExisting(::GlobalNamespace::OVRSpace space, ::System::Guid uuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "InitializeFromExisting", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, space, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Save", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
          { "Save", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>(), ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saveOptions, onComplete);
}
inline ::GlobalNamespace::OVRSpace GlobalNamespace::OVRSpatialAnchor::get_Space() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "get_Space", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                          { "Share", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2,
                                                     ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                                                         { "Share",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(),
                                                                                             ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user1, user2, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                                                     ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                              { "Share",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(),
                                                  ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user1, user2, user3, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::GlobalNamespace::OVRSpaceUser user1, ::GlobalNamespace::OVRSpaceUser user2, ::GlobalNamespace::OVRSpaceUser user3,
                                                     ::GlobalNamespace::OVRSpaceUser user4, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                       { "Share",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRSpaceUser>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user1, user2, user3, user4, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users,
                                                     ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Share",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>(),
                                                                                                    ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, users, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Erase(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "Erase", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Erase(::GlobalNamespace::OVRSpatialAnchor_EraseOptions eraseOptions,
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
          { "Erase", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>(), ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eraseOptions, onComplete);
}
inline bool GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchors(::GlobalNamespace::OVRSpatialAnchor_LoadOptions options,
                                                                  ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                                                         { "LoadUnboundAnchors",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>(),
                                                                                             ::i2c::type_of<::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, options, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Share(
    ::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>* users,
    ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "Share",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*>(),
                                                               ::i2c::type_of<::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,
                                                                                                 ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchors, users, onComplete);
}
inline void GlobalNamespace::OVRSpatialAnchor::Save(
    ::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions,
    ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
          { "Save",
            {},
            { ::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>(),
              ::i2c::type_of<
                  ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchors, saveOptions, onComplete);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::EraseAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "EraseAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::EraseAsync(::GlobalNamespace::OVRSpatialAnchor_EraseOptions eraseOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "EraseAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_EraseOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method, eraseOptions);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSpatialAnchor::SaveAsync(::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method, saveOptions);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>
GlobalNamespace::OVRSpatialAnchor::SaveAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors,
                                             ::GlobalNamespace::OVRSpatialAnchor_SaveOptions saveOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveAsync",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(),
                                                                                       ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_SaveOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>>(nullptr, ___internal_method, anchors, saveOptions);
}
inline ::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>
GlobalNamespace::OVRSpatialAnchor::LoadUnboundAnchorsAsync(::GlobalNamespace::OVRSpatialAnchor_LoadOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                                                         { "LoadUnboundAnchorsAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_LoadOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>>(nullptr, ___internal_method, options);
}
inline ::Unity::Collections::NativeArray_1<uint64_t>
GlobalNamespace::OVRSpatialAnchor::ToNativeArray(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                              { "ToNativeArray", {}, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>>(nullptr, ___internal_method, anchors);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*
GlobalNamespace::OVRSpatialAnchor::CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchorList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                       { "CopyAnchorListIntoListFromPool", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>(nullptr, ___internal_method, anchorList);
}
inline void GlobalNamespace::OVRSpatialAnchor::SaveBatchAnchors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "SaveBatchAnchors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpace space, bool result, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                          { "OnSpaceSaveComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpace>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, space, result, uuid);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceEraseComplete(uint64_t requestId, bool result, ::System::Guid uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "OnSpaceEraseComplete",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Guid>(),
                                                                                                           ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, uuid, location);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceQueryComplete(uint64_t requestId, bool queryResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { "OnSpaceQueryComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, queryResult);
}
inline void GlobalNamespace::OVRSpatialAnchor::OnSpaceListSaveComplete(uint64_t requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(),
                                                           { "OnSpaceListSaveComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRSpatialAnchor_OperationResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRSpatialAnchor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSpatialAnchor* GlobalNamespace::OVRSpatialAnchor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSpatialAnchor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor::OVRSpatialAnchor() {}
