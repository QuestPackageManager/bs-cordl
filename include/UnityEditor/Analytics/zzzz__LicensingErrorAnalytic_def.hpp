#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/LicensingErrorAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LicensingErrorAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class LicensingErrorAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::LicensingErrorAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.LicensingErrorAnalytic
class CORDL_TYPE LicensingErrorAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field additionalData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_additionalData, put = __cordl_internal_set_additionalData)) ::StringW additionalData;

  /// @brief Field correlationId, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_correlationId, put = __cordl_internal_set_correlationId)) ::StringW correlationId;

  /// @brief Field errorMessage, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_errorMessage, put = __cordl_internal_set_errorMessage)) ::StringW errorMessage;

  /// @brief Field licensingErrorType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_licensingErrorType, put = __cordl_internal_set_licensingErrorType)) ::StringW licensingErrorType;

  /// @brief Field sessionId, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sessionId, put = __cordl_internal_set_sessionId)) ::StringW sessionId;

  /// @brief Method CreateLicensingErrorAnalytic, addr 0x6bf07e4, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::LicensingErrorAnalytic* CreateLicensingErrorAnalytic();

  static inline ::UnityEditor::Analytics::LicensingErrorAnalytic* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_additionalData() const;

  constexpr ::StringW& __cordl_internal_get_additionalData();

  constexpr ::StringW const& __cordl_internal_get_correlationId() const;

  constexpr ::StringW& __cordl_internal_get_correlationId();

  constexpr ::StringW const& __cordl_internal_get_errorMessage() const;

  constexpr ::StringW& __cordl_internal_get_errorMessage();

  constexpr ::StringW const& __cordl_internal_get_licensingErrorType() const;

  constexpr ::StringW& __cordl_internal_get_licensingErrorType();

  constexpr ::StringW const& __cordl_internal_get_sessionId() const;

  constexpr ::StringW& __cordl_internal_get_sessionId();

  constexpr void __cordl_internal_set_additionalData(::StringW value);

  constexpr void __cordl_internal_set_correlationId(::StringW value);

  constexpr void __cordl_internal_set_errorMessage(::StringW value);

  constexpr void __cordl_internal_set_licensingErrorType(::StringW value);

  constexpr void __cordl_internal_set_sessionId(::StringW value);

  /// @brief Method .ctor, addr 0x6bf076c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicensingErrorAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicensingErrorAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicensingErrorAnalytic(LicensingErrorAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicensingErrorAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicensingErrorAnalytic(LicensingErrorAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22556 };

  /// @brief Field licensingErrorType, offset: 0x30, size: 0x8, def value: None
  ::StringW ___licensingErrorType;

  /// @brief Field additionalData, offset: 0x38, size: 0x8, def value: None
  ::StringW ___additionalData;

  /// @brief Field errorMessage, offset: 0x40, size: 0x8, def value: None
  ::StringW ___errorMessage;

  /// @brief Field correlationId, offset: 0x48, size: 0x8, def value: None
  ::StringW ___correlationId;

  /// @brief Field sessionId, offset: 0x50, size: 0x8, def value: None
  ::StringW ___sessionId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::LicensingErrorAnalytic, ___licensingErrorType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingErrorAnalytic, ___additionalData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingErrorAnalytic, ___errorMessage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingErrorAnalytic, ___correlationId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingErrorAnalytic, ___sessionId) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::LicensingErrorAnalytic, 0x58>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::LicensingErrorAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::LicensingErrorAnalytic*, "UnityEditor.Analytics", "LicensingErrorAnalytic");
