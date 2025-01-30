#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/ComDefaultInterfaceAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__ComDefaultInterfaceAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComDefaultInterfaceAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ComDefaultInterfaceAttribute::*)(::System::Type*)>(
    &::System::Runtime::InteropServices::ComDefaultInterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d166b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComDefaultInterfaceAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::InteropServices::ComDefaultInterfaceAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr ::System::Type* const& System::Runtime::InteropServices::ComDefaultInterfaceAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::ComDefaultInterfaceAttribute::__cordl_internal_set__val(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____val)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::InteropServices::ComDefaultInterfaceAttribute::_ctor(::System::Type* defaultInterface) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComDefaultInterfaceAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, defaultInterface);
}
inline ::System::Runtime::InteropServices::ComDefaultInterfaceAttribute* System::Runtime::InteropServices::ComDefaultInterfaceAttribute::New_ctor(::System::Type* defaultInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::InteropServices::ComDefaultInterfaceAttribute*>(defaultInterface));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::ComDefaultInterfaceAttribute::ComDefaultInterfaceAttribute() {}
