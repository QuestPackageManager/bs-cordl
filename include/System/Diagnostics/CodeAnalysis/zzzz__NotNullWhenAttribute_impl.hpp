#pragma once
// IWYU pragma private; include "System/Diagnostics/CodeAnalysis/NotNullWhenAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/CodeAnalysis/zzzz__NotNullWhenAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::*)(bool)>(
    &::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x292f430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::__cordl_internal_get__ReturnValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnValue_k__BackingField;
}
constexpr bool const& System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::__cordl_internal_get__ReturnValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReturnValue_k__BackingField;
}
constexpr void System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::__cordl_internal_set__ReturnValue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReturnValue_k__BackingField = value;
}
inline ::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute* System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::New_ctor(bool returnValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute*>(returnValue));
}
inline void System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::_ctor(bool returnValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, returnValue);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::CodeAnalysis::NotNullWhenAttribute::NotNullWhenAttribute() {}
