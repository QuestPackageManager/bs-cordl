#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectBufferContext)
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct IndirectBufferContext_BufferState;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndirectBufferContext_BufferState;
}
namespace UnityEngine::Rendering {
struct IndirectBufferContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IndirectBufferContext_BufferState);
MARK_VAL_T(::UnityEngine::Rendering::IndirectBufferContext);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferContext/BufferState
struct CORDL_TYPE IndirectBufferContext_BufferState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IndirectBufferContext_BufferState_Unwrapped
  enum struct __IndirectBufferContext_BufferState_Unwrapped : int32_t {
    __E_Pending = static_cast<int32_t>(0x0),
    __E_Zeroed = static_cast<int32_t>(0x1),
    __E_NoOcclusionTest = static_cast<int32_t>(0x2),
    __E_AllInstancesOcclusionTested = static_cast<int32_t>(0x3),
    __E_OccludedInstancesReTested = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IndirectBufferContext_BufferState_Unwrapped() const noexcept {
    return static_cast<__IndirectBufferContext_BufferState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectBufferContext_BufferState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndirectBufferContext_BufferState(int32_t value__) noexcept;

  /// @brief Field AllInstancesOcclusionTested value: I32(3)
  static ::UnityEngine::Rendering::IndirectBufferContext_BufferState const AllInstancesOcclusionTested;

  /// @brief Field NoOcclusionTest value: I32(2)
  static ::UnityEngine::Rendering::IndirectBufferContext_BufferState const NoOcclusionTest;

  /// @brief Field OccludedInstancesReTested value: I32(4)
  static ::UnityEngine::Rendering::IndirectBufferContext_BufferState const OccludedInstancesReTested;

  /// @brief Field Pending value: I32(0)
  static ::UnityEngine::Rendering::IndirectBufferContext_BufferState const Pending;

  /// @brief Field Zeroed value: I32(1)
  static ::UnityEngine::Rendering::IndirectBufferContext_BufferState const Zeroed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17707 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext_BufferState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IndirectBufferContext_BufferState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Jobs.JobHandle, UnityEngine.Rendering.IndirectBufferContext::BufferState
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferContext
struct CORDL_TYPE IndirectBufferContext {
public:
  // Declarations
  using BufferState = ::UnityEngine::Rendering::IndirectBufferContext_BufferState;

  /// @brief Method Matches, addr 0x66778c0, size 0x30, virtual false, abstract: false, final false
  inline bool Matches(::UnityEngine::Rendering::IndirectBufferContext_BufferState bufferState, int32_t occluderVersion, int32_t subviewMask);

  /// @brief Method .ctor, addr 0x66778b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Jobs::JobHandle cullingJobHandle);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectBufferContext();

  // Ctor Parameters [CppParam { name: "cullingJobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "bufferState", ty:
  // "::UnityEngine::Rendering::IndirectBufferContext_BufferState", modifiers: "", def_value: None }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "subviewMask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndirectBufferContext(::Unity::Jobs::JobHandle cullingJobHandle, ::UnityEngine::Rendering::IndirectBufferContext_BufferState bufferState, int32_t occluderVersion,
                                  int32_t subviewMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17708 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field cullingJobHandle, offset: 0x0, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle cullingJobHandle;

  /// @brief Field bufferState, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::IndirectBufferContext_BufferState bufferState;

  /// @brief Field occluderVersion, offset: 0x14, size: 0x4, def value: None
  int32_t occluderVersion;

  /// @brief Field subviewMask, offset: 0x18, size: 0x4, def value: None
  int32_t subviewMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext, cullingJobHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext, bufferState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext, occluderVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferContext, subviewMask) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IndirectBufferContext, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndirectBufferContext_BufferState, "UnityEngine.Rendering", "IndirectBufferContext/BufferState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndirectBufferContext, "UnityEngine.Rendering", "IndirectBufferContext");
