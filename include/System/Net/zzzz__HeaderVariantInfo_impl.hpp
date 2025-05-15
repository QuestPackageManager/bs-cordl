#pragma once
// IWYU pragma private; include "System/Net/HeaderVariantInfo.hpp"
#include "System/Net/zzzz__CookieVariant_impl.hpp"
#include "System/Net/zzzz__HeaderVariantInfo_def.hpp"
#include "System/Net/zzzz__CookieVariant_def.hpp"
//  Writing Method size for method: ::System::Net::HeaderVariantInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HeaderVariantInfo::*)(::StringW, ::System::Net::CookieVariant)>(
    &::System::Net::HeaderVariantInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x44b0df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieVariant>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderVariantInfo.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HeaderVariantInfo::*)()>(&::System::Net::HeaderVariantInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44b0dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderVariantInfo.get_Variant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieVariant (::System::Net::HeaderVariantInfo::*)()>(
    &::System::Net::HeaderVariantInfo::get_Variant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44b0e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(), "get_Variant",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::HeaderVariantInfo::_ctor(::StringW name, ::System::Net::CookieVariant variant) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieVariant>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, variant);
}
inline ::StringW System::Net::HeaderVariantInfo::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Net::CookieVariant System::Net::HeaderVariantInfo::get_Variant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(), "get_Variant",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieVariant, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_variant", ty: "::System::Net::CookieVariant", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Net::HeaderVariantInfo::HeaderVariantInfo(::StringW m_name, ::System::Net::CookieVariant m_variant) noexcept {
  this->m_name = m_name;
  this->m_variant = m_variant;
}
// Ctor Parameters []
constexpr ::System::Net::HeaderVariantInfo::HeaderVariantInfo() {}
