#pragma once
#include "System/Runtime/CompilerServices/zzzz__CustomConstantAttribute_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DateTimeConstantAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DateTimeConstantAttribute.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::CompilerServices::DateTimeConstantAttribute::*)()>(
    &::System::Runtime::CompilerServices::DateTimeConstantAttribute::get_Value)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24daf38;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::Runtime::CompilerServices::DateTimeConstantAttribute::__get__date() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____date;
}
constexpr ::System::DateTime const& System::Runtime::CompilerServices::DateTimeConstantAttribute::__get__date() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____date;
}
constexpr void System::Runtime::CompilerServices::DateTimeConstantAttribute::__set__date(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____date = value;
}
inline ::System::Object* System::Runtime::CompilerServices::DateTimeConstantAttribute::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DateTimeConstantAttribute*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::DateTimeConstantAttribute::DateTimeConstantAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
