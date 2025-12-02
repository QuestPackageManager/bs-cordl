#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/EditorInstanceDataArrays.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditorInstanceDataArrays)
namespace UnityEngine::Rendering {
struct CPUInstanceData;
}
namespace UnityEngine::Rendering {
struct EditorInstanceDataArrays_ReadOnly;
}
namespace UnityEngine::Rendering {
class IDataArrays;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct EditorInstanceDataArrays;
}
namespace UnityEngine::Rendering {
struct EditorInstanceDataArrays_ReadOnly;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::EditorInstanceDataArrays);
MARK_VAL_T(::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.EditorInstanceDataArrays/ReadOnly
#pragma pack(push, 0)
struct CORDL_TYPE EditorInstanceDataArrays_ReadOnly {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x660678c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::CPUInstanceData> instanceData);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EditorInstanceDataArrays_ReadOnly();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17654 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.EditorInstanceDataArrays
#pragma pack(push, 0)
struct CORDL_TYPE EditorInstanceDataArrays {
public:
  // Declarations
  using ReadOnly = ::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDataArrays"
  constexpr operator ::UnityEngine::Rendering::IDataArrays*();

  /// @brief Method Dispose, addr 0x660545c, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Grow, addr 0x6605688, size 0x4, virtual true, abstract: false, final true
  inline void Grow(int32_t newCapacity);

  /// @brief Method Initialize, addr 0x6605340, size 0x4, virtual true, abstract: false, final true
  inline void Initialize(int32_t initCapacity);

  /// @brief Method Remove, addr 0x6605fb8, size 0x4, virtual true, abstract: false, final true
  inline void Remove(int32_t index, int32_t lastIndex);

  /// @brief Method SetDefault, addr 0x6606090, size 0x4, virtual true, abstract: false, final true
  inline void SetDefault(int32_t index);

  /// @brief Convert to "::UnityEngine::Rendering::IDataArrays"
  constexpr ::UnityEngine::Rendering::IDataArrays* i___UnityEngine__Rendering__IDataArrays();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EditorInstanceDataArrays();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17655 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::EditorInstanceDataArrays, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::EditorInstanceDataArrays, "UnityEngine.Rendering", "EditorInstanceDataArrays");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::EditorInstanceDataArrays_ReadOnly, "UnityEngine.Rendering", "EditorInstanceDataArrays/ReadOnly");
