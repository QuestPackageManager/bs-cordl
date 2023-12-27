#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24cb1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_seenBeforeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___seenBeforeTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_seenBeforeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___seenBeforeTable;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__set_seenBeforeTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seenBeforeTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_objectInfoIdCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objectInfoIdCount;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_objectInfoIdCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___objectInfoIdCount;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__set_objectInfoIdCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___objectInfoIdCount = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_oiPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___oiPool;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const&
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_oiPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___oiPool;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__set_oiPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oiPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::SerObjectInfoInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
