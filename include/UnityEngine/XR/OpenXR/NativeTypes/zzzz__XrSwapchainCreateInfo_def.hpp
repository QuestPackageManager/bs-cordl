#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSwapchainCreateInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSwapchainCreateInfo)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSwapchainCreateInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo);
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSwapchainCreateInfo
struct CORDL_TYPE XrSwapchainCreateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSwapchainCreateInfo();

  // Ctor Parameters [CppParam { name: "Type", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Next", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "CreateFlags",
  // ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "UsageFlags", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Format", ty: "int64_t", modifiers: "",
  // def_value: None }, CppParam { name: "SampleCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Width", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "Height", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "FaceCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ArraySize", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "MipCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr XrSwapchainCreateInfo(uint32_t Type, void* Next, uint64_t CreateFlags, uint64_t UsageFlags, int64_t Format, uint32_t SampleCount, uint32_t Width, uint32_t Height, uint32_t FaceCount,
                                  uint32_t ArraySize, uint32_t MipCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18505 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  uint32_t Type;

  /// @brief Field Next, offset: 0x8, size: 0x8, def value: None
  void* Next;

  /// @brief Field CreateFlags, offset: 0x10, size: 0x8, def value: None
  uint64_t CreateFlags;

  /// @brief Field UsageFlags, offset: 0x18, size: 0x8, def value: None
  uint64_t UsageFlags;

  /// @brief Field Format, offset: 0x20, size: 0x8, def value: None
  int64_t Format;

  /// @brief Field SampleCount, offset: 0x28, size: 0x4, def value: None
  uint32_t SampleCount;

  /// @brief Field Width, offset: 0x2c, size: 0x4, def value: None
  uint32_t Width;

  /// @brief Field Height, offset: 0x30, size: 0x4, def value: None
  uint32_t Height;

  /// @brief Field FaceCount, offset: 0x34, size: 0x4, def value: None
  uint32_t FaceCount;

  /// @brief Field ArraySize, offset: 0x38, size: 0x4, def value: None
  uint32_t ArraySize;

  /// @brief Field MipCount, offset: 0x3c, size: 0x4, def value: None
  uint32_t MipCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, Next) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, CreateFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, UsageFlags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, Format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, SampleCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, Width) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, Height) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, FaceCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, ArraySize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, MipCount) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, 0x40>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrSwapchainCreateInfo, "UnityEngine.XR.OpenXR.NativeTypes", "XrSwapchainCreateInfo");
