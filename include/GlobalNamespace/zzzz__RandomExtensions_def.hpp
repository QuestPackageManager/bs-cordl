#pragma once
// IWYU pragma private; include "GlobalNamespace\RandomExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomExtensions)
namespace GlobalNamespace {
class IRandom;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RandomExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomExtensions*, "", "RandomExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RandomExtensions
class CORDL_TYPE RandomExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetBool, addr 0x330c574, size 0x1c, virtual false, abstract: false, final false
  static inline bool GetBool(::GlobalNamespace::IRandom* random);

  /// @brief Method GetRange, addr 0x330c49c, size 0x38, virtual false, abstract: false, final false
  static inline float_t GetRange(::GlobalNamespace::IRandom* random, float_t min, float_t max);

  /// @brief Method Next, addr 0x330c590, size 0x108, virtual false, abstract: false, final false
  static inline int32_t Next(::GlobalNamespace::IRandom* random, int32_t maxValue);

  /// @brief Method NextDouble, addr 0x330c4d4, size 0xa0, virtual false, abstract: false, final false
  static inline double_t NextDouble(::GlobalNamespace::IRandom* random);

  /// @brief Method NextFloat, addr 0x330c698, size 0xa8, virtual false, abstract: false, final false
  static inline float_t NextFloat(::GlobalNamespace::IRandom* random);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RandomExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
