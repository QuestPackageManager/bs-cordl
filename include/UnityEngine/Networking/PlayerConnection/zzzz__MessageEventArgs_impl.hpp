#pragma once
// IWYU pragma private; include "UnityEngine/Networking/PlayerConnection/MessageEventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::Networking::PlayerConnection::MessageEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Networking::PlayerConnection::MessageEventArgs::*)()>(
    &::UnityEngine::Networking::PlayerConnection::MessageEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48c1dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_get_playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr int32_t const& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_get_playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr void UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_set_playerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerId = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Networking::PlayerConnection::MessageEventArgs::__cordl_internal_set_data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Networking::PlayerConnection::MessageEventArgs::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Networking::PlayerConnection::MessageEventArgs* UnityEngine::Networking::PlayerConnection::MessageEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::PlayerConnection::MessageEventArgs::MessageEventArgs() {}
