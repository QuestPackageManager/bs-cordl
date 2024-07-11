#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AbuseReportRecording.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbuseReportRecording)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AbuseReportRecording);
// Type: Oculus.Platform.Models::AbuseReportRecording
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::AbuseReportRecording*
class CORDL_TYPE AbuseReportRecording : public ::System::Object {
public:
  // Declarations
  /// @brief Field RecordingUuid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_RecordingUuid, put = __cordl_internal_set_RecordingUuid))::StringW RecordingUuid;

  static inline ::Oculus::Platform::Models::AbuseReportRecording* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_RecordingUuid() const;

  constexpr ::StringW& __cordl_internal_get_RecordingUuid();

  constexpr void __cordl_internal_set_RecordingUuid(::StringW value);

  /// @brief Method .ctor, addr 0x2b0d91c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AbuseReportRecording();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AbuseReportRecording", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AbuseReportRecording(AbuseReportRecording&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AbuseReportRecording", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AbuseReportRecording(AbuseReportRecording const&) = delete;

  /// @brief Field RecordingUuid, offset: 0x10, size: 0x8, def value: None
  ::StringW ___RecordingUuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AbuseReportRecording, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::AbuseReportRecording, ___RecordingUuid) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AbuseReportRecording);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AbuseReportRecording*, "Oculus.Platform.Models", "AbuseReportRecording");
