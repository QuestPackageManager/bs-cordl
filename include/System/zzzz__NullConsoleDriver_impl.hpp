#pragma once
// IWYU pragma private; include "System/NullConsoleDriver.hpp"
#include "System/zzzz__ConsoleKeyInfo_impl.hpp"
#include "System/zzzz__IConsoleDriver_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__NullConsoleDriver_def.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
//  Writing Method size for method: ::System::NullConsoleDriver.ReadKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (::System::NullConsoleDriver::*)(bool)>(&::System::NullConsoleDriver::ReadKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3e3b21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get(), "ReadKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::NullConsoleDriver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::NullConsoleDriver::*)()>(&::System::NullConsoleDriver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e33d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::NullConsoleDriver::setStaticF_EmptyConsoleKeyInfo(::System::ConsoleKeyInfo value) {
  ::cordl_internals::setStaticField<::System::ConsoleKeyInfo, "EmptyConsoleKeyInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get>(
      std::forward<::System::ConsoleKeyInfo>(value));
}
inline ::System::ConsoleKeyInfo System::NullConsoleDriver::getStaticF_EmptyConsoleKeyInfo() {
  return ::cordl_internals::getStaticField<::System::ConsoleKeyInfo, "EmptyConsoleKeyInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get>();
}
inline ::System::ConsoleKeyInfo System::NullConsoleDriver::ReadKey(bool intercept) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get(), "ReadKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ConsoleKeyInfo, false>(this, ___internal_method, intercept);
}
inline void System::NullConsoleDriver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NullConsoleDriver*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::NullConsoleDriver* System::NullConsoleDriver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::NullConsoleDriver*>());
}
/// @brief Convert operator to "::System::IConsoleDriver"
constexpr System::NullConsoleDriver::operator ::System::IConsoleDriver*() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IConsoleDriver"
constexpr ::System::IConsoleDriver* System::NullConsoleDriver::i___System__IConsoleDriver() noexcept {
  return static_cast<::System::IConsoleDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::NullConsoleDriver::NullConsoleDriver() {}
