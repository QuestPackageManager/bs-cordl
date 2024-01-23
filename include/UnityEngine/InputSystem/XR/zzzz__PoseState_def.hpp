#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoseState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::PoseState);
// Type: UnityEngine.InputSystem.XR::PoseState
// SizeInfo { instance_size: 60, native_size: 60, calculated_instance_size: 60, calculated_native_size: 76, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(15618))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6322))
// CS Name: ::UnityEngine.InputSystem.XR::PoseState
#pragma pack(push, 0)
struct CORDL_TYPE PoseState {
public:
  // Declarations
  /// @brief Field isTracked, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_isTracked, put = __cordl_internal_set_isTracked)) bool isTracked;

  /// @brief Field trackingState, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_trackingState, put = __cordl_internal_set_trackingState))::UnityEngine::XR::InputTrackingState trackingState;

  /// @brief Field position, offset 0x8, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position))::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation))::UnityEngine::Quaternion rotation;

  /// @brief Field velocity, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_velocity, put = __cordl_internal_set_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Field angularVelocity, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_angularVelocity, put = __cordl_internal_set_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  constexpr bool& __cordl_internal_get_isTracked();

  constexpr bool const& __cordl_internal_get_isTracked() const;

  constexpr void __cordl_internal_set_isTracked(bool value);

  constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_trackingState();

  constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_trackingState() const;

  constexpr void __cordl_internal_set_trackingState(::UnityEngine::XR::InputTrackingState value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_position();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

  constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

  constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_angularVelocity();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_angularVelocity() const;

  constexpr void __cordl_internal_set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method get_format, addr 0x2ac5264, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method .ctor, addr 0x2ac5294, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool isTracked, ::UnityEngine::XR::InputTrackingState trackingState, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity,
                    ::UnityEngine::Vector3 angularVelocity);

  // Ctor Parameters [CppParam { name: "isTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "trackingState", ty: "::UnityEngine::XR::InputTrackingState", modifiers: "",
  // def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "angularVelocity", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }]
  constexpr PoseState(bool isTracked, ::UnityEngine::XR::InputTrackingState trackingState, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity,
                      ::UnityEngine::Vector3 angularVelocity) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseState();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___isTracked_padding[0x0];
      /// @brief Field isTracked, offset: 0x0, size: 0x1, def value: None
      bool ___isTracked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___isTracked_padding_forAlignment[0x0];
      /// @brief Field isTracked, offset: 0x0, size: 0x1, def value: None
      bool ___isTracked_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___trackingState_padding[0x4];
      /// @brief Field trackingState, offset: 0x4, size: 0x4, def value: None
      ::UnityEngine::XR::InputTrackingState ___trackingState;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___trackingState_padding_forAlignment[0x4];
      /// @brief Field trackingState, offset: 0x4, size: 0x4, def value: None
      ::UnityEngine::XR::InputTrackingState ___trackingState_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___position_padding[0x8];
      /// @brief Field position, offset: 0x8, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___position;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___position_padding_forAlignment[0x8];
      /// @brief Field position, offset: 0x8, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___position_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___rotation_padding[0x14];
      /// @brief Field rotation, offset: 0x14, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___rotation;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___rotation_padding_forAlignment[0x14];
      /// @brief Field rotation, offset: 0x14, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___rotation_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x24
      uint8_t ___velocity_padding[0x24];
      /// @brief Field velocity, offset: 0x24, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___velocity;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x24 for alignment
      uint8_t ___velocity_padding_forAlignment[0x24];
      /// @brief Field velocity, offset: 0x24, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___velocity_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x30
      uint8_t ___angularVelocity_padding[0x30];
      /// @brief Field angularVelocity, offset: 0x30, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___angularVelocity;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x30 for alignment
      uint8_t ___angularVelocity_padding_forAlignment[0x30];
      /// @brief Field angularVelocity, offset: 0x30, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___angularVelocity_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

  /// @brief Field kSizeInBytes offset 0xffffffff size 0x4
  static constexpr int32_t kSizeInBytes{ static_cast<int32_t>(0x3c) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::PoseState, 0x3c>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::PoseState, "UnityEngine.InputSystem.XR", "PoseState");
