#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/LicensingInitAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LicensingInitAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class LicensingInitAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::LicensingInitAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.LicensingInitAnalytic
class CORDL_TYPE LicensingInitAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field channelType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_channelType, put = __cordl_internal_set_channelType)) ::StringW channelType;

  /// @brief Field correlationId, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_correlationId, put = __cordl_internal_set_correlationId)) ::StringW correlationId;

  /// @brief Field initTime, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_initTime, put = __cordl_internal_set_initTime)) double_t initTime;

  /// @brief Field isLegacy, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isLegacy, put = __cordl_internal_set_isLegacy)) bool isLegacy;

  /// @brief Field licensingClientVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_licensingClientVersion, put = __cordl_internal_set_licensingClientVersion)) ::StringW licensingClientVersion;

  /// @brief Field licensingProtocolVersion, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_licensingProtocolVersion, put = __cordl_internal_set_licensingProtocolVersion)) ::StringW licensingProtocolVersion;

  /// @brief Field sessionId, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_sessionId, put = __cordl_internal_set_sessionId)) ::StringW sessionId;

  /// @brief Method CreateLicensingInitAnalytic, addr 0x6bf08b0, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::LicensingInitAnalytic* CreateLicensingInitAnalytic();

  static inline ::UnityEditor::Analytics::LicensingInitAnalytic* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_channelType() const;

  constexpr ::StringW& __cordl_internal_get_channelType();

  constexpr ::StringW const& __cordl_internal_get_correlationId() const;

  constexpr ::StringW& __cordl_internal_get_correlationId();

  constexpr double_t const& __cordl_internal_get_initTime() const;

  constexpr double_t& __cordl_internal_get_initTime();

  constexpr bool const& __cordl_internal_get_isLegacy() const;

  constexpr bool& __cordl_internal_get_isLegacy();

  constexpr ::StringW const& __cordl_internal_get_licensingClientVersion() const;

  constexpr ::StringW& __cordl_internal_get_licensingClientVersion();

  constexpr ::StringW const& __cordl_internal_get_licensingProtocolVersion() const;

  constexpr ::StringW& __cordl_internal_get_licensingProtocolVersion();

  constexpr ::StringW const& __cordl_internal_get_sessionId() const;

  constexpr ::StringW& __cordl_internal_get_sessionId();

  constexpr void __cordl_internal_set_channelType(::StringW value);

  constexpr void __cordl_internal_set_correlationId(::StringW value);

  constexpr void __cordl_internal_set_initTime(double_t value);

  constexpr void __cordl_internal_set_isLegacy(bool value);

  constexpr void __cordl_internal_set_licensingClientVersion(::StringW value);

  constexpr void __cordl_internal_set_licensingProtocolVersion(::StringW value);

  constexpr void __cordl_internal_set_sessionId(::StringW value);

  /// @brief Method .ctor, addr 0x6bf0838, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LicensingInitAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LicensingInitAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LicensingInitAnalytic(LicensingInitAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LicensingInitAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LicensingInitAnalytic(LicensingInitAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22557 };

  /// @brief Field licensingProtocolVersion, offset: 0x30, size: 0x8, def value: None
  ::StringW ___licensingProtocolVersion;

  /// @brief Field licensingClientVersion, offset: 0x38, size: 0x8, def value: None
  ::StringW ___licensingClientVersion;

  /// @brief Field channelType, offset: 0x40, size: 0x8, def value: None
  ::StringW ___channelType;

  /// @brief Field initTime, offset: 0x48, size: 0x8, def value: None
  double_t ___initTime;

  /// @brief Field isLegacy, offset: 0x50, size: 0x1, def value: None
  bool ___isLegacy;

  /// @brief Field sessionId, offset: 0x58, size: 0x8, def value: None
  ::StringW ___sessionId;

  /// @brief Field correlationId, offset: 0x60, size: 0x8, def value: None
  ::StringW ___correlationId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::LicensingInitAnalytic, ___licensingProtocolVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingInitAnalytic, ___licensingClientVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingInitAnalytic, ___channelType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingInitAnalytic, ___initTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingInitAnalytic, ___isLegacy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingInitAnalytic, ___sessionId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::LicensingInitAnalytic, ___correlationId) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::LicensingInitAnalytic, 0x68>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::LicensingInitAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::LicensingInitAnalytic*, "UnityEditor.Analytics", "LicensingInitAnalytic");
