#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IStylePropertyAnimations.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IStylePropertyAnimations)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IStylePropertyAnimations;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IStylePropertyAnimations);
// Type: UnityEngine.UIElements::IStylePropertyAnimations
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IStylePropertyAnimations*
class CORDL_TYPE IStylePropertyAnimations {
public:
  // Declarations
  __declspec(property(get = get_completedAnimationCount, put = set_completedAnimationCount)) int32_t completedAnimationCount;

  __declspec(property(get = get_runningAnimationCount, put = set_runningAnimationCount)) int32_t runningAnimationCount;

  /// @brief Method CancelAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelAllAnimations();

  /// @brief Method CancelAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CancelAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method GetAllAnimations, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetAllAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* outPropertyIds);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Color from, ::UnityEngine::Color to, int32_t durationMs, int32_t delayMs,
                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::Font* from, ::UnityEngine::Font* to, int32_t durationMs, int32_t delayMs,
                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Background from, ::UnityEngine::UIElements::Background to, int32_t durationMs,
                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundPosition from, ::UnityEngine::UIElements::BackgroundPosition to,
                    int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundRepeat from, ::UnityEngine::UIElements::BackgroundRepeat to, int32_t durationMs,
                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::BackgroundSize from, ::UnityEngine::UIElements::BackgroundSize to, int32_t durationMs,
                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::FontDefinition from, ::UnityEngine::UIElements::FontDefinition to, int32_t durationMs,
                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Length from, ::UnityEngine::UIElements::Length to, int32_t durationMs, int32_t delayMs,
                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Rotate from, ::UnityEngine::UIElements::Rotate to, int32_t durationMs, int32_t delayMs,
                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Scale from, ::UnityEngine::UIElements::Scale to, int32_t durationMs, int32_t delayMs,
                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TextShadow from, ::UnityEngine::UIElements::TextShadow to, int32_t durationMs,
                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::TransformOrigin from, ::UnityEngine::UIElements::TransformOrigin to, int32_t durationMs,
                    int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::Translate from, ::UnityEngine::UIElements::Translate to, int32_t durationMs, int32_t delayMs,
                    ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t from, float_t to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Start(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method StartEnum, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool StartEnum(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t from, int32_t to, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve);

  /// @brief Method UpdateAnimation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateAnimation(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method get_completedAnimationCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_completedAnimationCount();

  /// @brief Method get_runningAnimationCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_runningAnimationCount();

  /// @brief Method set_completedAnimationCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_completedAnimationCount(int32_t value);

  /// @brief Method set_runningAnimationCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_runningAnimationCount(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IStylePropertyAnimations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStylePropertyAnimations(IStylePropertyAnimations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStylePropertyAnimations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStylePropertyAnimations(IStylePropertyAnimations const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6106 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IStylePropertyAnimations);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IStylePropertyAnimations*, "UnityEngine.UIElements", "IStylePropertyAnimations");
