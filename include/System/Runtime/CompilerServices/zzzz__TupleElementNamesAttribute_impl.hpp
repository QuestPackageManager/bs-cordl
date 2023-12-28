#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TupleElementNamesAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::TupleElementNamesAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::TupleElementNamesAttribute::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Runtime::CompilerServices::TupleElementNamesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24db510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TupleElementNamesAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Runtime::CompilerServices::TupleElementNamesAttribute::__get__transformNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Runtime::CompilerServices::TupleElementNamesAttribute::__get__transformNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformNames;
}
constexpr void System::Runtime::CompilerServices::TupleElementNamesAttribute::__set__transformNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::CompilerServices::TupleElementNamesAttribute*
System::Runtime::CompilerServices::TupleElementNamesAttribute::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> transformNames) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::TupleElementNamesAttribute*>(transformNames));
}
inline void System::Runtime::CompilerServices::TupleElementNamesAttribute::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> transformNames) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TupleElementNamesAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformNames);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::TupleElementNamesAttribute::TupleElementNamesAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
