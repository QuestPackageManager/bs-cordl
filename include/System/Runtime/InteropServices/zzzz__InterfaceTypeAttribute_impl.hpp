#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/InterfaceTypeAttribute.hpp"
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__InterfaceTypeAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::InterfaceTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::InterfaceTypeAttribute::*)(
    ::System::Runtime::InteropServices::ComInterfaceType)>(&::System::Runtime::InteropServices::InterfaceTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2857d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::InterfaceTypeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ComInterfaceType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::ComInterfaceType& System::Runtime::InteropServices::InterfaceTypeAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr ::System::Runtime::InteropServices::ComInterfaceType const& System::Runtime::InteropServices::InterfaceTypeAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::InterfaceTypeAttribute::__cordl_internal_set__val(::System::Runtime::InteropServices::ComInterfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline ::System::Runtime::InteropServices::InterfaceTypeAttribute*
System::Runtime::InteropServices::InterfaceTypeAttribute::New_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::InteropServices::InterfaceTypeAttribute*>(interfaceType));
}
inline void System::Runtime::InteropServices::InterfaceTypeAttribute::_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::InterfaceTypeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ComInterfaceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interfaceType);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::InterfaceTypeAttribute::InterfaceTypeAttribute() {}
