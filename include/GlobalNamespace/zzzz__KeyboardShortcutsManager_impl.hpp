#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KeyboardShortcutsManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__KeyboardShortcutsManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::*)(
    ::UnityEngine::KeyCode, ::UnityEngine::KeyCode, ::UnityEngine::KeyCode)>(&::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1f919b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::*)()>(
    &::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1f91f38;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::*)(::System::Object*)>(
    &::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::Equals)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1f91f4c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(), 0));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__get_mainKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainKey;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__get_mainKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainKey;
}
constexpr void GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__set_mainKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainKey = value;
}
constexpr ::UnityEngine::KeyCode& GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__get_combinationKey1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___combinationKey1;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__get_combinationKey1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___combinationKey1;
}
constexpr void GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__set_combinationKey1(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___combinationKey1 = value;
}
constexpr ::UnityEngine::KeyCode& GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__get_combinationKey2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___combinationKey2;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__get_combinationKey2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___combinationKey2;
}
constexpr void GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__set_combinationKey2(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___combinationKey2 = value;
}
inline ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*
GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::New_ctor(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::UnityEngine::KeyCode combinationKey2) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>(mainKey, combinationKey1, combinationKey2));
}
inline void GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::_ctor(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::UnityEngine::KeyCode combinationKey2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainKey, combinationKey1, combinationKey2);
}
inline int32_t GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::GetHashCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(), "GetHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut::__KeyboardShortcutsManager__KeyboardShortcut() {}
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)()>(&::GlobalNamespace::KeyboardShortcutsManager::Update)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x1f912c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcuts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>*)>(&::GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1f915c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcuts", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcuts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>*)>(
    &::GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1f91734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcuts", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*)>(&::GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1f9188c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::UnityEngine::KeyCode, ::UnityEngine::KeyCode, ::UnityEngine::KeyCode, ::System::Action*)>(&::GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1f91928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::UnityEngine::KeyCode, ::UnityEngine::KeyCode, ::System::Action*)>(&::GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f919f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.RemoveKeyboardShortcut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(::UnityEngine::KeyCode, ::System::Action*)>(
    &::GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f91724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcuts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>*)>(&::GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1f91a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcuts", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcuts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>*)>(
    &::GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1f91b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcuts", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*)>(&::GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1f91ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::UnityEngine::KeyCode, ::UnityEngine::KeyCode, ::UnityEngine::KeyCode, ::System::Action*)>(&::GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1f91e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcut", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(
    ::UnityEngine::KeyCode, ::UnityEngine::KeyCode, ::System::Action*)>(&::GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f91eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager.AddKeyboardShortcut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)(::UnityEngine::KeyCode, ::System::Action*)>(
    &::GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f91b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcut", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KeyboardShortcutsManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KeyboardShortcutsManager::*)()>(&::GlobalNamespace::KeyboardShortcutsManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1f91ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Collections::Generic::List_1<::System::Action*>*>*&
GlobalNamespace::KeyboardShortcutsManager::__get__keyboardShortcutActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardShortcutActions;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Collections::Generic::List_1<::System::Action*>*>*> const&
GlobalNamespace::KeyboardShortcutsManager::__get__keyboardShortcutActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardShortcutActions;
}
constexpr void GlobalNamespace::KeyboardShortcutsManager::__set__keyboardShortcutActions(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Collections::Generic::List_1<::System::Action*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyboardShortcutActions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::KeyboardShortcutsManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>* shortcutActions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcuts", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shortcutActions);
}
inline void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcuts(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>* shortcutActions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcuts", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shortcutActions);
}
inline void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut* keyboardShortcut, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboardShortcut, callback);
}
inline void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::UnityEngine::KeyCode combinationKey2,
                                                                              ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainKey, combinationKey1, combinationKey2, callback);
}
inline void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainKey, combinationKey1, callback);
}
inline void GlobalNamespace::KeyboardShortcutsManager::RemoveKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "RemoveKeyboardShortcut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainKey, callback);
}
inline void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>* shortcutActions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcuts", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shortcutActions);
}
inline void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcuts(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>* shortcutActions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcuts", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shortcutActions);
}
inline void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut* keyboardShortcut, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboardShortcut, callback);
}
inline void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::UnityEngine::KeyCode combinationKey2,
                                                                           ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcut", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainKey, combinationKey1, combinationKey2, callback);
}
inline void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainKey, combinationKey1, callback);
}
inline void GlobalNamespace::KeyboardShortcutsManager::AddKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), "AddKeyboardShortcut", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainKey, callback);
}
inline ::GlobalNamespace::KeyboardShortcutsManager* GlobalNamespace::KeyboardShortcutsManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::KeyboardShortcutsManager*>());
}
inline void GlobalNamespace::KeyboardShortcutsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KeyboardShortcutsManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcutsManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
