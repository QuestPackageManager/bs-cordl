#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalPhysicsMode)
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SceneManagement::LocalPhysicsMode);
// Type: UnityEngine.SceneManagement::LocalPhysicsMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10376))
// CS Name: ::UnityEngine.SceneManagement::LocalPhysicsMode
struct CORDL_TYPE LocalPhysicsMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LocalPhysicsMode_Unwrapped
  enum struct __LocalPhysicsMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Physics2D = static_cast<int32_t>(0x1),
    __E_Physics3D = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LocalPhysicsMode_Unwrapped() const noexcept {
    return static_cast<__LocalPhysicsMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LocalPhysicsMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalPhysicsMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::SceneManagement::LocalPhysicsMode const None;

  /// @brief Field Physics2D value: static_cast<int32_t>(0x1)
  static ::UnityEngine::SceneManagement::LocalPhysicsMode const Physics2D;

  /// @brief Field Physics3D value: static_cast<int32_t>(0x2)
  static ::UnityEngine::SceneManagement::LocalPhysicsMode const Physics3D;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SceneManagement::LocalPhysicsMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SceneManagement::LocalPhysicsMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::SceneManagement
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::LocalPhysicsMode, "UnityEngine.SceneManagement", "LocalPhysicsMode");
