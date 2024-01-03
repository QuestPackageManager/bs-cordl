#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__NullableAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::NullableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::NullableAttribute::*)(uint8_t)>(
    &::System::Runtime::CompilerServices::NullableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe26510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::NullableAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::NullableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::NullableAttribute::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Runtime::CompilerServices::NullableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe26590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::NullableAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Runtime::CompilerServices::NullableAttribute::__get_NullableFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NullableFlags;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Runtime::CompilerServices::NullableAttribute::__get_NullableFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NullableFlags;
}
constexpr void System::Runtime::CompilerServices::NullableAttribute::__set_NullableFlags(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NullableFlags)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::CompilerServices::NullableAttribute* System::Runtime::CompilerServices::NullableAttribute::New_ctor(uint8_t _cordl_fixed_empty_name_whitespace) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::NullableAttribute*>(_cordl_fixed_empty_name_whitespace));
}
inline void System::Runtime::CompilerServices::NullableAttribute::_ctor(uint8_t _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::NullableAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Runtime::CompilerServices::NullableAttribute* System::Runtime::CompilerServices::NullableAttribute::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> _cordl_fixed_empty_name_whitespace) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::NullableAttribute*>(_cordl_fixed_empty_name_whitespace));
}
inline void System::Runtime::CompilerServices::NullableAttribute::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::NullableAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::NullableAttribute::NullableAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
