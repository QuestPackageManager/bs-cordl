#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyTrademarkAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyTrademarkAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyTrademarkAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyTrademarkAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyTrademarkAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2865a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyTrademarkAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyTrademarkAttribute::__cordl_internal_get__Trademark_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Trademark_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyTrademarkAttribute::__cordl_internal_get__Trademark_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Trademark_k__BackingField;
}
constexpr void System::Reflection::AssemblyTrademarkAttribute::__cordl_internal_set__Trademark_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Trademark_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::AssemblyTrademarkAttribute* System::Reflection::AssemblyTrademarkAttribute::New_ctor(::StringW trademark) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyTrademarkAttribute*>(trademark));
}
inline void System::Reflection::AssemblyTrademarkAttribute::_ctor(::StringW trademark) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyTrademarkAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trademark);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyTrademarkAttribute::AssemblyTrademarkAttribute() {}
