#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeIsolationScope.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(VolumeIsolationScope)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VolumeIsolationScope;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VolumeIsolationScope);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.VolumeIsolationScope
#pragma pack(push, 0)
struct CORDL_TYPE VolumeIsolationScope {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method System.IDisposable.Dispose, addr 0x6615534, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method .ctor, addr 0x6615530, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(bool unused);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeIsolationScope();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12304 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeIsolationScope, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeIsolationScope, "UnityEngine.Rendering", "VolumeIsolationScope");
