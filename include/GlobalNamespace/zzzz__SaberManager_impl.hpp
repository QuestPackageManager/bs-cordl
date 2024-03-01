#pragma once
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SaberManager__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SaberManager__InitData::*)(bool, ::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::__SaberManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2491ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberManager__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__SaberManager__InitData::__cordl_internal_get_oneSaberMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneSaberMode;
}
constexpr bool const& GlobalNamespace::__SaberManager__InitData::__cordl_internal_get_oneSaberMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneSaberMode;
}
constexpr void GlobalNamespace::__SaberManager__InitData::__cordl_internal_set_oneSaberMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oneSaberMode = value;
}
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::__SaberManager__InitData::__cordl_internal_get_oneSaberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneSaberType;
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::__SaberManager__InitData::__cordl_internal_get_oneSaberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oneSaberType;
}
constexpr void GlobalNamespace::__SaberManager__InitData::__cordl_internal_set_oneSaberType(::GlobalNamespace::SaberType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oneSaberType = value;
}
/// @param oneSaberType: ::GlobalNamespace::SaberType (default: static_cast<int32_t>(0x0))
inline ::GlobalNamespace::__SaberManager__InitData* GlobalNamespace::__SaberManager__InitData::New_ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SaberManager__InitData*>(oneSaberMode, oneSaberType));
}
/// @param oneSaberType: ::GlobalNamespace::SaberType (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::__SaberManager__InitData::_ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberManager__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oneSaberMode, oneSaberType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SaberManager__InitData::__SaberManager__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::SaberManager.get_leftSaber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::Saber> (::GlobalNamespace::SaberManager::*)()>(
    &::GlobalNamespace::SaberManager::get_leftSaber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2491c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "get_leftSaber",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.get_rightSaber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::Saber> (::GlobalNamespace::SaberManager::*)()>(
    &::GlobalNamespace::SaberManager::get_rightSaber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2491c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "get_rightSaber",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.add_didUpdateSaberPositionsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*)>(&::GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2490180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "add_didUpdateSaberPositionsEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.remove_didUpdateSaberPositionsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*)>(&::GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24902b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "remove_didUpdateSaberPositionsEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.set_disableSabers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)(bool)>(&::GlobalNamespace::SaberManager::set_disableSabers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2491c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "set_disableSabers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2491c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2491da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2491dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2491dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.SaberForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::Saber> (::GlobalNamespace::SaberManager::*)(::GlobalNamespace::SaberType)>(
    &::GlobalNamespace::SaberManager::SaberForType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2491e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "SaberForType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager.RefreshSabers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::RefreshSabers)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2491c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "RefreshSabers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberManager::*)()>(&::GlobalNamespace::SaberManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2491ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SaberManager::__cordl_internal_get__leftSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SaberManager::__cordl_internal_get__leftSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaber;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set__leftSaber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftSaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SaberManager::__cordl_internal_get__rightSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SaberManager::__cordl_internal_get__rightSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaber;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set__rightSaber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightSaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SaberManager__InitData*& GlobalNamespace::SaberManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberManager__InitData*> const& GlobalNamespace::SaberManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set__initData(::GlobalNamespace::__SaberManager__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SaberManager::__cordl_internal_get__started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____started;
}
constexpr bool const& GlobalNamespace::SaberManager::__cordl_internal_get__started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____started;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set__started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____started = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*& GlobalNamespace::SaberManager::__cordl_internal_get_didUpdateSaberPositionsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateSaberPositionsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*> const&
GlobalNamespace::SaberManager::__cordl_internal_get_didUpdateSaberPositionsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateSaberPositionsEvent;
}
constexpr void GlobalNamespace::SaberManager::__cordl_internal_set_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didUpdateSaberPositionsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::Saber> GlobalNamespace::SaberManager::get_leftSaber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "get_leftSaber",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Saber>, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::Saber> GlobalNamespace::SaberManager::get_rightSaber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "get_rightSaber",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Saber>, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::add_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "add_didUpdateSaberPositionsEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::remove_didUpdateSaberPositionsEvent(::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "remove_didUpdateSaberPositionsEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::Saber>, ::UnityW<::GlobalNamespace::Saber>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::set_disableSabers(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "set_disableSabers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SaberManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::Saber> GlobalNamespace::SaberManager::SaberForType(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "SaberForType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::Saber>, false>(this, ___internal_method, saberType);
}
inline void GlobalNamespace::SaberManager::RefreshSabers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), "RefreshSabers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberManager* GlobalNamespace::SaberManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SaberManager*>());
}
inline void GlobalNamespace::SaberManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberManager::SaberManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
