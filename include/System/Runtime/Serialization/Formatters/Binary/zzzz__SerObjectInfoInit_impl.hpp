#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24cb1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_seenBeforeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seenBeforeTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const&
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_seenBeforeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seenBeforeTable;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_set_seenBeforeTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seenBeforeTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_objectInfoIdCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfoIdCount;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_objectInfoIdCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectInfoIdCount;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_set_objectInfoIdCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectInfoIdCount = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_oiPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oiPool;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> const&
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_oiPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oiPool;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_set_oiPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oiPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::SerObjectInfoInit() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
