#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SignalOnPointerClick_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignalOnPointerClick.OnPointerClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalOnPointerClick::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::GlobalNamespace::SignalOnPointerClick::OnPointerClick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22579a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnPointerClick*>::get(), "OnPointerClick", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalOnPointerClick._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalOnPointerClick::*)()>(&::GlobalNamespace::SignalOnPointerClick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22579c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnPointerClick*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr GlobalNamespace::SignalOnPointerClick::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* GlobalNamespace::SignalOnPointerClick::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr GlobalNamespace::SignalOnPointerClick::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::SignalOnPointerClick::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::SignalOnPointerClick::__cordl_internal_get__inputFieldClickedSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFieldClickedSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::SignalOnPointerClick::__cordl_internal_get__inputFieldClickedSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFieldClickedSignal;
}
constexpr void GlobalNamespace::SignalOnPointerClick::__cordl_internal_set__inputFieldClickedSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputFieldClickedSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SignalOnPointerClick::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnPointerClick*>::get(), "OnPointerClick", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline ::GlobalNamespace::SignalOnPointerClick* GlobalNamespace::SignalOnPointerClick::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SignalOnPointerClick*>());
}
inline void GlobalNamespace::SignalOnPointerClick::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnPointerClick*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SignalOnPointerClick::SignalOnPointerClick() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
