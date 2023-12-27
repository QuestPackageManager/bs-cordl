#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ReceiveState_def.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
//  Writing Method size for method: ::System::Net::ReceiveState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ReceiveState::*)(::System::Net::CommandStream*)>(&::System::Net::ReceiveState::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x298ea3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ReceiveState*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CommandStream*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::ResponseDescription*& System::Net::ReceiveState::__get_Resp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Resp;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseDescription*> const& System::Net::ReceiveState::__get_Resp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Resp;
}
constexpr void System::Net::ReceiveState::__set_Resp(::System::Net::ResponseDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Resp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::ReceiveState::__get_ValidThrough() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ValidThrough;
}
constexpr int32_t const& System::Net::ReceiveState::__get_ValidThrough() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ValidThrough;
}
constexpr void System::Net::ReceiveState::__set_ValidThrough(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ValidThrough = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Net::ReceiveState::__get_Buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Net::ReceiveState::__get_Buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Buffer;
}
constexpr void System::Net::ReceiveState::__set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::CommandStream*& System::Net::ReceiveState::__get_Connection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Connection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CommandStream*> const& System::Net::ReceiveState::__get_Connection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Connection;
}
constexpr void System::Net::ReceiveState::__set_Connection(::System::Net::CommandStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Connection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::ReceiveState* System::Net::ReceiveState::New_ctor(::System::Net::CommandStream* connection) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::ReceiveState*>(connection));
}
inline void System::Net::ReceiveState::_ctor(::System::Net::CommandStream* connection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ReceiveState*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CommandStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection);
}
// Ctor Parameters []
constexpr ::System::Net::ReceiveState::ReceiveState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
