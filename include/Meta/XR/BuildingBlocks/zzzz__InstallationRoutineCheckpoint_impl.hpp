#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/InstallationRoutineCheckpoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__InstallationRoutineCheckpoint_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__VariantCheckpoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint.get_InstallationRoutineId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::*)()>(
    &::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::get_InstallationRoutineId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588cbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>::get(), "get_InstallationRoutineId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint.get_InstallationVariants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* (
    ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::*)()>(&::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::get_InstallationVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588cbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>::get(), "get_InstallationVariants",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::*)(
    ::StringW, ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*)>(&::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588cc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::__cordl_internal_get__installationRoutineId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installationRoutineId;
}
constexpr ::StringW const& Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::__cordl_internal_get__installationRoutineId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installationRoutineId;
}
constexpr void Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::__cordl_internal_set__installationRoutineId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installationRoutineId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*&
Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::__cordl_internal_get__installationVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installationVariants;
}
constexpr ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* const&
Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::__cordl_internal_get__installationVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installationVariants;
}
constexpr void
Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::__cordl_internal_set__installationVariants(::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installationVariants)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::get_InstallationRoutineId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>::get(),
                                                                             "get_InstallationRoutineId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::get_InstallationVariants() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>::get(),
                                                                             "get_InstallationVariants", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::_ctor(::StringW installationRoutineId,
                                                                           ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* installationVariants) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, installationRoutineId, installationVariants);
}
inline ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*
Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::New_ctor(::StringW installationRoutineId,
                                                                  ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* installationVariants) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>(installationRoutineId, installationVariants));
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::InstallationRoutineCheckpoint() {}
