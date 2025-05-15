#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LivestreamingApplicationStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LivestreamingApplicationStatus)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LivestreamingApplicationStatus);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LivestreamingApplicationStatus
class CORDL_TYPE LivestreamingApplicationStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field StreamingEnabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_StreamingEnabled, put = __cordl_internal_set_StreamingEnabled)) bool StreamingEnabled;

  static inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_StreamingEnabled() const;

  constexpr bool& __cordl_internal_get_StreamingEnabled();

  constexpr void __cordl_internal_set_StreamingEnabled(bool value);

  /// @brief Method .ctor, addr 0x3f92534, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LivestreamingApplicationStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingApplicationStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LivestreamingApplicationStatus(LivestreamingApplicationStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingApplicationStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LivestreamingApplicationStatus(LivestreamingApplicationStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15544 };

  /// @brief Field StreamingEnabled, offset: 0x10, size: 0x1, def value: None
  bool ___StreamingEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LivestreamingApplicationStatus, ___StreamingEnabled) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LivestreamingApplicationStatus, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingApplicationStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingApplicationStatus*, "Oculus.Platform.Models", "LivestreamingApplicationStatus");
