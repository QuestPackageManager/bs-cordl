#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayingCampaignRichPresenceData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayingCampaignRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayingCampaignRichPresenceData.get_apiName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayingCampaignRichPresenceData::*)()>(&::GlobalNamespace::PlayingCampaignRichPresenceData::get_apiName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58ffb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingCampaignRichPresenceData*>(), { "get_apiName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingCampaignRichPresenceData.get_localizedDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayingCampaignRichPresenceData::*)()>(
    &::GlobalNamespace::PlayingCampaignRichPresenceData::get_localizedDescription)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58ffbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingCampaignRichPresenceData*>(), { "get_localizedDescription", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingCampaignRichPresenceData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayingCampaignRichPresenceData::*)()>(&::GlobalNamespace::PlayingCampaignRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ffc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingCampaignRichPresenceData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayingCampaignRichPresenceData::__cordl_internal_get__localizedDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription;
}
constexpr ::StringW const& GlobalNamespace::PlayingCampaignRichPresenceData::__cordl_internal_get__localizedDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription;
}
constexpr void GlobalNamespace::PlayingCampaignRichPresenceData::__cordl_internal_set__localizedDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizedDescription = value;
}
inline ::StringW GlobalNamespace::PlayingCampaignRichPresenceData::get_apiName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingCampaignRichPresenceData*>(), { "get_apiName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayingCampaignRichPresenceData::get_localizedDescription() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingCampaignRichPresenceData*>(), { "get_localizedDescription", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayingCampaignRichPresenceData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingCampaignRichPresenceData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayingCampaignRichPresenceData* GlobalNamespace::PlayingCampaignRichPresenceData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayingCampaignRichPresenceData*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr GlobalNamespace::PlayingCampaignRichPresenceData::operator ::GlobalNamespace::IRichPresenceData*() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRichPresenceData"
constexpr ::GlobalNamespace::IRichPresenceData* GlobalNamespace::PlayingCampaignRichPresenceData::i___GlobalNamespace__IRichPresenceData() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData::PlayingCampaignRichPresenceData() {}
