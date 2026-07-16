#pragma once
// IWYU pragma private; include "System/Threading/ReaderWriterCount.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ReaderWriterCount_def.hpp"
//  Writing Method size for method: ::System::Threading::ReaderWriterCount._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ReaderWriterCount::*)()>(&::System::Threading::ReaderWriterCount::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fc8218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ReaderWriterCount*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& System::Threading::ReaderWriterCount::__cordl_internal_get_lockID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockID;
}
constexpr int64_t const& System::Threading::ReaderWriterCount::__cordl_internal_get_lockID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockID;
}
constexpr void System::Threading::ReaderWriterCount::__cordl_internal_set_lockID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lockID = value;
}
constexpr int32_t& System::Threading::ReaderWriterCount::__cordl_internal_get_readercount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readercount;
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__cordl_internal_get_readercount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readercount;
}
constexpr void System::Threading::ReaderWriterCount::__cordl_internal_set_readercount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readercount = value;
}
constexpr int32_t& System::Threading::ReaderWriterCount::__cordl_internal_get_writercount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writercount;
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__cordl_internal_get_writercount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writercount;
}
constexpr void System::Threading::ReaderWriterCount::__cordl_internal_set_writercount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writercount = value;
}
constexpr int32_t& System::Threading::ReaderWriterCount::__cordl_internal_get_upgradecount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upgradecount;
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__cordl_internal_get_upgradecount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upgradecount;
}
constexpr void System::Threading::ReaderWriterCount::__cordl_internal_set_upgradecount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upgradecount = value;
}
constexpr ::System::Threading::ReaderWriterCount*& System::Threading::ReaderWriterCount::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::Threading::ReaderWriterCount* const& System::Threading::ReaderWriterCount::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Threading::ReaderWriterCount::__cordl_internal_set_next(::System::Threading::ReaderWriterCount* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
inline void System::Threading::ReaderWriterCount::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ReaderWriterCount*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::ReaderWriterCount* System::Threading::ReaderWriterCount::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ReaderWriterCount*>());
}
// Ctor Parameters []
constexpr ::System::Threading::ReaderWriterCount::ReaderWriterCount() {}
