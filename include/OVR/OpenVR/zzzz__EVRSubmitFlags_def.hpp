#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRSubmitFlags)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRSubmitFlags);
// Type: OVR.OpenVR::EVRSubmitFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8589))
// CS Name: ::OVR.OpenVR::EVRSubmitFlags
struct CORDL_TYPE EVRSubmitFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRSubmitFlags_Unwrapped
  enum struct __EVRSubmitFlags_Unwrapped : int32_t {
    __E_Submit_Default = static_cast<int32_t>(0x0),
    __E_Submit_LensDistortionAlreadyApplied = static_cast<int32_t>(0x1),
    __E_Submit_GlRenderBuffer = static_cast<int32_t>(0x2),
    __E_Submit_Reserved = static_cast<int32_t>(0x4),
    __E_Submit_TextureWithPose = static_cast<int32_t>(0x8),
    __E_Submit_TextureWithDepth = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRSubmitFlags_Unwrapped() const noexcept {
    return static_cast<__EVRSubmitFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRSubmitFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRSubmitFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Submit_Default value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRSubmitFlags const Submit_Default;

  /// @brief Field Submit_LensDistortionAlreadyApplied value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRSubmitFlags const Submit_LensDistortionAlreadyApplied;

  /// @brief Field Submit_GlRenderBuffer value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EVRSubmitFlags const Submit_GlRenderBuffer;

  /// @brief Field Submit_Reserved value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::EVRSubmitFlags const Submit_Reserved;

  /// @brief Field Submit_TextureWithPose value: static_cast<int32_t>(0x8)
  static ::OVR::OpenVR::EVRSubmitFlags const Submit_TextureWithPose;

  /// @brief Field Submit_TextureWithDepth value: static_cast<int32_t>(0x10)
  static ::OVR::OpenVR::EVRSubmitFlags const Submit_TextureWithDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRSubmitFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRSubmitFlags, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSubmitFlags, "OVR.OpenVR", "EVRSubmitFlags");
