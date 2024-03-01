#pragma once
#include "System/Runtime/InteropServices/zzzz__CallingConvention_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__UnmanagedFunctionPointerAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::*)(
    ::System::Runtime::InteropServices::CallingConvention)>(&::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c7f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::CallingConvention>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::CallingConvention& System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::__cordl_internal_get_m_callingConvention() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_callingConvention;
}
constexpr ::System::Runtime::InteropServices::CallingConvention const& System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::__cordl_internal_get_m_callingConvention() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_callingConvention;
}
constexpr void System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::__cordl_internal_set_m_callingConvention(::System::Runtime::InteropServices::CallingConvention value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_callingConvention = value;
}
inline ::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*
System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::New_ctor(::System::Runtime::InteropServices::CallingConvention callingConvention) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*>(callingConvention));
}
inline void System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::_ctor(::System::Runtime::InteropServices::CallingConvention callingConvention) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::CallingConvention>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callingConvention);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::UnmanagedFunctionPointerAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
