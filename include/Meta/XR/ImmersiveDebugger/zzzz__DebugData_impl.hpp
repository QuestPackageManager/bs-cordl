#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugData::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::Meta::XR::ImmersiveDebugger::DebugData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a40064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::ImmersiveDebugger::DebugData::__cordl_internal_get_AssemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssemblyName;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::DebugData::__cordl_internal_get_AssemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssemblyName;
}
constexpr void Meta::XR::ImmersiveDebugger::DebugData::__cordl_internal_set_AssemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssemblyName = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Meta::XR::ImmersiveDebugger::DebugData::__cordl_internal_get_DebugTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugTypes;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Meta::XR::ImmersiveDebugger::DebugData::__cordl_internal_get_DebugTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DebugTypes;
}
constexpr void Meta::XR::ImmersiveDebugger::DebugData::__cordl_internal_set_DebugTypes(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DebugTypes = value;
}
inline void Meta::XR::ImmersiveDebugger::DebugData::_ctor(::StringW assemblyName, ::System::Collections::Generic::List_1<::StringW>* types) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::DebugData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assemblyName, types);
}
inline ::Meta::XR::ImmersiveDebugger::DebugData* Meta::XR::ImmersiveDebugger::DebugData::New_ctor(::StringW assemblyName, ::System::Collections::Generic::List_1<::StringW>* types) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::DebugData*>(assemblyName, types));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugData::DebugData() {}
