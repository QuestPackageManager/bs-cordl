#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/BaseEventData.hpp"
#include "UnityEngine/EventSystems/zzzz__AbstractEventData_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::BaseEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::EventSystems::BaseEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c4c550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.get_currentInputModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::EventSystems::BaseInputModule> (::UnityEngine::EventSystems::BaseEventData::*)()>(
    &::UnityEngine::EventSystems::BaseEventData::get_currentInputModule)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c4c578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                                                                               "get_currentInputModule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.get_selectedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::BaseEventData::*)()>(
    &::UnityEngine::EventSystems::BaseEventData::get_selectedObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c4c590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                                                                               "get_selectedObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.set_selectedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::BaseEventData::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::BaseEventData::set_selectedObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6c4c5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(), "set_selectedObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& UnityEngine::EventSystems::BaseEventData::__cordl_internal_get_m_EventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& UnityEngine::EventSystems::BaseEventData::__cordl_internal_get_m_EventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventSystem;
}
constexpr void UnityEngine::EventSystems::BaseEventData::__cordl_internal_set_m_EventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EventSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::EventSystems::BaseEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventSystem);
}
inline ::UnityW<::UnityEngine::EventSystems::BaseInputModule> UnityEngine::EventSystems::BaseEventData::get_currentInputModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                                                                             "get_currentInputModule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::EventSystems::BaseInputModule>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::BaseEventData::get_selectedObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                                                                             "get_selectedObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseEventData::set_selectedObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(), "set_selectedObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::BaseEventData* UnityEngine::EventSystems::BaseEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::EventSystems::BaseEventData*>(eventSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::BaseEventData::BaseEventData() {}
