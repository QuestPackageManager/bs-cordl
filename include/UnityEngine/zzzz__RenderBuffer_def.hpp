#pragma once
// IWYU pragma private; include "UnityEngine/RenderBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderBuffer)
// Forward declare root types
namespace UnityEngine {
struct RenderBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderBuffer);
// Type: UnityEngine::RenderBuffer
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::RenderBuffer
struct CORDL_TYPE RenderBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderBuffer();

  // Ctor Parameters [CppParam { name: "m_RenderTextureInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BufferPtr", ty: "void*", modifiers: "", def_value: None }]
  constexpr RenderBuffer(int32_t m_RenderTextureInstanceID, void* m_BufferPtr) noexcept;

  /// @brief Field m_RenderTextureInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t m_RenderTextureInstanceID;

  /// @brief Field m_BufferPtr, offset: 0x8, size: 0x8, def value: None
  void* m_BufferPtr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderBuffer, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RenderBuffer, m_RenderTextureInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RenderBuffer, m_BufferPtr) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderBuffer, "UnityEngine", "RenderBuffer");
