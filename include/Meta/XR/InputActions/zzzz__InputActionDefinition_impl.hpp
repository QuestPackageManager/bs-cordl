#pragma once
// IWYU pragma private; include "Meta/XR/InputActions/InputActionDefinition.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/InputActions/zzzz__InputActionDefinition_def.hpp"
//  Writing Method size for method: ::Meta::XR::InputActions::InputActionDefinition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::InputActions::InputActionDefinition::*)()>(
    &::Meta::XR::InputActions::InputActionDefinition::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca2bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::InputActionDefinition*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_ActionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActionName;
}
constexpr ::StringW const& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_ActionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ActionName;
}
constexpr void Meta::XR::InputActions::InputActionDefinition::__cordl_internal_set_ActionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ActionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::GlobalNamespace::OVRPlugin_ActionTypes const& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Meta::XR::InputActions::InputActionDefinition::__cordl_internal_set_Type(::GlobalNamespace::OVRPlugin_ActionTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_Paths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Paths;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Meta::XR::InputActions::InputActionDefinition::__cordl_internal_get_Paths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Paths;
}
constexpr void Meta::XR::InputActions::InputActionDefinition::__cordl_internal_set_Paths(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Paths)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::InputActions::InputActionDefinition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::InputActionDefinition*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::InputActions::InputActionDefinition* Meta::XR::InputActions::InputActionDefinition::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::InputActions::InputActionDefinition*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::InputActions::InputActionDefinition::InputActionDefinition() {}
