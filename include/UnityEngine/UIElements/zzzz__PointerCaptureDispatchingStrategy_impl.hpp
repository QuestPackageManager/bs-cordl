#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureDispatchingStrategy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureDispatchingStrategy.CanDispatchEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::PointerCaptureDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::PointerCaptureDispatchingStrategy::CanDispatchEvent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x49c946c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureDispatchingStrategy*>::get(), "CanDispatchEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureDispatchingStrategy.DispatchEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerCaptureDispatchingStrategy::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::PointerCaptureDispatchingStrategy::DispatchEvent)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x49c94c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureDispatchingStrategy*>::get(), "DispatchEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerCaptureDispatchingStrategy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerCaptureDispatchingStrategy::*)()>(
    &::UnityEngine::UIElements::PointerCaptureDispatchingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49bcd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureDispatchingStrategy*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr UnityEngine::UIElements::PointerCaptureDispatchingStrategy::operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept {
  return static_cast<::UnityEngine::UIElements::IEventDispatchingStrategy*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* UnityEngine::UIElements::PointerCaptureDispatchingStrategy::i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept {
  return static_cast<::UnityEngine::UIElements::IEventDispatchingStrategy*>(static_cast<void*>(this));
}
inline bool UnityEngine::UIElements::PointerCaptureDispatchingStrategy::CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureDispatchingStrategy*>::get(), "CanDispatchEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::PointerCaptureDispatchingStrategy::DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureDispatchingStrategy*>::get(), "DispatchEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel);
}
inline ::UnityEngine::UIElements::PointerCaptureDispatchingStrategy* UnityEngine::UIElements::PointerCaptureDispatchingStrategy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PointerCaptureDispatchingStrategy*>());
}
inline void UnityEngine::UIElements::PointerCaptureDispatchingStrategy::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerCaptureDispatchingStrategy*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerCaptureDispatchingStrategy::PointerCaptureDispatchingStrategy() {}
