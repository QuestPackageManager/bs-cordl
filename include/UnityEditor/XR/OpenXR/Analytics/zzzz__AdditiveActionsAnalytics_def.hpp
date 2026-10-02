#pragma once
// IWYU pragma private; include "UnityEditor/XR/OpenXR/Analytics/AdditiveActionsAnalytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditiveActionsAnalytics)
namespace UnityEditor::XR::OpenXR::Analytics {
struct AdditiveActionsAnalytics_Payload;
}
// Forward declare root types
namespace UnityEditor::XR::OpenXR::Analytics {
class AdditiveActionsAnalytics;
}
namespace UnityEditor::XR::OpenXR::Analytics {
struct AdditiveActionsAnalytics_Payload;
}
// Write type traits
MARK_REF_T(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics*);
MARK_VAL_T(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload);
DEFINE_IL2CPP_CLASS(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics*, "UnityEditor.XR.OpenXR.Analytics", "AdditiveActionsAnalytics");
DEFINE_IL2CPP_CLASS(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload, "UnityEditor.XR.OpenXR.Analytics", "AdditiveActionsAnalytics/Payload");
// Dependencies
namespace UnityEditor::XR::OpenXR::Analytics {
// Is value type: true
// CS Name: UnityEditor.XR.OpenXR.Analytics.AdditiveActionsAnalytics/Payload
struct CORDL_TYPE AdditiveActionsAnalytics_Payload {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditiveActionsAnalytics_Payload();

  // Ctor Parameters [CppParam { name: "additive_profile_name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "augmented_profiles", ty: "::ArrayW<::StringW>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "additive_action_names", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
  constexpr AdditiveActionsAnalytics_Payload(::StringW additive_profile_name, ::ArrayW<::StringW> augmented_profiles, ::ArrayW<::StringW> additive_action_names) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17666 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field additive_profile_name, offset: 0x0, size: 0x8, def value: None
  ::StringW additive_profile_name;

  /// @brief Field augmented_profiles, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::StringW> augmented_profiles;

  /// @brief Field additive_action_names, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW> additive_action_names;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload, additive_profile_name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload, augmented_profiles) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload, additive_action_names) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload) == 0x18, "Size mismatch!");

} // namespace UnityEditor::XR::OpenXR::Analytics
// Dependencies System.Object
namespace UnityEditor::XR::OpenXR::Analytics {
// Is value type: false
// CS Name: UnityEditor.XR.OpenXR.Analytics.AdditiveActionsAnalytics
class CORDL_TYPE AdditiveActionsAnalytics : public ::System::Object {
public:
  // Declarations
  using Payload = ::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics_Payload;

  /// @brief Method Send, addr 0x6e6d284, size 0x4, virtual false, abstract: false, final false
  static inline void Send(::StringW additiveProfileName, ::ArrayW<::StringW> augmentedProfiles, ::ArrayW<::StringW> additiveActionNames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdditiveActionsAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdditiveActionsAnalytics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdditiveActionsAnalytics(AdditiveActionsAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdditiveActionsAnalytics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdditiveActionsAnalytics(AdditiveActionsAnalytics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17667 };

  /// @brief Field kEventName offset 0xffffffff size 0x8
  static constexpr ::ConstString kEventName{ u"xr_additive_playmode_usage" };

  /// @brief Field kMaxItems offset 0xffffffff size 0x4
  static constexpr int32_t kMaxItems{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kMaxPerHour offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPerHour{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kVendorKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kVendorKey{ u"unity.xr.openxr" };

  /// @brief Field kVersion offset 0xffffffff size 0x4
  static constexpr int32_t kVersion{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEditor::XR::OpenXR::Analytics::AdditiveActionsAnalytics) == 0x10, "Size mismatch!");

} // namespace UnityEditor::XR::OpenXR::Analytics
