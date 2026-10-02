#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceStateEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialPersistenceStateEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceStateEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialPersistenceStateEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceStateEXT
struct CORDL_TYPE XrSpatialPersistenceStateEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialPersistenceStateEXT_Unwrapped
  enum struct __XrSpatialPersistenceStateEXT_Unwrapped : int32_t {
    __E_Loaded = static_cast<int32_t>(0x1),
    __E_NotFound = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialPersistenceStateEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialPersistenceStateEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialPersistenceStateEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialPersistenceStateEXT(int32_t value__) noexcept;

  /// @brief Field Loaded value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT const Loaded;

  /// @brief Field NotFound value: I32(2)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT const NotFound;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceStateEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
