#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderHeadDidMovePastCutMarkEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISliderHeadDidMovePastCutMarkEvent)
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderHeadDidMovePastCutMarkEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISliderHeadDidMovePastCutMarkEvent
class CORDL_TYPE ISliderHeadDidMovePastCutMarkEvent {
public:
  // Declarations
  /// @brief Method HandleSliderStartDidMovePastCutMark, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleSliderStartDidMovePastCutMark(::GlobalNamespace::SliderController* sliderController);

  // Ctor Parameters [CppParam { name: "", ty: "ISliderHeadDidMovePastCutMarkEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISliderHeadDidMovePastCutMarkEvent(ISliderHeadDidMovePastCutMarkEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*, "", "ISliderHeadDidMovePastCutMarkEvent");
