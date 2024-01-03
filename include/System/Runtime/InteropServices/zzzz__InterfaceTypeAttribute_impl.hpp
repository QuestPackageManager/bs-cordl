#pragma once
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__InterfaceTypeAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::InterfaceTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::InterfaceTypeAttribute::*)(
    ::System::Runtime::InteropServices::ComInterfaceType)>(&::System::Runtime::InteropServices::InterfaceTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d71f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::InterfaceTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ComInterfaceType>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::ComInterfaceType& System::Runtime::InteropServices::InterfaceTypeAttribute::__get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr ::System::Runtime::InteropServices::ComInterfaceType const& System::Runtime::InteropServices::InterfaceTypeAttribute::__get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::InterfaceTypeAttribute::__set__val(::System::Runtime::InteropServices::ComInterfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline ::System::Runtime::InteropServices::InterfaceTypeAttribute*
System::Runtime::InteropServices::InterfaceTypeAttribute::New_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::InteropServices::InterfaceTypeAttribute*>(interfaceType));
}
inline void System::Runtime::InteropServices::InterfaceTypeAttribute::_ctor(::System::Runtime::InteropServices::ComInterfaceType interfaceType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::InterfaceTypeAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::ComInterfaceType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interfaceType);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::InterfaceTypeAttribute::InterfaceTypeAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
