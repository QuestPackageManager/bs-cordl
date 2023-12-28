#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomNoteRotation_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomNoteRotation.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomNoteRotation::*)()>(&::GlobalNamespace::RandomNoteRotation::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x238bcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomNoteRotation*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomNoteRotation.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomNoteRotation::*)()>(&::GlobalNamespace::RandomNoteRotation::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x238bd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomNoteRotation*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomNoteRotation.HandleNoteControllerDidInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomNoteRotation::*)(::GlobalNamespace::NoteControllerBase*)>(
    &::GlobalNamespace::RandomNoteRotation::HandleNoteControllerDidInit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x238be7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomNoteRotation*>::get(), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomNoteRotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RandomNoteRotation::*)()>(&::GlobalNamespace::RandomNoteRotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238bea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomNoteRotation*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr GlobalNamespace::RandomNoteRotation::operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::NoteControllerBase*& GlobalNamespace::RandomNoteRotation::__get__noteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteControllerBase*> const& GlobalNamespace::RandomNoteRotation::__get__noteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr void GlobalNamespace::RandomNoteRotation::__set__noteController(::GlobalNamespace::NoteControllerBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::RandomNoteRotation::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::RandomNoteRotation::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::RandomNoteRotation::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RandomNoteRotation::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomNoteRotation*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RandomNoteRotation::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomNoteRotation*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RandomNoteRotation::HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomNoteRotation*>::get(), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline ::GlobalNamespace::RandomNoteRotation* GlobalNamespace::RandomNoteRotation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RandomNoteRotation*>());
}
inline void GlobalNamespace::RandomNoteRotation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RandomNoteRotation*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomNoteRotation::RandomNoteRotation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
