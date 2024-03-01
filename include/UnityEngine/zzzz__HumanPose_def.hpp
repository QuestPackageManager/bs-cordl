#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HumanPose)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct HumanPose;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanPose);
// Type: UnityEngine::HumanPose
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::HumanPose
struct CORDL_TYPE HumanPose {
public:
  // Declarations
  /// @brief Method Init, addr 0x2d7cf78, size 0x138, virtual false, abstract: false, final false
  inline void Init();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanPose();

  // Ctor Parameters [CppParam { name: "bodyPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bodyRotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "muscles", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }]
  constexpr HumanPose(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::ArrayW<float_t, ::Array<float_t>*> muscles) noexcept;

  /// @brief Field bodyPosition, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 bodyPosition;

  /// @brief Field bodyRotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion bodyRotation;

  /// @brief Field muscles, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> muscles;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanPose, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::HumanPose, bodyPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanPose, bodyRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanPose, muscles) == 0x20, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanPose, "UnityEngine", "HumanPose");
