#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceScopeEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialPersistenceScopeEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceScopeEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialPersistenceScopeEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceScopeEXT
struct CORDL_TYPE XrSpatialPersistenceScopeEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialPersistenceScopeEXT_Unwrapped
  enum struct __XrSpatialPersistenceScopeEXT_Unwrapped : int32_t {
    __E_SystemManaged = static_cast<int32_t>(0x1),
    __E_LocalAnchors = static_cast<int32_t>(0x3ba6b4c8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialPersistenceScopeEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialPersistenceScopeEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialPersistenceScopeEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialPersistenceScopeEXT(int32_t value__) noexcept;

  /// @brief Field LocalAnchors value: I32(1000781000)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT const LocalAnchors;

  /// @brief Field SystemManaged value: I32(1)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT const SystemManaged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceScopeEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
