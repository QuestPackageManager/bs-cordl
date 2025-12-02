#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/VariantCheckpoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__VariantCheckpoint_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::VariantCheckpoint.get_MemberName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::BuildingBlocks::VariantCheckpoint::*)()>(
    &::Meta::XR::BuildingBlocks::VariantCheckpoint::get_MemberName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58264a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::VariantCheckpoint*>::get(),
                                                                               "get_MemberName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::VariantCheckpoint.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::BuildingBlocks::VariantCheckpoint::*)()>(
    &::Meta::XR::BuildingBlocks::VariantCheckpoint::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58264ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::VariantCheckpoint*>::get(),
                                                                               "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::VariantCheckpoint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::VariantCheckpoint::*)(::StringW, ::StringW)>(
    &::Meta::XR::BuildingBlocks::VariantCheckpoint::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58264b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::VariantCheckpoint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_get__memberName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberName;
}
constexpr ::StringW const& Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_get__memberName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberName;
}
constexpr void Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_set__memberName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____memberName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::StringW const& Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void Meta::XR::BuildingBlocks::VariantCheckpoint::__cordl_internal_set__value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Meta::XR::BuildingBlocks::VariantCheckpoint::get_MemberName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::VariantCheckpoint*>::get(),
                                                                             "get_MemberName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Meta::XR::BuildingBlocks::VariantCheckpoint::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::VariantCheckpoint*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::VariantCheckpoint::_ctor(::StringW memberName, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::VariantCheckpoint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberName, value);
}
inline ::Meta::XR::BuildingBlocks::VariantCheckpoint* Meta::XR::BuildingBlocks::VariantCheckpoint::New_ctor(::StringW memberName, ::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::VariantCheckpoint*>(memberName, value));
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::VariantCheckpoint::VariantCheckpoint() {}
