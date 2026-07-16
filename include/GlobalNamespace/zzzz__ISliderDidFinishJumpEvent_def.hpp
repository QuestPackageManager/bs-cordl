#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderDidFinishJumpEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISliderDidFinishJumpEvent)
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISliderDidFinishJumpEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISliderDidFinishJumpEvent*, "", "ISliderDidFinishJumpEvent");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISliderDidFinishJumpEvent
class CORDL_TYPE ISliderDidFinishJumpEvent {
public:
  // Declarations
  /// @brief Method HandleSliderDidFinishJump, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleSliderDidFinishJump(::GlobalNamespace::SliderController* sliderController);

  // Ctor Parameters [CppParam { name: "", ty: "ISliderDidFinishJumpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISliderDidFinishJumpEvent(ISliderDidFinishJumpEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5712 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
