#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SDKConstants)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKConstants;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKConstants);
// Type: LIV.SDK.Unity::SDKConstants
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15099))
// CS Name: ::LIV.SDK.Unity::SDKConstants
#pragma pack(push, 0)
struct CORDL_TYPE SDKConstants {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKConstants();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field SDK_ID offset 0xffffffff size 0x8
  static constexpr ::ConstString SDK_ID{ u"7R9Y1V7WEROGDMRF6F3ESO2C6F858GCD" };

  /// @brief Field SDK_VERSION offset 0xffffffff size 0x8
  static constexpr ::ConstString SDK_VERSION{ u"1.5.4" };

  /// @brief Field ENGINE_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString ENGINE_NAME{ u"unity" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKConstants, 0x1>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKConstants, "LIV.SDK.Unity", "SDKConstants");
