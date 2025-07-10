#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LivestreamingStartResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__LivestreamingStartStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LivestreamingStartResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LivestreamingStartResult);
// Dependencies Oculus.Platform.LivestreamingStartStatus, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LivestreamingStartResult
class CORDL_TYPE LivestreamingStartResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field StreamingResult, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_StreamingResult, put = __cordl_internal_set_StreamingResult)) ::Oculus::Platform::LivestreamingStartStatus StreamingResult;

  static inline ::Oculus::Platform::Models::LivestreamingStartResult* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::LivestreamingStartStatus const& __cordl_internal_get_StreamingResult() const;

  constexpr ::Oculus::Platform::LivestreamingStartStatus& __cordl_internal_get_StreamingResult();

  constexpr void __cordl_internal_set_StreamingResult(::Oculus::Platform::LivestreamingStartStatus value);

  /// @brief Method .ctor, addr 0x3f921d0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LivestreamingStartResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingStartResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LivestreamingStartResult(LivestreamingStartResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingStartResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LivestreamingStartResult(LivestreamingStartResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15545 };

  /// @brief Field StreamingResult, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::LivestreamingStartStatus ___StreamingResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStartResult, ___StreamingResult) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LivestreamingStartResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingStartResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingStartResult*, "Oculus.Platform.Models", "LivestreamingStartResult");
