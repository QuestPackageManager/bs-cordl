#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Keyboard_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Keyboard_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Keyboard_t);
// Type: OVR.OpenVR::VREvent_Keyboard_t
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8674))
// CS Name: ::OVR.OpenVR::VREvent_Keyboard_t
struct CORDL_TYPE VREvent_Keyboard_t {
public:
  // Declarations
  __declspec(property(get = get_cNewInput))::StringW cNewInput;

  /// @brief Method get_cNewInput addr 0x27f6660 size 0xec virtual false final false
  inline ::StringW get_cNewInput();

  // Ctor Parameters [CppParam { name: "cNewInput0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "cNewInput2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput4", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "cNewInput5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "cNewInput6", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "cNewInput7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "uUserValue", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr VREvent_Keyboard_t(uint8_t cNewInput0, uint8_t cNewInput1, uint8_t cNewInput2, uint8_t cNewInput3, uint8_t cNewInput4, uint8_t cNewInput5, uint8_t cNewInput6, uint8_t cNewInput7,
                               uint64_t uUserValue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_Keyboard_t();

  /// @brief Field cNewInput0, offset: 0x0, size: 0x1, def value: None
  uint8_t cNewInput0;

  /// @brief Field cNewInput1, offset: 0x1, size: 0x1, def value: None
  uint8_t cNewInput1;

  /// @brief Field cNewInput2, offset: 0x2, size: 0x1, def value: None
  uint8_t cNewInput2;

  /// @brief Field cNewInput3, offset: 0x3, size: 0x1, def value: None
  uint8_t cNewInput3;

  /// @brief Field cNewInput4, offset: 0x4, size: 0x1, def value: None
  uint8_t cNewInput4;

  /// @brief Field cNewInput5, offset: 0x5, size: 0x1, def value: None
  uint8_t cNewInput5;

  /// @brief Field cNewInput6, offset: 0x6, size: 0x1, def value: None
  uint8_t cNewInput6;

  /// @brief Field cNewInput7, offset: 0x7, size: 0x1, def value: None
  uint8_t cNewInput7;

  /// @brief Field uUserValue, offset: 0x8, size: 0x8, def value: None
  uint64_t uUserValue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Keyboard_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Keyboard_t, "OVR.OpenVR", "VREvent_Keyboard_t");
