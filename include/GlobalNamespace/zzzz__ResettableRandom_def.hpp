#pragma once
// IWYU pragma private; include "GlobalNamespace/ResettableRandom.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ResettableRandom)
namespace GlobalNamespace {
class DeterminismConfig;
}
namespace GlobalNamespace {
class IRandom;
}
namespace System {
class Random;
}
// Forward declare root types
namespace GlobalNamespace {
class ResettableRandom;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResettableRandom);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ResettableRandom
class CORDL_TYPE ResettableRandom : public ::System::Object {
public:
  // Declarations
  /// @brief Field _determinismConfig, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__determinismConfig, put = __cordl_internal_set__determinismConfig)) ::GlobalNamespace::DeterminismConfig* _determinismConfig;

  /// @brief Field _fixedSeed, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__fixedSeed, put = __cordl_internal_set__fixedSeed)) int32_t _fixedSeed;

  /// @brief Field _random, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Convert operator to "::GlobalNamespace::IRandom"
  constexpr operator ::GlobalNamespace::IRandom*() noexcept;

  /// @brief Method Finalize, addr 0x569fb88, size 0xc4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HandleDeterminismSet, addr 0x569fb00, size 0x88, virtual false, abstract: false, final false
  inline void HandleDeterminismSet(bool isDeterministic);

  static inline ::GlobalNamespace::ResettableRandom* New_ctor(::GlobalNamespace::DeterminismConfig* determinismConfig, int32_t fixedSeed);

  /// @brief Method Sample, addr 0x569fc4c, size 0x1c, virtual true, abstract: false, final true
  inline double_t Sample();

  constexpr ::GlobalNamespace::DeterminismConfig* const& __cordl_internal_get__determinismConfig() const;

  constexpr ::GlobalNamespace::DeterminismConfig*& __cordl_internal_get__determinismConfig();

  constexpr int32_t const& __cordl_internal_get__fixedSeed() const;

  constexpr int32_t& __cordl_internal_get__fixedSeed();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr void __cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value);

  constexpr void __cordl_internal_set__fixedSeed(int32_t value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  /// @brief Method .ctor, addr 0x569fa4c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::DeterminismConfig* determinismConfig, int32_t fixedSeed);

  /// @brief Convert to "::GlobalNamespace::IRandom"
  constexpr ::GlobalNamespace::IRandom* i___GlobalNamespace__IRandom() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResettableRandom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResettableRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResettableRandom(ResettableRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResettableRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResettableRandom(ResettableRandom const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20241 };

  /// @brief Field _determinismConfig, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::DeterminismConfig* ____determinismConfig;

  /// @brief Field _fixedSeed, offset: 0x18, size: 0x4, def value: None
  int32_t ____fixedSeed;

  /// @brief Field _random, offset: 0x20, size: 0x8, def value: None
  ::System::Random* ____random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResettableRandom, ____determinismConfig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResettableRandom, ____fixedSeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResettableRandom, ____random) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResettableRandom, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResettableRandom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResettableRandom*, "", "ResettableRandom");
