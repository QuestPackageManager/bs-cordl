#pragma once
// IWYU pragma private; include "UnityEditor/XR/OpenXR/Analytics/AdditiveActionsAnalytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEditor/XR/OpenXR/Analytics/zzzz__AdditiveActionsAnalytics_def.hpp"
#include "UnityEditor/XR/OpenXR/Analytics/zzzz__AdditiveActionsAnalytics_def.hpp"
// Ctor Parameters [CppParam { name: "additive_profile_name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "augmented_profiles", ty: "::ArrayW<::StringW>",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "additive_action_names", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload::AdditiveActionsAnalytics_Payload(::StringW additive_profile_name, ::ArrayW<::StringW> augmented_profiles,
                                                                                                                   ::ArrayW<::StringW> additive_action_names) noexcept {
  this->additive_profile_name = additive_profile_name;
  this->augmented_profiles = augmented_profiles;
  this->additive_action_names = additive_action_names;
}
// Ctor Parameters []
constexpr ::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload::AdditiveActionsAnalytics_Payload() {}
//  Writing Method size for method: ::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics::Send)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e6d284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics*>(),
                                                             { "Send", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics::Send(::StringW additiveProfileName, ::ArrayW<::StringW> augmentedProfiles, ::ArrayW<::StringW> additiveActionNames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics*>(),
                                                           { "Send", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, additiveProfileName, augmentedProfiles, additiveActionNames);
}
// Ctor Parameters []
constexpr ::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics::AdditiveActionsAnalytics() {}
