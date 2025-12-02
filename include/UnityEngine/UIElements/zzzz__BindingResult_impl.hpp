#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingResult.hpp"
#include "UnityEngine/UIElements/zzzz__BindingStatus_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingStatus_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindingResult.get_status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BindingStatus (::UnityEngine::UIElements::BindingResult::*)()>(
    &::UnityEngine::UIElements::BindingResult::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fc414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingResult>::get(), "get_status",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingResult.get_message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::BindingResult::*)()>(&::UnityEngine::UIElements::BindingResult::get_message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69fc41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingResult>::get(), "get_message",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindingResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BindingResult::*)(::UnityEngine::UIElements::BindingStatus, ::StringW)>(
    &::UnityEngine::UIElements::BindingResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69fc424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BindingStatus>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::BindingStatus UnityEngine::UIElements::BindingResult::get_status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingResult>::get(), "get_status",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingStatus, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::BindingResult::get_message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingResult>::get(), "get_message",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BindingResult::_ctor(::UnityEngine::UIElements::BindingStatus status, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindingResult>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BindingStatus>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, status, message);
}
// Ctor Parameters [CppParam { name: "_status_k__BackingField", ty: "::UnityEngine::UIElements::BindingStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "_message_k__BackingField", ty:
// "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindingResult::BindingResult(::UnityEngine::UIElements::BindingStatus _status_k__BackingField, ::StringW _message_k__BackingField) noexcept {
  this->_status_k__BackingField = _status_k__BackingField;
  this->_message_k__BackingField = _message_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindingResult::BindingResult() {}
