#pragma once
// IWYU pragma private; include "UnityEngine/ICanvasRaycastFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICanvasRaycastFilter)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class ICanvasRaycastFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::ICanvasRaycastFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ICanvasRaycastFilter*, "UnityEngine", "ICanvasRaycastFilter");
// Dependencies
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ICanvasRaycastFilter
class CORDL_TYPE ICanvasRaycastFilter {
public:
  // Declarations
  /// @brief Method IsRaycastLocationValid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  // Ctor Parameters [CppParam { name: "", ty: "ICanvasRaycastFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICanvasRaycastFilter(ICanvasRaycastFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22062 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
