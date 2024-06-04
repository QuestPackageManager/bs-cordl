#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderController.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_impl.hpp"
#include "GlobalNamespace/zzzz__SliderController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateVector3SmoothValue_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderHeadDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderTailDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderIntensityEffect_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
#include "GlobalNamespace/zzzz__SliderMovement_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SliderController__LengthType::__SliderController__LengthType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__LengthType::__SliderController__LengthType() {}
constexpr ::GlobalNamespace::__SliderController__LengthType GlobalNamespace::__SliderController__LengthType::Short{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__SliderController__LengthType GlobalNamespace::__SliderController__LengthType::Medium{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__SliderController__LengthType GlobalNamespace::__SliderController__LengthType::Long{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool__Short._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController__Pool__Short::*)()>(
    &::GlobalNamespace::__SliderController__Pool__Short::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26c7d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Short*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SliderController__Pool__Short* GlobalNamespace::__SliderController__Pool__Short::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderController__Pool__Short*>());
}
inline void GlobalNamespace::__SliderController__Pool__Short::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Short*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__Pool__Short::__SliderController__Pool__Short() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool__Medium._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController__Pool__Medium::*)()>(
    &::GlobalNamespace::__SliderController__Pool__Medium::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26c7dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Medium*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SliderController__Pool__Medium* GlobalNamespace::__SliderController__Pool__Medium::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderController__Pool__Medium*>());
}
inline void GlobalNamespace::__SliderController__Pool__Medium::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Medium*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__Pool__Medium::__SliderController__Pool__Medium() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool__Long._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController__Pool__Long::*)()>(
    &::GlobalNamespace::__SliderController__Pool__Long::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26c7e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Long*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SliderController__Pool__Long* GlobalNamespace::__SliderController__Pool__Long::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderController__Pool__Long*>());
}
inline void GlobalNamespace::__SliderController__Pool__Long::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool__Long*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__Pool__Long::__SliderController__Pool__Long() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController__Pool::*)(
    ::GlobalNamespace::__SliderController__Pool__Short*, ::GlobalNamespace::__SliderController__Pool__Medium*, ::GlobalNamespace::__SliderController__Pool__Long*)>(
    &::GlobalNamespace::__SliderController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26c7c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Short*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Medium*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Long*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool.GetPool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>>* (
    ::GlobalNamespace::__SliderController__Pool::*)(::GlobalNamespace::__SliderController__LengthType)>(&::GlobalNamespace::__SliderController__Pool::GetPool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26c7c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), "GetPool", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__LengthType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController__Pool.GetLengthFromSliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SliderController__LengthType (*)(
    ::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData)>(&::GlobalNamespace::__SliderController__Pool::GetLengthFromSliderData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26c7d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), "GetLengthFromSliderData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__SliderController__Pool__Short*& GlobalNamespace::__SliderController__Pool::__cordl_internal_get__shortPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Short*> const& GlobalNamespace::__SliderController__Pool::__cordl_internal_get__shortPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortPool;
}
constexpr void GlobalNamespace::__SliderController__Pool::__cordl_internal_set__shortPool(::GlobalNamespace::__SliderController__Pool__Short* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shortPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SliderController__Pool__Medium*& GlobalNamespace::__SliderController__Pool::__cordl_internal_get__mediumPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediumPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Medium*> const& GlobalNamespace::__SliderController__Pool::__cordl_internal_get__mediumPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediumPool;
}
constexpr void GlobalNamespace::__SliderController__Pool::__cordl_internal_set__mediumPool(::GlobalNamespace::__SliderController__Pool__Medium* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediumPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SliderController__Pool__Long*& GlobalNamespace::__SliderController__Pool::__cordl_internal_get__longPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderController__Pool__Long*> const& GlobalNamespace::__SliderController__Pool::__cordl_internal_get__longPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longPool;
}
constexpr void GlobalNamespace::__SliderController__Pool::__cordl_internal_set__longPool(::GlobalNamespace::__SliderController__Pool__Long* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____longPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__SliderController__Pool* GlobalNamespace::__SliderController__Pool::New_ctor(::GlobalNamespace::__SliderController__Pool__Short* shortPool,
                                                                                                        ::GlobalNamespace::__SliderController__Pool__Medium* mediumPool,
                                                                                                        ::GlobalNamespace::__SliderController__Pool__Long* longPool) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderController__Pool*>(shortPool, mediumPool, longPool));
}
inline void GlobalNamespace::__SliderController__Pool::_ctor(::GlobalNamespace::__SliderController__Pool__Short* shortPool, ::GlobalNamespace::__SliderController__Pool__Medium* mediumPool,
                                                             ::GlobalNamespace::__SliderController__Pool__Long* longPool) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Short*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Medium*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__Pool__Long*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shortPool, mediumPool, longPool);
}
inline ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>>* GlobalNamespace::__SliderController__Pool::GetPool(::GlobalNamespace::__SliderController__LengthType lengthType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), "GetPool", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__LengthType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>>*, false>(this, ___internal_method, lengthType);
}
inline ::GlobalNamespace::__SliderController__LengthType
GlobalNamespace::__SliderController__Pool::GetLengthFromSliderData(::GlobalNamespace::SliderData* sliderNoteData,
                                                                   ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController__Pool*>::get(), "GetLengthFromSliderData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SliderController__LengthType, false>(nullptr, ___internal_method, sliderNoteData, sliderSpawnData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController__Pool::__SliderController__Pool() {}
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)(int32_t)>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26c7184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26c7e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::MoveNext)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x26c7e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c8250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26c8258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::*)()>(
    &::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c8298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__SliderController___DissolveCoroutine_d__70::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__SliderController___DissolveCoroutine_d__70::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__SliderController___DissolveCoroutine_d__70::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__SliderController___DissolveCoroutine_d__70::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__SliderController___DissolveCoroutine_d__70::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__SliderController___DissolveCoroutine_d__70::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SliderController>& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SliderController> const& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SliderController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
inline ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70* GlobalNamespace::__SliderController___DissolveCoroutine_d__70::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>(__1__state));
}
inline void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__SliderController___DissolveCoroutine_d__70::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderController___DissolveCoroutine_d__70*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SliderController___DissolveCoroutine_d__70::__SliderController___DissolveCoroutine_d__70() {}
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidFinishJumpEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDidFinishJumpEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c50bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderDidFinishJumpEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidStartDissolvingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c50c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderDidStartDissolvingEvent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidDissolveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDidDissolveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c50cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderDidDissolveEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderHeadDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderHeadDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c50d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderHeadDidMovePastCutMark",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderTailDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* (
    ::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c50dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderTailDidMovePastCutMark",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_lengthType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SliderController__LengthType (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_lengthType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c50e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_lengthType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderData* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c50ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_saberInteractionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_saberInteractionParam)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26c50f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_saberInteractionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderMeshController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SliderMeshController> (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderMeshController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c515c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderMeshController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SliderMovement> (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c5164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_initColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_initColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26c516c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_initColor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_randomValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_randomValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c5178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_randomValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_zDistanceBetweenNotes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_zDistanceBetweenNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c5180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_zDistanceBetweenNotes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_jumpDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_jumpDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c5188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_jumpDistance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_headJumpOffsetY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_headJumpOffsetY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c5190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_headJumpOffsetY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c5198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_closeSmoothedSaberInteractionPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::FixedUpdateVector3SmoothValue* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_closeSmoothedSaberInteractionPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c51a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_closeSmoothedSaberInteractionPos",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderIntensityEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SliderIntensityEffect> (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderIntensityEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c51a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "get_sliderIntensityEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(
    ::GlobalNamespace::__SliderController__LengthType, ::GlobalNamespace::SliderData*, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t,
    float_t, float_t, float_t)>(&::GlobalNamespace::SliderController::Init)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x26c51b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__LengthType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x26c625c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x26c6590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::OnDestroy)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x26c677c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26c6c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::FixedUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26c6d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "FixedUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::ManualUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26c6c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "ManualUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.UpdateMaterialPropertyBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(float_t)>(
    &::GlobalNamespace::SliderController::UpdateMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x26c611c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "UpdateMaterialPropertyBlock",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.DissolveCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SliderController::*)(float_t)>(
    &::GlobalNamespace::SliderController::DissolveCoroutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26c710c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "DissolveCoroutine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Dissolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(float_t)>(&::GlobalNamespace::SliderController::Dissolve)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26c71ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Dissolve", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::Hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26c7234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Hide", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26c7260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Pause", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.IsNoteStartOfThisSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::SliderController::IsNoteStartOfThisSlider)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26c7270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "IsNoteStartOfThisSlider", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleMovementDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::HandleMovementDidFinish)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x26c7358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "HandleMovementDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleHeadDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::HandleHeadDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x26c752c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "HandleHeadDidMovePastCutMark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleTailDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::HandleTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x26c774c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "HandleTailDidMovePastCutMark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::SliderController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26c792c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "HandleNoteWasMissed", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::SliderController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26c79a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleFadeInDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::HandleFadeInDidStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c7a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                               "HandleFadeInDidStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.SetSaberAttraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::SetSaberAttraction)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26c6040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "SetSaberAttraction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.GetSaberInteractionPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::Saber*)>(
    &::GlobalNamespace::SliderController::GetSaberInteractionPoint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26c60c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "GetSaberInteractionPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x26c7ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
