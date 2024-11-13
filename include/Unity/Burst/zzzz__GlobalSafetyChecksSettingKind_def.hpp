#pragma once
// IWYU pragma private; include "Unity/Burst/GlobalSafetyChecksSettingKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalSafetyChecksSettingKind)
// Forward declare root types
namespace Unity::Burst {
struct GlobalSafetyChecksSettingKind;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::GlobalSafetyChecksSettingKind);
// Type: Unity.Burst::GlobalSafetyChecksSettingKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: true
// CS Name: ::Unity.Burst::GlobalSafetyChecksSettingKind
struct CORDL_TYPE GlobalSafetyChecksSettingKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GlobalSafetyChecksSettingKind_Unwrapped
  enum struct __GlobalSafetyChecksSettingKind_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_On = static_cast<int32_t>(0x1),
    __E_ForceOn = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GlobalSafetyChecksSettingKind_Unwrapped() const noexcept {
    return static_cast<__GlobalSafetyChecksSettingKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalSafetyChecksSettingKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GlobalSafetyChecksSettingKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ForceOn value: static_cast<int32_t>(0x2)
  static ::Unity::Burst::GlobalSafetyChecksSettingKind const ForceOn;

  /// @brief Field Off value: static_cast<int32_t>(0x0)
  static ::Unity::Burst::GlobalSafetyChecksSettingKind const Off;

  /// @brief Field On value: static_cast<int32_t>(0x1)
  static ::Unity::Burst::GlobalSafetyChecksSettingKind const On;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::GlobalSafetyChecksSettingKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::GlobalSafetyChecksSettingKind, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::GlobalSafetyChecksSettingKind, "Unity.Burst", "GlobalSafetyChecksSettingKind");
