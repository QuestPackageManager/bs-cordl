#pragma once
// IWYU pragma private; include "Oculus/Haptics/Utils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace Oculus::Haptics {
struct Controller;
}
namespace Oculus::Haptics {
struct __Ffi__Controller;
}
// Forward declare root types
namespace Oculus::Haptics {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Haptics::Utils);
// Type: Oculus.Haptics::Utils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Haptics {
// Is value type: false
// CS Name: ::Oculus.Haptics::Utils*
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ControllerToFfiController, addr 0x2a9ed88, size 0x8c, virtual false, abstract: false, final false
  static inline ::Oculus::Haptics::__Ffi__Controller ControllerToFfiController(::Oculus::Haptics::Controller controller);

  /// @brief Method Map, addr 0x2a9f534, size 0x28, virtual false, abstract: false, final false
  static inline float_t Map(int32_t input, int32_t inMin, int32_t inMax, int32_t outMin, int32_t outMax);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Haptics::Utils, 0x10>, "Size mismatch!");

} // namespace Oculus::Haptics
NEED_NO_BOX(::Oculus::Haptics::Utils);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Haptics::Utils*, "Oculus.Haptics", "Utils");
