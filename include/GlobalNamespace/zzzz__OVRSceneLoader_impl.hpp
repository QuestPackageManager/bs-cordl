#pragma once
#include "GlobalNamespace/zzzz__OVRSceneLoader_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneLoader_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneLoader_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader__SceneInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OVRSceneLoader__SceneInfo::*)(::System::Collections::Generic::List_1<::StringW>*, int64_t)>(&::GlobalNamespace::__OVRSceneLoader__SceneInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27818b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader__SceneInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRSceneLoader__SceneInfo::_ctor(::System::Collections::Generic::List_1<::StringW>* sceneList, int64_t currentSceneEpochVersion) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader__SceneInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneList, currentSceneEpochVersion);
}
// Ctor Parameters [CppParam { name: "scenes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "version", ty: "int64_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo::__OVRSceneLoader__SceneInfo(::System::Collections::Generic::List_1<::StringW>* scenes, int64_t version) noexcept {
  this->scenes = scenes;
  this->version = version;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo::__OVRSceneLoader__SceneInfo() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)(int32_t)>(
    &::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27816a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27818bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27818c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x278196c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27819ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSceneLoader*& GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneLoader*> const& GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__set___4__this(::GlobalNamespace::OVRSceneLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24* GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>(__1__state));
}
inline void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneLoader___DelayCanvasPosUpdate_d__24::__OVRSceneLoader___DelayCanvasPosUpdate_d__24() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)(int32_t)>(
    &::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27816d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27819b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x27819b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2781d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2781d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSceneLoader*& GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneLoader*> const& GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__set___4__this(::GlobalNamespace::OVRSceneLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25* GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>(__1__state));
}
inline void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRSceneLoader___onCheckSceneCoroutine_d__25::__OVRSceneLoader___onCheckSceneCoroutine_d__25() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2780398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Start)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2780404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)(::GlobalNamespace::__OVRSceneLoader__SceneInfo)>(
    &::GlobalNamespace::OVRSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x2780844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "LoadScene", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSceneLoader__SceneInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.LoadSceneOperation_completed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)(::UnityEngine::AsyncOperation*)>(
    &::GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27810f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "LoadSceneOperation_completed", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Update)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2781234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.UpdateCanvasPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x27814a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                                                                               "UpdateCanvasPosition", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.GetSceneInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRSceneLoader__SceneInfo (::GlobalNamespace::OVRSceneLoader::*)()>(
    &::GlobalNamespace::OVRSceneLoader::GetSceneInfo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x27805b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "GetSceneInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.DelayCanvasPosUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneLoader::*)()>(
    &::GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2780550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                                                                               "DelayCanvasPosUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.onCheckSceneCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneLoader::*)()>(
    &::GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27811cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                                                                               "onCheckSceneCoroutine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.DestroyAllGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27816f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(),
                                                                               "DestroyAllGameObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2781808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OVRSceneLoader::__get_sceneCheckIntervalSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneCheckIntervalSeconds;
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__get_sceneCheckIntervalSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneCheckIntervalSeconds;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_sceneCheckIntervalSeconds(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneCheckIntervalSeconds = value;
}
constexpr float_t& GlobalNamespace::OVRSceneLoader::__get_logCloseTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logCloseTime;
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__get_logCloseTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logCloseTime;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_logCloseTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logCloseTime = value;
}
constexpr ::UnityEngine::Canvas*& GlobalNamespace::OVRSceneLoader::__get_mainCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCanvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& GlobalNamespace::OVRSceneLoader::__get_mainCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCanvas;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_mainCanvas(::UnityEngine::Canvas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainCanvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Text*& GlobalNamespace::OVRSceneLoader::__get_logTextBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logTextBox;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& GlobalNamespace::OVRSceneLoader::__get_logTextBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logTextBox;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_logTextBox(::UnityEngine::UI::Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logTextBox)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AsyncOperation*& GlobalNamespace::OVRSceneLoader::__get_loadSceneOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadSceneOperation;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> const& GlobalNamespace::OVRSceneLoader::__get_loadSceneOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadSceneOperation;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_loadSceneOperation(::UnityEngine::AsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loadSceneOperation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__get_formattedLogText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formattedLogText;
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__get_formattedLogText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formattedLogText;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_formattedLogText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___formattedLogText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRSceneLoader::__get_closeLogTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeLogTimer;
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__get_closeLogTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeLogTimer;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_closeLogTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeLogTimer = value;
}
constexpr bool& GlobalNamespace::OVRSceneLoader::__get_closeLogDialogue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeLogDialogue;
}
constexpr bool const& GlobalNamespace::OVRSceneLoader::__get_closeLogDialogue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeLogDialogue;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_closeLogDialogue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeLogDialogue = value;
}
constexpr bool& GlobalNamespace::OVRSceneLoader::__get_canvasPosUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasPosUpdated;
}
constexpr bool const& GlobalNamespace::OVRSceneLoader::__get_canvasPosUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasPosUpdated;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_canvasPosUpdated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canvasPosUpdated = value;
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__get_scenePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenePath;
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__get_scenePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenePath;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_scenePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scenePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__get_sceneLoadDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneLoadDataPath;
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__get_sceneLoadDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneLoadDataPath;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_sceneLoadDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sceneLoadDataPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*& GlobalNamespace::OVRSceneLoader::__get_loadedAssetBundles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadedAssetBundles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>*> const& GlobalNamespace::OVRSceneLoader::__get_loadedAssetBundles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadedAssetBundles;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_loadedAssetBundles(::System::Collections::Generic::List_1<::UnityEngine::AssetBundle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loadedAssetBundles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo& GlobalNamespace::OVRSceneLoader::__get_currentSceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSceneInfo;
}
constexpr ::GlobalNamespace::__OVRSceneLoader__SceneInfo const& GlobalNamespace::OVRSceneLoader::__get_currentSceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSceneInfo;
}
constexpr void GlobalNamespace::OVRSceneLoader::__set_currentSceneInfo(::GlobalNamespace::__OVRSceneLoader__SceneInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentSceneInfo = value;
}
inline void GlobalNamespace::OVRSceneLoader::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::LoadScene(::GlobalNamespace::__OVRSceneLoader__SceneInfo sceneInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "LoadScene", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSceneLoader__SceneInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneInfo);
}
inline void GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed(::UnityEngine::AsyncOperation* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "LoadSceneOperation_completed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void GlobalNamespace::OVRSceneLoader::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "UpdateCanvasPosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRSceneLoader__SceneInfo GlobalNamespace::OVRSceneLoader::GetSceneInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "GetSceneInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRSceneLoader__SceneInfo, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "DelayCanvasPosUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "onCheckSceneCoroutine",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), "DestroyAllGameObjects",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneLoader* GlobalNamespace::OVRSceneLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSceneLoader*>());
}
inline void GlobalNamespace::OVRSceneLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneLoader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneLoader::OVRSceneLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
