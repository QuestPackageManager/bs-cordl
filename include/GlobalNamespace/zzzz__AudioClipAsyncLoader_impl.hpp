#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22fb378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::*)()>(&::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22fb724;

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
  constexpr static std::size_t addrs = 0x22fb738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22fb758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate* GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>(object, method));
}
inline void GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate::__AudioClipAsyncLoader__LoadMethodDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22fb350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0._Load_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::*)()>(&::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::_Load_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22fb764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0*>::get(), "<Load>b__0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioClip*& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::__get_audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::__get_audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClip;
}
constexpr void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::__set_audioClip(::UnityEngine::AudioClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0* GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::_Load_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0*>::get(), "<Load>b__0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0::__AudioClipAsyncLoader____c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::*)()>(
    &::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22fb5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0._Load_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::*)()>(&::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::_Load_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22fb7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0*>::get(), "<Load>b__0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::AudioClipAsyncLoader*& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::__set___4__this(::GlobalNamespace::AudioClipAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::__get_audioClipFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClipFilePath;
}
constexpr ::StringW const& GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::__get_audioClipFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioClipFilePath;
}
constexpr void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::__set_audioClipFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioClipFilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0* GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0*>());
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::_Load_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0*>::get(), "<Load>b__0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0::__AudioClipAsyncLoader____c__DisplayClass17_0() {}
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader____c::*)()>(&::GlobalNamespace::__AudioClipAsyncLoader____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22fb8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader____c._Unload_b__19_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader____c::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::__AudioClipAsyncLoader____c::_Unload_b__19_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22fb8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get(), "<Unload>b__19_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
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
inline void GlobalNamespace::__AudioClipAsyncLoader____c::setStaticF___9__19_0(::System::Action_1<::UnityEngine::AudioClip*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::AudioClip*>*, "<>9__19_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get>(
      std::forward<::System::Action_1<::UnityEngine::AudioClip*>*>(value));
}
inline ::System::Action_1<::UnityEngine::AudioClip*>* GlobalNamespace::__AudioClipAsyncLoader____c::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::AudioClip*>*, "<>9__19_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get>();
}
inline ::GlobalNamespace::__AudioClipAsyncLoader____c* GlobalNamespace::__AudioClipAsyncLoader____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AudioClipAsyncLoader____c*>());
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AudioClipAsyncLoader____c::_Unload_b__19_0(::UnityEngine::AudioClip* loadedAudioClip) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader____c*>::get(), "<Unload>b__19_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadedAudioClip);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader____c::__AudioClipAsyncLoader____c() {}
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::*)()>(
    &::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x22fb908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22fbc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AudioClipAsyncLoader*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cacheKey", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onDelete", ty: "::System::Action_1<::UnityEngine::AudioClip*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::__AudioClipAsyncLoader___Unload_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AudioClipAsyncLoader* __4__this, int32_t cacheKey,
    ::System::Action_1<::UnityEngine::AudioClip*>* onDelete, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cacheKey = cacheKey;
  this->onDelete = onDelete;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21::__AudioClipAsyncLoader___Unload_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(
    ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*, ::GlobalNamespace::IMediaAsyncLoader*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22fa314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMediaAsyncLoader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.LoadPreview
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::AudioClipAsyncLoader::LoadPreview)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x22fa340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "LoadPreview", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.LoadSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IBeatmapLevel*)>(&::GlobalNamespace::AudioClipAsyncLoader::LoadSong)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x22fa68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "LoadSong", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.UnloadPreview
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::UnloadPreview)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x22fa9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "UnloadPreview", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.UnloadSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IBeatmapLevel*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::UnloadSong)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x22face4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "UnloadSong", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22fa534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22fa880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22fa5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22fa92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22fab8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IAssetSongAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22fae98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22fac38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::GlobalNamespace::IFilePathSongAudioClipProvider*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22faf44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22faff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22fb0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (
    ::GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*)>(&::GlobalNamespace::AudioClipAsyncLoader::Load)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x22fb434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22fb1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22fb2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.Unload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioClipAsyncLoader::*)(int32_t, ::System::Action_1<::UnityEngine::AudioClip*>*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::Unload)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22fb620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AudioClip*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AudioClipAsyncLoader::*)(::UnityEngine::AudioClip*)>(
    &::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22fb358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "GetCacheKey", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.GetCacheKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AudioClipAsyncLoader::*)(::StringW)>(
    &::GlobalNamespace::AudioClipAsyncLoader::GetCacheKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22fb600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "GetCacheKey", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioClipAsyncLoader.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::AudioClipAsyncLoader::LogError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22fb6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "LogError", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*& GlobalNamespace::AudioClipAsyncLoader::__get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*> const&
GlobalNamespace::AudioClipAsyncLoader::__get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cache;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader::__set__cache(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMediaAsyncLoader*& GlobalNamespace::AudioClipAsyncLoader::__get__mediaAsyncLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediaAsyncLoader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMediaAsyncLoader*> const& GlobalNamespace::AudioClipAsyncLoader::__get__mediaAsyncLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediaAsyncLoader;
}
constexpr void GlobalNamespace::AudioClipAsyncLoader::__set__mediaAsyncLoader(::GlobalNamespace::IMediaAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediaAsyncLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::AudioClipAsyncLoader*
GlobalNamespace::AudioClipAsyncLoader::New_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* cache,
                                                ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AudioClipAsyncLoader*>(cache, mediaAsyncLoader));
}
inline void GlobalNamespace::AudioClipAsyncLoader::_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* cache,
                                                         ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMediaAsyncLoader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache, mediaAsyncLoader);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::LoadPreview(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "LoadPreview", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, beatmapLevel);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::LoadSong(::GlobalNamespace::IBeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "LoadSong", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::AudioClipAsyncLoader::UnloadPreview(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "UnloadPreview", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::AudioClipAsyncLoader::UnloadSong(::GlobalNamespace::IBeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "UnloadSong", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IAssetSongAudioClipProvider* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::Load(::GlobalNamespace::IFilePathSongAudioClipProvider* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IAssetSongAudioClipProvider* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAssetSongAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::GlobalNamespace::IFilePathSongAudioClipProvider* source) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFilePathSongAudioClipProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::Load(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, audioClip);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::Load(::StringW audioClipFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, audioClipFilePath);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::AudioClipAsyncLoader::Load(int32_t cacheKey,
                                                                                                                  ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate* loadMethodDelegate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Load", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, cacheKey, loadMethodDelegate);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(::StringW audioClipFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClipFilePath);
}
inline void GlobalNamespace::AudioClipAsyncLoader::Unload(int32_t cacheKey, ::System::Action_1<::UnityEngine::AudioClip*>* onDelete) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "Unload", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AudioClip*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cacheKey, onDelete);
}
inline int32_t GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "GetCacheKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, audioClip);
}
inline int32_t GlobalNamespace::AudioClipAsyncLoader::GetCacheKey(::StringW audioClipFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "GetCacheKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, audioClipFilePath);
}
inline void GlobalNamespace::AudioClipAsyncLoader::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioClipAsyncLoader*>::get(), "LogError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioClipAsyncLoader::AudioClipAsyncLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
