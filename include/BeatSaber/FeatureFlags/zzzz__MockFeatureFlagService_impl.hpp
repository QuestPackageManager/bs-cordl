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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)()>(
    &::BeatSaber::FeatureFlags::MockFeatureFlagService::Initialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x31f723c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService.SetFeatureEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature, bool)>(
    &::BeatSaber::FeatureFlags::MockFeatureFlagService::SetFeatureEnabled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x31f7264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(), "SetFeatureEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService.IsFeatureEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)(
    ::BeatSaber::FeatureFlags::Feature)>(&::BeatSaber::FeatureFlags::MockFeatureFlagService::IsFeatureEnabled)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x31f72e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(), "IsFeatureEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService.IsFeatureEnabledAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::BeatSaber::FeatureFlags::MockFeatureFlagService::*)(::BeatSaber::FeatureFlags::Feature)>(&::BeatSaber::FeatureFlags::MockFeatureFlagService::IsFeatureEnabledAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x31f7378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(), "IsFeatureEnabledAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::FeatureFlags::MockFeatureFlagService._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::FeatureFlags::MockFeatureFlagService::*)()>(
    &::BeatSaber::FeatureFlags::MockFeatureFlagService::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x31f742c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enabledFeatures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::FeatureFlags::MockFeatureFlagService::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::FeatureFlags::MockFeatureFlagService::SetFeatureEnabled(::BeatSaber::FeatureFlags::Feature feature, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(), "SetFeatureEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, feature, enabled);
}
inline ::System::Nullable_1<bool> BeatSaber::FeatureFlags::MockFeatureFlagService::IsFeatureEnabled(::BeatSaber::FeatureFlags::Feature feature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(), "IsFeatureEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method, feature);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::FeatureFlags::MockFeatureFlagService::IsFeatureEnabledAsync(::BeatSaber::FeatureFlags::Feature feature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(), "IsFeatureEnabledAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::FeatureFlags::Feature>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, feature);
}
inline void BeatSaber::FeatureFlags::MockFeatureFlagService::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::FeatureFlags::MockFeatureFlagService*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::FeatureFlags::MockFeatureFlagService* BeatSaber::FeatureFlags::MockFeatureFlagService::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::FeatureFlags::MockFeatureFlagService*>());
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
