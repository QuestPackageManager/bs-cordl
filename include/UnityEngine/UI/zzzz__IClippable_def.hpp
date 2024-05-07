#pragma once
// IWYU pragma private; include "UnityEngine/UI/IClippable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IClippable)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class IClippable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IClippable);
// Type: UnityEngine.UI::IClippable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::IClippable*
class CORDL_TYPE IClippable {
public:
  // Declarations
  __declspec(property(get = get_gameObject))::UnityW<::UnityEngine::GameObject> gameObject;

  __declspec(property(get = get_rectTransform))::UnityW<::UnityEngine::RectTransform> rectTransform;

  /// @brief Method Cull, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Cull(::UnityEngine::Rect clipRect, bool validRect);

  /// @brief Method RecalculateClipping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RecalculateClipping();

  /// @brief Method SetClipRect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetClipRect(::UnityEngine::Rect value, bool validRect);

  /// @brief Method SetClipSoftness, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetClipSoftness(::UnityEngine::Vector2 clipSoftness);

  /// @brief Method get_gameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_rectTransform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform();

  // Ctor Parameters [CppParam { name: "", ty: "IClippable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IClippable(IClippable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IClippable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IClippable(IClippable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IClippable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IClippable*, "UnityEngine.UI", "IClippable");
