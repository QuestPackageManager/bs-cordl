#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRendererStencilRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRendererStencilRef)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct UniversalRendererStencilRef;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRendererStencilRef);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRendererStencilRef, "UnityEngine.Rendering.Universal", "UniversalRendererStencilRef");
// [Flags]
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRendererStencilRef
struct CORDL_TYPE UniversalRendererStencilRef {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UniversalRendererStencilRef_Unwrapped
  enum struct __UniversalRendererStencilRef_Unwrapped : int32_t {
    __E_CrossFadeStencilRef_0 = static_cast<int32_t>(0x4),
    __E_CrossFadeStencilRef_1 = static_cast<int32_t>(0x8),
    __E_CrossFadeStencilRef_All = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UniversalRendererStencilRef_Unwrapped() const noexcept {
    return static_cast<__UniversalRendererStencilRef_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRendererStencilRef();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRendererStencilRef(int32_t value__) noexcept;

  /// @brief Field CrossFadeStencilRef_0 value: I32(4)
  static ::UnityEngine::Rendering::Universal::UniversalRendererStencilRef const CrossFadeStencilRef_0;

  /// @brief Field CrossFadeStencilRef_1 value: I32(8)
  static ::UnityEngine::Rendering::Universal::UniversalRendererStencilRef const CrossFadeStencilRef_1;

  /// @brief Field CrossFadeStencilRef_All value: I32(12)
  static ::UnityEngine::Rendering::Universal::UniversalRendererStencilRef const CrossFadeStencilRef_All;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13275 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRendererStencilRef, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRendererStencilRef) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
