#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayingTutorialPresenceData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayingTutorialPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayingTutorialPresenceData.get_apiName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayingTutorialPresenceData::*)()>(
    &::GlobalNamespace::PlayingTutorialPresenceData::get_apiName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3acc478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingTutorialPresenceData*>::get(),
                                                                               "get_apiName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingTutorialPresenceData.get_localizedDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayingTutorialPresenceData::*)()>(
    &::GlobalNamespace::PlayingTutorialPresenceData::get_localizedDescription)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3acc4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingTutorialPresenceData*>::get(),
                                                                               "get_localizedDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingTutorialPresenceData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayingTutorialPresenceData::*)()>(&::GlobalNamespace::PlayingTutorialPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3acc510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingTutorialPresenceData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr GlobalNamespace::PlayingTutorialPresenceData::operator ::GlobalNamespace::IRichPresenceData*() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRichPresenceData"
constexpr ::GlobalNamespace::IRichPresenceData* GlobalNamespace::PlayingTutorialPresenceData::i___GlobalNamespace__IRichPresenceData() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::PlayingTutorialPresenceData::__cordl_internal_get__localizedDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription;
}
constexpr ::StringW const& GlobalNamespace::PlayingTutorialPresenceData::__cordl_internal_get__localizedDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription;
}
constexpr void GlobalNamespace::PlayingTutorialPresenceData::__cordl_internal_set__localizedDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizedDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PlayingTutorialPresenceData::get_apiName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingTutorialPresenceData*>::get(),
                                                                             "get_apiName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayingTutorialPresenceData::get_localizedDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingTutorialPresenceData*>::get(),
                                                                             "get_localizedDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayingTutorialPresenceData* GlobalNamespace::PlayingTutorialPresenceData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayingTutorialPresenceData*>());
}
inline void GlobalNamespace::PlayingTutorialPresenceData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingTutorialPresenceData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayingTutorialPresenceData::PlayingTutorialPresenceData() {}
