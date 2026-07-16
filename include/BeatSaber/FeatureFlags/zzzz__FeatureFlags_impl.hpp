#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/FeatureFlags.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureFlags_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__FeatureConfiguration_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlags.GetConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>* (
    ::BeatSaber::FeatureFlags::FeatureFlags::*)()>(&::BeatSaber::FeatureFlags::FeatureFlags::GetConfiguration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlags*>(), { "GetConfiguration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::FeatureFlags._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::FeatureFlags::FeatureFlags::*)()>(&::BeatSaber::FeatureFlags::FeatureFlags::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x328a720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlags*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>*&
BeatSaber::FeatureFlags::FeatureFlags::__cordl_internal_get__configurations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configurations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>* const&
BeatSaber::FeatureFlags::FeatureFlags::__cordl_internal_get__configurations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configurations;
}
constexpr void BeatSaber::FeatureFlags::FeatureFlags::__cordl_internal_set__configurations(
    ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configurations = value;
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>*
BeatSaber::FeatureFlags::FeatureFlags::GetConfiguration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlags*>(), { "GetConfiguration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyDictionary_2<::BeatSaber::FeatureFlags::Feature, ::BeatSaber::FeatureFlags::FeatureConfiguration*>*>(
      this, ___internal_method);
}
inline void BeatSaber::FeatureFlags::FeatureFlags::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::FeatureFlags*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::FeatureFlags::FeatureFlags* BeatSaber::FeatureFlags::FeatureFlags::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::FeatureFlags::FeatureFlags*>());
}
/// @brief Convert operator to "::BeatSaber::FeatureFlags::IFeatureFlags"
constexpr BeatSaber::FeatureFlags::FeatureFlags::operator ::BeatSaber::FeatureFlags::IFeatureFlags*() noexcept {
  return static_cast<::BeatSaber::FeatureFlags::IFeatureFlags*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::FeatureFlags::IFeatureFlags"
constexpr ::BeatSaber::FeatureFlags::IFeatureFlags* BeatSaber::FeatureFlags::FeatureFlags::i___BeatSaber__FeatureFlags__IFeatureFlags() noexcept {
  return static_cast<::BeatSaber::FeatureFlags::IFeatureFlags*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::FeatureFlags::FeatureFlags() {}
