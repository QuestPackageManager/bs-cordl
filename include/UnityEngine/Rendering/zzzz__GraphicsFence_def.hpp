#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsFence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFenceType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsFence)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct SynchronisationStageFlags;
}
namespace UnityEngine::Rendering {
struct SynchronisationStage;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GraphicsFence;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GraphicsFence);
// Dependencies System.IntPtr, UnityEngine.Rendering.GraphicsFenceType
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GraphicsFence
struct CORDL_TYPE GraphicsFence {
public:
  // Declarations
  /// @brief Method GetPlatformNotSupportedVersion, addr 0x68d5d18, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetPlatformNotSupportedVersion();

  /// @brief Method GetVersionNumber, addr 0x68d5d20, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetVersionNumber(::System::IntPtr fencePtr);

  /// @brief Method InitPostAllocation, addr 0x68d5c58, size 0xc0, virtual false, abstract: false, final false
  inline void InitPostAllocation();

  /// @brief Method IsFencePending, addr 0x68d5d5c, size 0x58, virtual false, abstract: false, final false
  inline bool IsFencePending();

  /// @brief Method TranslateSynchronizationStageToFlags, addr 0x68d5c48, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SynchronisationStageFlags TranslateSynchronizationStageToFlags(::UnityEngine::Rendering::SynchronisationStage s);

  /// @brief Method Validate, addr 0x68d5db4, size 0x98, virtual false, abstract: false, final false
  inline void Validate();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsFence();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_FenceType", ty: "::UnityEngine::Rendering::GraphicsFenceType", modifiers: "", def_value: None }]
  constexpr GraphicsFence(::System::IntPtr m_Ptr, int32_t m_Version, ::UnityEngine::Rendering::GraphicsFenceType m_FenceType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10733 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_FenceType, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::GraphicsFenceType m_FenceType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GraphicsFence, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GraphicsFence, m_Version) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GraphicsFence, m_FenceType) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsFence, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsFence, "UnityEngine.Rendering", "GraphicsFence");
