#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyDelaySignAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyDelaySignAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyDelaySignAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyDelaySignAttribute::*)(bool)>(
    &::System::Reflection::AssemblyDelaySignAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x289396c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyDelaySignAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Reflection::AssemblyDelaySignAttribute::__cordl_internal_get__DelaySign_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DelaySign_k__BackingField;
}
constexpr bool const& System::Reflection::AssemblyDelaySignAttribute::__cordl_internal_get__DelaySign_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DelaySign_k__BackingField;
}
constexpr void System::Reflection::AssemblyDelaySignAttribute::__cordl_internal_set__DelaySign_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DelaySign_k__BackingField = value;
}
inline ::System::Reflection::AssemblyDelaySignAttribute* System::Reflection::AssemblyDelaySignAttribute::New_ctor(bool delaySign) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyDelaySignAttribute*>(delaySign));
}
inline void System::Reflection::AssemblyDelaySignAttribute::_ctor(bool delaySign) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyDelaySignAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delaySign);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyDelaySignAttribute::AssemblyDelaySignAttribute() {}
