#pragma once
// IWYU pragma private; include "GlobalNamespace/UtcTimeProvider.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UtcTimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UtcTimeProvider.GetTimeMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::UtcTimeProvider::*)()>(&::GlobalNamespace::UtcTimeProvider::GetTimeMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22e9e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get(), "GetTimeMs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UtcTimeProvider.GetTicks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::UtcTimeProvider::*)()>(&::GlobalNamespace::UtcTimeProvider::GetTicks)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22d885c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get(), "GetTicks",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UtcTimeProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UtcTimeProvider::*)()>(&::GlobalNamespace::UtcTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e9e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UtcTimeProvider::setStaticF__epoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "_epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get>(
      std::forward<::System::DateTime>(value));
}
inline ::System::DateTime GlobalNamespace::UtcTimeProvider::getStaticF__epoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "_epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get>();
}
inline void GlobalNamespace::UtcTimeProvider::setStaticF_instance(::GlobalNamespace::UtcTimeProvider* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::UtcTimeProvider*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get>(
      std::forward<::GlobalNamespace::UtcTimeProvider*>(value));
}
inline ::GlobalNamespace::UtcTimeProvider* GlobalNamespace::UtcTimeProvider::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::UtcTimeProvider*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get>();
}
inline int64_t GlobalNamespace::UtcTimeProvider::GetTimeMs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get(), "GetTimeMs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::UtcTimeProvider::GetTicks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get(), "GetTicks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::UtcTimeProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UtcTimeProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::UtcTimeProvider* GlobalNamespace::UtcTimeProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UtcTimeProvider*>());
}
/// @brief Convert operator to "::BGNet::Core::ITimeProvider"
constexpr GlobalNamespace::UtcTimeProvider::operator ::BGNet::Core::ITimeProvider*() noexcept {
  return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGNet::Core::ITimeProvider"
constexpr ::BGNet::Core::ITimeProvider* GlobalNamespace::UtcTimeProvider::i___BGNet__Core__ITimeProvider() noexcept {
  return static_cast<::BGNet::Core::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UtcTimeProvider::UtcTimeProvider() {}
