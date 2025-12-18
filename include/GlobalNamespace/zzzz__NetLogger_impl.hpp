#pragma once
// IWYU pragma private; include "GlobalNamespace/NetLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NetLogger_def.hpp"
#include "LiteNetLib/zzzz__INetLogger_def.hpp"
#include "LiteNetLib/zzzz__NetLogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetLogger.WriteNet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::NetLogger::*)(::LiteNetLib::NetLogLevel, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::GlobalNamespace::NetLogger::WriteNet)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x323f9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetLogger*>::get(), "WriteNet", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetLogLevel>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetLogger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetLogger::*)()>(&::GlobalNamespace::NetLogger::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x323b988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetLogger*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetLogger::WriteNet(::LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetLogger*>::get(), "WriteNet", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetLogLevel>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, str, args);
}
inline void GlobalNamespace::NetLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetLogger*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NetLogger* GlobalNamespace::NetLogger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NetLogger*>());
}
/// @brief Convert operator to "::LiteNetLib::INetLogger"
constexpr GlobalNamespace::NetLogger::operator ::LiteNetLib::INetLogger*() noexcept {
  return static_cast<::LiteNetLib::INetLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetLogger"
constexpr ::LiteNetLib::INetLogger* GlobalNamespace::NetLogger::i___LiteNetLib__INetLogger() noexcept {
  return static_cast<::LiteNetLib::INetLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetLogger::NetLogger() {}
