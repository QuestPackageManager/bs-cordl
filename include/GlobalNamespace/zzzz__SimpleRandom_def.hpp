#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleRandom.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleRandom)
namespace GlobalNamespace {
class IRandom;
}
namespace System {
class Random;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleRandom;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleRandom);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleRandom
class CORDL_TYPE SimpleRandom : public ::System::Object {
public:
  // Declarations
  /// @brief Field _random, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Convert operator to "::GlobalNamespace::IRandom"
  constexpr operator ::GlobalNamespace::IRandom*() noexcept;

  static inline ::GlobalNamespace::SimpleRandom* New_ctor();

  static inline ::GlobalNamespace::SimpleRandom* New_ctor(int32_t seed);

  /// @brief Method Sample, addr 0x31e5910, size 0x1c, virtual true, abstract: false, final true
  inline double_t Sample();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr void __cordl_internal_set__random(::System::Random* value);

  /// @brief Method .ctor, addr 0x31e5888, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x31e58a4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t seed);

  /// @brief Convert to "::GlobalNamespace::IRandom"
  constexpr ::GlobalNamespace::IRandom* i___GlobalNamespace__IRandom() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleRandom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleRandom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleRandom(SimpleRandom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleRandom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleRandom(SimpleRandom const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20486 };

  /// @brief Field _random, offset: 0x10, size: 0x8, def value: None
  ::System::Random* ____random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleRandom, ____random) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleRandom, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleRandom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleRandom*, "", "SimpleRandom");