constexpr GlobalNamespace::SliderController::operator ::GlobalNamespace::IBeatmapObjectController*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapObjectController"
constexpr ::GlobalNamespace::IBeatmapObjectController* GlobalNamespace::SliderController::i___GlobalNamespace__IBeatmapObjectController() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect>& GlobalNamespace::SliderController::__cordl_internal_get__sliderIntensityEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderIntensityEffect;
}
constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect> const& GlobalNamespace::SliderController::__cordl_internal_get__sliderIntensityEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderIntensityEffect;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderIntensityEffect(::UnityW<::GlobalNamespace::SliderIntensityEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderIntensityEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SliderMeshController>& GlobalNamespace::SliderController::__cordl_internal_get__sliderMeshController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr ::UnityW<::GlobalNamespace::SliderMeshController> const& GlobalNamespace::SliderController::__cordl_internal_get__sliderMeshController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderMeshController(::UnityW<::GlobalNamespace::SliderMeshController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderMeshController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SliderMovement>& GlobalNamespace::SliderController::__cordl_internal_get__sliderMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMovement;
}
constexpr ::UnityW<::GlobalNamespace::SliderMovement> const& GlobalNamespace::SliderController::__cordl_internal_get__sliderMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMovement;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderMovement(::UnityW<::GlobalNamespace::SliderMovement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderMovement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__closeInteractionSaberPosSmoothParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeInteractionSaberPosSmoothParam;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__closeInteractionSaberPosSmoothParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeInteractionSaberPosSmoothParam;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__closeInteractionSaberPosSmoothParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeInteractionSaberPosSmoothParam = value;
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& GlobalNamespace::SliderController::__cordl_internal_get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& GlobalNamespace::SliderController::__cordl_internal_get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SliderController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SliderController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::SliderController::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::SliderController::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::SliderController::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::SliderController::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidFinishMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidFinishMovement;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*> const&
GlobalNamespace::SliderController::__cordl_internal_get__sliderDidFinishMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidFinishMovement;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderDidFinishMovement(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderDidFinishMovement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidStartDissolving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidStartDissolving;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*> const&
GlobalNamespace::SliderController::__cordl_internal_get__sliderDidStartDissolving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidStartDissolving;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderDidStartDissolving(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderDidStartDissolving)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidDissolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidDissolve;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*> const&
GlobalNamespace::SliderController::__cordl_internal_get__sliderDidDissolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidDissolve;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderDidDissolve(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderDidDissolve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderHeadDidMovePastCutMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderHeadDidMovePastCutMark;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*> const&
GlobalNamespace::SliderController::__cordl_internal_get__sliderHeadDidMovePastCutMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderHeadDidMovePastCutMark;
}
constexpr void
GlobalNamespace::SliderController::__cordl_internal_set__sliderHeadDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderHeadDidMovePastCutMark)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderTailDidMovePastCutMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderTailDidMovePastCutMark;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*> const&
GlobalNamespace::SliderController::__cordl_internal_get__sliderTailDidMovePastCutMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderTailDidMovePastCutMark;
}
constexpr void
GlobalNamespace::SliderController::__cordl_internal_set__sliderTailDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderTailDidMovePastCutMark)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SliderController__LengthType& GlobalNamespace::SliderController::__cordl_internal_get__lengthType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthType;
}
constexpr ::GlobalNamespace::__SliderController__LengthType const& GlobalNamespace::SliderController::__cordl_internal_get__lengthType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthType;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__lengthType(::GlobalNamespace::__SliderController__LengthType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lengthType = value;
}
constexpr ::GlobalNamespace::SliderData*& GlobalNamespace::SliderController::__cordl_internal_get__sliderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderData*> const& GlobalNamespace::SliderController::__cordl_internal_get__sliderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderData;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderData(::GlobalNamespace::SliderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SliderController::__cordl_internal_get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SliderController::__cordl_internal_get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__headJumpOffsetY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headJumpOffsetY;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__headJumpOffsetY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headJumpOffsetY;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__headJumpOffsetY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headJumpOffsetY = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__sliderDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDuration;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__sliderDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDuration;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SliderController::__cordl_internal_get__initColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SliderController::__cordl_internal_get__initColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initColor;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__initColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initColor = value;
}
constexpr bool& GlobalNamespace::SliderController::__cordl_internal_get__attractingSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attractingSaber;
}
constexpr bool const& GlobalNamespace::SliderController::__cordl_internal_get__attractingSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attractingSaber;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__attractingSaber(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attractingSaber = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__randomValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValue;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__randomValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValue;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__randomValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomValue = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__zDistanceBetweenNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zDistanceBetweenNotes;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__zDistanceBetweenNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zDistanceBetweenNotes;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__zDistanceBetweenNotes(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zDistanceBetweenNotes = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__jumpDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDistance;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__jumpDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDistance;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__jumpDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpDistance = value;
}
constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue*& GlobalNamespace::SliderController::__cordl_internal_get__closeSmoothedSaberInteractionPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeSmoothedSaberInteractionPos;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FixedUpdateVector3SmoothValue*> const&
GlobalNamespace::SliderController::__cordl_internal_get__closeSmoothedSaberInteractionPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeSmoothedSaberInteractionPos;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__closeSmoothedSaberInteractionPos(::GlobalNamespace::FixedUpdateVector3SmoothValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____closeSmoothedSaberInteractionPos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* GlobalNamespace::SliderController::get_sliderDidFinishJumpEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderDidFinishJumpEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* GlobalNamespace::SliderController::get_sliderDidStartDissolvingEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderDidStartDissolvingEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* GlobalNamespace::SliderController::get_sliderDidDissolveEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderDidDissolveEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* GlobalNamespace::SliderController::get_sliderHeadDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderHeadDidMovePastCutMark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* GlobalNamespace::SliderController::get_sliderTailDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderTailDidMovePastCutMark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SliderController__LengthType GlobalNamespace::SliderController::get_lengthType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_lengthType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SliderController__LengthType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderController::get_sliderData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_saberInteractionParam() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_saberInteractionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SliderMeshController> GlobalNamespace::SliderController::get_sliderMeshController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderMeshController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SliderMeshController>, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SliderMovement> GlobalNamespace::SliderController::get_sliderMovement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderMovement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SliderMovement>, false>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::SliderController::get_initColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_initColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_randomValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_randomValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_zDistanceBetweenNotes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_zDistanceBetweenNotes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_jumpDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_jumpDistance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_headJumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_headJumpOffsetY",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_sliderDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_sliderDuration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* GlobalNamespace::SliderController::get_closeSmoothedSaberInteractionPos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "get_closeSmoothedSaberInteractionPos",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FixedUpdateVector3SmoothValue*, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SliderIntensityEffect> GlobalNamespace::SliderController::get_sliderIntensityEffect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "get_sliderIntensityEffect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SliderIntensityEffect>, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Init(::GlobalNamespace::__SliderController__LengthType lengthType, ::GlobalNamespace::SliderData* sliderData, float_t worldRotation,
                                                    ::UnityEngine::Vector3 headNoteJumpStartPos, ::UnityEngine::Vector3 tailNoteJumpStartPos, ::UnityEngine::Vector3 headNoteJumpEndPos,
                                                    ::UnityEngine::Vector3 tailNoteJumpEndPos, float_t jumpDuration, float_t startNoteJumpGravity, float_t endNoteJumpGravity,
                                                    float_t noteUniformScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderController__LengthType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lengthType, sliderData, worldRotation, headNoteJumpStartPos, tailNoteJumpStartPos, headNoteJumpEndPos,
                                                          tailNoteJumpEndPos, jumpDuration, startNoteJumpGravity, endNoteJumpGravity, noteUniformScale);
}
inline void GlobalNamespace::SliderController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "FixedUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "ManualUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "UpdateMaterialPropertyBlock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeSinceHeadNoteJump);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SliderController::DissolveCoroutine(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "DissolveCoroutine",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, duration);
}
inline void GlobalNamespace::SliderController::Dissolve(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Dissolve",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, duration);
}
inline void GlobalNamespace::SliderController::Hide(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Hide", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide);
}
inline void GlobalNamespace::SliderController::Pause(bool pause) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "Pause", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pause);
}
inline bool GlobalNamespace::SliderController::IsNoteStartOfThisSlider(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "IsNoteStartOfThisSlider", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::SliderController::HandleMovementDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "HandleMovementDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleHeadDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "HandleHeadDidMovePastCutMark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleTailDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "HandleTailDidMovePastCutMark", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "HandleNoteWasMissed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::SliderController::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::SliderController::HandleFadeInDidStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(),
                                                                             "HandleFadeInDidStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::SetSaberAttraction(bool saberAttraction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "SetSaberAttraction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberAttraction);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SliderController::GetSaberInteractionPoint(::GlobalNamespace::Saber* saber) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), "GetSaberInteractionPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, saber);
}
inline ::GlobalNamespace::SliderController* GlobalNamespace::SliderController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderController*>());
}
inline void GlobalNamespace::SliderController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderController::SliderController() {}
