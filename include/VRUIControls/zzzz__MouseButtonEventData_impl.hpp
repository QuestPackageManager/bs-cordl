#pragma once
// IWYU pragma private; include "VRUIControls/MouseButtonEventData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData.PressedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::PressedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4aed814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(), "PressedThisFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData.ReleasedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::ReleasedThisFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4aed824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(),
                                                                               "ReleasedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aed838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState& VRUIControls::MouseButtonEventData::__cordl_internal_get_buttonState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonState;
}
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState const& VRUIControls::MouseButtonEventData::__cordl_internal_get_buttonState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonState;
}
constexpr void VRUIControls::MouseButtonEventData::__cordl_internal_set_buttonState(::UnityEngine::EventSystems::PointerEventData_FramePressState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonState = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& VRUIControls::MouseButtonEventData::__cordl_internal_get_buttonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonData;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& VRUIControls::MouseButtonEventData::__cordl_internal_get_buttonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonData;
}
constexpr void VRUIControls::MouseButtonEventData::__cordl_internal_set_buttonData(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VRUIControls::MouseButtonEventData::PressedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(), "PressedThisFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VRUIControls::MouseButtonEventData::ReleasedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(), "ReleasedThisFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VRUIControls::MouseButtonEventData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VRUIControls::MouseButtonEventData* VRUIControls::MouseButtonEventData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VRUIControls::MouseButtonEventData*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::MouseButtonEventData::MouseButtonEventData() {}
