#pragma once
// IWYU pragma private; include "System\Net\Sockets\SendPacketsElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__SendPacketsElement_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SendPacketsElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SendPacketsElement::*)()>(&::System::Net::Sockets::SendPacketsElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x636a0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SendPacketsElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_FilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilePath;
}
constexpr ::StringW const& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_FilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilePath;
}
constexpr void System::Net::Sockets::SendPacketsElement::__cordl_internal_set_m_FilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilePath = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr void System::Net::Sockets::SendPacketsElement::__cordl_internal_set_m_Buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Buffer = value;
}
constexpr int32_t& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_Offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr int32_t const& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_Offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Offset;
}
constexpr void System::Net::Sockets::SendPacketsElement::__cordl_internal_set_m_Offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Offset = value;
}
constexpr int32_t& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
constexpr int32_t const& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
constexpr void System::Net::Sockets::SendPacketsElement::__cordl_internal_set_m_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Count = value;
}
constexpr bool& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_endOfPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endOfPacket;
}
constexpr bool const& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_endOfPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_endOfPacket;
}
constexpr void System::Net::Sockets::SendPacketsElement::__cordl_internal_set_m_endOfPacket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_endOfPacket = value;
}
inline void System::Net::Sockets::SendPacketsElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SendPacketsElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Sockets::SendPacketsElement* System::Net::Sockets::SendPacketsElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SendPacketsElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SendPacketsElement::SendPacketsElement() {}
