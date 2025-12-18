#pragma once
// IWYU pragma private; include "Meta/XR/InputActions/InputActionSet.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/XR/InputActions/zzzz__InputActionSet_def.hpp"
#include "Meta/XR/InputActions/zzzz__InputActionDefinition_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::InputActions::InputActionSet.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::InputActions::InputActionSet::*)()>(&::Meta::XR::InputActions::InputActionSet::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca288c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::InputActionSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::InputActionSet*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::InputActions::InputActionSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::InputActions::InputActionSet::*)()>(&::Meta::XR::InputActions::InputActionSet::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ca2894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::InputActionSet*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::InputActions::InputActionSet::__cordl_internal_get_InteractionProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractionProfile;
}
constexpr ::StringW const& Meta::XR::InputActions::InputActionSet::__cordl_internal_get_InteractionProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InteractionProfile;
}
constexpr void Meta::XR::InputActions::InputActionSet::__cordl_internal_set_InteractionProfile(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InteractionProfile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>*& Meta::XR::InputActions::InputActionSet::__cordl_internal_get_InputActionDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* const& Meta::XR::InputActions::InputActionSet::__cordl_internal_get_InputActionDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InputActionDefinitions;
}
constexpr void Meta::XR::InputActions::InputActionSet::__cordl_internal_set_InputActionDefinitions(::System::Collections::Generic::List_1<::Meta::XR::InputActions::InputActionDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InputActionDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Meta::XR::InputActions::InputActionSet::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::InputActionSet*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Meta::XR::InputActions::InputActionSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::InputActions::InputActionSet*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::InputActions::InputActionSet* Meta::XR::InputActions::InputActionSet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::InputActions::InputActionSet*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::InputActions::InputActionSet::InputActionSet() {}
