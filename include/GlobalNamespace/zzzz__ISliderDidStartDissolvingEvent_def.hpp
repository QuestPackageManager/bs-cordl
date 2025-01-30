#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderDidStartDissolvingEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ISliderDidStartDissolvingEvent)
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderDidStartDissolvingEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISliderDidStartDissolvingEvent);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISliderDidStartDissolvingEvent
class CORDL_TYPE ISliderDidStartDissolvingEvent {
public:
  // Declarations
  /// @brief Method HandleSliderDidStartDissolving, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleSliderDidStartDissolving(::GlobalNamespace::SliderController* sliderController, float_t duration);

  // Ctor Parameters [CppParam { name: "", ty: "ISliderDidStartDissolvingEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISliderDidStartDissolvingEvent(ISliderDidStartDissolvingEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4157 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISliderDidStartDissolvingEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderDidStartDissolvingEvent*, "", "ISliderDidStartDissolvingEvent");
