#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyDescriptionAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyDescriptionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyDescriptionAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyDescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e5f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyDescriptionAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyDescriptionAttribute::__get__Description_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Description_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyDescriptionAttribute::__get__Description_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Description_k__BackingField;
}
constexpr void System::Reflection::AssemblyDescriptionAttribute::__set__Description_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Description_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::AssemblyDescriptionAttribute* System::Reflection::AssemblyDescriptionAttribute::New_ctor(::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::AssemblyDescriptionAttribute*>(description));
}
inline void System::Reflection::AssemblyDescriptionAttribute::_ctor(::StringW description) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyDescriptionAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, description);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyDescriptionAttribute::AssemblyDescriptionAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
