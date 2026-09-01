#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapIdentifierNetSerializableHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapIdentifierNetSerializableHelper)
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializableHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*, "", "BeatmapIdentifierNetSerializableHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapIdentifierNetSerializableHelper
class CORDL_TYPE BeatmapIdentifierNetSerializableHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToBeatmapKey, addr 0x3720dd8, size 0xbc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapKey ToBeatmapKey(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable);

  /// @brief Method ToIdentifier, addr 0x3720ea0, size 0xb4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapKeyNetSerializable* ToIdentifier(::GlobalNamespace::BeatmapKey beatmapKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapIdentifierNetSerializableHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializableHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapIdentifierNetSerializableHelper(BeatmapIdentifierNetSerializableHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializableHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapIdentifierNetSerializableHelper(BeatmapIdentifierNetSerializableHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14955 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
