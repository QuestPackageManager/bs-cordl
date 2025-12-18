#pragma once
// IWYU pragma private; include "Meta/XR/Util/FeatureAttribute.hpp"
#include "Meta/XR/Util/zzzz__Feature_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Meta/XR/Util/zzzz__FeatureAttribute_def.hpp"
#include "Meta/XR/Util/zzzz__Feature_def.hpp"
//  Writing Method size for method: ::Meta::XR::Util::FeatureAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::Util::FeatureAttribute::*)(::Meta::XR::Util::Feature)>(
    &::Meta::XR::Util::FeatureAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca287c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Util::FeatureAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::Util::Feature>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Util::FeatureAttribute.get_Feature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::XR::Util::Feature (::Meta::XR::Util::FeatureAttribute::*)()>(
    &::Meta::XR::Util::FeatureAttribute::get_Feature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Util::FeatureAttribute*>::get(), "get_Feature",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::Util::Feature& Meta::XR::Util::FeatureAttribute::__cordl_internal_get__Feature_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Feature_k__BackingField;
}
constexpr ::Meta::XR::Util::Feature const& Meta::XR::Util::FeatureAttribute::__cordl_internal_get__Feature_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Feature_k__BackingField;
}
constexpr void Meta::XR::Util::FeatureAttribute::__cordl_internal_set__Feature_k__BackingField(::Meta::XR::Util::Feature value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Feature_k__BackingField = value;
}
inline void Meta::XR::Util::FeatureAttribute::_ctor(::Meta::XR::Util::Feature feature) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Util::FeatureAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::Util::Feature>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, feature);
}
inline ::Meta::XR::Util::Feature Meta::XR::Util::FeatureAttribute::get_Feature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::Util::FeatureAttribute*>::get(), "get_Feature",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::Util::Feature, false>(this, ___internal_method);
}
inline ::Meta::XR::Util::FeatureAttribute* Meta::XR::Util::FeatureAttribute::New_ctor(::Meta::XR::Util::Feature feature) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::Util::FeatureAttribute*>(feature));
}
// Ctor Parameters []
constexpr ::Meta::XR::Util::FeatureAttribute::FeatureAttribute() {}
