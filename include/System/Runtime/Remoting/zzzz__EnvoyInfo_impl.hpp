#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/EnvoyInfo.hpp"
#include "System/Runtime/Remoting/zzzz__IEnvoyInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__EnvoyInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::EnvoyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::EnvoyInfo::*)(::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::EnvoyInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ccba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::EnvoyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::EnvoyInfo.get_EnvoySinks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::EnvoyInfo::*)()>(
    &::System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ccba54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::EnvoyInfo*>::get(), "get_EnvoySinks",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::EnvoyInfo::__cordl_internal_get_envoySinks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envoySinks;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::EnvoyInfo::__cordl_internal_get_envoySinks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envoySinks;
}
constexpr void System::Runtime::Remoting::EnvoyInfo::__cordl_internal_set_envoySinks(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___envoySinks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::EnvoyInfo::_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::EnvoyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sinks);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::EnvoyInfo*>::get(), "get_EnvoySinks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::EnvoyInfo* System::Runtime::Remoting::EnvoyInfo::New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* sinks) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::EnvoyInfo*>(sinks));
}
/// @brief Convert operator to "::System::Runtime::Remoting::IEnvoyInfo"
constexpr System::Runtime::Remoting::EnvoyInfo::operator ::System::Runtime::Remoting::IEnvoyInfo*() noexcept {
  return static_cast<::System::Runtime::Remoting::IEnvoyInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::IEnvoyInfo"
constexpr ::System::Runtime::Remoting::IEnvoyInfo* System::Runtime::Remoting::EnvoyInfo::i___System__Runtime__Remoting__IEnvoyInfo() noexcept {
  return static_cast<::System::Runtime::Remoting::IEnvoyInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::EnvoyInfo::EnvoyInfo() {}
