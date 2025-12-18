#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AsyncRequestNativeArrayData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncRequestNativeArrayData)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct AsyncRequestNativeArrayData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AsyncRequestNativeArrayData);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AsyncRequestNativeArrayData
struct CORDL_TYPE AsyncRequestNativeArrayData {
public:
  // Declarations
  /// @brief Method CreateAndCheckAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::Rendering::AsyncRequestNativeArrayData CreateAndCheckAccess(::Unity::Collections::NativeArray_1<T> array);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncRequestNativeArrayData();

  // Ctor Parameters [CppParam { name: "nativeArrayBuffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "lengthInBytes", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr AsyncRequestNativeArrayData(void* nativeArrayBuffer, int64_t lengthInBytes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10677 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field nativeArrayBuffer, offset: 0x0, size: 0x8, def value: None
  void* nativeArrayBuffer;

  /// @brief Field lengthInBytes, offset: 0x8, size: 0x8, def value: None
  int64_t lengthInBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AsyncRequestNativeArrayData, nativeArrayBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AsyncRequestNativeArrayData, lengthInBytes) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AsyncRequestNativeArrayData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AsyncRequestNativeArrayData, "UnityEngine.Rendering", "AsyncRequestNativeArrayData");
