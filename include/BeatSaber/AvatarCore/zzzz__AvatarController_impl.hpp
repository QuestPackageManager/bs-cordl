#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarController.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::*)()>(
    &::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x34f09fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f1098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::UnityW<::BeatSaber::AvatarCore::AvatarController>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_avatarSystemHash_5__2", ty: "uint32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::AvatarController__LoadAndDisplayAvatar_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::BeatSaber::AvatarCore::AvatarController> __4__this, uint32_t _avatarSystemHash_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::Avatar>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_avatarSystemHash_5__2 = _avatarSystemHash_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarController__LoadAndDisplayAvatar_d__14::AvatarController__LoadAndDisplayAvatar_d__14() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.get_avatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::BeatSaber::AvatarCore::Avatar> (::BeatSaber::AvatarCore::AvatarController::*)()>(
    &::BeatSaber::AvatarCore::AvatarController::get_avatar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f0328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "get_avatar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::Start)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x34f0330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::OnDestroy)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x34f04d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.LoadAndDisplayAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::LoadAndDisplayAvatar)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x34f0430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "LoadAndDisplayAvatar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.DisplayAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)(::BeatSaber::AvatarCore::Avatar*, uint32_t)>(
    &::BeatSaber::AvatarCore::AvatarController::DisplayAvatar)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x34f060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(),
                                                             { "DisplayAvatar", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::Avatar*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.ResolveAvatarSystemHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::ResolveAvatarSystemHash)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x34f07a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "ResolveAvatarSystemHash", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.HandleVisualDataDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::BeatSaber::AvatarCore::AvatarController::HandleVisualDataDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34f09f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(),
                                                                                           { "HandleVisualDataDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34f09f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__parentingTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentingTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__parentingTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentingTransform;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__parentingTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentingTransform = value;
}
constexpr ::Zenject::DiContainer*& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystemCollection = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__avatarDisplayContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDisplayContext;
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__avatarDisplayContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDisplayContext;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__avatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarDisplayContext = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__visualDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualDataProvider;
}
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__visualDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualDataProvider;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visualDataProvider = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__poseDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseDataProvider;
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__poseDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseDataProvider;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____poseDataProvider = value;
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__optionalDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalDataProvider;
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__optionalDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalDataProvider;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optionalDataProvider = value;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::Avatar>& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__avatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatar;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::Avatar> const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__avatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatar;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__avatar(::UnityW<::BeatSaber::AvatarCore::Avatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatar = value;
}
constexpr ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>*& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__avatarLoadingTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLoadingTask;
}
constexpr ::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>* const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__avatarLoadingTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarLoadingTask;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__avatarLoadingTask(::System::Threading::Tasks::Task_1<::UnityW<::BeatSaber::AvatarCore::Avatar>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarLoadingTask = value;
}
constexpr uint32_t& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__loadedAvatarSystemHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedAvatarSystemHash;
}
constexpr uint32_t const& BeatSaber::AvatarCore::AvatarController::__cordl_internal_get__loadedAvatarSystemHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedAvatarSystemHash;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__cordl_internal_set__loadedAvatarSystemHash(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadedAvatarSystemHash = value;
}
inline ::UnityW<::BeatSaber::AvatarCore::Avatar> BeatSaber::AvatarCore::AvatarController::get_avatar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "get_avatar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::BeatSaber::AvatarCore::Avatar>>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::LoadAndDisplayAvatar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "LoadAndDisplayAvatar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::DisplayAvatar(::BeatSaber::AvatarCore::Avatar* avatar, uint32_t avatarSystemHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(),
                                                                                         { "DisplayAvatar", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::Avatar*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatar, avatarSystemHash);
}
inline uint32_t BeatSaber::AvatarCore::AvatarController::ResolveAvatarSystemHash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { "ResolveAvatarSystemHash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::HandleVisualDataDidChange(::GlobalNamespace::MultiplayerAvatarsData visualData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(),
                                                                                         { "HandleVisualDataDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visualData);
}
inline void BeatSaber::AvatarCore::AvatarController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarController* BeatSaber::AvatarCore::AvatarController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::AvatarController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarController::AvatarController() {}
