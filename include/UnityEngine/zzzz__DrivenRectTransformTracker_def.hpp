#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(DrivenRectTransformTracker)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct DrivenTransformProperties;
}
// Forward declare root types
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DrivenRectTransformTracker);
// Type: UnityEngine::DrivenRectTransformTracker
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10205))
// CS Name: ::UnityEngine::DrivenRectTransformTracker
#pragma pack(push, 0)
struct CORDL_TYPE DrivenRectTransformTracker {
public:
  // Declarations
  /// @brief Method Add addr 0x2b7cf3c size 0x4 virtual false final false
  inline void Add(::UnityEngine::Object* driver, ::UnityEngine::RectTransform* rectTransform, ::UnityEngine::DrivenTransformProperties drivenProperties);

  /// @brief Method Clear addr 0x2b7cf40 size 0x4 virtual false final false
  inline void Clear();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrivenRectTransformTracker();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DrivenRectTransformTracker, 0x1>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DrivenRectTransformTracker, "UnityEngine", "DrivenRectTransformTracker");
