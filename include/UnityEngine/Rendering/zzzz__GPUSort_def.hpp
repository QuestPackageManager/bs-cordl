#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUSort.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUSort)
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct GPUSort_Args;
}
namespace UnityEngine::Rendering {
struct GPUSort_RenderGraphResources;
}
namespace UnityEngine::Rendering {
struct GPUSort_Stage;
}
namespace UnityEngine::Rendering {
struct GPUSort_SupportResources;
}
namespace UnityEngine::Rendering {
struct GPUSort_SystemResources;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUSort_Stage;
}
namespace UnityEngine::Rendering {
struct GPUSort;
}
namespace UnityEngine::Rendering {
struct GPUSort_Args;
}
namespace UnityEngine::Rendering {
struct GPUSort_RenderGraphResources;
}
namespace UnityEngine::Rendering {
struct GPUSort_SupportResources;
}
namespace UnityEngine::Rendering {
struct GPUSort_SystemResources;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUSort_Stage);
MARK_VAL_T(::UnityEngine::Rendering::GPUSort);
MARK_VAL_T(::UnityEngine::Rendering::GPUSort_Args);
MARK_VAL_T(::UnityEngine::Rendering::GPUSort_RenderGraphResources);
MARK_VAL_T(::UnityEngine::Rendering::GPUSort_SupportResources);
MARK_VAL_T(::UnityEngine::Rendering::GPUSort_SystemResources);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/Stage
struct CORDL_TYPE GPUSort_Stage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GPUSort_Stage_Unwrapped
  enum struct __GPUSort_Stage_Unwrapped : int32_t {
    __E_LocalBMS = static_cast<int32_t>(0x0),
    __E_LocalDisperse = static_cast<int32_t>(0x1),
    __E_BigFlip = static_cast<int32_t>(0x2),
    __E_BigDisperse = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GPUSort_Stage_Unwrapped() const noexcept {
    return static_cast<__GPUSort_Stage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUSort_Stage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GPUSort_Stage(int32_t value__) noexcept;

  /// @brief Field BigDisperse value: I32(3)
  static ::UnityEngine::Rendering::GPUSort_Stage const BigDisperse;

  /// @brief Field BigFlip value: I32(2)
  static ::UnityEngine::Rendering::GPUSort_Stage const BigFlip;

  /// @brief Field LocalBMS value: I32(0)
  static ::UnityEngine::Rendering::GPUSort_Stage const LocalBMS;

  /// @brief Field LocalDisperse value: I32(1)
  static ::UnityEngine::Rendering::GPUSort_Stage const LocalDisperse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12266 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUSort_Stage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUSort_Stage, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/SupportResources
struct CORDL_TYPE GPUSort_SupportResources {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x660d90c, size 0x38, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Load, addr 0x660d880, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUSort_SupportResources Load(::UnityEngine::Rendering::GPUSort_RenderGraphResources renderGraphResources);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUSort_SupportResources();

  // Ctor Parameters [CppParam { name: "sortBufferKeys", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "sortBufferValues", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }]
  constexpr GPUSort_SupportResources(::UnityEngine::GraphicsBuffer* sortBufferKeys, ::UnityEngine::GraphicsBuffer* sortBufferValues) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12269 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field sortBufferKeys, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* sortBufferKeys;

  /// @brief Field sortBufferValues, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* sortBufferValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUSort_SupportResources, sortBufferKeys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort_SupportResources, sortBufferValues) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUSort_SupportResources, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.GPUSort::SupportResources
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/Args
struct CORDL_TYPE GPUSort_Args {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUSort_Args();

  // Ctor Parameters [CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "maxDepth", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "inputKeys", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "inputValues", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None },
  // CppParam { name: "resources", ty: "::UnityEngine::Rendering::GPUSort_SupportResources", modifiers: "", def_value: None }, CppParam { name: "workGroupCount", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr GPUSort_Args(uint32_t count, uint32_t maxDepth, ::UnityEngine::GraphicsBuffer* inputKeys, ::UnityEngine::GraphicsBuffer* inputValues,
                         ::UnityEngine::Rendering::GPUSort_SupportResources resources, int32_t workGroupCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field count, offset: 0x0, size: 0x4, def value: None
  uint32_t count;

  /// @brief Field maxDepth, offset: 0x4, size: 0x4, def value: None
  uint32_t maxDepth;

  /// @brief Field inputKeys, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* inputKeys;

  /// @brief Field inputValues, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* inputValues;

  /// @brief Field resources, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::GPUSort_SupportResources resources;

  /// @brief Field workGroupCount, offset: 0x28, size: 0x4, def value: None
  int32_t workGroupCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUSort_Args, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort_Args, maxDepth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort_Args, inputKeys) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort_Args, inputValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort_Args, resources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort_Args, workGroupCount) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUSort_Args, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/RenderGraphResources
struct CORDL_TYPE GPUSort_RenderGraphResources {
public:
  // Declarations
  /// @brief Method Create, addr 0x660d798, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUSort_RenderGraphResources Create(int32_t count, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilder builder);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUSort_RenderGraphResources();

  // Ctor Parameters [CppParam { name: "sortBufferKeys", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }, CppParam { name: "sortBufferValues", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }]
  constexpr GPUSort_RenderGraphResources(::UnityEngine::Rendering::RenderGraphModule::BufferHandle sortBufferKeys, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle sortBufferValues) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12268 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field sortBufferKeys, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle sortBufferKeys;

  /// @brief Field sortBufferValues, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle sortBufferValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUSort_RenderGraphResources, sortBufferKeys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort_RenderGraphResources, sortBufferValues) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUSort_RenderGraphResources, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort/SystemResources
struct CORDL_TYPE GPUSort_SystemResources {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUSort_SystemResources();

  // Ctor Parameters [CppParam { name: "computeAsset", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }]
  constexpr GPUSort_SystemResources(::UnityW<::UnityEngine::ComputeShader> computeAsset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12270 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field computeAsset, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> computeAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUSort_SystemResources, computeAsset) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUSort_SystemResources, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.GPUSort::SystemResources
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUSort
struct CORDL_TYPE GPUSort {
public:
  // Declarations
  using Args = ::UnityEngine::Rendering::GPUSort_Args;

  using RenderGraphResources = ::UnityEngine::Rendering::GPUSort_RenderGraphResources;

  using Stage = ::UnityEngine::Rendering::GPUSort_Stage;

  using SupportResources = ::UnityEngine::Rendering::GPUSort_SupportResources;

  using SystemResources = ::UnityEngine::Rendering::GPUSort_SystemResources;

  /// @brief Method CopyBuffer, addr 0x660d3c8, size 0x1e8, virtual false, abstract: false, final false
  inline void CopyBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst);

  /// @brief Method Dispatch, addr 0x660d5c0, size 0x1d8, virtual false, abstract: false, final false
  inline void Dispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::GPUSort_Args args);

  /// @brief Method DispatchStage, addr 0x660d108, size 0x2c0, virtual false, abstract: false, final false
  inline void DispatchStage(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::GPUSort_Args args, uint32_t h, ::UnityEngine::Rendering::GPUSort_Stage stage);

  /// @brief Method DivRoundUp, addr 0x660d5b0, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DivRoundUp(int32_t x, int32_t y);

  /// @brief Method .ctor, addr 0x660cf50, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::GPUSort_SystemResources resources);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUSort();

  // Ctor Parameters [CppParam { name: "m_Keywords", ty: "::ArrayW<::UnityEngine::Rendering::LocalKeyword,::Array<::UnityEngine::Rendering::LocalKeyword>*>", modifiers: "", def_value: None }, CppParam
  // { name: "resources", ty: "::UnityEngine::Rendering::GPUSort_SystemResources", modifiers: "", def_value: None }]
  constexpr GPUSort(::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> m_Keywords,
                    ::UnityEngine::Rendering::GPUSort_SystemResources resources) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12271 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kWorkGroupSize offset 0xffffffff size 0x4
  static constexpr uint32_t kWorkGroupSize{ static_cast<uint32_t>(0x400u) };

  /// @brief Field m_Keywords, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::LocalKeyword, ::Array<::UnityEngine::Rendering::LocalKeyword>*> m_Keywords;

  /// @brief Field resources, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUSort_SystemResources resources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUSort, m_Keywords) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUSort, resources) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUSort, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUSort_Stage, "UnityEngine.Rendering", "GPUSort/Stage");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUSort, "UnityEngine.Rendering", "GPUSort");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUSort_Args, "UnityEngine.Rendering", "GPUSort/Args");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUSort_RenderGraphResources, "UnityEngine.Rendering", "GPUSort/RenderGraphResources");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUSort_SupportResources, "UnityEngine.Rendering", "GPUSort/SupportResources");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUSort_SystemResources, "UnityEngine.Rendering", "GPUSort/SystemResources");
