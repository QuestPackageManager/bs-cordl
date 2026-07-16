#pragma once
// IWYU pragma private; include "Oculus/Platform/AbuseReport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AbuseReport)
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class AbuseReport;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::AbuseReport*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::AbuseReport*, "Oculus.Platform", "AbuseReport");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.AbuseReport
class CORDL_TYPE AbuseReport : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReportRequestHandled, addr 0x5de1bf0, size 0x154, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* ReportRequestHandled(::Oculus::Platform::ReportRequestResponse response);

  /// @brief Method SetReportButtonPressedNotificationCallback, addr 0x5de1d44, size 0x7c, virtual false, abstract: false, final false
  static inline void SetReportButtonPressedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbuseReport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbuseReport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbuseReport(AbuseReport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbuseReport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbuseReport(AbuseReport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::AbuseReport) == 0x10, "Size mismatch!");

} // namespace Oculus::Platform
