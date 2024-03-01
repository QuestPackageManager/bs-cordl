#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISliderDidDissolveEvent)
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderDidDissolveEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISliderDidDissolveEvent);
// Type: ::ISliderDidDissolveEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ISliderDidDissolveEvent*
class CORDL_TYPE ISliderDidDissolveEvent {
public:
  // Declarations
  /// @brief Method HandleSliderDidDissolve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleSliderDidDissolve(::GlobalNamespace::SliderController* sliderController);

  // Ctor Parameters [CppParam { name: "", ty: "ISliderDidDissolveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISliderDidDissolveEvent(ISliderDidDissolveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISliderDidDissolveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISliderDidDissolveEvent(ISliderDidDissolveEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISliderDidDissolveEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderDidDissolveEvent*, "", "ISliderDidDissolveEvent");
