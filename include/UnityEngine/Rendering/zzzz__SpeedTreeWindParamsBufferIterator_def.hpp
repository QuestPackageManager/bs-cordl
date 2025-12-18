#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SpeedTreeWindParamsBufferIterator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpeedTreeWindParamsBufferIterator)
namespace UnityEngine::Rendering {
struct SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SpeedTreeWindParamsBufferIterator;
}
namespace UnityEngine::Rendering {
struct SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator);
MARK_VAL_T(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SpeedTreeWindParamsBufferIterator/<uintParamOffsets>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22430 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x40 - 0x4 = 0x3c, packed as 0x3c
  uint8_t _cordl_size_padding[0x3c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, UnityEngine.Rendering.SpeedTreeWindParamsBufferIterator::<uintParamOffsets>e__FixedBuffer
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SpeedTreeWindParamsBufferIterator
struct CORDL_TYPE SpeedTreeWindParamsBufferIterator {
public:
  // Declarations
  using _uintParamOffsets_e__FixedBuffer = ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpeedTreeWindParamsBufferIterator();

  // Ctor Parameters [CppParam { name: "bufferPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "uintParamOffsets", ty:
  // "::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "uintStride", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "elementOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementsCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SpeedTreeWindParamsBufferIterator(::System::IntPtr bufferPtr, ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer uintParamOffsets,
                                              int32_t uintStride, int32_t elementOffset, int32_t elementsCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22431 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field bufferPtr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr bufferPtr;

  /// @brief Field uintParamOffsets, offset: 0x8, size: 0x40, def value: None
  ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer uintParamOffsets;

  /// @brief Field uintStride, offset: 0x48, size: 0x4, def value: None
  int32_t uintStride;

  /// @brief Field elementOffset, offset: 0x4c, size: 0x4, def value: None
  int32_t elementOffset;

  /// @brief Field elementsCount, offset: 0x50, size: 0x4, def value: None
  int32_t elementsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, bufferPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, uintParamOffsets) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, uintStride) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, elementOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, elementsCount) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator, "UnityEngine.Rendering", "SpeedTreeWindParamsBufferIterator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator__uintParamOffsets_e__FixedBuffer, "UnityEngine.Rendering",
                       "SpeedTreeWindParamsBufferIterator/<uintParamOffsets>e__FixedBuffer");
