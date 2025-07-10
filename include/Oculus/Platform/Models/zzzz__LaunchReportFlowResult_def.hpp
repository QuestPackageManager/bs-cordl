#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LaunchReportFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchReportFlowResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchReportFlowResult);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LaunchReportFlowResult
class CORDL_TYPE LaunchReportFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DidCancel, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_DidCancel, put = __cordl_internal_set_DidCancel)) bool DidCancel;

  /// @brief Field UserReportId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_UserReportId, put = __cordl_internal_set_UserReportId)) uint64_t UserReportId;

  static inline ::Oculus::Platform::Models::LaunchReportFlowResult* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_DidCancel() const;

  constexpr bool& __cordl_internal_get_DidCancel();

  constexpr uint64_t const& __cordl_internal_get_UserReportId() const;

  constexpr uint64_t& __cordl_internal_get_UserReportId();

  constexpr void __cordl_internal_set_DidCancel(bool value);

  constexpr void __cordl_internal_set_UserReportId(uint64_t value);

  /// @brief Method .ctor, addr 0x3f91770, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchReportFlowResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LaunchReportFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchReportFlowResult(LaunchReportFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchReportFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchReportFlowResult(LaunchReportFlowResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15536 };

  /// @brief Field DidCancel, offset: 0x10, size: 0x1, def value: None
  bool ___DidCancel;

  /// @brief Field UserReportId, offset: 0x18, size: 0x8, def value: None
  uint64_t ___UserReportId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LaunchReportFlowResult, ___DidCancel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchReportFlowResult, ___UserReportId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchReportFlowResult, 0x20>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchReportFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchReportFlowResult*, "Oculus.Platform.Models", "LaunchReportFlowResult");
