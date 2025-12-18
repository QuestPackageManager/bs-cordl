#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteBigCuttableColliderSize.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteBigCuttableColliderSize_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5727430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(
    &::GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5727504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.HandleNoteControllerDidInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)(::GlobalNamespace::NoteControllerBase*)>(
    &::GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5727610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), "HandleNoteControllerDidInit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5727684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NoteController>& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__noteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr ::UnityW<::GlobalNamespace::NoteController> const& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__noteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__boxCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__boxCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxCollider;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_set__boxCollider(::UnityW<::UnityEngine::BoxCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boxCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__defaultColliderSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColliderSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_get__defaultColliderSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColliderSize;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__cordl_internal_set__defaultColliderSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultColliderSize = value;
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), "HandleNoteControllerDidInit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteBigCuttableColliderSize* GlobalNamespace::NoteBigCuttableColliderSize::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteBigCuttableColliderSize*>());
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr GlobalNamespace::NoteBigCuttableColliderSize::operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr ::GlobalNamespace::INoteControllerDidInitEvent* GlobalNamespace::NoteBigCuttableColliderSize::i___GlobalNamespace__INoteControllerDidInitEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteBigCuttableColliderSize::NoteBigCuttableColliderSize() {}
