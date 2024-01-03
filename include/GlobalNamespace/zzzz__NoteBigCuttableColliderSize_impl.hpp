#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__NoteBigCuttableColliderSize_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2386ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(
    &::GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2386b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.HandleNoteControllerDidInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)(::GlobalNamespace::NoteControllerBase*)>(
    &::GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2386c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr GlobalNamespace::NoteBigCuttableColliderSize::operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::NoteController*& GlobalNamespace::NoteBigCuttableColliderSize::__get__noteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> const& GlobalNamespace::NoteBigCuttableColliderSize::__get__noteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__noteController(::GlobalNamespace::NoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::BoxCollider*& GlobalNamespace::NoteBigCuttableColliderSize::__get__boxCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxCollider;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> const& GlobalNamespace::NoteBigCuttableColliderSize::__get__boxCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxCollider;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__boxCollider(::UnityEngine::BoxCollider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boxCollider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteBigCuttableColliderSize::__get__defaultColliderSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColliderSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteBigCuttableColliderSize::__get__defaultColliderSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColliderSize;
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__defaultColliderSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultColliderSize = value;
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline ::GlobalNamespace::NoteBigCuttableColliderSize* GlobalNamespace::NoteBigCuttableColliderSize::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteBigCuttableColliderSize*>());
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteBigCuttableColliderSize::NoteBigCuttableColliderSize() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
