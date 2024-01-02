#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__UIntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GfxUpdateBufferRange)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange);
// Type: UnityEngine.UIElements.UIR::GfxUpdateBufferRange
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15379))
// CS Name: ::UnityEngine.UIElements.UIR::GfxUpdateBufferRange
struct CORDL_TYPE GfxUpdateBufferRange {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "offsetFromWriteStart", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "source", ty: "void*", modifiers: "", def_value: None }]
  constexpr GfxUpdateBufferRange(uint32_t offsetFromWriteStart, uint32_t size, void* source) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GfxUpdateBufferRange();

  /// @brief Field offsetFromWriteStart, offset: 0x0, size: 0x4, def value: None
  uint32_t offsetFromWriteStart;

  /// @brief Field size, offset: 0x4, size: 0x4, def value: None
  uint32_t size;

  /// @brief Field source, offset: 0x8, size: 0x8, def value: None
  void* source;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, offsetFromWriteStart) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, size) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, source) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, "UnityEngine.UIElements.UIR", "GfxUpdateBufferRange");
