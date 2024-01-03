#pragma once
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarVisualDataProvider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::*)()>(
    &::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xe0ae3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe0b58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarController*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__AvatarController___LoadAndDisplayAvatar_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BeatSaber::AvatarCore::AvatarController* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11::__AvatarController___LoadAndDisplayAvatar_d__11() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.get_avatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::Avatar* (::BeatSaber::AvatarCore::AvatarController::*)()>(
    &::BeatSaber::AvatarCore::AvatarController::get_avatar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0ad94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(), "get_avatar",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe0ad9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController.LoadAndDisplayAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(
    &::BeatSaber::AvatarCore::AvatarController::LoadAndDisplayAvatar)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe0ada0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                                                                               "LoadAndDisplayAvatar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarController::*)()>(&::BeatSaber::AvatarCore::AvatarController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0ae34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& BeatSaber::AvatarCore::AvatarController::__get__parentingTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentingTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::AvatarCore::AvatarController::__get__parentingTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentingTransform;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__parentingTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentingTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& BeatSaber::AvatarCore::AvatarController::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& BeatSaber::AvatarCore::AvatarController::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& BeatSaber::AvatarCore::AvatarController::__get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& BeatSaber::AvatarCore::AvatarController::__get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarSystemCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext& BeatSaber::AvatarCore::AvatarController::__get__avatarDisplayContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDisplayContext;
}
constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext const& BeatSaber::AvatarCore::AvatarController::__get__avatarDisplayContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDisplayContext;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__avatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarDisplayContext = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*& BeatSaber::AvatarCore::AvatarController::__get__visualDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualDataProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*> const& BeatSaber::AvatarCore::AvatarController::__get__visualDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visualDataProvider;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visualDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*& BeatSaber::AvatarCore::AvatarController::__get__poseDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseDataProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*> const& BeatSaber::AvatarCore::AvatarController::__get__poseDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poseDataProvider;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____poseDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*& BeatSaber::AvatarCore::AvatarController::__get__optionalDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalDataProvider;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*> const& BeatSaber::AvatarCore::AvatarController::__get__optionalDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalDataProvider;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionalDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::Avatar*& BeatSaber::AvatarCore::AvatarController::__get__avatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatar;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::Avatar*> const& BeatSaber::AvatarCore::AvatarController::__get__avatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatar;
}
constexpr void BeatSaber::AvatarCore::AvatarController::__set__avatar(::BeatSaber::AvatarCore::Avatar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::AvatarCore::Avatar* BeatSaber::AvatarCore::AvatarController::get_avatar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(), "get_avatar",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::Avatar*, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarController::LoadAndDisplayAvatar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(),
                                                                             "LoadAndDisplayAvatar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarController* BeatSaber::AvatarCore::AvatarController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarController*>());
}
inline void BeatSaber::AvatarCore::AvatarController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarController::AvatarController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
