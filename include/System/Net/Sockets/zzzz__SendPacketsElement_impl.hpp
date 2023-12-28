#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__SendPacketsElement_def.hpp"
constexpr ::StringW& System::Net::Sockets::SendPacketsElement::__get_m_FilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilePath;
}
constexpr ::StringW const& System::Net::Sockets::SendPacketsElement::__get_m_FilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilePath;
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_FilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::Sockets::SendPacketsElement::__get_m_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::Sockets::SendPacketsElement::__get_m_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::Sockets::SendPacketsElement::__get_m_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr int32_t const& System::Net::Sockets::SendPacketsElement::__get_m_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Offset = value;
}
constexpr int32_t& System::Net::Sockets::SendPacketsElement::__get_m_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
constexpr int32_t const& System::Net::Sockets::SendPacketsElement::__get_m_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Count = value;
}
constexpr bool& System::Net::Sockets::SendPacketsElement::__get_m_endOfPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endOfPacket;
}
constexpr bool const& System::Net::Sockets::SendPacketsElement::__get_m_endOfPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endOfPacket;
}
constexpr void System::Net::Sockets::SendPacketsElement::__set_m_endOfPacket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_endOfPacket = value;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SendPacketsElement::SendPacketsElement() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
