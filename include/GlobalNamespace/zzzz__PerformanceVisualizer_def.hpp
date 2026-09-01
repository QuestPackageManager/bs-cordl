#pragma once
// IWYU pragma private; include "GlobalNamespace\PerformanceVisualizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PerformanceVisualizer)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceVisualizer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerformanceVisualizer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceVisualizer*, "", "PerformanceVisualizer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceVisualizer
class CORDL_TYPE PerformanceVisualizer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x58f77ec, size 0xdc, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Camera* mainCamera, bool enableFPSModule, bool enableMemoryModule);

  static inline ::GlobalNamespace::PerformanceVisualizer* New_ctor();

  /// @brief Method .ctor, addr 0x58f78c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceVisualizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceVisualizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceVisualizer(PerformanceVisualizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceVisualizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceVisualizer(PerformanceVisualizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6620 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PerformanceVisualizer) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
