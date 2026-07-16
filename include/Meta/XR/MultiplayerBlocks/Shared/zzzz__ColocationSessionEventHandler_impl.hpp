#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__AlignCameraToAnchor_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__SharedAnchorManager_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationController_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__ColocationSessionEventHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5a6f7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6fdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::ColocationSessionEventHandler__OnSessionCreated_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler> __4__this,
    ::System::Guid groupUuid, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->groupUuid = groupUuid;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionCreated_d__7::ColocationSessionEventHandler__OnSessionCreated_d__7() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5a6fdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a70284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler>", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::ColocationSessionEventHandler__OnSessionDiscovered_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler> __4__this,
    ::System::Guid groupUuid, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->groupUuid = groupUuid;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler__OnSessionDiscovered_d__8::ColocationSessionEventHandler__OnSessionDiscovered_d__8() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a6f110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::Start)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5a6f1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.OnSessionCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)(::System::Guid)>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionCreated)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a6f530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "OnSessionCreated", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.OnSessionDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)(::System::Guid)>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionDiscovered)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a6f5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(),
                                                                                           { "OnSessionDiscovered", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5a6f6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6f7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get_AnchorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AnchorPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get_AnchorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AnchorPrefab;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set_AnchorPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AnchorPrefab = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController>& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__colocationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colocationController;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> const&
Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__colocationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colocationController;
}
constexpr void
Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set__colocationController(::UnityW<::Meta::XR::MultiplayerBlocks::Shared::ColocationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colocationController = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__sharedAnchorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedAnchorManager;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__sharedAnchorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedAnchorManager;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set__sharedAnchorManager(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sharedAnchorManager = value;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor>& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__alignCameraToAnchor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alignCameraToAnchor;
}
constexpr ::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor> const&
Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__alignCameraToAnchor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alignCameraToAnchor;
}
constexpr void
Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set__alignCameraToAnchor(::UnityW<::Meta::XR::MultiplayerBlocks::Colocation::AlignCameraToAnchor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alignCameraToAnchor = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_get__cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraRig = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::Awake() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionCreated(::System::Guid groupUuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "OnSessionCreated", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupUuid);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnSessionDiscovered(::System::Guid groupUuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "OnSessionDiscovered", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupUuid);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler* Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler::ColocationSessionEventHandler() {}
