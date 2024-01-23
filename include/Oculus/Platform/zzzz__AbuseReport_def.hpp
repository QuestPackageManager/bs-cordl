#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AbuseReport)
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class AbuseReport;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AbuseReport);
// Type: Oculus.Platform::AbuseReport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13354))
// CS Name: ::Oculus.Platform::AbuseReport*
class CORDL_TYPE AbuseReport : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReportRequestHandled, addr 0x26cd0a0, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* ReportRequestHandled(::Oculus::Platform::ReportRequestResponse response);

  /// @brief Method SetReportButtonPressedNotificationCallback, addr 0x26cd2dc, size 0x74, virtual false, abstract: false, final false
  static inline void SetReportButtonPressedNotificationCallback(::Oculus::Platform::__Message_1__Callback<::StringW>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "AbuseReport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbuseReport(AbuseReport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbuseReport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbuseReport(AbuseReport const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbuseReport();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AbuseReport, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AbuseReport);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AbuseReport*, "Oculus.Platform", "AbuseReport");
