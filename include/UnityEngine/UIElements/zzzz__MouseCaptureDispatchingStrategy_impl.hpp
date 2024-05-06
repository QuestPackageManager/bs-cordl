#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureDispatchingStrategy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior::__MouseCaptureDispatchingStrategy__EventBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior::__MouseCaptureDispatchingStrategy__EventBehavior() {}
constexpr ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior::IsCapturable{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior UnityEngine::UIElements::__MouseCaptureDispatchingStrategy__EventBehavior::IsSentExclusivelyToCapturingElement{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureDispatchingStrategy.CanDispatchEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::MouseCaptureDispatchingStrategy::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::MouseCaptureDispatchingStrategy::CanDispatchEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35a2054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureDispatchingStrategy*>::get(), "CanDispatchEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureDispatchingStrategy.DispatchEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MouseCaptureDispatchingStrategy::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::MouseCaptureDispatchingStrategy::DispatchEvent)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x35a20e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureDispatchingStrategy*>::get(), "DispatchEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureDispatchingStrategy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MouseCaptureDispatchingStrategy::*)()>(
    &::UnityEngine::UIElements::MouseCaptureDispatchingStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a27dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureDispatchingStrategy*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr UnityEngine::UIElements::MouseCaptureDispatchingStrategy::operator ::UnityEngine::UIElements::IEventDispatchingStrategy*() noexcept {
  return static_cast<::UnityEngine::UIElements::IEventDispatchingStrategy*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IEventDispatchingStrategy"
constexpr ::UnityEngine::UIElements::IEventDispatchingStrategy* UnityEngine::UIElements::MouseCaptureDispatchingStrategy::i___UnityEngine__UIElements__IEventDispatchingStrategy() noexcept {
  return static_cast<::UnityEngine::UIElements::IEventDispatchingStrategy*>(static_cast<void*>(this));
}
inline bool UnityEngine::UIElements::MouseCaptureDispatchingStrategy::CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureDispatchingStrategy*>::get(), "CanDispatchEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::MouseCaptureDispatchingStrategy::DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureDispatchingStrategy*>::get(), "DispatchEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel);
}
inline ::UnityEngine::UIElements::MouseCaptureDispatchingStrategy* UnityEngine::UIElements::MouseCaptureDispatchingStrategy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::MouseCaptureDispatchingStrategy*>());
}
inline void UnityEngine::UIElements::MouseCaptureDispatchingStrategy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureDispatchingStrategy*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseCaptureDispatchingStrategy::MouseCaptureDispatchingStrategy() {}
