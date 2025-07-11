#pragma once
// IWYU pragma private; include "TMPro/TMP_ScrollbarEventHandler.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "TMPro/zzzz__TMP_ScrollbarEventHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_ScrollbarEventHandler.OnPointerClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::TMPro::TMP_ScrollbarEventHandler::OnPointerClick)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x47fdd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnPointerClick", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ScrollbarEventHandler.OnSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::TMPro::TMP_ScrollbarEventHandler::OnSelect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x47fddb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnSelect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ScrollbarEventHandler.OnDeselect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(
    &::TMPro::TMP_ScrollbarEventHandler::OnDeselect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x47fde30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnDeselect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ScrollbarEventHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ScrollbarEventHandler::*)()>(&::TMPro::TMP_ScrollbarEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47fdea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& TMPro::TMP_ScrollbarEventHandler::__cordl_internal_get_isSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSelected;
}
constexpr bool const& TMPro::TMP_ScrollbarEventHandler::__cordl_internal_get_isSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSelected;
}
constexpr void TMPro::TMP_ScrollbarEventHandler::__cordl_internal_set_isSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSelected = value;
}
inline void TMPro::TMP_ScrollbarEventHandler::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnPointerClick", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_ScrollbarEventHandler::OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnSelect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_ScrollbarEventHandler::OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), "OnDeselect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void TMPro::TMP_ScrollbarEventHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ScrollbarEventHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_ScrollbarEventHandler* TMPro::TMP_ScrollbarEventHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_ScrollbarEventHandler*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr TMPro::TMP_ScrollbarEventHandler::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* TMPro::TMP_ScrollbarEventHandler::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr TMPro::TMP_ScrollbarEventHandler::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* TMPro::TMP_ScrollbarEventHandler::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr TMPro::TMP_ScrollbarEventHandler::operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* TMPro::TMP_ScrollbarEventHandler::i___UnityEngine__EventSystems__ISelectHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr TMPro::TMP_ScrollbarEventHandler::operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDeselectHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr ::UnityEngine::EventSystems::IDeselectHandler* TMPro::TMP_ScrollbarEventHandler::i___UnityEngine__EventSystems__IDeselectHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IDeselectHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::TMPro::TMP_ScrollbarEventHandler::TMP_ScrollbarEventHandler() {}
