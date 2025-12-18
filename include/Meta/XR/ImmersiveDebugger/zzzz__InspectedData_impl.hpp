#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedData_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedMember_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedData.ExtractTypesFromInspectedMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Meta::XR::ImmersiveDebugger::InspectedData::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedData::ExtractTypesFromInspectedMembers)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5891814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedData*>::get(), "ExtractTypesFromInspectedMembers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedData::*)()>(&::Meta::XR::ImmersiveDebugger::InspectedData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5891d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::ImmersiveDebugger::InspectedData::__cordl_internal_get_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::InspectedData::__cordl_internal_get_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedData::__cordl_internal_set_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>*& Meta::XR::ImmersiveDebugger::InspectedData::__cordl_internal_get_InspectedMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InspectedMembers;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* const& Meta::XR::ImmersiveDebugger::InspectedData::__cordl_internal_get_InspectedMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InspectedMembers;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedData::__cordl_internal_set_InspectedMembers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InspectedMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Meta::XR::ImmersiveDebugger::InspectedData::ExtractTypesFromInspectedMembers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedData*>::get(),
                                                                             "ExtractTypesFromInspectedMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::InspectedData* Meta::XR::ImmersiveDebugger::InspectedData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::InspectedData*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedData::InspectedData() {}
