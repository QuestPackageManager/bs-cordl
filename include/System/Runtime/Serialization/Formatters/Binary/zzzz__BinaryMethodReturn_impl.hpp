#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryMethodReturn_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24c21b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Write)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x24c21c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(), "Write", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn.Dump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24c2308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(), "Dump",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_returnValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_returnValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnValue;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_returnValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___returnValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_callContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_callContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callContext;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_callContext(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_argTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___argTypes;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_argTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___argTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_argTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___argTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_bArgsPrimitive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bArgsPrimitive;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_bArgsPrimitive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bArgsPrimitive;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_bArgsPrimitive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bArgsPrimitive = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_messageEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_messageEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_messageEnum(::System::Runtime::Serialization::Formatters::Binary::MessageEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageEnum = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_returnType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_returnType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_returnType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___returnType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::setStaticF_instanceOfVoid(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "instanceOfVoid",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::getStaticF_instanceOfVoid() {
  return ::cordl_internals::getStaticField<::System::Object*, "instanceOfVoid",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get>();
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(), "Dump",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::BinaryMethodReturn() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
