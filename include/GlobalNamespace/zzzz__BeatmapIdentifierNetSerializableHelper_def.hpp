#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapIdentifierNetSerializableHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapIdentifierNetSerializableHelper)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
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
MARK_REF_PTR_T(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapIdentifierNetSerializableHelper
class CORDL_TYPE BeatmapIdentifierNetSerializableHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToBeatmapKey, addr 0x26c4688, size 0x7c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapKey ToBeatmapKey(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable,
                                                           ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection);

  /// @brief Method ToIdentifier, addr 0x26c4714, size 0xbc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12938 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*, "", "BeatmapIdentifierNetSerializableHelper");
