#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EHiddenAreaMeshType)
// Forward declare root types
namespace OVR::OpenVR {
struct EHiddenAreaMeshType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EHiddenAreaMeshType);
// Type: OVR.OpenVR::EHiddenAreaMeshType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EHiddenAreaMeshType
struct CORDL_TYPE EHiddenAreaMeshType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EHiddenAreaMeshType_Unwrapped
  enum struct __EHiddenAreaMeshType_Unwrapped : int32_t {
    __E_k_eHiddenAreaMesh_Standard = static_cast<int32_t>(0x0),
    __E_k_eHiddenAreaMesh_Inverse = static_cast<int32_t>(0x1),
    __E_k_eHiddenAreaMesh_LineLoop = static_cast<int32_t>(0x2),
    __E_k_eHiddenAreaMesh_Max = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EHiddenAreaMeshType_Unwrapped() const noexcept {
    return static_cast<__EHiddenAreaMeshType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EHiddenAreaMeshType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EHiddenAreaMeshType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field k_eHiddenAreaMesh_Inverse value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EHiddenAreaMeshType const k_eHiddenAreaMesh_Inverse;

  /// @brief Field k_eHiddenAreaMesh_LineLoop value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EHiddenAreaMeshType const k_eHiddenAreaMesh_LineLoop;

  /// @brief Field k_eHiddenAreaMesh_Max value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::EHiddenAreaMeshType const k_eHiddenAreaMesh_Max;

  /// @brief Field k_eHiddenAreaMesh_Standard value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EHiddenAreaMeshType const k_eHiddenAreaMesh_Standard;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EHiddenAreaMeshType, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EHiddenAreaMeshType, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EHiddenAreaMeshType, "OVR.OpenVR", "EHiddenAreaMeshType");
