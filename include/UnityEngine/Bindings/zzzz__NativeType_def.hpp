#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeType)
// Forward declare root types
namespace UnityEngine::Bindings {
struct NativeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bindings::NativeType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Bindings::NativeType, "UnityEngine.Bindings", "NativeType");
// [VisibleToOtherModules]
// Dependencies
namespace UnityEngine::Bindings {
// Is value type: true
// CS Name: UnityEngine.Bindings.NativeType
struct CORDL_TYPE NativeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NativeType_Unwrapped
  enum struct __NativeType_Unwrapped : int32_t {
    __E_ScriptingObjectPtr = static_cast<int32_t>(0x0),
    __E_Custom = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NativeType_Unwrapped() const noexcept {
    return static_cast<__NativeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr NativeType(int32_t value__) noexcept;

  /// @brief Field Custom value: I32(1)
  static ::UnityEngine::Bindings::NativeType const Custom;

  /// @brief Field ScriptingObjectPtr value: I32(0)
  static ::UnityEngine::Bindings::NativeType const ScriptingObjectPtr;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23547 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NativeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Bindings::NativeType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Bindings
