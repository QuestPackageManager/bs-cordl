#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AsyncGPUReadback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncGPUReadback)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
struct AsyncRequestNativeArrayData;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class AsyncGPUReadback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::AsyncGPUReadback);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.AsyncGPUReadback
class CORDL_TYPE AsyncGPUReadback : public ::System::Object {
public:
  // Declarations
  /// @brief Method Request, addr 0x68d4aa0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::GraphicsBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method Request, addr 0x68d4ba0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request(::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                                                          ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method Request_Internal_GraphicsBuffer_1, addr 0x68d4afc, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_1(::UnityEngine::GraphicsBuffer* buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData* data);

  /// @brief Method Request_Internal_GraphicsBuffer_1_Injected, addr 0x68d4cb8, size 0x54, virtual false, abstract: false, final false
  static inline void Request_Internal_GraphicsBuffer_1_Injected(::System::IntPtr buffer, ::UnityEngine::Rendering::AsyncRequestNativeArrayData* data,
                                                                ::ByRef<::UnityEngine::Rendering::AsyncGPUReadbackRequest> ret);

  /// @brief Method Request_Internal_GraphicsBuffer_2, addr 0x68d4bfc, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Request_Internal_GraphicsBuffer_2(::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                                                                                    ::UnityEngine::Rendering::AsyncRequestNativeArrayData* data);

  /// @brief Method Request_Internal_GraphicsBuffer_2_Injected, addr 0x68d4d0c, size 0x6c, virtual false, abstract: false, final false
  static inline void Request_Internal_GraphicsBuffer_2_Injected(::System::IntPtr src, int32_t size, int32_t offset, ::UnityEngine::Rendering::AsyncRequestNativeArrayData* data,
                                                                ::ByRef<::UnityEngine::Rendering::AsyncGPUReadbackRequest> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncGPUReadback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncGPUReadback(AsyncGPUReadback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncGPUReadback(AsyncGPUReadback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10674 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AsyncGPUReadback, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::AsyncGPUReadback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AsyncGPUReadback*, "UnityEngine.Rendering", "AsyncGPUReadback");
