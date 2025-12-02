#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/RichPresenceTimestamp.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestampType_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestamp_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__RichPresenceTimestampType_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceTimestamp.get_timestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Core::RichPresenceTimestamp::*)()>(
    &::OculusStudios::Platform::Core::RichPresenceTimestamp::get_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d19434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::RichPresenceTimestamp>::get(),
                                                                               "get_timestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceTimestamp.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusStudios::Platform::Core::RichPresenceTimestampType (
    ::OculusStudios::Platform::Core::RichPresenceTimestamp::*)()>(&::OculusStudios::Platform::Core::RichPresenceTimestamp::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1943c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::RichPresenceTimestamp>::get(),
                                                                               "get_type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::RichPresenceTimestamp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::RichPresenceTimestamp::*)(
    ::StringW, ::OculusStudios::Platform::Core::RichPresenceTimestampType)>(&::OculusStudios::Platform::Core::RichPresenceTimestamp::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d19444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::RichPresenceTimestamp>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::RichPresenceTimestampType>::get() })));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::Platform::Core::RichPresenceTimestamp::get_timestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::RichPresenceTimestamp>::get(),
                                                                             "get_timestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::RichPresenceTimestampType OculusStudios::Platform::Core::RichPresenceTimestamp::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::RichPresenceTimestamp>::get(),
                                                                             "get_type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::RichPresenceTimestampType, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::RichPresenceTimestamp::_ctor(::StringW timestamp, ::OculusStudios::Platform::Core::RichPresenceTimestampType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::RichPresenceTimestamp>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::RichPresenceTimestampType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timestamp, type);
}
// Ctor Parameters [CppParam { name: "_timestamp_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_type_k__BackingField", ty:
// "::OculusStudios::Platform::Core::RichPresenceTimestampType", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Core::RichPresenceTimestamp::RichPresenceTimestamp(::StringW _timestamp_k__BackingField,
                                                                                        ::OculusStudios::Platform::Core::RichPresenceTimestampType _type_k__BackingField) noexcept {
  this->_timestamp_k__BackingField = _timestamp_k__BackingField;
  this->_type_k__BackingField = _type_k__BackingField;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::RichPresenceTimestamp::RichPresenceTimestamp() {}
