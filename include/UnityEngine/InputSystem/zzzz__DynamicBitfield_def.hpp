#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicBitfield)
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct DynamicBitfield;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::DynamicBitfield);
// Type: UnityEngine.InputSystem::DynamicBitfield
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6669)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6669), inst: 407 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6321))
// CS Name: ::UnityEngine.InputSystem::DynamicBitfield
struct CORDL_TYPE DynamicBitfield {
public:
  // Declarations
  /// @brief Method SetLength, addr 0x2ab6e18, size 0x74, virtual false, abstract: false, final false
  inline void SetLength(int32_t newLength);

  /// @brief Method SetBit, addr 0x2ac5154, size 0x98, virtual false, abstract: false, final false
  inline void SetBit(int32_t bitIndex);

  /// @brief Method TestBit, addr 0x2ac51ec, size 0x78, virtual false, abstract: false, final false
  inline bool TestBit(int32_t bitIndex);

  /// @brief Method ClearBit, addr 0x2ab6f40, size 0x98, virtual false, abstract: false, final false
  inline void ClearBit(int32_t bitIndex);

  /// @brief Method BitCountToULongCount, addr 0x2ac513c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t BitCountToULongCount(int32_t bitCount);

  // Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr DynamicBitfield(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> array, int32_t length) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicBitfield();

  /// @brief Field array, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> array;

  /// @brief Field length, offset: 0x18, size: 0x4, def value: None
  int32_t length;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DynamicBitfield, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DynamicBitfield, array) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DynamicBitfield, length) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DynamicBitfield, "UnityEngine.InputSystem", "DynamicBitfield");
