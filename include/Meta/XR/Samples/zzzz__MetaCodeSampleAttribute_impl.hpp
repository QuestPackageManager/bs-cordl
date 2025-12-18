#pragma once
// IWYU pragma private; include "Meta/XR/Samples/MetaCodeSampleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Meta/XR/Samples/zzzz__MetaCodeSampleAttribute_def.hpp"
//  Writing Method size for method: ::Meta::XR::Samples::MetaCodeSampleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::Samples::MetaCodeSampleAttribute::*)(::StringW)>(
    &::Meta::XR::Samples::MetaCodeSampleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Samples::MetaCodeSampleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::MetaCodeSampleAttribute.get_SampleName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::Samples::MetaCodeSampleAttribute::*)()>(
    &::Meta::XR::Samples::MetaCodeSampleAttribute::get_SampleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca243c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Samples::MetaCodeSampleAttribute*>::get(),
                                                                               "get_SampleName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::MetaCodeSampleAttribute.set_SampleName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::Samples::MetaCodeSampleAttribute::*)(::StringW)>(
    &::Meta::XR::Samples::MetaCodeSampleAttribute::set_SampleName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Samples::MetaCodeSampleAttribute*>::get(), "set_SampleName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::Samples::MetaCodeSampleAttribute::__cordl_internal_get__SampleName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SampleName_k__BackingField;
}
constexpr ::StringW const& Meta::XR::Samples::MetaCodeSampleAttribute::__cordl_internal_get__SampleName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SampleName_k__BackingField;
}
constexpr void Meta::XR::Samples::MetaCodeSampleAttribute::__cordl_internal_set__SampleName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SampleName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::Samples::MetaCodeSampleAttribute::_ctor(::StringW sampleName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Samples::MetaCodeSampleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleName);
}
inline ::StringW Meta::XR::Samples::MetaCodeSampleAttribute::get_SampleName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Samples::MetaCodeSampleAttribute*>::get(),
                                                                             "get_SampleName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Meta::XR::Samples::MetaCodeSampleAttribute::set_SampleName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Samples::MetaCodeSampleAttribute*>::get(), "set_SampleName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Meta::XR::Samples::MetaCodeSampleAttribute* Meta::XR::Samples::MetaCodeSampleAttribute::New_ctor(::StringW sampleName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::Samples::MetaCodeSampleAttribute*>(sampleName));
}
// Ctor Parameters []
constexpr ::Meta::XR::Samples::MetaCodeSampleAttribute::MetaCodeSampleAttribute() {}
