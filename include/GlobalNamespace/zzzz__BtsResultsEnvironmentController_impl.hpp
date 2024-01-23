#pragma once
#include "GlobalNamespace/zzzz__BaseResultsEnvironmentController_impl.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BtsResultsEnvironmentController_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterResultAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "GlobalNamespace/zzzz__BtsResultsEnvironmentController_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::*)()>(
    &::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>::get(),
                                    "get_name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation.Clean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::*)()>(
    &::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::Clean)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x221ced8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>::get(), "Clean",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation.SetCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::*)(
    ::UnityEngine::AddressableAssets::AssetReference*, ::GlobalNamespace::BTSCharacter*, bool)>(
    &::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::SetCharacter)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x221ca80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>::get(),
                                    "SetCharacter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AssetReference*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSCharacter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::*)()>(
    &::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__placeTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____placeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__placeTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____placeTransform;
}
constexpr void GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_set__placeTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____placeTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterResultAnimationController>&
GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__animationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationController;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterResultAnimationController> const&
GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__animationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationController;
}
constexpr void GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_set__animationController(
    ::UnityW<::GlobalNamespace::BTSCharacterResultAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__animationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__animationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClip;
}
constexpr void GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_set__animationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacter>& GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__btsCharacter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacter;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacter> const& GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__btsCharacter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacter;
}
constexpr void GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_set__btsCharacter(::UnityW<::GlobalNamespace::BTSCharacter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____btsCharacter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AddressableAssets::AssetReference*&
GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__btsCharacterAssetReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterAssetReference;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const&
GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_get__btsCharacterAssetReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterAssetReference;
}
constexpr void
GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__cordl_internal_set__btsCharacterAssetReference(::UnityEngine::AddressableAssets::AssetReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____btsCharacterAssetReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::get_name() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>::get(),
                                  "get_name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::Clean() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>::get(), "Clean",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::SetCharacter(::UnityEngine::AddressableAssets::AssetReference* assetReference,
                                                                                                                   ::GlobalNamespace::BTSCharacter* btsCharacter, bool alternativeMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>::get(),
                                  "SetCharacter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AddressableAssets::AssetReference*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSCharacter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetReference, btsCharacter, alternativeMaterial);
}
inline ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*
GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>());
}
inline void GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation() {}
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)(int32_t)>(
    &::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x221ceb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(
    &::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x221d050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(
    &::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x221d054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(
    &::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(
    &::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x221d11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::*)()>(
    &::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221d15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BtsResultsEnvironmentController>& GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BtsResultsEnvironmentController> const&
GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BtsResultsEnvironmentController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*
GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>(__1__state));
}
inline void GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11::__BtsResultsEnvironmentController___DestroyCharactersDelayed_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BtsResultsEnvironmentController::Setup)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x221c34c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.SpawnBtsCharacters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)(
    ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, bool)>(&::GlobalNamespace::BtsResultsEnvironmentController::SpawnBtsCharacters)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x221c830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), "SpawnBtsCharacters", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)(bool)>(
    &::GlobalNamespace::BtsResultsEnvironmentController::Activate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x221cb4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.Deactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)(bool)>(
    &::GlobalNamespace::BtsResultsEnvironmentController::Deactivate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x221cbf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.DestroyCharactersDelayed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BtsResultsEnvironmentController::*)()>(
    &::GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersDelayed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x221ce48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(),
                                                                               "DestroyCharactersDelayed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController.DestroyCharactersAndStopAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)()>(
    &::GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersAndStopAnimations)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x221cdc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(),
                                                 "DestroyCharactersAndStopAnimations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BtsResultsEnvironmentController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BtsResultsEnvironmentController::*)()>(
    &::GlobalNamespace::BtsResultsEnvironmentController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x221cfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__btsCharacterAnimationWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterAnimationWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__btsCharacterAnimationWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterAnimationWrapper;
}
constexpr void GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_set__btsCharacterAnimationWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____btsCharacterAnimationWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterDataModel>& GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__btsCharacterDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterDataModel;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterDataModel> const& GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__btsCharacterDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterDataModel;
}
constexpr void GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_set__btsCharacterDataModel(::UnityW<::GlobalNamespace::BTSCharacterDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____btsCharacterDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__btsCharactersResultsAppearPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharactersResultsAppearPlayableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__btsCharactersResultsAppearPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharactersResultsAppearPlayableDirector;
}
constexpr void GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_set__btsCharactersResultsAppearPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____btsCharactersResultsAppearPlayableDirector)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                   ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*>&
GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__resultPlacesWithAnimations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultPlacesWithAnimations;
}
constexpr ::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
                   ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*> const&
GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__resultPlacesWithAnimations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultPlacesWithAnimations;
}
constexpr void GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_set__resultPlacesWithAnimations(
    ::ArrayW<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*,
             ::Array<::GlobalNamespace::__BtsResultsEnvironmentController__BTSResultCharacterPlaceWithAnimation*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultPlacesWithAnimations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__handles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const&
GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_get__handles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handles;
}
constexpr void GlobalNamespace::BtsResultsEnvironmentController::__cordl_internal_set__handles(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BtsResultsEnvironmentController::Setup(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData);
}
inline void GlobalNamespace::BtsResultsEnvironmentController::SpawnBtsCharacters(::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId* btsCharacterPrefabToSpawn, bool useAlternativeMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), "SpawnBtsCharacters", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btsCharacterPrefabToSpawn, useAlternativeMaterial);
}
/// @param immediately: bool (default: false)
inline void GlobalNamespace::BtsResultsEnvironmentController::Activate(bool immediately) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, immediately);
}
/// @param immediately: bool (default: false)
inline void GlobalNamespace::BtsResultsEnvironmentController::Deactivate(bool immediately) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, immediately);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersDelayed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(),
                                                                             "DestroyCharactersDelayed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BtsResultsEnvironmentController::DestroyCharactersAndStopAnimations() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(), "DestroyCharactersAndStopAnimations",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BtsResultsEnvironmentController* GlobalNamespace::BtsResultsEnvironmentController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BtsResultsEnvironmentController*>());
}
inline void GlobalNamespace::BtsResultsEnvironmentController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BtsResultsEnvironmentController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BtsResultsEnvironmentController::BtsResultsEnvironmentController() {}
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BtsResultsEnvironmentController::kCharacterDisplayEventType{ static_cast<int32_t>(0x28) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
