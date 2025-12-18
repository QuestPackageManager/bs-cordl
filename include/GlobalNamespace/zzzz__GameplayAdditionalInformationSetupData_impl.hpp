#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayAdditionalInformationSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformationSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayAdditionalInformationSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayAdditionalInformationSetupData::*)(
    ::GlobalNamespace::GameplayAdditionalInformation*)>(&::GlobalNamespace::GameplayAdditionalInformationSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x577b1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayAdditionalInformationSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayAdditionalInformation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayAdditionalInformation*& GlobalNamespace::GameplayAdditionalInformationSetupData::__cordl_internal_get_additionalInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalInformation;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformation* const& GlobalNamespace::GameplayAdditionalInformationSetupData::__cordl_internal_get_additionalInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalInformation;
}
constexpr void GlobalNamespace::GameplayAdditionalInformationSetupData::__cordl_internal_set_additionalInformation(::GlobalNamespace::GameplayAdditionalInformation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___additionalInformation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameplayAdditionalInformationSetupData::_ctor(::GlobalNamespace::GameplayAdditionalInformation* additionalInformation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayAdditionalInformationSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayAdditionalInformation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionalInformation);
}
inline ::GlobalNamespace::GameplayAdditionalInformationSetupData*
GlobalNamespace::GameplayAdditionalInformationSetupData::New_ctor(::GlobalNamespace::GameplayAdditionalInformation* additionalInformation) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameplayAdditionalInformationSetupData*>(additionalInformation));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData::GameplayAdditionalInformationSetupData() {}
