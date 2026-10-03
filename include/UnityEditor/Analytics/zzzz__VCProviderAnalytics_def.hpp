#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/VCProviderAnalytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VCProviderAnalytics)
// Forward declare root types
namespace UnityEditor::Analytics {
class VCProviderAnalytics;
}
// Write type traits
MARK_REF_T(::UnityEditor::Analytics::VCProviderAnalytics*);
DEFINE_IL2CPP_CLASS(::UnityEditor::Analytics::VCProviderAnalytics*, "UnityEditor.Analytics", "VCProviderAnalytics");
// [ExcludeFromDocs]
// [RequiredByNativeCode(GenerateProxy = true)]
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.VCProviderAnalytics
class CORDL_TYPE VCProviderAnalytics : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field Mode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Mode, put = __cordl_internal_set_Mode)) ::StringW Mode;

  /// [RequiredByNativeCode]
  /// @brief Method CreateVCProviderAnalytics, addr 0x72c1290, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::VCProviderAnalytics* CreateVCProviderAnalytics();

  static inline ::UnityEditor::Analytics::VCProviderAnalytics* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_Mode() const;

  constexpr ::StringW& __cordl_internal_get_Mode();

  constexpr void __cordl_internal_set_Mode(::StringW value);

  /// @brief Method .ctor, addr 0x72c1218, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VCProviderAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VCProviderAnalytics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VCProviderAnalytics(VCProviderAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VCProviderAnalytics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VCProviderAnalytics(VCProviderAnalytics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23305 };

  /// @brief Field Mode, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::VCProviderAnalytics, ___Mode) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEditor::Analytics::VCProviderAnalytics) == 0x38, "Size mismatch!");

} // namespace UnityEditor::Analytics
