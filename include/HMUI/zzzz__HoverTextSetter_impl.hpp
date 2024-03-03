#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__HoverTextSetter_def.hpp"
#include "HMUI/zzzz__HoverTextController_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::HMUI::HoverTextSetter.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::HoverTextSetter::*)()>(&::HMUI::HoverTextSetter::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2280b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "get_text",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverTextSetter.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HoverTextSetter::*)(::StringW)>(&::HMUI::HoverTextSetter::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2280b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverTextSetter.OnPointerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HoverTextSetter::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::HMUI::HoverTextSetter::OnPointerEnter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2280b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "OnPointerEnter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverTextSetter.OnPointerExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HoverTextSetter::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::HMUI::HoverTextSetter::OnPointerExit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2280bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "OnPointerExit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverTextSetter.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HoverTextSetter::*)()>(&::HMUI::HoverTextSetter::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2280bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverTextSetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::HoverTextSetter::*)()>(&::HMUI::HoverTextSetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2280be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr HMUI::HoverTextSetter::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* HMUI::HoverTextSetter::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr HMUI::HoverTextSetter::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* HMUI::HoverTextSetter::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr HMUI::HoverTextSetter::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* HMUI::HoverTextSetter::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
constexpr ::UnityW<::HMUI::HoverTextController>& HMUI::HoverTextSetter::__cordl_internal_get__hoverTextController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverTextController;
}
constexpr ::UnityW<::HMUI::HoverTextController> const& HMUI::HoverTextSetter::__cordl_internal_get__hoverTextController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hoverTextController;
}
constexpr void HMUI::HoverTextSetter::__cordl_internal_set__hoverTextController(::UnityW<::HMUI::HoverTextController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoverTextController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HMUI::HoverTextSetter::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& HMUI::HoverTextSetter::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::HoverTextSetter::__cordl_internal_set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW HMUI::HoverTextSetter::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "get_text",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HMUI::HoverTextSetter::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::HoverTextSetter::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "OnPointerEnter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::HoverTextSetter::OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "OnPointerExit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::HoverTextSetter::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::HoverTextSetter* HMUI::HoverTextSetter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::HoverTextSetter*>());
}
inline void HMUI::HoverTextSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::HoverTextSetter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::HoverTextSetter::HoverTextSetter() {}
