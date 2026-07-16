#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/MockFeatureFlagService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/FeatureFlags/zzzz__MockFeatureFlagService_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__Feature_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlagService_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)()>(&::BeatSaber::FeatureFlags::MockFeatureFlagService::Initialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x328ca64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService.SetFeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature, bool)>(
    &::BeatSaber::FeatureFlags::MockFeatureFlagService::SetFeatureEnabled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x328ca8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(),
                                                             { "SetFeatureEnabled", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::Feature>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService.IsFeatureEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature)>(
    &::BeatSaber::FeatureFlags::MockFeatureFlagService::IsFeatureEnabled)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x328cb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(), { "IsFeatureEnabled", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::Feature>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService.IsFeatureEnabledAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature)>(
    &::BeatSaber::FeatureFlags::MockFeatureFlagService::IsFeatureEnabledAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x328cba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(),
                                                                                           { "IsFeatureEnabledAsync", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::Feature>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)()>(&::BeatSaber::FeatureFlags::MockFeatureFlagService::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x328cc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, bool>*& BeatSaber::FeatureFlags::MockFeatureFlagService::__cordl_internal_get__enabledFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledFeatures;
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, bool>* const&
BeatSaber::FeatureFlags::MockFeatureFlagService::__cordl_internal_get__enabledFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledFeatures;
}
constexpr void BeatSaber::FeatureFlags::MockFeatureFlagService::__cordl_internal_set__enabledFeatures(::System::Collections::Generic::Dictionary_2<::BeatSaber::FeatureFlags::Feature, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledFeatures = value;
}
inline void BeatSaber::FeatureFlags::MockFeatureFlagService::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::FeatureFlags::MockFeatureFlagService::SetFeatureEnabled(::BeatSaber::FeatureFlags::Feature feature, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(),
                                                           { "SetFeatureEnabled", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::Feature>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, enabled);
}
inline ::System::Nullable_1<bool> BeatSaber::FeatureFlags::MockFeatureFlagService::IsFeatureEnabled(::BeatSaber::FeatureFlags::Feature feature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(), { "IsFeatureEnabled", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::Feature>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method, feature);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::FeatureFlags::MockFeatureFlagService::IsFeatureEnabledAsync(::BeatSaber::FeatureFlags::Feature feature) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(),
                                                                                         { "IsFeatureEnabledAsync", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::Feature>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, feature);
}
inline void BeatSaber::FeatureFlags::MockFeatureFlagService::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::FeatureFlags::MockFeatureFlagService*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::FeatureFlags::MockFeatureFlagService* BeatSaber::FeatureFlags::MockFeatureFlagService::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::FeatureFlags::MockFeatureFlagService*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BeatSaber::FeatureFlags::MockFeatureFlagService::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::FeatureFlags::MockFeatureFlagService::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BeatSaber::FeatureFlags::IFeatureFlagService"
constexpr BeatSaber::FeatureFlags::MockFeatureFlagService::operator ::BeatSaber::FeatureFlags::IFeatureFlagService*() noexcept {
  return static_cast<::BeatSaber::FeatureFlags::IFeatureFlagService*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::FeatureFlags::IFeatureFlagService"
constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService* BeatSaber::FeatureFlags::MockFeatureFlagService::i___BeatSaber__FeatureFlags__IFeatureFlagService() noexcept {
  return static_cast<::BeatSaber::FeatureFlags::IFeatureFlagService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::FeatureFlags::MockFeatureFlagService::MockFeatureFlagService() {}
