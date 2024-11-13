#pragma once
// IWYU pragma private; include "GlobalNamespace/SignalOnUIButtonClick.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SignalOnUIButtonClick_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignalOnUIButtonClick.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalOnUIButtonClick::*)()>(&::GlobalNamespace::SignalOnUIButtonClick::Start)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3970334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnUIButtonClick*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalOnUIButtonClick.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalOnUIButtonClick::*)()>(&::GlobalNamespace::SignalOnUIButtonClick::OnDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x39703bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnUIButtonClick*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalOnUIButtonClick._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalOnUIButtonClick::*)()>(&::GlobalNamespace::SignalOnUIButtonClick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3970488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnUIButtonClick*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::SignalOnUIButtonClick::__cordl_internal_get__buttonClickedSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonClickedSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::SignalOnUIButtonClick::__cordl_internal_get__buttonClickedSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonClickedSignal;
}
constexpr void GlobalNamespace::SignalOnUIButtonClick::__cordl_internal_set__buttonClickedSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonClickedSignal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::SignalOnUIButtonClick::__cordl_internal_get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::SignalOnUIButtonClick::__cordl_internal_get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void GlobalNamespace::SignalOnUIButtonClick::__cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SignalOnUIButtonClick::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnUIButtonClick*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SignalOnUIButtonClick::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnUIButtonClick*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SignalOnUIButtonClick* GlobalNamespace::SignalOnUIButtonClick::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SignalOnUIButtonClick*>());
}
inline void GlobalNamespace::SignalOnUIButtonClick::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnUIButtonClick*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SignalOnUIButtonClick::SignalOnUIButtonClick() {}
