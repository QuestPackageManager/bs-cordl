#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23ffe1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::*)()>(&::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24001c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24001dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24001fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate* GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>(object, method));
}
inline void GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::__AudioClipAsyncLoader__LoadMethodDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ffdf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0._Load_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::*)()>(&::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::_Load_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2400208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0*>::get(), "<Load>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::__cordl_internal_get_audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::__cordl_internal_get_audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0* GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0*>());
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::_Load_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0*>::get(), "<Load>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass13_0::__AudioClipAsyncLoader____c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240009c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0._Load_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::*)()>(&::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::_Load_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2400278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0*>::get(), "<Load>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::__cordl_internal_set___4__this(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::__cordl_internal_get_audioClipFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClipFilePath;
}
constexpr ::StringW const& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::__cordl_internal_get_audioClipFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClipFilePath;
}
constexpr void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::__cordl_internal_set_audioClipFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioClipFilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0* GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0*>());
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::_Load_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0*>::get(), "<Load>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass14_0::__AudioClipAsyncLoader____c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader____c::*)()>(&::GlobalNamespace::__AudioClipAsyncLoader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240038c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c._Unload_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader____c::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::__AudioClipAsyncLoader____c::_Unload_b__16_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2400394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get(), "<Unload>b__16_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__AudioClipAsyncLoader____c::setStaticF___9(::GlobalNamespace::__AudioClipAsyncLoader____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__AudioClipAsyncLoader____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get>(
      std::forward<::GlobalNamespace::__AudioClipAsyncLoader____c*>(value));
}
inline ::GlobalNamespace::__AudioClipAsyncLoader____c* GlobalNamespace::__AudioClipAsyncLoader____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__AudioClipAsyncLoader____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get>();
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c::setStaticF___9__16_0(::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*, "<>9__16_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get>(
      std::forward<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::__AudioClipAsyncLoader____c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*, "<>9__16_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get>();
}
inline ::GlobalNamespace::__AudioClipAsyncLoader____c* GlobalNamespace::__AudioClipAsyncLoader____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AudioClipAsyncLoader____c*>());
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c::_Unload_b__16_0(::UnityEngine::AudioClip* loadedAudioClip) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get(), "<Unload>b__16_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadedAudioClip);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader____c::__AudioClipAsyncLoader____c() {}
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::*)()>(
    &::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x24003ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2400734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AudioClipAsyncLoader*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cacheKey", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDelete", ty:
// "::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::__AudioClipAsyncLoader___Unload_d__18(
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
constexpr ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__18::__AudioClipAsyncLoader___Unload_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(
    ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*, ::GlobalNamespace::IMediaAsyncLoader*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23ff404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMediaAsyncLoader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.CreateDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AudioClipAsyncLoader* (*)()>(&::GlobalNamespace::AudioClipAsyncLoader::CreateDefault)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23ff430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "CreateDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23ff534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23ff6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23ff764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23ff8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23ff994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23ffb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23ffbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23ffd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23ff5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23ff810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x23ffed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23ffa40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23ffca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24000c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23ffdfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "GetCacheKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(
    &::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24000a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "GetCacheKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::LogError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2400170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*&
GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*> const&
GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_set__cache(
    ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMediaAsyncLoader*& GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_get__mediaAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediaAsyncLoader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMediaAsyncLoader*> const& GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_get__mediaAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediaAsyncLoader;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader::__cordl_internal_set__mediaAsyncLoader(::GlobalNamespace::IMediaAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediaAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::AudioClipAsyncLoader*
GlobalNamespace::AudioClipAsyncLoader::New_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* cache,
                                                ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AudioClipAsyncLoader*>(cache, mediaAsyncLoader));
}
inline void GlobalNamespace::AudioClipAsyncLoader::_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* cache,
                                                         ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMediaAsyncLoader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache, mediaAsyncLoader);
}
inline ::GlobalNamespace::AudioClipAsyncLoader* GlobalNamespace::AudioClipAsyncLoader::CreateDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "CreateDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AudioClipAsyncLoader*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IAssetSongAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IFilePathSongAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IAssetSongAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IFilePathSongAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, audioClip);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::AudioClipAsyncLoader::Load(::StringW audioClipFilePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, audioClipFilePath);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*
GlobalNamespace::AudioClipAsyncLoader::Load(int32_t cacheKey, ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate* loadMethodDelegate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, cacheKey, loadMethodDelegate);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::StringW audioClipFilePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClipFilePath);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(int32_t cacheKey, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* onDelete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cacheKey, onDelete);
}
inline int32_t GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "GetCacheKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, audioClip);
}
inline int32_t GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::StringW audioClipFilePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "GetCacheKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, audioClipFilePath);
}
inline void GlobalNamespace::AudioClipAsyncLoader::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoader::AudioClipAsyncLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
