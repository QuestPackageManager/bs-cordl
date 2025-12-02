#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/BuddyAllocation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuddyAllocation)
namespace Unity::Mathematics {
struct uint2;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct BuddyAllocation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::BuddyAllocation);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.BuddyAllocation
struct CORDL_TYPE BuddyAllocation {
public:
  // Declarations
  __declspec(property(get = get_index2D)) ::Unity::Mathematics::uint2 index2D;

  /// @brief Method .ctor, addr 0x665c234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t level, int32_t index);

  /// @brief Method get_index2D, addr 0x665c23c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::uint2 get_index2D();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BuddyAllocation();

  // Ctor Parameters [CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BuddyAllocation(int32_t level, int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field level, offset: 0x0, size: 0x4, def value: None
  int32_t level;

  /// @brief Field index, offset: 0x4, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocation, level) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::BuddyAllocation, index) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::BuddyAllocation, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::BuddyAllocation, "UnityEngine.Rendering.Universal", "BuddyAllocation");
