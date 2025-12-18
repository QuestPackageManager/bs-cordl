#pragma once
// IWYU pragma private; include "UnityEngine/MipmapLimitDescriptor.hpp"
#include "UnityEngine/zzzz__MipmapLimitDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::MipmapLimitDescriptor.get_useMipmapLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::MipmapLimitDescriptor::*)()>(&::UnityEngine::MipmapLimitDescriptor::get_useMipmapLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fcdfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MipmapLimitDescriptor>::get(),
                                                                               "get_useMipmapLimit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MipmapLimitDescriptor.get_groupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::MipmapLimitDescriptor::*)()>(&::UnityEngine::MipmapLimitDescriptor::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fce04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MipmapLimitDescriptor>::get(), "get_groupName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::MipmapLimitDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::MipmapLimitDescriptor::*)(bool, ::StringW)>(&::UnityEngine::MipmapLimitDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68fce0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MipmapLimitDescriptor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::MipmapLimitDescriptor::get_useMipmapLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MipmapLimitDescriptor>::get(), "get_useMipmapLimit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::MipmapLimitDescriptor::get_groupName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MipmapLimitDescriptor>::get(), "get_groupName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::MipmapLimitDescriptor::_ctor(bool useMipmapLimit, ::StringW groupName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MipmapLimitDescriptor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useMipmapLimit, groupName);
}
// Ctor Parameters [CppParam { name: "_useMipmapLimit_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_groupName_k__BackingField", ty: "::StringW", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::MipmapLimitDescriptor::MipmapLimitDescriptor(bool _useMipmapLimit_k__BackingField, ::StringW _groupName_k__BackingField) noexcept {
  this->_useMipmapLimit_k__BackingField = _useMipmapLimit_k__BackingField;
  this->_groupName_k__BackingField = _groupName_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::MipmapLimitDescriptor::MipmapLimitDescriptor() {}
