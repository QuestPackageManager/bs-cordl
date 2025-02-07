#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatToTimeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBeatToTimeConverter)
// Forward declare root types
namespace GlobalNamespace {
class IBeatToTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatToTimeConverter);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatToTimeConverter
class CORDL_TYPE IBeatToTimeConverter {
public:
  // Declarations
  /// @brief Method ConvertBeatToTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t ConvertBeatToTime(float_t beat);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatToTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatToTimeConverter(IBeatToTimeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12877 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatToTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatToTimeConverter*, "", "IBeatToTimeConverter");
