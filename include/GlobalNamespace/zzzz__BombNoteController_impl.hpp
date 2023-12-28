#pragma once
#include "GlobalNamespace/zzzz__NoteController_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__BombNoteController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)(
    ::GlobalNamespace::NoteData*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t)>(&::GlobalNamespace::BombNoteController::Init)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2378ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2383008;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2383290;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.NoteDidPassMissedMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::NoteDidPassMissedMarker)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2383544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.HandleDidPassHalfJump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::HandleDidPassHalfJump)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2383740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                               "HandleDidPassHalfJump", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.HandleWasCutBySaber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::BombNoteController::HandleWasCutBySaber)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2383764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), "HandleWasCutBySaber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.NoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::NoteDidStartDissolving)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2383bf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.HiddenStateDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)(bool)>(
    &::GlobalNamespace::BombNoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2383c18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)(bool)>(&::GlobalNamespace::BombNoteController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2383c3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombNoteController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombNoteController::*)()>(&::GlobalNamespace::BombNoteController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2383c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CuttableBySaber*& GlobalNamespace::BombNoteController::__get__cuttableBySaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaber;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CuttableBySaber*> const& GlobalNamespace::BombNoteController::__get__cuttableBySaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBySaber;
}
constexpr void GlobalNamespace::BombNoteController::__set__cuttableBySaber(::GlobalNamespace::CuttableBySaber* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cuttableBySaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::BombNoteController::__get__wrapperGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::BombNoteController::__get__wrapperGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr void GlobalNamespace::BombNoteController::__set__wrapperGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____wrapperGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BombNoteController::Init(::GlobalNamespace::NoteData* noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos,
                                                      ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData, worldRotation, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity);
}
inline void GlobalNamespace::BombNoteController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::NoteDidPassMissedMarker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                             "NoteDidPassMissedMarker", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::HandleDidPassHalfJump() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                             "HandleDidPassHalfJump", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::HandleWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                     ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), "HandleWasCutBySaber", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::BombNoteController::NoteDidStartDissolving() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(),
                                                                             "NoteDidStartDissolving", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombNoteController::HiddenStateDidChange(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), "HiddenStateDidChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide);
}
inline void GlobalNamespace::BombNoteController::Pause(bool pause) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), "Pause", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pause);
}
inline ::GlobalNamespace::BombNoteController* GlobalNamespace::BombNoteController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BombNoteController*>());
}
inline void GlobalNamespace::BombNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombNoteController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombNoteController::BombNoteController() {}
//  Writing Method size for method: ::GlobalNamespace::__BombNoteController__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BombNoteController__Pool::*)()>(&::GlobalNamespace::__BombNoteController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2383ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BombNoteController__Pool*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__BombNoteController__Pool* GlobalNamespace::__BombNoteController__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BombNoteController__Pool*>());
}
inline void GlobalNamespace::__BombNoteController__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BombNoteController__Pool*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BombNoteController__Pool::__BombNoteController__Pool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
