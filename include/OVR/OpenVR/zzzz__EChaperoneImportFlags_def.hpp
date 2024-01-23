#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EChaperoneImportFlags)
// Forward declare root types
namespace OVR::OpenVR {
struct EChaperoneImportFlags;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EChaperoneImportFlags);
// Type: OVR.OpenVR::EChaperoneImportFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8621))
// CS Name: ::OVR.OpenVR::EChaperoneImportFlags
struct CORDL_TYPE EChaperoneImportFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EChaperoneImportFlags_Unwrapped
  enum struct __EChaperoneImportFlags_Unwrapped : int32_t {
    __E_EChaperoneImport_BoundsOnly = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EChaperoneImportFlags_Unwrapped() const noexcept {
    return static_cast<__EChaperoneImportFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EChaperoneImportFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EChaperoneImportFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field EChaperoneImport_BoundsOnly value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EChaperoneImportFlags const EChaperoneImport_BoundsOnly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EChaperoneImportFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EChaperoneImportFlags, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EChaperoneImportFlags, "OVR.OpenVR", "EChaperoneImportFlags");
