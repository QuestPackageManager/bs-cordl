#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationReducedSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ArticulationReducedSpace_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArticulationReducedSpace)
namespace UnityEngine {
struct __ArticulationReducedSpace___x_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine {
struct ArticulationReducedSpace;
}
namespace UnityEngine {
struct __ArticulationReducedSpace___x_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ArticulationReducedSpace);
MARK_VAL_T(::UnityEngine::__ArticulationReducedSpace___x_e__FixedBuffer);
// Type: ::<x>e__FixedBuffer
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine {
// Is value type: true
// CS Name: ::ArticulationReducedSpace::<x>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __ArticulationReducedSpace___x_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArticulationReducedSpace___x_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __ArticulationReducedSpace___x_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0xc - 0x4 = 0x8, packed as 0x8
  uint8_t _cordl_size_padding[0x8];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15696 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ArticulationReducedSpace___x_e__FixedBuffer, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ArticulationReducedSpace___x_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ArticulationReducedSpace
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ArticulationReducedSpace
struct CORDL_TYPE ArticulationReducedSpace {
public:
  // Declarations
  using _x_e__FixedBuffer = ::UnityEngine::__ArticulationReducedSpace___x_e__FixedBuffer;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief Method .ctor, addr 0x488f608, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t a);

  /// @brief Method .ctor, addr 0x488f618, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t a, float_t b);

  /// @brief Method .ctor, addr 0x488f628, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t a, float_t b, float_t c);

  /// @brief Method get_Item, addr 0x488f560, size 0x54, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t i);

  /// @brief Method set_Item, addr 0x488f5b4, size 0x54, virtual false, abstract: false, final false
  inline void set_Item(int32_t i, float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationReducedSpace();

  // Ctor Parameters [CppParam { name: "x", ty: "::UnityEngine::__ArticulationReducedSpace___x_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "dofCount", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr ArticulationReducedSpace(::UnityEngine::__ArticulationReducedSpace___x_e__FixedBuffer x, int32_t dofCount) noexcept;

  /// @brief Field x, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::__ArticulationReducedSpace___x_e__FixedBuffer x;

  /// @brief Field dofCount, offset: 0xc, size: 0x4, def value: None
  int32_t dofCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15697 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationReducedSpace, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationReducedSpace, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ArticulationReducedSpace, dofCount) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationReducedSpace, "UnityEngine", "ArticulationReducedSpace");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ArticulationReducedSpace___x_e__FixedBuffer, "UnityEngine", "ArticulationReducedSpace/<x>e__FixedBuffer");
