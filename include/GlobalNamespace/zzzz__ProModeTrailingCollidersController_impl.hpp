#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProModeTrailingCollidersController_def.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProModeTrailingCollidersController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProModeTrailingCollidersController::*)()>(
    &::GlobalNamespace::ProModeTrailingCollidersController::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x238b9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProModeTrailingCollidersController*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProModeTrailingCollidersController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProModeTrailingCollidersController::*)()>(
    &::GlobalNamespace::ProModeTrailingCollidersController::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x238ba7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProModeTrailingCollidersController*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProModeTrailingCollidersController.HandleNoteDidMoveInJumpPhase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProModeTrailingCollidersController::*)()>(
    &::GlobalNamespace::ProModeTrailingCollidersController::HandleNoteDidMoveInJumpPhase)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x238bb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProModeTrailingCollidersController*>::get(),
                                                                               "HandleNoteDidMoveInJumpPhase", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProModeTrailingCollidersController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ProModeTrailingCollidersController::*)()>(
    &::GlobalNamespace::ProModeTrailingCollidersController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238bcbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProModeTrailingCollidersController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoxCuttableBySaber*& GlobalNamespace::ProModeTrailingCollidersController::__get__mainSmallCuttableBySaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSmallCuttableBySaber;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoxCuttableBySaber*> const& GlobalNamespace::ProModeTrailingCollidersController::__get__mainSmallCuttableBySaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSmallCuttableBySaber;
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__set__mainSmallCuttableBySaber(::GlobalNamespace::BoxCuttableBySaber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSmallCuttableBySaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*>&
GlobalNamespace::ProModeTrailingCollidersController::__get__trailingSmallCuttableBySaberList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailingSmallCuttableBySaberList;
}
constexpr ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> const&
GlobalNamespace::ProModeTrailingCollidersController::__get__trailingSmallCuttableBySaberList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trailingSmallCuttableBySaberList;
}
constexpr void
GlobalNamespace::ProModeTrailingCollidersController::__set__trailingSmallCuttableBySaberList(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*, ::Array<::GlobalNamespace::BoxCuttableBySaber*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trailingSmallCuttableBySaberList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteMovement*& GlobalNamespace::ProModeTrailingCollidersController::__get__noteMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteMovement*> const& GlobalNamespace::ProModeTrailingCollidersController::__get__noteMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteMovement;
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__set__noteMovement(::GlobalNamespace::NoteMovement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteMovement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::ProModeTrailingCollidersController::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::ProModeTrailingCollidersController::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::ProModeTrailingCollidersController::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ProModeTrailingCollidersController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProModeTrailingCollidersController*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ProModeTrailingCollidersController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProModeTrailingCollidersController*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ProModeTrailingCollidersController::HandleNoteDidMoveInJumpPhase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProModeTrailingCollidersController*>::get(),
                                                                             "HandleNoteDidMoveInJumpPhase", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ProModeTrailingCollidersController* GlobalNamespace::ProModeTrailingCollidersController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ProModeTrailingCollidersController*>());
}
inline void GlobalNamespace::ProModeTrailingCollidersController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ProModeTrailingCollidersController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProModeTrailingCollidersController::ProModeTrailingCollidersController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
