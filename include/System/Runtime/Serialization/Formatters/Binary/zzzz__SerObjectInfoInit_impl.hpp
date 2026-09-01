#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\SerObjectInfoInit.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b60868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_seenBeforeTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seenBeforeTable;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_seenBeforeTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seenBeforeTable;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_set_seenBeforeTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seenBeforeTable = value;
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
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_get_oiPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oiPool;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__cordl_internal_set_oiPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oiPool = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::SerObjectInfoInit() {}
