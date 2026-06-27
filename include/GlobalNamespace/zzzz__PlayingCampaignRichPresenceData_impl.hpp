#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayingCampaignRichPresenceData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayingCampaignRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayingCampaignRichPresenceData.get_apiName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayingCampaignRichPresenceData::*)()>(&::GlobalNamespace::PlayingCampaignRichPresenceData::get_apiName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x57ddac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingCampaignRichPresenceData*>::get(),
                        "get_apiName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingCampaignRichPresenceData.get_localizedDescription
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayingCampaignRichPresenceData::*)()>(&::GlobalNamespace::PlayingCampaignRichPresenceData::get_localizedDescription)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57ddb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingCampaignRichPresenceData*>::get(),
                        "get_localizedDescription",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingCampaignRichPresenceData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayingCampaignRichPresenceData::*)()>(&::GlobalNamespace::PlayingCampaignRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ddb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingCampaignRichPresenceData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayingCampaignRichPresenceData::__cordl_internal_get__localizedDescription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedDescription;
}
constexpr ::StringW const& GlobalNamespace::PlayingCampaignRichPresenceData::__cordl_internal_get__localizedDescription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedDescription;
}
constexpr void GlobalNamespace::PlayingCampaignRichPresenceData::__cordl_internal_set__localizedDescription(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizedDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PlayingCampaignRichPresenceData::get_apiName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingCampaignRichPresenceData*>::get(),
                        "get_apiName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayingCampaignRichPresenceData::get_localizedDescription()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingCampaignRichPresenceData*>::get(),
                        "get_localizedDescription",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayingCampaignRichPresenceData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayingCampaignRichPresenceData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayingCampaignRichPresenceData* GlobalNamespace::PlayingCampaignRichPresenceData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayingCampaignRichPresenceData*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr  GlobalNamespace::PlayingCampaignRichPresenceData::operator ::GlobalNamespace::IRichPresenceData*() noexcept {
return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRichPresenceData"
constexpr ::GlobalNamespace::IRichPresenceData* GlobalNamespace::PlayingCampaignRichPresenceData::i___GlobalNamespace__IRichPresenceData() noexcept {
return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData::PlayingCampaignRichPresenceData()   {
}
