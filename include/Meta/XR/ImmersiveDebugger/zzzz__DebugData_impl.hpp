#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::DebugData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::DebugData::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::Meta::XR::ImmersiveDebugger::DebugData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AssemblyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DebugTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::DebugData::_ctor(::StringW assemblyName, ::System::Collections::Generic::List_1<::StringW>* types) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::DebugData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assemblyName, types);
}
inline ::Meta::XR::ImmersiveDebugger::DebugData* Meta::XR::ImmersiveDebugger::DebugData::New_ctor(::StringW assemblyName, ::System::Collections::Generic::List_1<::StringW>* types) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::DebugData*>(assemblyName, types));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugData::DebugData() {}
