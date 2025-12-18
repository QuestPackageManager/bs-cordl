#pragma once
// IWYU pragma private; include "Tweening/FrameParity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameParity)
// Forward declare root types
namespace Tweening {
struct FrameParity;
}
// Write type traits
MARK_VAL_T(::Tweening::FrameParity);
// Dependencies
namespace Tweening {
// Is value type: true
// CS Name: Tweening.FrameParity
struct CORDL_TYPE FrameParity {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FrameParity_Unwrapped
  enum struct __FrameParity_Unwrapped : int32_t {
    __E_AllFrames = static_cast<int32_t>(0x0),
    __E_OddFrames = static_cast<int32_t>(0x1),
    __E_EvenFrames = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FrameParity_Unwrapped() const noexcept {
    return static_cast<__FrameParity_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameParity();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FrameParity(int32_t value__) noexcept;

  /// @brief Field AllFrames value: I32(0)
  static ::Tweening::FrameParity const AllFrames;

  /// @brief Field EvenFrames value: I32(2)
  static ::Tweening::FrameParity const EvenFrames;

  /// @brief Field OddFrames value: I32(1)
  static ::Tweening::FrameParity const OddFrames;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Tweening::FrameParity, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Tweening::FrameParity, 0x4>, "Size mismatch!");

} // namespace Tweening
DEFINE_IL2CPP_ARG_TYPE(::Tweening::FrameParity, "Tweening", "FrameParity");
