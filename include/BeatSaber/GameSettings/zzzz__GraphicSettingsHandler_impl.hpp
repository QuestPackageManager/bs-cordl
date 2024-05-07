#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/GraphicSettingsHandler.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataHandler_1_impl.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__GraphicSettingsHandler_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "BeatSaber/GameSettings/zzzz__GraphicSettingsHandler_def.hpp"
#include "BeatSaber/GameSettings/zzzz__GraphicSettings_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__PerformancePreset_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::*)()>(
    &::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x105e798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x105eb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BeatSaber::GameSettings::GraphicSettingsHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder, ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14::__GraphicSettingsHandler___TryUpdateCurrentPerformancePresetAsync_d__14() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::*)()>(
    &::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x105eb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x105f038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BeatSaber::GameSettings::GraphicSettingsHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::__GraphicSettingsHandler___PerformPostLoadAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder, ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::__GraphicSettingsHandler___PerformPostLoadAsync_d__15::__GraphicSettingsHandler___PerformPostLoadAsync_d__15() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::*)()>(
    &::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x105f090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x105f33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BeatSaber::GameSettings::GraphicSettingsHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::__GraphicSettingsHandler___InternalLoadAsync_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::SaveDataCore::SaveDataResult> __t__builder, ::BeatSaber::GameSettings::GraphicSettingsHandler* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::__GraphicSettingsHandler___InternalLoadAsync_d__16::__GraphicSettingsHandler___InternalLoadAsync_d__16() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(
    &::BeatSaber::GameSettings::GraphicSettingsHandler::get_version)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x105e028;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.get_firstVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(
    &::BeatSaber::GameSettings::GraphicSettingsHandler::get_firstVersion)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x105e09c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.get_fileNameWithExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(
    &::BeatSaber::GameSettings::GraphicSettingsHandler::get_fileNameWithExtension)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x105e110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.get_preferredStorageLocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StoragePreference (::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(
    &::BeatSaber::GameSettings::GraphicSettingsHandler::get_preferredStorageLocation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105e150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::GraphicSettingsHandler::*)(::GlobalNamespace::IFileStorage*)>(
    &::BeatSaber::GameSettings::GraphicSettingsHandler::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x105e158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::GraphicSettingsHandler::*)(
    ::GlobalNamespace::IFileStorage*, ::BeatSaber::GameSettings::GraphicSettings*)>(&::BeatSaber::GameSettings::GraphicSettingsHandler::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x105e1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::GraphicSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.TryGetCurrentPerformancePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::GameSettings::GraphicSettingsHandler::*)(
    ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>)>(&::BeatSaber::GameSettings::GraphicSettingsHandler::TryGetCurrentPerformancePreset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x105e210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), "TryGetCurrentPerformancePreset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.TryGetCurrentPerformancePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::GameSettings::GraphicSettingsHandler::*)(
    ::StringW, ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>)>(&::BeatSaber::GameSettings::GraphicSettingsHandler::TryGetCurrentPerformancePreset)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x105e2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), "TryGetCurrentPerformancePreset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.TryUpdateCurrentPerformancePresetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* (
    ::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(&::BeatSaber::GameSettings::GraphicSettingsHandler::TryUpdateCurrentPerformancePresetAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x105e3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                 "TryUpdateCurrentPerformancePresetAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.PerformPostLoadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* (
    ::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(&::BeatSaber::GameSettings::GraphicSettingsHandler::PerformPostLoadAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x105e4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                                               "PerformPostLoadAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.InternalLoadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* (
    ::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(&::BeatSaber::GameSettings::GraphicSettingsHandler::InternalLoadAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x105e5d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::SaveDataCore::SaveDataResult (::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(
    &::BeatSaber::GameSettings::GraphicSettingsHandler::Load)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x105e6c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::GraphicSettingsHandler.__n__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* (
    ::BeatSaber::GameSettings::GraphicSettingsHandler::*)()>(&::BeatSaber::GameSettings::GraphicSettingsHandler::__n__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x105e750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                                               "<>n__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::PerformancePresets::PerformancePreset*& BeatSaber::GameSettings::GraphicSettingsHandler::__cordl_internal_get__currentPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPreset;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::PerformancePresets::PerformancePreset*> const& BeatSaber::GameSettings::GraphicSettingsHandler::__cordl_internal_get__currentPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPreset;
}
constexpr void BeatSaber::GameSettings::GraphicSettingsHandler::__cordl_internal_set__currentPreset(::BeatSaber::PerformancePresets::PerformancePreset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::GameSettings::GraphicSettingsHandler::__cordl_internal_get__currentPresetKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPresetKey;
}
constexpr ::StringW const& BeatSaber::GameSettings::GraphicSettingsHandler::__cordl_internal_get__currentPresetKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPresetKey;
}
constexpr void BeatSaber::GameSettings::GraphicSettingsHandler::__cordl_internal_set__currentPresetKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPresetKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Version* BeatSaber::GameSettings::GraphicSettingsHandler::get_version() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline ::System::Version* BeatSaber::GameSettings::GraphicSettingsHandler::get_firstVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline ::StringW BeatSaber::GameSettings::GraphicSettingsHandler::get_fileNameWithExtension() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StoragePreference BeatSaber::GameSettings::GraphicSettingsHandler::get_preferredStorageLocation() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StoragePreference, false>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::GraphicSettingsHandler* BeatSaber::GameSettings::GraphicSettingsHandler::New_ctor(::GlobalNamespace::IFileStorage* fileStorage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::GraphicSettingsHandler*>(fileStorage));
}
inline void BeatSaber::GameSettings::GraphicSettingsHandler::_ctor(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage);
}
inline ::BeatSaber::GameSettings::GraphicSettingsHandler* BeatSaber::GameSettings::GraphicSettingsHandler::New_ctor(::GlobalNamespace::IFileStorage* fileStorage,
                                                                                                                    ::BeatSaber::GameSettings::GraphicSettings* instance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::GraphicSettingsHandler*>(fileStorage, instance));
}
inline void BeatSaber::GameSettings::GraphicSettingsHandler::_ctor(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::GameSettings::GraphicSettings* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::GraphicSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage, instance);
}
inline bool BeatSaber::GameSettings::GraphicSettingsHandler::TryGetCurrentPerformancePreset(ByRef<::BeatSaber::PerformancePresets::PerformancePreset*> currentPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), "TryGetCurrentPerformancePreset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentPreset);
}
inline bool BeatSaber::GameSettings::GraphicSettingsHandler::TryGetCurrentPerformancePreset(::StringW serializedEnvironmentName,
                                                                                            ByRef<::BeatSaber::PerformancePresets::PerformancePreset*> currentPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), "TryGetCurrentPerformancePreset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, serializedEnvironmentName, currentPreset);
}
inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BeatSaber::GameSettings::GraphicSettingsHandler::TryUpdateCurrentPerformancePresetAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                               "TryUpdateCurrentPerformancePresetAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BeatSaber::GameSettings::GraphicSettingsHandler::PerformPostLoadAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                                             "PerformPostLoadAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BeatSaber::GameSettings::GraphicSettingsHandler::InternalLoadAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method);
}
inline ::BGLib::SaveDataCore::SaveDataResult BeatSaber::GameSettings::GraphicSettingsHandler::Load() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::SaveDataResult, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BeatSaber::GameSettings::GraphicSettingsHandler::__n__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::GraphicSettingsHandler*>::get(),
                                                                             "<>n__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler::GraphicSettingsHandler() {}
