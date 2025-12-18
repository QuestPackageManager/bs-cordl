#pragma once
// IWYU pragma private; include "GlobalNamespace/OffsetDirectionExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OffsetDirectionExtensions)
namespace GlobalNamespace {
struct OffsetDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class OffsetDirectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OffsetDirectionExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OffsetDirectionExtensions
class CORDL_TYPE OffsetDirectionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method OppositeDirection, addr 0x3196654, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OffsetDirection OppositeDirection(::GlobalNamespace::OffsetDirection offsetDirection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OffsetDirectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OffsetDirectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OffsetDirectionExtensions(OffsetDirectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OffsetDirectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OffsetDirectionExtensions(OffsetDirectionExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21080 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OffsetDirectionExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OffsetDirectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OffsetDirectionExtensions*, "", "OffsetDirectionExtensions");
