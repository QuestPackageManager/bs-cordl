#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphLogIndent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphLogIndent)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphLogIndent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphLogIndent
struct CORDL_TYPE RenderGraphLogIndent {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x662935c, size 0x34, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6629390, size 0x38, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method .ctor, addr 0x66292c4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger, int32_t indentation);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphLogIndent();

  // Ctor Parameters [CppParam { name: "m_Indentation", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Logger", ty:
  // "::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*", modifiers: "", def_value: None }, CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderGraphLogIndent(int32_t m_Indentation, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger, bool m_Disposed) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12396 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Indentation, offset: 0x0, size: 0x4, def value: None
  int32_t m_Indentation;

  /// @brief Field m_Logger, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger;

  /// @brief Field m_Disposed, offset: 0x10, size: 0x1, def value: None
  bool m_Disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent, m_Indentation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent, m_Logger) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent, m_Disposed) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogIndent, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphLogIndent");
