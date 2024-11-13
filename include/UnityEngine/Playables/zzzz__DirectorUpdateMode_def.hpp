#pragma once
// IWYU pragma private; include "UnityEngine/Playables/DirectorUpdateMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectorUpdateMode)
// Forward declare root types
namespace UnityEngine::Playables {
struct DirectorUpdateMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::DirectorUpdateMode);
// Type: UnityEngine.Playables::DirectorUpdateMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::UnityEngine.Playables::DirectorUpdateMode
struct CORDL_TYPE DirectorUpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DirectorUpdateMode_Unwrapped
  enum struct __DirectorUpdateMode_Unwrapped : int32_t {
    __E_DSPClock = static_cast<int32_t>(0x0),
    __E_GameTime = static_cast<int32_t>(0x1),
    __E_UnscaledGameTime = static_cast<int32_t>(0x2),
    __E_Manual = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DirectorUpdateMode_Unwrapped() const noexcept {
    return static_cast<__DirectorUpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectorUpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DirectorUpdateMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DSPClock value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Playables::DirectorUpdateMode const DSPClock;

  /// @brief Field GameTime value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Playables::DirectorUpdateMode const GameTime;

  /// @brief Field Manual value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Playables::DirectorUpdateMode const Manual;

  /// @brief Field UnscaledGameTime value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Playables::DirectorUpdateMode const UnscaledGameTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11245 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::DirectorUpdateMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::DirectorUpdateMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::DirectorUpdateMode, "UnityEngine.Playables", "DirectorUpdateMode");
