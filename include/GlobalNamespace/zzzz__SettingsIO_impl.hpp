#pragma once
// IWYU pragma private; include "GlobalNamespace\SettingsIO.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsIO__LoadAsync_d__15::*)()>(&::GlobalNamespace::SettingsIO__LoadAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x10a8;
  constexpr static std::size_t addrs = 0x328f020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__LoadAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__LoadAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsIO__LoadAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SettingsIO__LoadAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32900c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__LoadAsync_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsIO__LoadAsync_d__15::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__LoadAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SettingsIO__LoadAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__LoadAsync_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsIO__LoadAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsIO__LoadAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsIO__SaveAsync_d__14::*)()>(&::GlobalNamespace::SettingsIO__SaveAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x3290148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__SaveAsync_d__14>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__SaveAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsIO__SaveAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SettingsIO__SaveAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32908c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__SaveAsync_d__14>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsIO__SaveAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__SaveAsync_d__14>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SettingsIO__SaveAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__SaveAsync_d__14>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsIO__SaveAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsIO__SaveAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsIO__WipeAsync_d__13::*)()>(&::GlobalNamespace::SettingsIO__WipeAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x1168;
  constexpr static std::size_t addrs = 0x3290930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__WipeAsync_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO__WipeAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsIO__WipeAsync_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::SettingsIO__WipeAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3291a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__WipeAsync_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsIO__WipeAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__WipeAsync_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SettingsIO__WipeAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO__WipeAsync_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::SettingsIO__WipeAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SettingsIO__WipeAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::SettingsIO::get_SettingsPath)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x328e088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "get_SettingsPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.set_SettingsPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::SettingsIO::set_SettingsPath)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x328e19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "set_SettingsPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SettingsIO::Init)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x328e2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.WipeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::GlobalNamespace::IFileStorage*)>(&::GlobalNamespace::SettingsIO::WipeAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x328e350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "WipeAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::GlobalNamespace::IFileStorage*, ::BeatSaber::Settings::Settings)>(
    &::GlobalNamespace::SettingsIO::SaveAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x328e404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(),
                                                             { "SaveAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::BeatSaber::Settings::Settings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::Settings::Settings>* (*)(::GlobalNamespace::IFileStorage*, ::GlobalNamespace::HardwareCategory)>(
    &::GlobalNamespace::SettingsIO::LoadAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x328e4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(),
                                                             { "LoadAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Settings::Settings (*)(::GlobalNamespace::IFileStorage*, ::GlobalNamespace::HardwareCategory)>(
    &::GlobalNamespace::SettingsIO::Load)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x328e5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(),
                                                             { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::BeatSaber::Settings::Settings>)>(&::GlobalNamespace::SettingsIO::Encode)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x328ee18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "Encode", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsIO.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::BeatSaber::Settings::Settings>, ::StringW)>(&::GlobalNamespace::SettingsIO::Decode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x328ebe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "Decode", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SettingsIO::setStaticF__settingsPath(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_settingsPath", ::GlobalNamespace::SettingsIO*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SettingsIO::getStaticF__settingsPath() {
  return ::cordl_internals::getStaticField<::StringW, "_settingsPath", ::GlobalNamespace::SettingsIO*>();
}
inline void GlobalNamespace::SettingsIO::setStaticF__lock(::System::Threading::SemaphoreSlim* value) {
  ::cordl_internals::setStaticField<::System::Threading::SemaphoreSlim*, "_lock", ::GlobalNamespace::SettingsIO*>(std::forward<::System::Threading::SemaphoreSlim*>(value));
}
inline ::System::Threading::SemaphoreSlim* GlobalNamespace::SettingsIO::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Threading::SemaphoreSlim*, "_lock", ::GlobalNamespace::SettingsIO*>();
}
inline ::StringW GlobalNamespace::SettingsIO::get_SettingsPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "get_SettingsPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SettingsIO::set_SettingsPath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "set_SettingsPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SettingsIO::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SettingsIO::WipeAsync(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "WipeAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, fileStorage);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SettingsIO::SaveAsync(::GlobalNamespace::IFileStorage* fileStorage, ::BeatSaber::Settings::Settings settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(),
                                                           { "SaveAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::BeatSaber::Settings::Settings>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, fileStorage, settings);
}
inline ::System::Threading::Tasks::Task_1<::BeatSaber::Settings::Settings>* GlobalNamespace::SettingsIO::LoadAsync(::GlobalNamespace::IFileStorage* fileStorage,
                                                                                                                   ::GlobalNamespace::HardwareCategory platform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(),
                                                           { "LoadAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::Settings::Settings>*>(nullptr, ___internal_method, fileStorage, platform);
}
inline ::BeatSaber::Settings::Settings GlobalNamespace::SettingsIO::Load(::GlobalNamespace::IFileStorage* fileStorage, ::GlobalNamespace::HardwareCategory platform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(),
                                                           { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::GlobalNamespace::HardwareCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Settings::Settings>(nullptr, ___internal_method, fileStorage, platform);
}
inline ::StringW GlobalNamespace::SettingsIO::Encode(::by_ref<::BeatSaber::Settings::Settings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "Encode", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings);
}
inline bool GlobalNamespace::SettingsIO::Decode(::by_ref<::BeatSaber::Settings::Settings> settings, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsIO*>(), { "Decode", {}, { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings, text);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsIO::SettingsIO() {}
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::SettingsIO::kStorageLoadPreference{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::SettingsIO::kStorageSavePreference{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::SettingsIO::kLegacyV2StoragePreference{ static_cast<int32_t>(0x1) };
