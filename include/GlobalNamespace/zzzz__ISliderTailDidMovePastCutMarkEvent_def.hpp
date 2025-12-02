#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderTailDidMovePastCutMarkEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISliderTailDidMovePastCutMarkEvent)
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderTailDidMovePastCutMarkEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISliderTailDidMovePastCutMarkEvent
class CORDL_TYPE ISliderTailDidMovePastCutMarkEvent {
public:
  // Declarations
  /// @brief Method HandleSliderTailDidMovePastCutMark, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleSliderTailDidMovePastCutMark(::GlobalNamespace::SliderController* sliderController);

  // Ctor Parameters [CppParam { name: "", ty: "ISliderTailDidMovePastCutMarkEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISliderTailDidMovePastCutMarkEvent(ISliderTailDidMovePastCutMarkEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*, "", "ISliderTailDidMovePastCutMarkEvent");
