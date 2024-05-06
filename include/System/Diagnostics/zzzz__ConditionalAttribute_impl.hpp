#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__ConditionalAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ConditionalAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::ConditionalAttribute::*)(::StringW)>(
    &::System::Diagnostics::ConditionalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28fdde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ConditionalAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::ConditionalAttribute::__cordl_internal_get__ConditionString_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionString_k__BackingField;
}
constexpr ::StringW const& System::Diagnostics::ConditionalAttribute::__cordl_internal_get__ConditionString_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionString_k__BackingField;
}
constexpr void System::Diagnostics::ConditionalAttribute::__cordl_internal_set__ConditionString_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConditionString_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Diagnostics::ConditionalAttribute* System::Diagnostics::ConditionalAttribute::New_ctor(::StringW conditionString) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::ConditionalAttribute*>(conditionString));
}
inline void System::Diagnostics::ConditionalAttribute::_ctor(::StringW conditionString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::ConditionalAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, conditionString);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::ConditionalAttribute::ConditionalAttribute() {}
