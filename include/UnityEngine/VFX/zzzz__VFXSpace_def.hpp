#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXSpace)
// Forward declare root types
namespace UnityEngine::VFX {
struct VFXSpace;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VFXSpace);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXSpace, "UnityEngine.VFX", "VFXSpace");
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXSpace
struct CORDL_TYPE VFXSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXSpace_Unwrapped
  enum struct __VFXSpace_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_Local = static_cast<int32_t>(0x0),
    __E_World = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXSpace_Unwrapped() const noexcept {
    return static_cast<__VFXSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXSpace(int32_t value__) noexcept;

  /// @brief Field Local value: I32(0)
  static ::UnityEngine::VFX::VFXSpace const Local;

  /// @brief Field None value: I32(-1)
  static ::UnityEngine::VFX::VFXSpace const None;

  /// @brief Field World value: I32(1)
  static ::UnityEngine::VFX::VFXSpace const World;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22313 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXSpace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXSpace) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX
