#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderSpawner.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3ae5320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::*)(
    ::GlobalNamespace::NoteData*, ::ByRef<::GlobalNamespace::NoteSpawnData>, bool)>(&::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3ae5424;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::*)(::GlobalNamespace::NoteData*, ::ByRef<::GlobalNamespace::NoteSpawnData>, bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3ae543c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::*)(
    ::ByRef<::GlobalNamespace::NoteSpawnData>, ::System::IAsyncResult*)>(&::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ae5508;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::Invoke(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNote) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNote);
}
inline ::System::IAsyncResult* GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::BeginInvoke(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                                                        bool forceIsFirstNote, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNote, callback, object);
}
inline void GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::EndInvoke(::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteSpawnData, result);
}
inline ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate* GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate::BurstSliderSpawner_ProcessNoteDataDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner.BezierCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::ByRef<::UnityEngine::Vector2>, ::ByRef<::UnityEngine::Vector2>)>(
        &::GlobalNamespace::BurstSliderSpawner::BezierCurve)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3ae4ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner*>::get(), "BezierCurve", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderSpawner.ProcessSliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::SliderData*, ::ByRef<::GlobalNamespace::SliderSpawnData>, bool, ::GlobalNamespace::VariableMovementDataProvider*,
                         ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*)>(&::GlobalNamespace::BurstSliderSpawner::ProcessSliderData)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x3ae4f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner*>::get(), "ProcessSliderData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::SliderSpawnData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstSliderSpawner::BezierCurve(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t t, ::ByRef<::UnityEngine::Vector2> pos,
                                                             ::ByRef<::UnityEngine::Vector2> tangent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner*>::get(), "BezierCurve", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p0, p1, p2, t, pos, tangent);
}
inline void GlobalNamespace::BurstSliderSpawner::ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData, bool forceIsFirstNote,
                                                                   ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider,
                                                                   ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate* processNoteData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderSpawner*>::get(), "ProcessSliderData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::SliderSpawnData>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sliderData, sliderSpawnData, forceIsFirstNote, variableMovementDataProvider, processNoteData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderSpawner::BurstSliderSpawner() {}
