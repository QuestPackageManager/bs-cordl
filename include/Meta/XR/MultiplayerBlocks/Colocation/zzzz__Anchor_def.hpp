#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Anchor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Anchor)
namespace System {
struct Guid;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Anchor;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::Anchor);
// Dependencies System.Guid
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Anchor
struct CORDL_TYPE Anchor {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>"
  constexpr operator ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>*();

  /// @brief Method Equals, addr 0x5867748, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Meta::XR::MultiplayerBlocks::Colocation::Anchor other);

  /// @brief Method .ctor, addr 0x5866af8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(bool isAutomaticAnchor, bool isAlignmentAnchor, uint64_t ownerOculusId, uint32_t colocationGroupId, ::System::Guid automaticAnchorUuid);

  /// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>"
  constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>* i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Anchor_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Anchor();

  // Ctor Parameters [CppParam { name: "isAutomaticAnchor", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isAlignmentAnchor", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "ownerOculusId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "colocationGroupId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "automaticAnchorUuid", ty: "::System::Guid", modifiers: "", def_value: None }]
  constexpr Anchor(bool isAutomaticAnchor, bool isAlignmentAnchor, uint64_t ownerOculusId, uint32_t colocationGroupId, ::System::Guid automaticAnchorUuid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20366 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field isAutomaticAnchor, offset: 0x0, size: 0x1, def value: None
  bool isAutomaticAnchor;

  /// @brief Field isAlignmentAnchor, offset: 0x1, size: 0x1, def value: None
  bool isAlignmentAnchor;

  /// @brief Field ownerOculusId, offset: 0x8, size: 0x8, def value: None
  uint64_t ownerOculusId;

  /// @brief Field colocationGroupId, offset: 0x10, size: 0x4, def value: None
  uint32_t colocationGroupId;

  /// @brief Field automaticAnchorUuid, offset: 0x14, size: 0x10, def value: None
  ::System::Guid automaticAnchorUuid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Anchor, isAutomaticAnchor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Anchor, isAlignmentAnchor) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Anchor, ownerOculusId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Anchor, colocationGroupId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::Anchor, automaticAnchorUuid) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Colocation::Anchor, 0x28>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Colocation
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Colocation::Anchor, "Meta.XR.MultiplayerBlocks.Colocation", "Anchor");
