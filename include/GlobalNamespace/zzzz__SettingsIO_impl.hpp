#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsIO.hpp"
#include "BeatSaber/Settings/zzzz__Settings_impl.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_impl.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsIO_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__SettingsIO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__LoadAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsIO__LoadAsync_d__15::*)()>(
    &::GlobalNamespace::SettingsIO__LoadAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x10a8;
  constexpr static std::size_t addrs = 0x31bf0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__LoadAsync_d__15>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__LoadAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsIO__LoadAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SettingsIO__LoadAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x31c0174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__LoadAsync_d__15>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsIO__LoadAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__LoadAsync_d__15>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsIO__LoadAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__LoadAsync_d__15>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsIO__LoadAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsIO__LoadAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Settings::Settings>", modifiers: "", def_value: Some("{}") }, CppParam { name: "platform", ty:
// "::GlobalNamespace::HardwareCategory", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_settings_5__2", ty: "::BeatSaber::Settings::Settings", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mainData_5__3", ty: "::StringW", modifiers: "", def_value: Some("{}")
// }]
constexpr ::GlobalNamespace::SettingsIO__LoadAsync_d__15::SettingsIO__LoadAsync_d__15(int32_t __1__state,
                                                                                      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::Settings::Settings> __t__builder,
                                                                                      ::GlobalNamespace::HardwareCategory platform, ::GlobalNamespace::IFileStorage* fileStorage,
                                                                                      ::BeatSaber::Settings::Settings _settings_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__3, ::StringW _mainData_5__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->platform = platform;
  this->fileStorage = fileStorage;
  this->_settings_5__2 = _settings_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
  this->_mainData_5__3 = _mainData_5__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsIO__LoadAsync_d__15::SettingsIO__LoadAsync_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__SaveAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsIO__SaveAsync_d__14::*)()>(
    &::GlobalNamespace::SettingsIO__SaveAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x31c01f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__SaveAsync_d__14>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__SaveAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsIO__SaveAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SettingsIO__SaveAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31c0970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__SaveAsync_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsIO__SaveAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__SaveAsync_d__14>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsIO__SaveAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__SaveAsync_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsIO__SaveAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsIO__SaveAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "settings", ty: "::BeatSaber::Settings::Settings", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_data_5__2", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SettingsIO__SaveAsync_d__14::SettingsIO__SaveAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                      ::BeatSaber::Settings::Settings settings, ::GlobalNamespace::IFileStorage* fileStorage, ::StringW _data_5__2,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->settings = settings;
  this->fileStorage = fileStorage;
  this->_data_5__2 = _data_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsIO__SaveAsync_d__14::SettingsIO__SaveAsync_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__WipeAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsIO__WipeAsync_d__13::*)()>(
    &::GlobalNamespace::SettingsIO__WipeAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x1168;
  constexpr static std::size_t addrs = 0x31c09dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__WipeAsync_d__13>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__WipeAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsIO__WipeAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SettingsIO__WipeAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x31c1b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__WipeAsync_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsIO__WipeAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__WipeAsync_d__13>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsIO__WipeAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO__WipeAsync_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsIO__WipeAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsIO__WipeAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SettingsIO__WipeAsync_d__13::SettingsIO__WipeAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                      ::GlobalNamespace::IFileStorage* fileStorage, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->fileStorage = fileStorage;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsIO__WipeAsync_d__13::SettingsIO__WipeAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.get_SettingsPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::GlobalNamespace::SettingsIO::get_SettingsPath)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x31be134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "get_SettingsPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.set_SettingsPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::SettingsIO::set_SettingsPath)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x31be248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "set_SettingsPath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::SettingsIO::Init)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x31be384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.WipeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::GlobalNamespace::IFileStorage*)>(&::GlobalNamespace::SettingsIO::WipeAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x31be3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "WipeAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::GlobalNamespace::IFileStorage*, ::BeatSaber::Settings::Settings)>(
    &::GlobalNamespace::SettingsIO::SaveAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x31be4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::Settings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.LoadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Threading::Tasks::Task_1<::BeatSaber::Settings::Settings>* (*)(::GlobalNamespace::IFileStorage*, ::GlobalNamespace::HardwareCategory)>(&::GlobalNamespace::SettingsIO::LoadAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x31be584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "LoadAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HardwareCategory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::Settings::Settings (*)(::GlobalNamespace::IFileStorage*, ::GlobalNamespace::HardwareCategory)>(
    &::GlobalNamespace::SettingsIO::Load)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x31be678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HardwareCategory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ByRef<::BeatSaber::Settings::Settings>)>(&::GlobalNamespace::SettingsIO::Encode)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x31beec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.Decode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::BeatSaber::Settings::Settings>, ::StringW)>(&::GlobalNamespace::SettingsIO::Decode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x31bec90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsIO::setStaticF__settingsPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_settingsPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SettingsIO::getStaticF__settingsPath() {
  return ::cordl_internals::getStaticField<::StringW, "_settingsPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get>();
}
inline void GlobalNamespace::SettingsIO::setStaticF__lock(::System::Threading::SemaphoreSlim* value) {
  ::cordl_internals::setStaticField<::System::Threading::SemaphoreSlim*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get>(
      std::forward<::System::Threading::SemaphoreSlim*>(value));
}
inline ::System::Threading::SemaphoreSlim* GlobalNamespace::SettingsIO::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Threading::SemaphoreSlim*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get>();
}
inline ::StringW GlobalNamespace::SettingsIO::get_SettingsPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "get_SettingsPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsIO::set_SettingsPath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "set_SettingsPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SettingsIO::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SettingsIO::WipeAsync(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "WipeAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, fileStorage);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SettingsIO::SaveAsync(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::Settings::Settings settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Settings::Settings>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, fileStorage, settings);
}
inline ::System::Threading::Tasks::Task_1<::BeatSaber::Settings::Settings>* GlobalNamespace::SettingsIO::LoadAsync(::GlobalNamespace::IFileStorage* fileStorage,
                                                                                                                   ::GlobalNamespace::HardwareCategory platform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "LoadAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HardwareCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::Settings::Settings>*, false>(nullptr, ___internal_method, fileStorage, platform);
}
inline ::BeatSaber::Settings::Settings GlobalNamespace::SettingsIO::Load(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::HardwareCategory platform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HardwareCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::Settings, false>(nullptr, ___internal_method, fileStorage, platform);
}
inline ::StringW GlobalNamespace::SettingsIO::Encode(::ByRef<::BeatSaber::Settings::Settings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, settings);
}
inline bool GlobalNamespace::SettingsIO::Decode(::ByRef<::BeatSaber::Settings::Settings> settings, ::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsIO*>::get(), "Decode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::Settings::Settings>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, settings, text);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsIO::SettingsIO() {}
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::SettingsIO::kStorageLoadPreference{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::SettingsIO::kStorageSavePreference{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::SettingsIO::kLegacyV2StoragePreference{ static_cast<int32_t>(0x1) };
