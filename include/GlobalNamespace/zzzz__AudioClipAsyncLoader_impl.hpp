#pragma once
// IWYU pragma private; include "GlobalNamespace\AudioClipAsyncLoader.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a29010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::*)()>(
    &::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a2937c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a29390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a293ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method, result);
}
inline ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate* GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate::AudioClipAsyncLoader_LoadMethodDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader___c::*)()>(&::GlobalNamespace::AudioClipAsyncLoader___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2940c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader___c._Unload_b__16_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader___c::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::AudioClipAsyncLoader___c::_Unload_b__16_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a29410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c*>(), { "<Unload>b__16_0", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioClipAsyncLoader___c::setStaticF___9(::GlobalNamespace::AudioClipAsyncLoader___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::AudioClipAsyncLoader___c*, "<>9", ::GlobalNamespace::AudioClipAsyncLoader___c*>(
      std::forward<::GlobalNamespace::AudioClipAsyncLoader___c*>(value));
}
inline ::GlobalNamespace::AudioClipAsyncLoader___c* GlobalNamespace::AudioClipAsyncLoader___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::AudioClipAsyncLoader___c*, "<>9", ::GlobalNamespace::AudioClipAsyncLoader___c*>();
}
inline void GlobalNamespace::AudioClipAsyncLoader___c::setStaticF___9__16_0(::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*, "<>9__16_0", ::GlobalNamespace::AudioClipAsyncLoader___c*>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader___c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*, "<>9__16_0", ::GlobalNamespace::AudioClipAsyncLoader___c*>();
}
inline void GlobalNamespace::AudioClipAsyncLoader___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioClipAsyncLoader___c::_Unload_b__16_0(::UnityEngine::AudioClip* loadedAudioClip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c*>(), { "<Unload>b__16_0", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadedAudioClip);
}
inline ::GlobalNamespace::AudioClipAsyncLoader___c* GlobalNamespace::AudioClipAsyncLoader___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipAsyncLoader___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoader___c::AudioClipAsyncLoader___c() {}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a28fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0._Load_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::_Load_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a29428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0*>(), { "<Load>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::__cordl_internal_get_audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::__cordl_internal_get_audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioClip = value;
}
inline void GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::_Load_b__0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0*>(), { "<Load>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0* GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0::AudioClipAsyncLoader___c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a29240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0._Load_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::_Load_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a294a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0*>(), { "<Load>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::__cordl_internal_set___4__this(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::StringW& GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::__cordl_internal_get_audioClipFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClipFilePath;
}
constexpr ::StringW const& GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::__cordl_internal_get_audioClipFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClipFilePath;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::__cordl_internal_set_audioClipFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioClipFilePath = value;
}
inline void GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::_Load_b__0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0*>(), { "<Load>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0* GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0::AudioClipAsyncLoader___c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::*)()>(&::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5a29554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a298e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AudioClipAsyncLoader*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "cacheKey", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDelete", ty:
// "::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::AudioClipAsyncLoader__Unload_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AudioClipAsyncLoader* __4__this, int32_t cacheKey,
    ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* onDelete, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cacheKey = cacheKey;
  this->onDelete = onDelete;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18::AudioClipAsyncLoader__Unload_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(
    ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*, ::GlobalNamespace::IMediaAsyncLoader*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a28554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*>(),
                                                    ::i2c::type_of<::GlobalNamespace::IMediaAsyncLoader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.CreateDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AudioClipAsyncLoader* (*)()>(&::GlobalNamespace::AudioClipAsyncLoader::CreateDefault)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a2855c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "CreateDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a28648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a28810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IAssetSongAudioClipProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a288c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                                                           { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a28a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IFilePathSongAudioClipProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a28b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a28d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::GlobalNamespace::IAssetSongAudioClipProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a28dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                                                           { "Unload", {}, { ::i2c::type_of<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a28f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::GlobalNamespace::IFilePathSongAudioClipProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a28700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a28980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a29078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                             { "Load", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a28c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a28e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a29264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                             { "Unload", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a28ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "GetCacheKey", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a29244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "GetCacheKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::LogError)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a29320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*&
GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* const&
GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_set__cache(
    ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cache = value;
}
constexpr ::GlobalNamespace::IMediaAsyncLoader*& GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_get__mediaAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediaAsyncLoader;
}
constexpr ::GlobalNamespace::IMediaAsyncLoader* const& GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_get__mediaAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediaAsyncLoader;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_set__mediaAsyncLoader(::GlobalNamespace::IMediaAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mediaAsyncLoader = value;
}
inline void GlobalNamespace::AudioClipAsyncLoader::_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* cache,
                                                         ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*>(),
                                                  ::i2c::type_of<::GlobalNamespace::IMediaAsyncLoader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cache, mediaAsyncLoader);
}
inline ::GlobalNamespace::AudioClipAsyncLoader* GlobalNamespace::AudioClipAsyncLoader::CreateDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "CreateDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioClipAsyncLoader*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IAssetSongAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IAssetSongAudioClipProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IFilePathSongAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::GlobalNamespace::IFilePathSongAudioClipProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IAssetSongAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::GlobalNamespace::IAssetSongAudioClipProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                                                         { "Unload", {}, { ::i2c::type_of<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IFilePathSongAudioClipProvider* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::GlobalNamespace::IFilePathSongAudioClipProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method, audioClip);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::StringW audioClipFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method, audioClipFilePath);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*
GlobalNamespace::AudioClipAsyncLoader::Load(int32_t cacheKey, ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate* loadMethodDelegate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                           { "Load", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method, cacheKey, loadMethodDelegate);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::StringW audioClipFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "Unload", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClipFilePath);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(int32_t cacheKey, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* onDelete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                           { "Unload", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cacheKey, onDelete);
}
inline int32_t GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "GetCacheKey", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, audioClip);
}
inline int32_t GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::StringW audioClipFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "GetCacheKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, audioClipFilePath);
}
inline void GlobalNamespace::AudioClipAsyncLoader::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioClipAsyncLoader*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline ::GlobalNamespace::AudioClipAsyncLoader*
GlobalNamespace::AudioClipAsyncLoader::New_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* cache,
                                                ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioClipAsyncLoader*>(cache, mediaAsyncLoader));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoader::AudioClipAsyncLoader() {}
