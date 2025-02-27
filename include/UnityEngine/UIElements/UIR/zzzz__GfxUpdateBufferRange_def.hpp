#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GfxUpdateBufferRange.hpp"
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
// Dependencies System.UIntPtr
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.GfxUpdateBufferRange
struct CORDL_TYPE GfxUpdateBufferRange {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GfxUpdateBufferRange();

  // Ctor Parameters [CppParam { name: "offsetFromWriteStart", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "source", ty: "::System::UIntPtr", modifiers: "", def_value: None }]
  constexpr GfxUpdateBufferRange(uint32_t offsetFromWriteStart, uint32_t size, ::System::UIntPtr source) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6351 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field offsetFromWriteStart, offset: 0x0, size: 0x4, def value: None
  uint32_t offsetFromWriteStart;

  /// @brief Field size, offset: 0x4, size: 0x4, def value: None
  uint32_t size;

  /// @brief Field source, offset: 0x8, size: 0x8, def value: None
  ::System::UIntPtr source;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, offsetFromWriteStart) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, size) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, source) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, "UnityEngine.UIElements.UIR", "GfxUpdateBufferRange");
