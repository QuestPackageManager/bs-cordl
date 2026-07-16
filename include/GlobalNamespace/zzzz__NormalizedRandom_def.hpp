#pragma once
// IWYU pragma private; include "GlobalNamespace/NormalizedRandom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NormalizedRandom)
namespace GlobalNamespace {
class IRandom;
}
// Forward declare root types
namespace GlobalNamespace {
class NormalizedRandom;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NormalizedRandom*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NormalizedRandom*, "", "NormalizedRandom");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NormalizedRandom
class CORDL_TYPE NormalizedRandom : public ::System::Object {
public:
  // Declarations
  /// @brief Field seed, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seed, put = __cordl_internal_set_seed)) double_t seed;

  /// @brief Convert operator to "::GlobalNamespace::IRandom"
  constexpr operator ::GlobalNamespace::IRandom*() noexcept;

  static inline ::GlobalNamespace::NormalizedRandom* New_ctor(double_t seed);

  /// @brief Method Sample, addr 0x330a8bc, size 0x68, virtual true, abstract: false, final true
  inline double_t Sample();

  constexpr double_t const& __cordl_internal_get_seed() const;

  constexpr double_t& __cordl_internal_get_seed();

  constexpr void __cordl_internal_set_seed(double_t value);

  /// @brief Method .ctor, addr 0x330a8b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(double_t seed);

  /// @brief Convert to "::GlobalNamespace::IRandom"
  constexpr ::GlobalNamespace::IRandom* i___GlobalNamespace__IRandom() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizedRandom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NormalizedRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalizedRandom(NormalizedRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalizedRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalizedRandom(NormalizedRandom const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20432 };

  /// @brief Field hashMixer offset 0xffffffff size 0x4
  static constexpr int32_t hashMixer{ static_cast<int32_t>(0x27d4eb2d) };

  /// @brief Field seed, offset: 0x10, size: 0x8, def value: None
  double_t ___seed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NormalizedRandom, ___seed) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NormalizedRandom) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
