#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EIOBufferMode)
// Forward declare root types
namespace OVR::OpenVR {
struct EIOBufferMode;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EIOBufferMode);
// Type: OVR.OpenVR::EIOBufferMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8641))
// CS Name: ::OVR.OpenVR::EIOBufferMode
struct CORDL_TYPE EIOBufferMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EIOBufferMode_Unwrapped
  enum struct __EIOBufferMode_Unwrapped : int32_t {
    __E_Read = static_cast<int32_t>(0x1),
    __E_Write = static_cast<int32_t>(0x2),
    __E_Create = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EIOBufferMode_Unwrapped() const noexcept {
    return static_cast<__EIOBufferMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EIOBufferMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EIOBufferMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Read value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EIOBufferMode const Read;

  /// @brief Field Write value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EIOBufferMode const Write;

  /// @brief Field Create value: static_cast<int32_t>(0x200)
  static ::OVR::OpenVR::EIOBufferMode const Create;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EIOBufferMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EIOBufferMode, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EIOBufferMode, "OVR.OpenVR", "EIOBufferMode");
