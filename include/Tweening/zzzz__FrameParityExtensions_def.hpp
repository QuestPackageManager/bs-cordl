#pragma once
// IWYU pragma private; include "Tweening/FrameParityExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FrameParityExtensions)
namespace Tweening {
struct FrameParity;
}
// Forward declare root types
namespace Tweening {
class FrameParityExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::FrameParityExtensions);
// Type: Tweening::FrameParityExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tweening {
// Is value type: false
// CS Name: ::Tweening::FrameParityExtensions*
class CORDL_TYPE FrameParityExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSwitchedParity, addr 0x3060f70, size 0x18, virtual false, abstract: false, final false
  static inline ::Tweening::FrameParity GetSwitchedParity(::Tweening::FrameParity frameParity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameParityExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FrameParityExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrameParityExtensions(FrameParityExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrameParityExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrameParityExtensions(FrameParityExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::FrameParityExtensions, 0x10>, "Size mismatch!");

} // namespace Tweening
NEED_NO_BOX(::Tweening::FrameParityExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::FrameParityExtensions*, "Tweening", "FrameParityExtensions");
