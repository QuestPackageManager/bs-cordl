#pragma once
// IWYU pragma private; include "UnityEngine/ContactFilter2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactFilter2D)
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine {
struct ContactFilter2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactFilter2D);
// Type: UnityEngine::ContactFilter2D
// SizeInfo { instance_size: 28, native_size: 44, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ContactFilter2D
struct CORDL_TYPE ContactFilter2D {
public:
  // Declarations
  /// @brief Method CheckConsistency, addr 0x4879ca8, size 0x3c, virtual false, abstract: false, final false
  inline void CheckConsistency();

  /// @brief Method CheckConsistency_Injected, addr 0x4879ce4, size 0x3c, virtual false, abstract: false, final false
  static inline void CheckConsistency_Injected(ByRef<::UnityEngine::ContactFilter2D> _unity_self);

  /// @brief Method CreateLegacyFilter, addr 0x48788f4, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::ContactFilter2D CreateLegacyFilter(int32_t layerMask, float_t minDepth, float_t maxDepth);

  /// @brief Method SetDepth, addr 0x4879d30, size 0x48, virtual false, abstract: false, final false
  inline void SetDepth(float_t minDepth, float_t maxDepth);

  /// @brief Method SetLayerMask, addr 0x4879d20, size 0x10, virtual false, abstract: false, final false
  inline void SetLayerMask(::UnityEngine::LayerMask layerMask);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactFilter2D();

  // Ctor Parameters [CppParam { name: "useTriggers", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useLayerMask", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "useDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useOutsideDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useNormalAngle", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "useOutsideNormalAngle", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "::UnityEngine::LayerMask", modifiers:
  // "", def_value: None }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "minNormalAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxNormalAngle", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ContactFilter2D(bool useTriggers, bool useLayerMask, bool useDepth, bool useOutsideDepth, bool useNormalAngle, bool useOutsideNormalAngle, ::UnityEngine::LayerMask layerMask,
                            float_t minDepth, float_t maxDepth, float_t minNormalAngle, float_t maxNormalAngle) noexcept;

  /// @brief Field useTriggers, offset: 0x0, size: 0x1, def value: None
  bool useTriggers;

  /// @brief Field useLayerMask, offset: 0x1, size: 0x1, def value: None
  bool useLayerMask;

  /// @brief Field useDepth, offset: 0x2, size: 0x1, def value: None
  bool useDepth;

  /// @brief Field useOutsideDepth, offset: 0x3, size: 0x1, def value: None
  bool useOutsideDepth;

  /// @brief Field useNormalAngle, offset: 0x4, size: 0x1, def value: None
  bool useNormalAngle;

  /// @brief Field useOutsideNormalAngle, offset: 0x5, size: 0x1, def value: None
  bool useOutsideNormalAngle;

  /// @brief Field layerMask, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LayerMask layerMask;

  /// @brief Field minDepth, offset: 0xc, size: 0x4, def value: None
  float_t minDepth;

  /// @brief Field maxDepth, offset: 0x10, size: 0x4, def value: None
  float_t maxDepth;

  /// @brief Field minNormalAngle, offset: 0x14, size: 0x4, def value: None
  float_t minNormalAngle;

  /// @brief Field maxNormalAngle, offset: 0x18, size: 0x4, def value: None
  float_t maxNormalAngle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18529 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactFilter2D, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, useTriggers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, useLayerMask) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, useDepth) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, useOutsideDepth) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, useNormalAngle) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, useOutsideNormalAngle) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, layerMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, minDepth) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, maxDepth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, minNormalAngle) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactFilter2D, maxNormalAngle) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactFilter2D, "UnityEngine", "ContactFilter2D");
