#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IStylePropertyAnimationSystem)
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine {
class Font;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStylePropertyAnimationSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IStylePropertyAnimationSystem);
// Type: UnityEngine.UIElements::IStylePropertyAnimationSystem
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6831))
// CS Name: ::UnityEngine.UIElements::IStylePropertyAnimationSystem*
class CORDL_TYPE IStylePropertyAnimationSystem {
public:
  // Declarations
  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, float_t startValue, float_t endValue, int32_t durationMs,
                              int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, int32_t startValue, int32_t endValue, int32_t durationMs,
                              int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Length startValue,
                              ::UnityEngine::UIElements::Length endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::Color startValue,
                              ::UnityEngine::Color endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Background startValue,
                              ::UnityEngine::UIElements::Background endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::FontDefinition startValue,
                              ::UnityEngine::UIElements::FontDefinition endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::Font* startValue,
                              ::UnityEngine::Font* endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::TextShadow startValue,
                              ::UnityEngine::UIElements::TextShadow endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Scale startValue,
                              ::UnityEngine::UIElements::Scale endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::TransformOrigin startValue,
                              ::UnityEngine::UIElements::TransformOrigin endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Translate startValue,
                              ::UnityEngine::UIElements::Translate endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartTransition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool StartTransition(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId prop, ::UnityEngine::UIElements::Rotate startValue,
                              ::UnityEngine::UIElements::Rotate endValue, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CancelAllAnimations();

  /// @brief Method CancelAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* owner);

  /// @brief Method CancelAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CancelAnimation(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method UpdateAnimation addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateAnimation(::UnityEngine::UIElements::VisualElement* owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetAllAnimations addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetAllAnimations(::UnityEngine::UIElements::VisualElement* owner, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* propertyIds);

  /// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "IStylePropertyAnimationSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStylePropertyAnimationSystem(IStylePropertyAnimationSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStylePropertyAnimationSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStylePropertyAnimationSystem(IStylePropertyAnimationSystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IStylePropertyAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IStylePropertyAnimationSystem*, "UnityEngine.UIElements", "IStylePropertyAnimationSystem");
