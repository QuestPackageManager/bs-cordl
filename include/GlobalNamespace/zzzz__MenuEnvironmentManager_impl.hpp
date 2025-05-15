#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuEnvironmentManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::MenuEnvironmentManager_MenuEnvironmentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::MenuEnvironmentManager_MenuEnvironmentType() {}
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::Default{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::Lobby{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects.get_menuEnvironmentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType (
    ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::*)()>(&::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::get_menuEnvironmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad8720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>::get(),
                                                 "get_menuEnvironmentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects.get_wrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::*)()>(
    &::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::get_wrapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad8728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>::get(), "get_wrapper",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::*)()>(
    &::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad8730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType& GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_get__menuEnvironmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuEnvironmentType;
}
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const& GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_get__menuEnvironmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuEnvironmentType;
}
constexpr void GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_set__menuEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuEnvironmentType = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_get__wrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_get__wrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapper;
}
constexpr void GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_set__wrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____wrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::get_menuEnvironmentType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>::get(),
                                               "get_menuEnvironmentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::get_wrapper() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>::get(), "get_wrapper",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects* GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::MenuEnvironmentManager_MenuEnvironmentObjects() {}
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad8588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.ShowEnvironmentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType)>(
    &::GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3ad8590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), "ShowEnvironmentType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad8718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, ::Array<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>*>&
GlobalNamespace::MenuEnvironmentManager::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, ::Array<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>*> const&
GlobalNamespace::MenuEnvironmentManager::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::MenuEnvironmentManager::__cordl_internal_set__data(
    ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*, ::Array<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType& GlobalNamespace::MenuEnvironmentManager::__cordl_internal_get__prevMenuEnvironmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMenuEnvironmentType;
}
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const& GlobalNamespace::MenuEnvironmentManager::__cordl_internal_get__prevMenuEnvironmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMenuEnvironmentType;
}
constexpr void GlobalNamespace::MenuEnvironmentManager::__cordl_internal_set__prevMenuEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevMenuEnvironmentType = value;
}
inline void GlobalNamespace::MenuEnvironmentManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType menuEnvironmentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), "ShowEnvironmentType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuEnvironmentType);
}
inline void GlobalNamespace::MenuEnvironmentManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuEnvironmentManager* GlobalNamespace::MenuEnvironmentManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MenuEnvironmentManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentManager() {}
