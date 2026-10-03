#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPersistenceContextResultEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialPersistenceContextResultEXT)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPersistenceContextResultEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialPersistenceContextResultEXT");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPersistenceContextResultEXT
struct CORDL_TYPE XrSpatialPersistenceContextResultEXT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XrSpatialPersistenceContextResultEXT_Unwrapped
  enum struct __XrSpatialPersistenceContextResultEXT_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_EntityNotTracking = static_cast<int32_t>(0xc4594b37),
    __E_PersistUuidNotFound = static_cast<int32_t>(0xc4594b36),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XrSpatialPersistenceContextResultEXT_Unwrapped() const noexcept {
    return static_cast<__XrSpatialPersistenceContextResultEXT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialPersistenceContextResultEXT();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialPersistenceContextResultEXT(int32_t value__) noexcept;

  /// @brief Field EntityNotTracking value: I32(-1000781001)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT const EntityNotTracking;

  /// @brief Field PersistUuidNotFound value: I32(-1000781002)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT const PersistUuidNotFound;

  /// @brief Field Success value: I32(0)
  static ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT const Success;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17575 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPersistenceContextResultEXT) == 0x4, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
