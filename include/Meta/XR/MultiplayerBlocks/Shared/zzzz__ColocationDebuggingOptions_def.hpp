#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationDebuggingOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColocationDebuggingOptions)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationDebuggingOptions;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationDebuggingOptions
class CORDL_TYPE ColocationDebuggingOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field enableVerboseLogging, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_enableVerboseLogging, put = __cordl_internal_set_enableVerboseLogging)) bool enableVerboseLogging;

  /// @brief Field visualizeAlignmentAnchor, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_visualizeAlignmentAnchor, put = __cordl_internal_set_visualizeAlignmentAnchor)) bool visualizeAlignmentAnchor;

  static inline ::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions* New_ctor();

  constexpr bool const& __cordl_internal_get_enableVerboseLogging() const;

  constexpr bool& __cordl_internal_get_enableVerboseLogging();

  constexpr bool const& __cordl_internal_get_visualizeAlignmentAnchor() const;

  constexpr bool& __cordl_internal_get_visualizeAlignmentAnchor();

  constexpr void __cordl_internal_set_enableVerboseLogging(bool value);

  constexpr void __cordl_internal_set_visualizeAlignmentAnchor(bool value);

  /// @brief Method .ctor, addr 0x585b198, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColocationDebuggingOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColocationDebuggingOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColocationDebuggingOptions(ColocationDebuggingOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColocationDebuggingOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColocationDebuggingOptions(ColocationDebuggingOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20309 };

  /// @brief Field visualizeAlignmentAnchor, offset: 0x10, size: 0x1, def value: None
  bool ___visualizeAlignmentAnchor;

  /// @brief Field enableVerboseLogging, offset: 0x11, size: 0x1, def value: None
  bool ___enableVerboseLogging;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions, ___visualizeAlignmentAnchor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions, ___enableVerboseLogging) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::ColocationDebuggingOptions*, "Meta.XR.MultiplayerBlocks.Shared", "ColocationDebuggingOptions");
