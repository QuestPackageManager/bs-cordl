#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LaunchBlockFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LaunchBlockFlowResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchBlockFlowResult);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LaunchBlockFlowResult
class CORDL_TYPE LaunchBlockFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DidBlock, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_DidBlock, put = __cordl_internal_set_DidBlock)) bool DidBlock;

  /// @brief Field DidCancel, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_DidCancel, put = __cordl_internal_set_DidCancel)) bool DidCancel;

  static inline ::Oculus::Platform::Models::LaunchBlockFlowResult* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_DidBlock() const;

  constexpr bool& __cordl_internal_get_DidBlock();

  constexpr bool const& __cordl_internal_get_DidCancel() const;

  constexpr bool& __cordl_internal_get_DidCancel();

  constexpr void __cordl_internal_set_DidBlock(bool value);

  constexpr void __cordl_internal_set_DidCancel(bool value);

  /// @brief Method .ctor, addr 0x3f91870, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchBlockFlowResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LaunchBlockFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchBlockFlowResult(LaunchBlockFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchBlockFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchBlockFlowResult(LaunchBlockFlowResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15532 };

  /// @brief Field DidBlock, offset: 0x10, size: 0x1, def value: None
  bool ___DidBlock;

  /// @brief Field DidCancel, offset: 0x11, size: 0x1, def value: None
  bool ___DidCancel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LaunchBlockFlowResult, ___DidBlock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchBlockFlowResult, ___DidCancel) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchBlockFlowResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchBlockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchBlockFlowResult*, "Oculus.Platform.Models", "LaunchBlockFlowResult");
