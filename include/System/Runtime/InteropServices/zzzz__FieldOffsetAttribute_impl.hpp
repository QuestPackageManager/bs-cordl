#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__FieldOffsetAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::FieldOffsetAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::FieldOffsetAttribute::*)(int32_t)>(
    &::System::Runtime::InteropServices::FieldOffsetAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25c8318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::FieldOffsetAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::InteropServices::FieldOffsetAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr int32_t const& System::Runtime::InteropServices::FieldOffsetAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::FieldOffsetAttribute::__cordl_internal_set__val(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline ::System::Runtime::InteropServices::FieldOffsetAttribute* System::Runtime::InteropServices::FieldOffsetAttribute::New_ctor(int32_t offset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::InteropServices::FieldOffsetAttribute*>(offset));
}
inline void System::Runtime::InteropServices::FieldOffsetAttribute::_ctor(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::FieldOffsetAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::FieldOffsetAttribute::FieldOffsetAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
