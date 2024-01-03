#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Resources/zzzz__SatelliteContractVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Resources::SatelliteContractVersionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::SatelliteContractVersionAttribute::*)(::StringW)>(
    &::System::Resources::SatelliteContractVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24e0a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::SatelliteContractVersionAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Resources::SatelliteContractVersionAttribute::__get__Version_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr ::StringW const& System::Resources::SatelliteContractVersionAttribute::__get__Version_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr void System::Resources::SatelliteContractVersionAttribute::__set__Version_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Version_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Resources::SatelliteContractVersionAttribute* System::Resources::SatelliteContractVersionAttribute::New_ctor(::StringW version) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::SatelliteContractVersionAttribute*>(version));
}
inline void System::Resources::SatelliteContractVersionAttribute::_ctor(::StringW version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::SatelliteContractVersionAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, version);
}
// Ctor Parameters []
constexpr ::System::Resources::SatelliteContractVersionAttribute::SatelliteContractVersionAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
