#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarSDK\AvatarDataModel.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartsModel_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarSaveData_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x327b49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x327b748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarSDK::AvatarDataModel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::AvatarDataModel__DeleteAsyncInternal_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel__DeleteAsyncInternal_d__23::AvatarDataModel__DeleteAsyncInternal_d__23() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x327b7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x327ba34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarSDK::AvatarDataModel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::AvatarDataModel__LoadInternalAsync_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel__LoadInternalAsync_d__19::AvatarDataModel__LoadInternalAsync_d__19() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x327bab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x327be4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::BeatAvatarSDK::AvatarDataModel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::AvatarDataModel__SaveInternalAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BeatSaber::BeatAvatarSDK::AvatarDataModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel__SaveInternalAsync_d__17::AvatarDataModel__SaveInternalAsync_d__17() {}
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.get_avatarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::BeatAvatarSDK::AvatarData* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::get_avatarData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327a8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "get_avatarData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.set_avatarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)(::BeatSaber::BeatAvatarSDK::AvatarData*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::set_avatarData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x327a8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "set_avatarData", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.add_didChangeAvatarDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::add_didChangeAvatarDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x327a990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(),
                                                             { "add_didChangeAvatarDataEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.remove_didChangeAvatarDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::remove_didChangeAvatarDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x327aa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(),
                                                             { "remove_didChangeAvatarDataEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.add_didSaveAvatarDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)(::System::Action*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::add_didSaveAvatarDataEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x327ab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "add_didSaveAvatarDataEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.remove_didSaveAvatarDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)(::System::Action*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::remove_didSaveAvatarDataEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x327abbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "remove_didSaveAvatarDataEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarDataModel::Init)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x327ac68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.RequestIsAvatarCreatedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::RequestIsAvatarCreatedAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327ad5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "RequestIsAvatarCreatedAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarDataModel::SaveAsync)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x327ad64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "SaveAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.SaveInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::SaveInternalAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x327ad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "SaveInternalAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarDataModel::LoadAsync)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x327ae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "LoadAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.LoadInternalAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::LoadInternalAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x327ae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "LoadInternalAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.LoadFromSaveDataAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>* (*)(::GlobalNamespace::IFileStorage*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::LoadFromSaveDataAsync)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x327af4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "LoadFromSaveDataAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)(::BeatSaber::BeatAvatarSDK::AvatarSaveData*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::Load)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x327afb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "Load", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.DeleteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::DeleteAsync)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x327b1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "DeleteAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.DeleteAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::DeleteAsyncInternal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x327b1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "DeleteAsyncInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.ReportAvatarChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarDataModel::ReportAvatarChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x327a970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "ReportAvatarChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.LoadFromCurrentVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::BeatAvatarSDK::AvatarData* (*)(::BeatSaber::BeatAvatarSDK::AvatarSaveData*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::LoadFromCurrentVersion)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x327b008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(),
                                                                                           { "LoadFromCurrentVersion", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.CreateDefaultAvatarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::BeatAvatarSDK::AvatarData* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::CreateDefaultAvatarData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x327b19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "CreateDefaultAvatarData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel.CreateRandomAvatarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::BeatAvatarSDK::AvatarData* (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(
    &::BeatSaber::BeatAvatarSDK::AvatarDataModel::CreateRandomAvatarData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x327b294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "CreateRandomAvatarData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarDataModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::AvatarDataModel::*)()>(&::BeatSaber::BeatAvatarSDK::AvatarDataModel::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x327b420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get_didChangeAvatarDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeAvatarDataEvent;
}
constexpr ::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* const& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get_didChangeAvatarDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeAvatarDataEvent;
}
constexpr void BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_set_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeAvatarDataEvent = value;
}
constexpr ::System::Action*& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get_didSaveAvatarDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSaveAvatarDataEvent;
}
constexpr ::System::Action* const& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get_didSaveAvatarDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSaveAvatarDataEvent;
}
constexpr void BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_set_didSaveAvatarDataEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSaveAvatarDataEvent = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get__avatarPartsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* const& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get__avatarPartsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr void BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarPartsModel = value;
}
constexpr ::GlobalNamespace::IFileStorage*& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileStorage = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarData*& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get__avatarData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarData;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarData* const& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get__avatarData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarData;
}
constexpr void BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_set__avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarData = value;
}
constexpr ::System::Threading::Tasks::Task_1<bool>*& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get__avatarCreatedTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarCreatedTask;
}
constexpr ::System::Threading::Tasks::Task_1<bool>* const& BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_get__avatarCreatedTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarCreatedTask;
}
constexpr void BeatSaber::BeatAvatarSDK::AvatarDataModel::__cordl_internal_set__avatarCreatedTask(::System::Threading::Tasks::Task_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarCreatedTask = value;
}
inline ::BeatSaber::BeatAvatarSDK::AvatarData* BeatSaber::BeatAvatarSDK::AvatarDataModel::get_avatarData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "get_avatarData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::BeatAvatarSDK::AvatarData*>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel::set_avatarData(::BeatSaber::BeatAvatarSDK::AvatarData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "set_avatarData", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel::add_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(),
                                                           { "add_didChangeAvatarDataEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel::remove_didChangeAvatarDataEvent(::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(),
                                                           { "remove_didChangeAvatarDataEvent", {}, { ::i2c::type_of<::System::Action_1<::BeatSaber::BeatAvatarSDK::AvatarData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel::add_didSaveAvatarDataEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "add_didSaveAvatarDataEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel::remove_didSaveAvatarDataEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "remove_didSaveAvatarDataEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::BeatAvatarSDK::AvatarDataModel::RequestIsAvatarCreatedAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "RequestIsAvatarCreatedAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::BeatAvatarSDK::AvatarDataModel::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "SaveAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::BeatAvatarSDK::AvatarDataModel::SaveInternalAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "SaveInternalAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::BeatAvatarSDK::AvatarDataModel::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "LoadAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::BeatAvatarSDK::AvatarDataModel::LoadInternalAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "LoadInternalAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>* BeatSaber::BeatAvatarSDK::AvatarDataModel::LoadFromSaveDataAsync(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "LoadFromSaveDataAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>*>(nullptr, ___internal_method, fileStorage);
}
inline bool BeatSaber::BeatAvatarSDK::AvatarDataModel::Load(::BeatSaber::BeatAvatarSDK::AvatarSaveData* avatarSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "Load", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, avatarSaveData);
}
inline ::System::Threading::Tasks::Task* BeatSaber::BeatAvatarSDK::AvatarDataModel::DeleteAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "DeleteAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::BeatAvatarSDK::AvatarDataModel::DeleteAsyncInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "DeleteAsyncInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel::ReportAvatarChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "ReportAvatarChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarData* BeatSaber::BeatAvatarSDK::AvatarDataModel::LoadFromCurrentVersion(::BeatSaber::BeatAvatarSDK::AvatarSaveData* avatarSaveData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(),
                                                                                         { "LoadFromCurrentVersion", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarSaveData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::BeatAvatarSDK::AvatarData*>(nullptr, ___internal_method, avatarSaveData);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarData* BeatSaber::BeatAvatarSDK::AvatarDataModel::CreateDefaultAvatarData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "CreateDefaultAvatarData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::BeatAvatarSDK::AvatarData*>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarData* BeatSaber::BeatAvatarSDK::AvatarDataModel::CreateRandomAvatarData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { "CreateRandomAvatarData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::BeatAvatarSDK::AvatarData*>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::AvatarDataModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::AvatarDataModel* BeatSaber::BeatAvatarSDK::AvatarDataModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::AvatarDataModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel::AvatarDataModel() {}
