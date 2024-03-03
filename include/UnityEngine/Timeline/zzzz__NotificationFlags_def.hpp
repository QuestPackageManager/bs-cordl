#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NotificationFlags)
// Forward declare root types
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::NotificationFlags);
// Type: UnityEngine.Timeline::NotificationFlags
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: true
// CS Name: ::UnityEngine.Timeline::NotificationFlags
struct CORDL_TYPE NotificationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int16_t;

  /// @brief Nested struct __NotificationFlags_Unwrapped
  enum struct __NotificationFlags_Unwrapped : int16_t {
    __E_TriggerInEditMode = static_cast<int16_t>(0x1),
    __E_Retroactive = static_cast<int16_t>(0x2),
    __E_TriggerOnce = static_cast<int16_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NotificationFlags_Unwrapped() const noexcept {
    return static_cast<__NotificationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int16_t() const noexcept {
    return static_cast<int16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NotificationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr NotificationFlags(int16_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  int16_t value__;

  /// @brief Field Retroactive value: static_cast<int16_t>(0x2)
  static ::UnityEngine::Timeline::NotificationFlags const Retroactive;

  /// @brief Field TriggerInEditMode value: static_cast<int16_t>(0x1)
  static ::UnityEngine::Timeline::NotificationFlags const TriggerInEditMode;

  /// @brief Field TriggerOnce value: static_cast<int16_t>(0x4)
  static ::UnityEngine::Timeline::NotificationFlags const TriggerOnce;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::NotificationFlags, 0x2>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::NotificationFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::NotificationFlags, "UnityEngine.Timeline", "NotificationFlags");
