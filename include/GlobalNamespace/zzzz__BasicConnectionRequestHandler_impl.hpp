#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicConnectionRequestHandler.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BasicConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler.get_secret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BasicConnectionRequestHandler::*)()>(
    &::GlobalNamespace::BasicConnectionRequestHandler::get_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b9be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(),
                                                                               "get_secret", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler.set_secret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicConnectionRequestHandler::*)(::StringW)>(
    &::GlobalNamespace::BasicConnectionRequestHandler::set_secret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b9bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(), "set_secret",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicConnectionRequestHandler::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool)>(&::GlobalNamespace::BasicConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22b9bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(), "GetConnectionMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler.ValidateConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BasicConnectionRequestHandler::*)(
    ::LiteNetLib::Utils::NetDataReader*, ::ByRef<::StringW>, ::ByRef<::StringW>, ::ByRef<bool>)>(&::GlobalNamespace::BasicConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22b9c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(), "ValidateConnectionMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicConnectionRequestHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicConnectionRequestHandler::*)()>(
    &::GlobalNamespace::BasicConnectionRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b9d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BasicConnectionRequestHandler::__cordl_internal_get__secret_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secret_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::BasicConnectionRequestHandler::__cordl_internal_get__secret_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secret_k__BackingField;
}
constexpr void GlobalNamespace::BasicConnectionRequestHandler::__cordl_internal_set__secret_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____secret_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::BasicConnectionRequestHandler::get_secret() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(),
                                                                             "get_secret", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::BasicConnectionRequestHandler::set_secret(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(), "set_secret",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BasicConnectionRequestHandler::GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(), "GetConnectionMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, userId, userName, isConnectionOwner);
}
inline bool GlobalNamespace::BasicConnectionRequestHandler::ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::ByRef<::StringW> userId, ::ByRef<::StringW> userName,
                                                                                      ::ByRef<bool> isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(), "ValidateConnectionMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, userId, userName, isConnectionOwner);
}
inline void GlobalNamespace::BasicConnectionRequestHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicConnectionRequestHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicConnectionRequestHandler* GlobalNamespace::BasicConnectionRequestHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BasicConnectionRequestHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr GlobalNamespace::BasicConnectionRequestHandler::operator ::GlobalNamespace::IConnectionRequestHandler*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionRequestHandler"
constexpr ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::BasicConnectionRequestHandler::i___GlobalNamespace__IConnectionRequestHandler() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicConnectionRequestHandler::BasicConnectionRequestHandler() {}
