#pragma once
// IWYU pragma private; include "GlobalNamespace/BrowsingMenusRichPresenceData.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BrowsingMenusRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BrowsingMenusRichPresenceData.get_apiName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BrowsingMenusRichPresenceData::*)()>(
    &::GlobalNamespace::BrowsingMenusRichPresenceData::get_apiName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3b2cf04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                               "get_apiName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BrowsingMenusRichPresenceData.get_localizedDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BrowsingMenusRichPresenceData::*)()>(
    &::GlobalNamespace::BrowsingMenusRichPresenceData::get_localizedDescription)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3b2cf44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                               "get_localizedDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BrowsingMenusRichPresenceData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BrowsingMenusRichPresenceData::*)()>(
    &::GlobalNamespace::BrowsingMenusRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b2cf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BrowsingMenusRichPresenceData::__cordl_internal_get__localizedDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription;
}
constexpr ::StringW const& GlobalNamespace::BrowsingMenusRichPresenceData::__cordl_internal_get__localizedDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription;
}
constexpr void GlobalNamespace::BrowsingMenusRichPresenceData::__cordl_internal_set__localizedDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizedDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::BrowsingMenusRichPresenceData::get_apiName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                             "get_apiName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BrowsingMenusRichPresenceData::get_localizedDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(),
                                                                             "get_localizedDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::BrowsingMenusRichPresenceData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BrowsingMenusRichPresenceData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BrowsingMenusRichPresenceData* GlobalNamespace::BrowsingMenusRichPresenceData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BrowsingMenusRichPresenceData*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr GlobalNamespace::BrowsingMenusRichPresenceData::operator ::GlobalNamespace::IRichPresenceData*() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRichPresenceData"
constexpr ::GlobalNamespace::IRichPresenceData* GlobalNamespace::BrowsingMenusRichPresenceData::i___GlobalNamespace__IRichPresenceData() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData::BrowsingMenusRichPresenceData() {}
