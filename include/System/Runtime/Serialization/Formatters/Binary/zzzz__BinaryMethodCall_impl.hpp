#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryMethodCall_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Write)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23694b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(), "Write", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall.Dump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2369600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(), "Dump",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2369604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_methodName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_methodName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___methodName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_methodName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___methodName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_args() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_args() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___args;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_args(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___args)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_callContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_callContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callContext;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_callContext(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_argTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___argTypes;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_argTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___argTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_argTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___argTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_bArgsPrimitive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bArgsPrimitive;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_bArgsPrimitive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bArgsPrimitive;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_bArgsPrimitive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bArgsPrimitive = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_messageEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_messageEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_messageEnum(::System::Runtime::Serialization::Formatters::Binary::MessageEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___messageEnum = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(), "Dump",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::BinaryMethodCall() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
