#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAbuseReportRecording.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAbuseReportRecording)
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAbuseReportRecording;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAbuseReportRecording);
// Type: Oculus.Platform::MessageWithAbuseReportRecording
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithAbuseReportRecording*
class CORDL_TYPE MessageWithAbuseReportRecording : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AbuseReportRecording*> {
public:
  // Declarations
  /// @brief Method GetAbuseReportRecording, addr 0x2afaa04, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AbuseReportRecording* GetAbuseReportRecording();

  /// @brief Method GetDataFromMessage, addr 0x2afaa40, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AbuseReportRecording* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAbuseReportRecording* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x2afa9ac, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAbuseReportRecording();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAbuseReportRecording", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAbuseReportRecording(MessageWithAbuseReportRecording&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAbuseReportRecording", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAbuseReportRecording(MessageWithAbuseReportRecording const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAbuseReportRecording, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAbuseReportRecording);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAbuseReportRecording*, "Oculus.Platform", "MessageWithAbuseReportRecording");
