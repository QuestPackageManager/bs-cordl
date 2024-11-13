#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/Cookie.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cookie)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::Cookie);
// Type: UnityEngine.Experimental.GlobalIllumination::Cookie
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::Cookie
struct CORDL_TYPE Cookie {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cookie();

  // Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "sizes", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr Cookie(int32_t instanceID, float_t scale, ::UnityEngine::Vector2 sizes) noexcept;

  /// @brief Field instanceID, offset: 0x0, size: 0x4, def value: None
  int32_t instanceID;

  /// @brief Field scale, offset: 0x4, size: 0x4, def value: None
  float_t scale;

  /// @brief Field sizes, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 sizes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::Cookie, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::Cookie, instanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::Cookie, scale) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::Cookie, sizes) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::Cookie, "UnityEngine.Experimental.GlobalIllumination", "Cookie");
