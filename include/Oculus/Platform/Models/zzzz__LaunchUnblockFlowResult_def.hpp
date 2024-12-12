#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LaunchUnblockFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LaunchUnblockFlowResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchUnblockFlowResult);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LaunchUnblockFlowResult
class CORDL_TYPE LaunchUnblockFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DidCancel, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_DidCancel, put = __cordl_internal_set_DidCancel)) bool DidCancel;

  /// @brief Field DidUnblock, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_DidUnblock, put = __cordl_internal_set_DidUnblock)) bool DidUnblock;

  static inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_DidCancel() const;

  constexpr bool& __cordl_internal_get_DidCancel();

  constexpr bool const& __cordl_internal_get_DidUnblock() const;

  constexpr bool& __cordl_internal_get_DidUnblock();

  constexpr void __cordl_internal_set_DidCancel(bool value);

  constexpr void __cordl_internal_set_DidUnblock(bool value);

  /// @brief Method .ctor, addr 0x3f901f4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchUnblockFlowResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LaunchUnblockFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchUnblockFlowResult(LaunchUnblockFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchUnblockFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchUnblockFlowResult(LaunchUnblockFlowResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15528 };

  /// @brief Field DidCancel, offset: 0x10, size: 0x1, def value: None
  bool ___DidCancel;

  /// @brief Field DidUnblock, offset: 0x11, size: 0x1, def value: None
  bool ___DidUnblock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LaunchUnblockFlowResult, ___DidCancel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchUnblockFlowResult, ___DidUnblock) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchUnblockFlowResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchUnblockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchUnblockFlowResult*, "Oculus.Platform.Models", "LaunchUnblockFlowResult");
