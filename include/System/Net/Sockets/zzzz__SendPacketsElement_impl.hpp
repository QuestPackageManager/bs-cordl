#pragma once
// IWYU pragma private; include "System/Net/Sockets/SendPacketsElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__SendPacketsElement_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SendPacketsElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SendPacketsElement::*)()>(&::System::Net::Sockets::SendPacketsElement::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b5598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SendPacketsElement*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::Sockets::SendPacketsElement::__cordl_internal_get_m_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buffer;
}
constexpr void System::Net::Sockets::SendPacketsElement::__cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SendPacketsElement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::SendPacketsElement* System::Net::Sockets::SendPacketsElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::SendPacketsElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SendPacketsElement::SendPacketsElement() {}
