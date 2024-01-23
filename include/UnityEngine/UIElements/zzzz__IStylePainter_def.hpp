#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IStylePainter)
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct __MeshGenerationContextUtils__TextParams;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStylePainter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IStylePainter);
// Type: UnityEngine.UIElements::IStylePainter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6769))
// CS Name: ::UnityEngine.UIElements::IStylePainter*
class CORDL_TYPE IStylePainter {
public:
  // Declarations
  /// @brief Method DrawText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DrawText(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle* handle, float_t pixelsPerPoint);

  /// @brief Method DrawRectangle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DrawRectangle(::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams);

  /// @brief Method DrawImmediate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DrawImmediate(::System::Action* callback, bool cullingEnabled);

  // Ctor Parameters [CppParam { name: "", ty: "IStylePainter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStylePainter(IStylePainter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStylePainter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStylePainter(IStylePainter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IStylePainter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IStylePainter*, "UnityEngine.UIElements", "IStylePainter");
