#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RandomExtensions)
namespace System {
class Random;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomExtensions
class CORDL_TYPE RandomExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBool, addr 0x229f188, size 0x2c, virtual false, abstract: false, final false
  static inline bool GetBool(::System::Random* random);

  /// @brief Method GetRange, addr 0x229f140, size 0x48, virtual false, abstract: false, final false
  static inline float_t GetRange(::System::Random* random, float_t min, float_t max);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomExtensions(RandomExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomExtensions(RandomExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16925 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomExtensions*, "", "RandomExtensions");
