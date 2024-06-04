#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/OVRPointerEventData.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/zzzz__Ray_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPointerEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRPointerEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(
    &::UnityEngine::EventSystems::OVRPointerEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bef87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPointerEventData.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::OVRPointerEventData::*)()>(
    &::UnityEngine::EventSystems::OVRPointerEventData::ToString)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2bf1968;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Ray& UnityEngine::EventSystems::OVRPointerEventData::__cordl_internal_get_worldSpaceRay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceRay;
}
constexpr ::UnityEngine::Ray const& UnityEngine::EventSystems::OVRPointerEventData::__cordl_internal_get_worldSpaceRay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldSpaceRay;
}
constexpr void UnityEngine::EventSystems::OVRPointerEventData::__cordl_internal_set_worldSpaceRay(::UnityEngine::Ray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldSpaceRay = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::OVRPointerEventData::__cordl_internal_get_swipeStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swipeStart;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::OVRPointerEventData::__cordl_internal_get_swipeStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swipeStart;
}
constexpr void UnityEngine::EventSystems::OVRPointerEventData::__cordl_internal_set_swipeStart(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swipeStart = value;
}
inline ::UnityEngine::EventSystems::OVRPointerEventData* UnityEngine::EventSystems::OVRPointerEventData::New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::EventSystems::OVRPointerEventData*>(eventSystem));
}
inline void UnityEngine::EventSystems::OVRPointerEventData::_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventSystem);
}
inline ::StringW UnityEngine::EventSystems::OVRPointerEventData::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::OVRPointerEventData::OVRPointerEventData() {}
