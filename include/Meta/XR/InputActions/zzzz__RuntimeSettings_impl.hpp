#pragma once
// IWYU pragma private; include "Meta/XR/InputActions/RuntimeSettings.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_impl.hpp"
#include "Meta/XR/InputActions/zzzz__RuntimeSettings_def.hpp"
#include "Meta/XR/InputActions/zzzz__InputActionSet_def.hpp"
#include "Meta/XR/InputActions/zzzz__UserInputActionSet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::InputActions::RuntimeSettings.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::InputActions::RuntimeSettings> (*)()>(
    &::Meta::XR::InputActions::RuntimeSettings::get_Instance)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ca2910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::RuntimeSettings*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::InputActions::RuntimeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::InputActions::RuntimeSettings::*)()>(&::Meta::XR::InputActions::RuntimeSettings::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ca2a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::RuntimeSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::UserInputActionSet*>*& Meta::XR::InputActions::RuntimeSettings::__cordl_internal_get_InputActionDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::UserInputActionSet*>* const& Meta::XR::InputActions::RuntimeSettings::__cordl_internal_get_InputActionDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionDefinitions;
}
constexpr void Meta::XR::InputActions::RuntimeSettings::__cordl_internal_set_InputActionDefinitions(::System::Collections::Generic::List_1<::Meta::XR::InputActions::UserInputActionSet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InputActionDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::InputActions::InputActionSet>>*& Meta::XR::InputActions::RuntimeSettings::__cordl_internal_get_InputActionSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionSets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::InputActions::InputActionSet>>* const& Meta::XR::InputActions::RuntimeSettings::__cordl_internal_get_InputActionSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionSets;
}
constexpr void Meta::XR::InputActions::RuntimeSettings::__cordl_internal_set_InputActionSets(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::InputActions::InputActionSet>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InputActionSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::InputActions::RuntimeSettings::setStaticF_InstanceAssetName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "InstanceAssetName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::RuntimeSettings*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Meta::XR::InputActions::RuntimeSettings::getStaticF_InstanceAssetName() {
  return ::cordl_internals::getStaticField<::StringW, "InstanceAssetName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::RuntimeSettings*>::get>();
}
inline void Meta::XR::InputActions::RuntimeSettings::setStaticF__instance(::UnityW<::Meta::XR::InputActions::RuntimeSettings> value) {
  ::cordl_internals::setStaticField<::UnityW<::Meta::XR::InputActions::RuntimeSettings>, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::RuntimeSettings*>::get>(
      std::forward<::UnityW<::Meta::XR::InputActions::RuntimeSettings>>(value));
}
inline ::UnityW<::Meta::XR::InputActions::RuntimeSettings> Meta::XR::InputActions::RuntimeSettings::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityW<::Meta::XR::InputActions::RuntimeSettings>, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::RuntimeSettings*>::get>();
}
inline ::UnityW<::Meta::XR::InputActions::RuntimeSettings> Meta::XR::InputActions::RuntimeSettings::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::RuntimeSettings*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::InputActions::RuntimeSettings>, false>(nullptr, ___internal_method);
}
inline void Meta::XR::InputActions::RuntimeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::RuntimeSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::InputActions::RuntimeSettings* Meta::XR::InputActions::RuntimeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::InputActions::RuntimeSettings*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::InputActions::RuntimeSettings::RuntimeSettings() {}
