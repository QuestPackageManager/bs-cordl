#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__ResultProof_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::ResultProof.get_proof
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaberAPI::DataTransferObjects::ResultProof::*)()>(
    &::BeatSaberAPI::DataTransferObjects::ResultProof::get_proof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof*>::get(),
                                                                               "get_proof", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::ResultProof.set_proof
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::ResultProof::*)(::StringW)>(
    &::BeatSaberAPI::DataTransferObjects::ResultProof::set_proof)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof*>::get(), "set_proof",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::ResultProof._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::ResultProof::*)()>(
    &::BeatSaberAPI::DataTransferObjects::ResultProof::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::ResultProof::__get__proof_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proof_k__BackingField;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::ResultProof::__get__proof_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____proof_k__BackingField;
}
constexpr void BeatSaberAPI::DataTransferObjects::ResultProof::__set__proof_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____proof_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW BeatSaberAPI::DataTransferObjects::ResultProof::get_proof() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof*>::get(),
                                                                             "get_proof", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BeatSaberAPI::DataTransferObjects::ResultProof::set_proof(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof*>::get(), "set_proof",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaberAPI::DataTransferObjects::ResultProof* BeatSaberAPI::DataTransferObjects::ResultProof::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaberAPI::DataTransferObjects::ResultProof*>());
}
inline void BeatSaberAPI::DataTransferObjects::ResultProof::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::ResultProof*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::ResultProof::ResultProof() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
