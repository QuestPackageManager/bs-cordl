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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Meta::XR::ImmersiveDebugger::InspectedData::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedData::ExtractTypesFromInspectedMembers)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5a3ed60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedData*>(), { "ExtractTypesFromInspectedMembers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedData::*)()>(&::Meta::XR::ImmersiveDebugger::InspectedData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a3f26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedData*>(), { ".ctor", {}, {} })));
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
  this->___DisplayName = value;
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
  this->___InspectedMembers = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Meta::XR::ImmersiveDebugger::InspectedData::ExtractTypesFromInspectedMembers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedData*>(), { "ExtractTypesFromInspectedMembers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::InspectedData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::InspectedData* Meta::XR::ImmersiveDebugger::InspectedData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::InspectedData*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedData::InspectedData() {}
