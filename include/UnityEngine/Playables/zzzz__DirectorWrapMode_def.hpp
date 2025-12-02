#pragma once
// IWYU pragma private; include "UnityEngine/Playables/DirectorWrapMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectorWrapMode)
// Forward declare root types
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::DirectorWrapMode);
// Dependencies
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.DirectorWrapMode
struct CORDL_TYPE DirectorWrapMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DirectorWrapMode_Unwrapped
  enum struct __DirectorWrapMode_Unwrapped : int32_t {
    __E_Hold = static_cast<int32_t>(0x0),
    __E_Loop = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DirectorWrapMode_Unwrapped() const noexcept {
    return static_cast<__DirectorWrapMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectorWrapMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DirectorWrapMode(int32_t value__) noexcept;

  /// @brief Field Hold value: I32(0)
  static ::UnityEngine::Playables::DirectorWrapMode const Hold;

  /// @brief Field Loop value: I32(1)
  static ::UnityEngine::Playables::DirectorWrapMode const Loop;

  /// @brief Field None value: I32(2)
  static ::UnityEngine::Playables::DirectorWrapMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10644 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::DirectorWrapMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::DirectorWrapMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::DirectorWrapMode, "UnityEngine.Playables", "DirectorWrapMode");
