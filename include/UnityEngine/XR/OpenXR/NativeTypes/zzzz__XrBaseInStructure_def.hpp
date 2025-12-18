#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrBaseInStructure.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrBaseInStructure)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrBaseInStructure;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrBaseInStructure);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrBaseInStructure
struct CORDL_TYPE XrBaseInStructure {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XrBaseInStructure();

  // Ctor Parameters [CppParam { name: "Type", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Next", ty: "void*", modifiers: "", def_value: None }]
  constexpr XrBaseInStructure(uint32_t Type, void* Next) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18500 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  uint32_t Type;

  /// @brief Field Next, offset: 0x8, size: 0x8, def value: None
  void* Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrBaseInStructure, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrBaseInStructure, Next) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrBaseInStructure, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrBaseInStructure, "UnityEngine.XR.OpenXR.NativeTypes", "XrBaseInStructure");
