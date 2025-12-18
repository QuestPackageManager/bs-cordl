#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalServerConnectionRequestHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalServerConnectionRequestHandler_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionRequestHandler.GetConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalServerConnectionRequestHandler::*)(
    ::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool, ::StringW)>(&::GlobalNamespace::LocalServerConnectionRequestHandler::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x323f114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerConnectionRequestHandler*>::get(), "GetConnectionMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionRequestHandler.ValidateConnectionMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::LocalServerConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataReader*, ::ByRef<::StringW>, ::ByRef<::StringW>, ::ByRef<bool>, ::ByRef<::StringW>)>(
        &::GlobalNamespace::LocalServerConnectionRequestHandler::ValidateConnectionMessage)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x323f31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerConnectionRequestHandler*>::get(), "ValidateConnectionMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerConnectionRequestHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalServerConnectionRequestHandler::*)()>(
    &::GlobalNamespace::LocalServerConnectionRequestHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x323f598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerConnectionRequestHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalServerConnectionRequestHandler::GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                                       ::StringW compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerConnectionRequestHandler*>::get(), "GetConnectionMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline bool GlobalNamespace::LocalServerConnectionRequestHandler::ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ::ByRef<::StringW> userId, ::ByRef<::StringW> userName,
                                                                                            ::ByRef<bool> isConnectionOwner, ::ByRef<::StringW> compatibilityVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerConnectionRequestHandler*>::get(), "ValidateConnectionMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, reader, userId, userName, isConnectionOwner, compatibilityVersion);
}
inline void GlobalNamespace::LocalServerConnectionRequestHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerConnectionRequestHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerConnectionRequestHandler* GlobalNamespace::LocalServerConnectionRequestHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalServerConnectionRequestHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr GlobalNamespace::LocalServerConnectionRequestHandler::operator ::GlobalNamespace::IConnectionRequestHandler*() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectionRequestHandler"
constexpr ::GlobalNamespace::IConnectionRequestHandler* GlobalNamespace::LocalServerConnectionRequestHandler::i___GlobalNamespace__IConnectionRequestHandler() noexcept {
  return static_cast<::GlobalNamespace::IConnectionRequestHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerConnectionRequestHandler::LocalServerConnectionRequestHandler() {}
