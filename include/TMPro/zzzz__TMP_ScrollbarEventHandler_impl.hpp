#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "TMPro/zzzz__TMP_ScrollbarEventHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_ScrollbarEventHandler.OnPointerClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_ScrollbarEventHandler::OnPointerClick)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c3f998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnPointerClick", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ScrollbarEventHandler.OnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::TMPro::TMP_ScrollbarEventHandler::OnSelect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c3fa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnSelect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ScrollbarEventHandler.OnDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::TMPro::TMP_ScrollbarEventHandler::OnDeselect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c3fa78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnDeselect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ScrollbarEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ScrollbarEventHandler::*)()>(&::TMPro::TMP_ScrollbarEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3faec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr TMPro::TMP_ScrollbarEventHandler::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr TMPro::TMP_ScrollbarEventHandler::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr TMPro::TMP_ScrollbarEventHandler::operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr TMPro::TMP_ScrollbarEventHandler::operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDeselectHandler*>(static_cast<void*>(this));
}
constexpr bool& TMPro::TMP_ScrollbarEventHandler::__get_isSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSelected;
}
constexpr bool const& TMPro::TMP_ScrollbarEventHandler::__get_isSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSelected;
}
constexpr void TMPro::TMP_ScrollbarEventHandler::__set_isSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSelected = value;
}
inline void TMPro::TMP_ScrollbarEventHandler::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnPointerClick", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_ScrollbarEventHandler::OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnSelect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_ScrollbarEventHandler::OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnDeselect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::TMPro::TMP_ScrollbarEventHandler* TMPro::TMP_ScrollbarEventHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::TMP_ScrollbarEventHandler*>());
}
inline void TMPro::TMP_ScrollbarEventHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_ScrollbarEventHandler::TMP_ScrollbarEventHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
