#pragma once
// IWYU pragma private; include "System/CLSCompliantAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__CLSCompliantAttribute_def.hpp"
//  Writing Method size for method: ::System::CLSCompliantAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::CLSCompliantAttribute::*)(bool)>(&::System::CLSCompliantAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d5aa5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CLSCompliantAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::CLSCompliantAttribute::__cordl_internal_get__compliant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compliant;
}
constexpr bool const& System::CLSCompliantAttribute::__cordl_internal_get__compliant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____compliant;
}
constexpr void System::CLSCompliantAttribute::__cordl_internal_set__compliant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____compliant = value;
}
inline void System::CLSCompliantAttribute::_ctor(bool isCompliant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CLSCompliantAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isCompliant);
}
inline ::System::CLSCompliantAttribute* System::CLSCompliantAttribute::New_ctor(bool isCompliant) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::CLSCompliantAttribute*>(isCompliant));
}
// Ctor Parameters []
constexpr ::System::CLSCompliantAttribute::CLSCompliantAttribute() {}
