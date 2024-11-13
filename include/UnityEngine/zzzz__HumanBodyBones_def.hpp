#pragma once
// IWYU pragma private; include "UnityEngine/HumanBodyBones.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HumanBodyBones)
// Forward declare root types
namespace UnityEngine {
struct HumanBodyBones;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanBodyBones);
// Type: UnityEngine::HumanBodyBones
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::HumanBodyBones
struct CORDL_TYPE HumanBodyBones {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HumanBodyBones_Unwrapped
  enum struct __HumanBodyBones_Unwrapped : int32_t {
    __E_Hips = static_cast<int32_t>(0x0),
    __E_LeftUpperLeg = static_cast<int32_t>(0x1),
    __E_RightUpperLeg = static_cast<int32_t>(0x2),
    __E_LeftLowerLeg = static_cast<int32_t>(0x3),
    __E_RightLowerLeg = static_cast<int32_t>(0x4),
    __E_LeftFoot = static_cast<int32_t>(0x5),
    __E_RightFoot = static_cast<int32_t>(0x6),
    __E_Spine = static_cast<int32_t>(0x7),
    __E_Chest = static_cast<int32_t>(0x8),
    __E_UpperChest = static_cast<int32_t>(0x36),
    __E_Neck = static_cast<int32_t>(0x9),
    __E_Head = static_cast<int32_t>(0xa),
    __E_LeftShoulder = static_cast<int32_t>(0xb),
    __E_RightShoulder = static_cast<int32_t>(0xc),
    __E_LeftUpperArm = static_cast<int32_t>(0xd),
    __E_RightUpperArm = static_cast<int32_t>(0xe),
    __E_LeftLowerArm = static_cast<int32_t>(0xf),
    __E_RightLowerArm = static_cast<int32_t>(0x10),
    __E_LeftHand = static_cast<int32_t>(0x11),
    __E_RightHand = static_cast<int32_t>(0x12),
    __E_LeftToes = static_cast<int32_t>(0x13),
    __E_RightToes = static_cast<int32_t>(0x14),
    __E_LeftEye = static_cast<int32_t>(0x15),
    __E_RightEye = static_cast<int32_t>(0x16),
    __E_Jaw = static_cast<int32_t>(0x17),
    __E_LeftThumbProximal = static_cast<int32_t>(0x18),
    __E_LeftThumbIntermediate = static_cast<int32_t>(0x19),
    __E_LeftThumbDistal = static_cast<int32_t>(0x1a),
    __E_LeftIndexProximal = static_cast<int32_t>(0x1b),
    __E_LeftIndexIntermediate = static_cast<int32_t>(0x1c),
    __E_LeftIndexDistal = static_cast<int32_t>(0x1d),
    __E_LeftMiddleProximal = static_cast<int32_t>(0x1e),
    __E_LeftMiddleIntermediate = static_cast<int32_t>(0x1f),
    __E_LeftMiddleDistal = static_cast<int32_t>(0x20),
    __E_LeftRingProximal = static_cast<int32_t>(0x21),
    __E_LeftRingIntermediate = static_cast<int32_t>(0x22),
    __E_LeftRingDistal = static_cast<int32_t>(0x23),
    __E_LeftLittleProximal = static_cast<int32_t>(0x24),
    __E_LeftLittleIntermediate = static_cast<int32_t>(0x25),
    __E_LeftLittleDistal = static_cast<int32_t>(0x26),
    __E_RightThumbProximal = static_cast<int32_t>(0x27),
    __E_RightThumbIntermediate = static_cast<int32_t>(0x28),
    __E_RightThumbDistal = static_cast<int32_t>(0x29),
    __E_RightIndexProximal = static_cast<int32_t>(0x2a),
    __E_RightIndexIntermediate = static_cast<int32_t>(0x2b),
    __E_RightIndexDistal = static_cast<int32_t>(0x2c),
    __E_RightMiddleProximal = static_cast<int32_t>(0x2d),
    __E_RightMiddleIntermediate = static_cast<int32_t>(0x2e),
    __E_RightMiddleDistal = static_cast<int32_t>(0x2f),
    __E_RightRingProximal = static_cast<int32_t>(0x30),
    __E_RightRingIntermediate = static_cast<int32_t>(0x31),
    __E_RightRingDistal = static_cast<int32_t>(0x32),
    __E_RightLittleProximal = static_cast<int32_t>(0x33),
    __E_RightLittleIntermediate = static_cast<int32_t>(0x34),
    __E_RightLittleDistal = static_cast<int32_t>(0x35),
    __E_LastBone = static_cast<int32_t>(0x37),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HumanBodyBones_Unwrapped() const noexcept {
    return static_cast<__HumanBodyBones_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanBodyBones();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HumanBodyBones(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Chest value: static_cast<int32_t>(0x8)
  static ::UnityEngine::HumanBodyBones const Chest;

  /// @brief Field Head value: static_cast<int32_t>(0xa)
  static ::UnityEngine::HumanBodyBones const Head;

  /// @brief Field Hips value: static_cast<int32_t>(0x0)
  static ::UnityEngine::HumanBodyBones const Hips;

  /// @brief Field Jaw value: static_cast<int32_t>(0x17)
  static ::UnityEngine::HumanBodyBones const Jaw;

  /// @brief Field LastBone value: static_cast<int32_t>(0x37)
  static ::UnityEngine::HumanBodyBones const LastBone;

  /// @brief Field LeftEye value: static_cast<int32_t>(0x15)
  static ::UnityEngine::HumanBodyBones const LeftEye;

  /// @brief Field LeftFoot value: static_cast<int32_t>(0x5)
  static ::UnityEngine::HumanBodyBones const LeftFoot;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x11)
  static ::UnityEngine::HumanBodyBones const LeftHand;

  /// @brief Field LeftIndexDistal value: static_cast<int32_t>(0x1d)
  static ::UnityEngine::HumanBodyBones const LeftIndexDistal;

  /// @brief Field LeftIndexIntermediate value: static_cast<int32_t>(0x1c)
  static ::UnityEngine::HumanBodyBones const LeftIndexIntermediate;

  /// @brief Field LeftIndexProximal value: static_cast<int32_t>(0x1b)
  static ::UnityEngine::HumanBodyBones const LeftIndexProximal;

  /// @brief Field LeftLittleDistal value: static_cast<int32_t>(0x26)
  static ::UnityEngine::HumanBodyBones const LeftLittleDistal;

  /// @brief Field LeftLittleIntermediate value: static_cast<int32_t>(0x25)
  static ::UnityEngine::HumanBodyBones const LeftLittleIntermediate;

  /// @brief Field LeftLittleProximal value: static_cast<int32_t>(0x24)
  static ::UnityEngine::HumanBodyBones const LeftLittleProximal;

  /// @brief Field LeftLowerArm value: static_cast<int32_t>(0xf)
  static ::UnityEngine::HumanBodyBones const LeftLowerArm;

  /// @brief Field LeftLowerLeg value: static_cast<int32_t>(0x3)
  static ::UnityEngine::HumanBodyBones const LeftLowerLeg;

  /// @brief Field LeftMiddleDistal value: static_cast<int32_t>(0x20)
  static ::UnityEngine::HumanBodyBones const LeftMiddleDistal;

  /// @brief Field LeftMiddleIntermediate value: static_cast<int32_t>(0x1f)
  static ::UnityEngine::HumanBodyBones const LeftMiddleIntermediate;

  /// @brief Field LeftMiddleProximal value: static_cast<int32_t>(0x1e)
  static ::UnityEngine::HumanBodyBones const LeftMiddleProximal;

  /// @brief Field LeftRingDistal value: static_cast<int32_t>(0x23)
  static ::UnityEngine::HumanBodyBones const LeftRingDistal;

  /// @brief Field LeftRingIntermediate value: static_cast<int32_t>(0x22)
  static ::UnityEngine::HumanBodyBones const LeftRingIntermediate;

  /// @brief Field LeftRingProximal value: static_cast<int32_t>(0x21)
  static ::UnityEngine::HumanBodyBones const LeftRingProximal;

  /// @brief Field LeftShoulder value: static_cast<int32_t>(0xb)
  static ::UnityEngine::HumanBodyBones const LeftShoulder;

  /// @brief Field LeftThumbDistal value: static_cast<int32_t>(0x1a)
  static ::UnityEngine::HumanBodyBones const LeftThumbDistal;

  /// @brief Field LeftThumbIntermediate value: static_cast<int32_t>(0x19)
  static ::UnityEngine::HumanBodyBones const LeftThumbIntermediate;

  /// @brief Field LeftThumbProximal value: static_cast<int32_t>(0x18)
  static ::UnityEngine::HumanBodyBones const LeftThumbProximal;

  /// @brief Field LeftToes value: static_cast<int32_t>(0x13)
  static ::UnityEngine::HumanBodyBones const LeftToes;

  /// @brief Field LeftUpperArm value: static_cast<int32_t>(0xd)
  static ::UnityEngine::HumanBodyBones const LeftUpperArm;

  /// @brief Field LeftUpperLeg value: static_cast<int32_t>(0x1)
  static ::UnityEngine::HumanBodyBones const LeftUpperLeg;

  /// @brief Field Neck value: static_cast<int32_t>(0x9)
  static ::UnityEngine::HumanBodyBones const Neck;

  /// @brief Field RightEye value: static_cast<int32_t>(0x16)
  static ::UnityEngine::HumanBodyBones const RightEye;

  /// @brief Field RightFoot value: static_cast<int32_t>(0x6)
  static ::UnityEngine::HumanBodyBones const RightFoot;

  /// @brief Field RightHand value: static_cast<int32_t>(0x12)
  static ::UnityEngine::HumanBodyBones const RightHand;

  /// @brief Field RightIndexDistal value: static_cast<int32_t>(0x2c)
  static ::UnityEngine::HumanBodyBones const RightIndexDistal;

  /// @brief Field RightIndexIntermediate value: static_cast<int32_t>(0x2b)
  static ::UnityEngine::HumanBodyBones const RightIndexIntermediate;

  /// @brief Field RightIndexProximal value: static_cast<int32_t>(0x2a)
  static ::UnityEngine::HumanBodyBones const RightIndexProximal;

  /// @brief Field RightLittleDistal value: static_cast<int32_t>(0x35)
  static ::UnityEngine::HumanBodyBones const RightLittleDistal;

  /// @brief Field RightLittleIntermediate value: static_cast<int32_t>(0x34)
  static ::UnityEngine::HumanBodyBones const RightLittleIntermediate;

  /// @brief Field RightLittleProximal value: static_cast<int32_t>(0x33)
  static ::UnityEngine::HumanBodyBones const RightLittleProximal;

  /// @brief Field RightLowerArm value: static_cast<int32_t>(0x10)
  static ::UnityEngine::HumanBodyBones const RightLowerArm;

  /// @brief Field RightLowerLeg value: static_cast<int32_t>(0x4)
  static ::UnityEngine::HumanBodyBones const RightLowerLeg;

  /// @brief Field RightMiddleDistal value: static_cast<int32_t>(0x2f)
  static ::UnityEngine::HumanBodyBones const RightMiddleDistal;

  /// @brief Field RightMiddleIntermediate value: static_cast<int32_t>(0x2e)
  static ::UnityEngine::HumanBodyBones const RightMiddleIntermediate;

  /// @brief Field RightMiddleProximal value: static_cast<int32_t>(0x2d)
  static ::UnityEngine::HumanBodyBones const RightMiddleProximal;

  /// @brief Field RightRingDistal value: static_cast<int32_t>(0x32)
  static ::UnityEngine::HumanBodyBones const RightRingDistal;

  /// @brief Field RightRingIntermediate value: static_cast<int32_t>(0x31)
  static ::UnityEngine::HumanBodyBones const RightRingIntermediate;

  /// @brief Field RightRingProximal value: static_cast<int32_t>(0x30)
  static ::UnityEngine::HumanBodyBones const RightRingProximal;

  /// @brief Field RightShoulder value: static_cast<int32_t>(0xc)
  static ::UnityEngine::HumanBodyBones const RightShoulder;

  /// @brief Field RightThumbDistal value: static_cast<int32_t>(0x29)
  static ::UnityEngine::HumanBodyBones const RightThumbDistal;

  /// @brief Field RightThumbIntermediate value: static_cast<int32_t>(0x28)
  static ::UnityEngine::HumanBodyBones const RightThumbIntermediate;

  /// @brief Field RightThumbProximal value: static_cast<int32_t>(0x27)
  static ::UnityEngine::HumanBodyBones const RightThumbProximal;

  /// @brief Field RightToes value: static_cast<int32_t>(0x14)
  static ::UnityEngine::HumanBodyBones const RightToes;

  /// @brief Field RightUpperArm value: static_cast<int32_t>(0xe)
  static ::UnityEngine::HumanBodyBones const RightUpperArm;

  /// @brief Field RightUpperLeg value: static_cast<int32_t>(0x2)
  static ::UnityEngine::HumanBodyBones const RightUpperLeg;

  /// @brief Field Spine value: static_cast<int32_t>(0x7)
  static ::UnityEngine::HumanBodyBones const Spine;

  /// @brief Field UpperChest value: static_cast<int32_t>(0x36)
  static ::UnityEngine::HumanBodyBones const UpperChest;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16832 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanBodyBones, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::HumanBodyBones, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanBodyBones, "UnityEngine", "HumanBodyBones");
