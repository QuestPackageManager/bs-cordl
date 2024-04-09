#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftClientConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler.get_playerSessionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)()>(
    &::GlobalNamespace::GameLiftClientConnectionRequestHandler::get_playerSessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa0dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(), "get_playerSessionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler.set_playerSessionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(::StringW)>(
    &::GlobalNamespace::GameLiftClientConnectionRequestHandler::set_playerSessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa0dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(), "set_playerSessionId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool)>(&::GlobalNamespace::GameLiftClientConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xfa0dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(), "GetConnectionMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler.ValidateConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(
    ::LiteNetLib::Utils::NetDataReader*, ByRef<::StringW>, ByRef<::StringW>, ByRef<bool>)>(&::GlobalNamespace::GameLiftClientConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xfa0e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(), "ValidateConnectionMessage",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientConnectionRequestHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftClientConnectionRequestHandler::*)()>(
    &::GlobalNamespace::GameLiftClientConnectionRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa0e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr GlobalNamespace::GameLiftClientConnectionRequestHandler::operator ::GlobalNamespace::IConnectionRequestHandler*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionRequestHandler"
constexpr ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::GameLiftClientConnectionRequestHandler::i___GlobalNamespace__IConnectionRequestHandler() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::GameLiftClientConnectionRequestHandler::__cordl_internal_get__playerSessionId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSessionId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::GameLiftClientConnectionRequestHandler::__cordl_internal_get__playerSessionId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSessionId_k__BackingField;
}
constexpr void GlobalNamespace::GameLiftClientConnectionRequestHandler::__cordl_internal_set__playerSessionId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSessionId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::GameLiftClientConnectionRequestHandler::get_playerSessionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(),
                                                                             "get_playerSessionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameLiftClientConnectionRequestHandler::set_playerSessionId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(), "set_playerSessionId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLiftClientConnectionRequestHandler::GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(), "GetConnectionMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, userId, userName, isConnectionOwner);
}
inline bool GlobalNamespace::GameLiftClientConnectionRequestHandler::ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ByRef<::StringW> userId, ByRef<::StringW> userName,
                                                                                               ByRef<bool> isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(), "ValidateConnectionMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, userId, userName, isConnectionOwner);
}
inline ::GlobalNamespace::GameLiftClientConnectionRequestHandler* GlobalNamespace::GameLiftClientConnectionRequestHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>());
}
inline void GlobalNamespace::GameLiftClientConnectionRequestHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientConnectionRequestHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLiftClientConnectionRequestHandler::GameLiftClientConnectionRequestHandler() {}
