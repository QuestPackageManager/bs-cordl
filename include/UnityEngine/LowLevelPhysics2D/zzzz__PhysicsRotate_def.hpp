#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsRotate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsRotate)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsRotate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsRotate);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsRotate, "UnityEngine.LowLevelPhysics2D", "PhysicsRotate");
// Dependencies UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsRotate
struct CORDL_TYPE PhysicsRotate {
public:
  // Declarations
  __declspec(property(get = get_angle)) float_t angle;

  __declspec(property(get = get_cos)) float_t cos;

  /// @brief Field downRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_downRotation, put = setStaticF_downRotation)) ::UnityEngine::LowLevelPhysics2D::PhysicsRotate downRotation;

  /// @brief Field identityRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_identityRotation, put = setStaticF_identityRotation)) ::UnityEngine::LowLevelPhysics2D::PhysicsRotate identityRotation;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field leftRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftRotation, put = setStaticF_leftRotation)) ::UnityEngine::LowLevelPhysics2D::PhysicsRotate leftRotation;

  __declspec(property(get = get_sin)) float_t sin;

  /// @brief Field upRotation, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_upRotation, put = setStaticF_upRotation)) ::UnityEngine::LowLevelPhysics2D::PhysicsRotate upRotation;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*();

  /// @brief Method OnAfterDeserialize, addr 0x6fd4a28, size 0xc0, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x6fd4968, size 0xc0, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6fd4ae8, size 0x104, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6fd47e8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fd4868, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(float_t angle);

  /// @brief Method .ctor, addr 0x6fd483c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 direction);

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsRotate getStaticF_downRotation();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsRotate getStaticF_identityRotation();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsRotate getStaticF_leftRotation();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsRotate getStaticF_upRotation();

  /// [IsReadOnly]
  /// @brief Method get_angle, addr 0x6fd48c8, size 0x44, virtual false, abstract: false, final false
  inline float_t get_angle();

  /// [IsReadOnly]
  /// @brief Method get_cos, addr 0x6fd47d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cos();

  /// @brief Method get_identity, addr 0x6fd490c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsRotate get_identity();

  /// [IsReadOnly]
  /// @brief Method get_isValid, addr 0x6fd4880, size 0x48, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// [IsReadOnly]
  /// @brief Method get_sin, addr 0x6fd47e0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sin();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver();

  static inline void setStaticF_downRotation(::UnityEngine::LowLevelPhysics2D::PhysicsRotate value);

  static inline void setStaticF_identityRotation(::UnityEngine::LowLevelPhysics2D::PhysicsRotate value);

  static inline void setStaticF_leftRotation(::UnityEngine::LowLevelPhysics2D::PhysicsRotate value);

  static inline void setStaticF_upRotation(::UnityEngine::LowLevelPhysics2D::PhysicsRotate value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsRotate();

  // Ctor Parameters [CppParam { name: "direction", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsRotate(::UnityEngine::Vector2 direction) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21522 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field direction, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 direction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRotate, direction) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsRotate) == 0x8, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
