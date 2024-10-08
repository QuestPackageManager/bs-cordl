#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRNode)
// Forward declare root types
namespace UnityEngine::XR {
struct XRNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::XRNode);
// Type: UnityEngine.XR::XRNode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::UnityEngine.XR::XRNode
struct CORDL_TYPE XRNode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XRNode_Unwrapped
  enum struct __XRNode_Unwrapped : int32_t {
    __E_LeftEye = static_cast<int32_t>(0x0),
    __E_RightEye = static_cast<int32_t>(0x1),
    __E_CenterEye = static_cast<int32_t>(0x2),
    __E_Head = static_cast<int32_t>(0x3),
    __E_LeftHand = static_cast<int32_t>(0x4),
    __E_RightHand = static_cast<int32_t>(0x5),
    __E_GameController = static_cast<int32_t>(0x6),
    __E_TrackingReference = static_cast<int32_t>(0x7),
    __E_HardwareTracker = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XRNode_Unwrapped() const noexcept {
    return static_cast<__XRNode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRNode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRNode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CenterEye value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::XRNode const CenterEye;

  /// @brief Field GameController value: static_cast<int32_t>(0x6)
  static ::UnityEngine::XR::XRNode const GameController;

  /// @brief Field HardwareTracker value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::XRNode const HardwareTracker;

  /// @brief Field Head value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::XRNode const Head;

  /// @brief Field LeftEye value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::XRNode const LeftEye;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::XRNode const LeftHand;

  /// @brief Field RightEye value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::XRNode const RightEye;

  /// @brief Field RightHand value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::XRNode const RightHand;

  /// @brief Field TrackingReference value: static_cast<int32_t>(0x7)
  static ::UnityEngine::XR::XRNode const TrackingReference;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18173 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRNode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRNode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRNode, "UnityEngine.XR", "XRNode");
