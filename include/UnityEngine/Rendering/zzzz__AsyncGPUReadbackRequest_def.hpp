#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AsyncGPUReadbackRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncGPUReadbackRequest)
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AsyncGPUReadbackRequest);
// Dependencies System.IntPtr
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AsyncGPUReadbackRequest
struct CORDL_TYPE AsyncGPUReadbackRequest {
public:
  // Declarations
  __declspec(property(get = get_done)) bool done;

  __declspec(property(get = get_hasError)) bool hasError;

  __declspec(property(get = get_layerCount)) int32_t layerCount;

  __declspec(property(get = get_layerDataSize)) int32_t layerDataSize;

  /// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Unity::Collections::NativeArray_1<T> GetData(int32_t layer);

  /// @brief Method GetDataRaw, addr 0x693d8c0, size 0x44, virtual false, abstract: false, final false
  inline ::System::IntPtr GetDataRaw(int32_t layer);

  /// @brief Method GetLayerCount, addr 0x693d7c8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetLayerCount();

  /// @brief Method GetLayerDataSize, addr 0x693d840, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetLayerDataSize();

  /// @brief Method HasError, addr 0x693d750, size 0x3c, virtual false, abstract: false, final false
  inline bool HasError();

  /// @brief Method InvokeCallback, addr 0x693d904, size 0x20, virtual false, abstract: false, final false
  static inline void InvokeCallback(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback, ::UnityEngine::Rendering::AsyncGPUReadbackRequest obj);

  /// @brief Method IsDone, addr 0x693d6d8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsDone();

  /// @brief Method SetScriptingCallback, addr 0x693d87c, size 0x44, virtual false, abstract: false, final false
  inline void SetScriptingCallback(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method WaitForCompletion, addr 0x693d660, size 0x3c, virtual false, abstract: false, final false
  inline void WaitForCompletion();

  /// @brief Method get_done, addr 0x693d69c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_done();

  /// @brief Method get_hasError, addr 0x693d714, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasError();

  /// @brief Method get_layerCount, addr 0x693d78c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_layerCount();

  /// @brief Method get_layerDataSize, addr 0x693d804, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_layerDataSize();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncGPUReadbackRequest();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AsyncGPUReadbackRequest(::System::IntPtr m_Ptr, int32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10676 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  int32_t m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AsyncGPUReadbackRequest, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AsyncGPUReadbackRequest, m_Version) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AsyncGPUReadbackRequest, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AsyncGPUReadbackRequest, "UnityEngine.Rendering", "AsyncGPUReadbackRequest");
