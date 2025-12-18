#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.get_characterName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BTSCharacter::*)()>(&::GlobalNamespace::BTSCharacter::get_characterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31b4a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_characterName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.get_materialPropertyBlockController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MaterialPropertyBlockController> (::GlobalNamespace::BTSCharacter::*)()>(
    &::GlobalNamespace::BTSCharacter::get_materialPropertyBlockController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31b4a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_materialPropertyBlockController",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.get_animator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Animator> (::GlobalNamespace::BTSCharacter::*)()>(
    &::GlobalNamespace::BTSCharacter::get_animator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31b4a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_animator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.get_headTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::BTSCharacter::*)()>(
    &::GlobalNamespace::BTSCharacter::get_headTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x31b4a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_headTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter.SetAlternativeAnimationAndMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacter::*)(::UnityEngine::AnimationClip*, bool)>(
    &::GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x31b4a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "SetAlternativeAnimationAndMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacter::*)()>(&::GlobalNamespace::BTSCharacter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31b4e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BTSCharacter::__cordl_internal_get__characterName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterName;
}
constexpr ::StringW const& GlobalNamespace::BTSCharacter::__cordl_internal_get__characterName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterName;
}
constexpr void GlobalNamespace::BTSCharacter::__cordl_internal_set__characterName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____characterName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::BTSCharacter::__cordl_internal_get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::BTSCharacter::__cordl_internal_get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::BTSCharacter::__cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher>& GlobalNamespace::BTSCharacter::__cordl_internal_get__btsCharacterMaterialSwitcher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterMaterialSwitcher;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> const& GlobalNamespace::BTSCharacter::__cordl_internal_get__btsCharacterMaterialSwitcher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterMaterialSwitcher;
}
constexpr void GlobalNamespace::BTSCharacter::__cordl_internal_set__btsCharacterMaterialSwitcher(::UnityW<::GlobalNamespace::BTSCharacterMaterialSwitcher> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____btsCharacterMaterialSwitcher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::BTSCharacter::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::BTSCharacter::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::BTSCharacter::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BTSCharacter::__cordl_internal_get__headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BTSCharacter::__cordl_internal_get__headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr void GlobalNamespace::BTSCharacter::__cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::BTSCharacter::get_characterName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_characterName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> GlobalNamespace::BTSCharacter::get_materialPropertyBlockController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_materialPropertyBlockController",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Animator> GlobalNamespace::BTSCharacter::get_animator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_animator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animator>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::BTSCharacter::get_headTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "get_headTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial(::UnityEngine::AnimationClip* animation, bool alternativeMaterialOn) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), "SetAlternativeAnimationAndMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animation, alternativeMaterialOn);
}
inline void GlobalNamespace::BTSCharacter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacter* GlobalNamespace::BTSCharacter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BTSCharacter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacter::BTSCharacter() {}
