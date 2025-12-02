#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationReducedSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArticulationReducedSpace)
namespace UnityEngine {
struct ArticulationReducedSpace__x_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine {
struct ArticulationReducedSpace;
}
namespace UnityEngine {
struct ArticulationReducedSpace__x_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ArticulationReducedSpace);
MARK_VAL_T(::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ArticulationReducedSpace/<x>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE ArticulationReducedSpace__x_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationReducedSpace__x_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ArticulationReducedSpace__x_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0xc - 0x4 = 0x8, packed as 0x8
  uint8_t _cordl_size_padding[0x8];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer, 0xc>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ArticulationReducedSpace::<x>e__FixedBuffer
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ArticulationReducedSpace
struct CORDL_TYPE ArticulationReducedSpace {
public:
  // Declarations
  using _x_e__FixedBuffer = ::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief Method .ctor, addr 0x693e1bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t a);

  /// @brief Method .ctor, addr 0x693e1cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t a, float_t b);

  /// @brief Method .ctor, addr 0x693e1dc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t a, float_t b, float_t c);

  /// @brief Method get_Item, addr 0x693e11c, size 0x50, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t i);

  /// @brief Method set_Item, addr 0x693e16c, size 0x50, virtual false, abstract: false, final false
  inline void set_Item(int32_t i, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationReducedSpace();

  // Ctor Parameters [CppParam { name: "x", ty: "::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "dofCount", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr ArticulationReducedSpace(::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer x, int32_t dofCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer x;

  /// @brief Field dofCount, offset: 0xc, size: 0x4, def value: None
  int32_t dofCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ArticulationReducedSpace, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationReducedSpace, dofCount) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationReducedSpace, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationReducedSpace, "UnityEngine", "ArticulationReducedSpace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationReducedSpace__x_e__FixedBuffer, "UnityEngine", "ArticulationReducedSpace/<x>e__FixedBuffer");
