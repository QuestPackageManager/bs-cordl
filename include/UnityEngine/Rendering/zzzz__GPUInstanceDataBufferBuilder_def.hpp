#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceComponentDesc_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceDataBufferBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct InstanceComponentGroup;
}
namespace UnityEngine::Rendering {
struct InstanceNumInfo;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
namespace UnityEngine::Rendering {
struct MetadataValue;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUInstanceDataBufferBuilder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceDataBufferBuilder);
// Dependencies Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.GPUInstanceComponentDesc
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceDataBufferBuilder
struct CORDL_TYPE GPUInstanceDataBufferBuilder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddComponent, addr 0x6669d14, size 0x12c, virtual false, abstract: false, final false
  inline void AddComponent(int32_t propertyID, bool isOverriden, int32_t byteSize, bool isPerInstance, ::UnityEngine::Rendering::InstanceType instanceType,
                           ::UnityEngine::Rendering::InstanceComponentGroup componentGroup);

  /// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void AddComponent(int32_t propertyID, bool isOverriden, bool isPerInstance, ::UnityEngine::Rendering::InstanceType instanceType,
                           ::UnityEngine::Rendering::InstanceComponentGroup componentGroup);

  /// @brief Method Build, addr 0x6669e40, size 0x88c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* Build(::ByRef<::UnityEngine::Rendering::InstanceNumInfo> instanceNumInfo);

  /// @brief Method CreateMetadataValue, addr 0x6669cf8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::MetadataValue CreateMetadataValue(int32_t nameID, int32_t gpuAddress, bool isOverridden);

  /// @brief Method Dispose, addr 0x666a6cc, size 0x74, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceDataBufferBuilder();

  // Ctor Parameters [CppParam { name: "m_Components", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceComponentDesc>", modifiers: "", def_value: None }]
  constexpr GPUInstanceDataBufferBuilder(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> m_Components) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Components, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceComponentDesc> m_Components;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceDataBufferBuilder, m_Components) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceDataBufferBuilder, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceDataBufferBuilder, "UnityEngine.Rendering", "GPUInstanceDataBufferBuilder");
