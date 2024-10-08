#pragma once
// IWYU pragma private; include "System/AppContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__AppContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AppContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__AppContext__SwitchValueState::__AppContext__SwitchValueState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__AppContext__SwitchValueState::__AppContext__SwitchValueState() {}
constexpr ::System::__AppContext__SwitchValueState System::__AppContext__SwitchValueState::HasFalseValue{ static_cast<int32_t>(0x1) };
constexpr ::System::__AppContext__SwitchValueState System::__AppContext__SwitchValueState::HasTrueValue{ static_cast<int32_t>(0x2) };
constexpr ::System::__AppContext__SwitchValueState System::__AppContext__SwitchValueState::HasLookedForOverride{ static_cast<int32_t>(0x4) };
constexpr ::System::__AppContext__SwitchValueState System::__AppContext__SwitchValueState::UnknownValue{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::System::AppContext.InitializeDefaultSwitchValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::AppContext::InitializeDefaultSwitchValues)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3d9dde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContext*>::get(), "InitializeDefaultSwitchValues",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppContext.TryGetSwitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<bool>)>(&::System::AppContext::TryGetSwitch)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x3d9df5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContext*>::get(), "TryGetSwitch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
inline void System::AppContext::setStaticF_s_switchMap(::System::Collections::Generic::Dictionary_2<::StringW, ::System::__AppContext__SwitchValueState>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::__AppContext__SwitchValueState>*, "s_switchMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContext*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::__AppContext__SwitchValueState>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::__AppContext__SwitchValueState>* System::AppContext::getStaticF_s_switchMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::__AppContext__SwitchValueState>*, "s_switchMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContext*>::get>();
}
inline void System::AppContext::setStaticF_s_defaultsInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_defaultsInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContext*>::get>(std::forward<bool>(value));
}
inline bool System::AppContext::getStaticF_s_defaultsInitialized() {
  return ::cordl_internals::getStaticField<bool, "s_defaultsInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContext*>::get>();
}
inline void System::AppContext::InitializeDefaultSwitchValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContext*>::get(), "InitializeDefaultSwitchValues",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::AppContext::TryGetSwitch(::StringW switchName, ByRef<bool> isEnabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppContext*>::get(), "TryGetSwitch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, switchName, isEnabled);
}
// Ctor Parameters []
constexpr ::System::AppContext::AppContext() {}
