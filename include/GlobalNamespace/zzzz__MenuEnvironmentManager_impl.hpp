#pragma once
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::__MenuEnvironmentManager__MenuEnvironmentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::__MenuEnvironmentManager__MenuEnvironmentType() {}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::Default{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::Lobby{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects.get_menuEnvironmentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType (
    ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(&::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::get_menuEnvironmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23765cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(),
                                                 "get_menuEnvironmentType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects.get_wrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(
    &::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::get_wrapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23765d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(), "get_wrapper",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(
    &::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23765dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__get__menuEnvironmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuEnvironmentType;
}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__get__menuEnvironmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuEnvironmentType;
}
constexpr void GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__set__menuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuEnvironmentType = value;
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__get__wrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapper;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__get__wrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapper;
}
constexpr void GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__set__wrapper(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____wrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::get_menuEnvironmentType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(),
                                               "get_menuEnvironmentType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::get_wrapper() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(), "get_wrapper",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects* GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>());
}
inline void GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__MenuEnvironmentManager__MenuEnvironmentObjects() {}
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237643c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.ShowEnvironmentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)(
    ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType)>(&::GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2376444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), "ShowEnvironmentType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23765c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>&
GlobalNamespace::MenuEnvironmentManager::__get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> const&
GlobalNamespace::MenuEnvironmentManager::__get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::MenuEnvironmentManager::__set__data(
    ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*, ::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& GlobalNamespace::MenuEnvironmentManager::__get__prevMenuEnvironmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMenuEnvironmentType;
}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& GlobalNamespace::MenuEnvironmentManager::__get__prevMenuEnvironmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMenuEnvironmentType;
}
constexpr void GlobalNamespace::MenuEnvironmentManager::__set__prevMenuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevMenuEnvironmentType = value;
}
inline void GlobalNamespace::MenuEnvironmentManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType menuEnvironmentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), "ShowEnvironmentType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuEnvironmentType);
}
inline ::GlobalNamespace::MenuEnvironmentManager* GlobalNamespace::MenuEnvironmentManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuEnvironmentManager*>());
}
inline void GlobalNamespace::MenuEnvironmentManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
