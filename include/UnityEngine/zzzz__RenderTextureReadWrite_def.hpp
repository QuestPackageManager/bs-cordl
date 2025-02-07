#pragma once
// IWYU pragma private; include "UnityEngine/RenderTextureReadWrite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTextureReadWrite)
// Forward declare root types
namespace UnityEngine {
struct RenderTextureReadWrite;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RenderTextureReadWrite);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RenderTextureReadWrite
struct CORDL_TYPE RenderTextureReadWrite {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderTextureReadWrite_Unwrapped
  enum struct __RenderTextureReadWrite_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Linear = static_cast<int32_t>(0x1),
    __E_sRGB = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderTextureReadWrite_Unwrapped() const noexcept {
    return static_cast<__RenderTextureReadWrite_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTextureReadWrite();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderTextureReadWrite(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::RenderTextureReadWrite const Default;

  /// @brief Field Linear value: I32(1)
  static ::UnityEngine::RenderTextureReadWrite const Linear;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field sRGB value: I32(2)
  static ::UnityEngine::RenderTextureReadWrite const sRGB;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RenderTextureReadWrite, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTextureReadWrite, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureReadWrite, "UnityEngine", "RenderTextureReadWrite");
