#pragma once
// IWYU pragma private; include "Meta\XR\BuildingBlocks\InstallationRoutineCheckpoint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__InstallationRoutineCheckpoint_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__VariantCheckpoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint.get_InstallationRoutineId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::*)()>(
    &::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::get_InstallationRoutineId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3c43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>(), { "get_InstallationRoutineId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint.get_InstallationVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* (
    ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::*)()>(&::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::get_InstallationVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3c444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>(), { "get_InstallationVariants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::*)(
    ::StringW, ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*)>(&::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3c44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*>() } })));
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
  this->____installationRoutineId = value;
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
  this->____installationVariants = value;
}
inline ::StringW Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::get_InstallationRoutineId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>(), { "get_InstallationRoutineId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::get_InstallationVariants() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>(), { "get_InstallationVariants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::_ctor(::StringW installationRoutineId,
                                                                           ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* installationVariants) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, installationRoutineId, installationVariants);
}
inline ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*
Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::New_ctor(::StringW installationRoutineId,
                                                                  ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* installationVariants) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*>(installationRoutineId, installationVariants));
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint::InstallationRoutineCheckpoint() {}
