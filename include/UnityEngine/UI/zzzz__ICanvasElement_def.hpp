#pragma once
// IWYU pragma private; include "UnityEngine/UI/ICanvasElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICanvasElement)
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
class ICanvasElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ICanvasElement);
// Type: UnityEngine.UI::ICanvasElement
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::ICanvasElement*
class CORDL_TYPE ICanvasElement {
public:
  // Declarations
  __declspec(property(get = get_transform)) ::UnityW<::UnityEngine::Transform> transform;

  /// @brief Method GraphicUpdateComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GraphicUpdateComplete();

  /// @brief Method IsDestroyed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsDestroyed();

  /// @brief Method LayoutComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LayoutComplete();

  /// @brief Method Rebuild, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method get_transform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  // Ctor Parameters [CppParam { name: "", ty: "ICanvasElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICanvasElement(ICanvasElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICanvasElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICanvasElement(ICanvasElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14997 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ICanvasElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ICanvasElement*, "UnityEngine.UI", "ICanvasElement");
