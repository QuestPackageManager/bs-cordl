#pragma once
// IWYU pragma private; include "UnityEngine\DrivenRectTransformTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DrivenRectTransformTracker)
namespace UnityEngine {
struct DrivenTransformProperties;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DrivenRectTransformTracker);
DEFINE_IL2CPP_CLASS(::UnityEngine::DrivenRectTransformTracker, "UnityEngine", "DrivenRectTransformTracker");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.DrivenRectTransformTracker
#pragma pack(push, 0)
struct CORDL_TYPE DrivenRectTransformTracker {
public:
  // Declarations
  /// @brief Method Add, addr 0x6af4234, size 0x4, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::Object* driver, ::UnityEngine::RectTransform* rectTransform, ::UnityEngine::DrivenTransformProperties drivenProperties);

  /// @brief Method Clear, addr 0x6af4238, size 0x4, virtual false, abstract: false, final false
  inline void Clear();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrivenRectTransformTracker();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10418 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::DrivenRectTransformTracker) == 0x1, "Size mismatch!");

} // namespace UnityEngine
