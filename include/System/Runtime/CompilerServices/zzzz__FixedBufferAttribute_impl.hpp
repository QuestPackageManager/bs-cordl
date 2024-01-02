#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__FixedBufferAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::FixedBufferAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::FixedBufferAttribute::*)(::System::Type*, int32_t)>(
    &::System::Runtime::CompilerServices::FixedBufferAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24db044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::FixedBufferAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::FixedBufferAttribute.get_ElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::CompilerServices::FixedBufferAttribute::*)()>(
    &::System::Runtime::CompilerServices::FixedBufferAttribute::get_ElementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24db074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::FixedBufferAttribute*>::get(), "get_ElementType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::FixedBufferAttribute.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::CompilerServices::FixedBufferAttribute::*)()>(
    &::System::Runtime::CompilerServices::FixedBufferAttribute::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24db07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::FixedBufferAttribute*>::get(), "get_Length",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::CompilerServices::FixedBufferAttribute::__get__ElementType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementType_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::CompilerServices::FixedBufferAttribute::__get__ElementType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementType_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::FixedBufferAttribute::__set__ElementType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ElementType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::CompilerServices::FixedBufferAttribute::__get__Length_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Length_k__BackingField;
}
constexpr int32_t const& System::Runtime::CompilerServices::FixedBufferAttribute::__get__Length_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Length_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::FixedBufferAttribute::__set__Length_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Length_k__BackingField = value;
}
inline ::System::Runtime::CompilerServices::FixedBufferAttribute* System::Runtime::CompilerServices::FixedBufferAttribute::New_ctor(::System::Type* elementType, int32_t length) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::FixedBufferAttribute*>(elementType, length));
}
inline void System::Runtime::CompilerServices::FixedBufferAttribute::_ctor(::System::Type* elementType, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::FixedBufferAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementType, length);
}
inline ::System::Type* System::Runtime::CompilerServices::FixedBufferAttribute::get_ElementType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::FixedBufferAttribute*>::get(),
                                                                             "get_ElementType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t System::Runtime::CompilerServices::FixedBufferAttribute::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::FixedBufferAttribute*>::get(),
                                                                             "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::FixedBufferAttribute::FixedBufferAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
