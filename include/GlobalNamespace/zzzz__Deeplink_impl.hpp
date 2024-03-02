#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Deeplink_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Deeplink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Deeplink::*)()>(&::GlobalNamespace::Deeplink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a8870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Deeplink*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_Destination(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_LevelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LevelID;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_LevelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LevelID;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_LevelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LevelID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_PackID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackID;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_PackID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackID;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_PackID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PackID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_Difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Difficulty;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_Difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Difficulty;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_Difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_Characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Characteristic;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_Characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Characteristic;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_Characteristic(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerLobbyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerLobbyCode;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerLobbyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerLobbyCode;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_MultiplayerLobbyCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MultiplayerLobbyCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerSecret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerSecret;
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerSecret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerSecret;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_MultiplayerSecret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MultiplayerSecret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerRoomId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerRoomId;
}
constexpr uint64_t const& GlobalNamespace::Deeplink::__cordl_internal_get_MultiplayerRoomId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MultiplayerRoomId;
}
constexpr void GlobalNamespace::Deeplink::__cordl_internal_set_MultiplayerRoomId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MultiplayerRoomId = value;
}
inline ::GlobalNamespace::Deeplink* GlobalNamespace::Deeplink::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Deeplink*>());
}
inline void GlobalNamespace::Deeplink::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Deeplink*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Deeplink::Deeplink() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
