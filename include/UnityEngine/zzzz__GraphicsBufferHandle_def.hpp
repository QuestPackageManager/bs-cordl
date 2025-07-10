#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBufferHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferHandle)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct GraphicsBufferHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GraphicsBufferHandle);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GraphicsBufferHandle
struct CORDL_TYPE GraphicsBufferHandle {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>*();

  /// @brief Method Equals, addr 0x48862cc, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4886344, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::GraphicsBufferHandle other);

  /// @brief Method GetHashCode, addr 0x48862c4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::GraphicsBufferHandle>* i___System__IEquatable_1___UnityEngine__GraphicsBufferHandle_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsBufferHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GraphicsBufferHandle(uint32_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  uint32_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GraphicsBufferHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GraphicsBufferHandle, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GraphicsBufferHandle, "UnityEngine", "GraphicsBufferHandle");
