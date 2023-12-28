#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::MessageEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::MessageEventArgs::*)()>(
    &::UnityEngine::Networking::PlayerConnection::MessageEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ce75bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__get_playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr int32_t const& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__get_playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr void UnityEngine::Networking::PlayerConnection::MessageEventArgs::__set_playerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerId = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Networking::PlayerConnection::MessageEventArgs::__set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* UnityEngine::Networking::PlayerConnection::MessageEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>());
}
inline void UnityEngine::Networking::PlayerConnection::MessageEventArgs::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::PlayerConnection::MessageEventArgs::MessageEventArgs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
