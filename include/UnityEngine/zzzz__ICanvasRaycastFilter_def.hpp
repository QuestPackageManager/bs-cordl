#pragma once
// IWYU pragma private; include "UnityEngine/ICanvasRaycastFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::ICanvasRaycastFilter);
// Type: UnityEngine::ICanvasRaycastFilter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ICanvasRaycastFilter*
class CORDL_TYPE ICanvasRaycastFilter {
public:
  // Declarations
  /// @brief Method IsRaycastLocationValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);

  // Ctor Parameters [CppParam { name: "", ty: "ICanvasRaycastFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICanvasRaycastFilter(ICanvasRaycastFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICanvasRaycastFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICanvasRaycastFilter(ICanvasRaycastFilter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18234 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ICanvasRaycastFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ICanvasRaycastFilter*, "UnityEngine", "ICanvasRaycastFilter");
