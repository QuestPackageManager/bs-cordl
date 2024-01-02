#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyCopyrightAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyCopyrightAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyCopyrightAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyCopyrightAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e5ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyCopyrightAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyCopyrightAttribute::__get__Copyright_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Copyright_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyCopyrightAttribute::__get__Copyright_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Copyright_k__BackingField;
}
constexpr void System::Reflection::AssemblyCopyrightAttribute::__set__Copyright_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Copyright_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::AssemblyCopyrightAttribute* System::Reflection::AssemblyCopyrightAttribute::New_ctor(::StringW copyright) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::AssemblyCopyrightAttribute*>(copyright));
}
inline void System::Reflection::AssemblyCopyrightAttribute::_ctor(::StringW copyright) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyCopyrightAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, copyright);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyCopyrightAttribute::AssemblyCopyrightAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
