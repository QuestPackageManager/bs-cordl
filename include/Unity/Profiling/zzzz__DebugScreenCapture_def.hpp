#pragma once
// IWYU pragma private; include "Unity/Profiling/DebugScreenCapture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugScreenCapture)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace Unity::Profiling {
struct DebugScreenCapture;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::DebugScreenCapture);
// Type: Unity.Profiling::DebugScreenCapture
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Profiling {
// Is value type: true
// CS Name: ::Unity.Profiling::DebugScreenCapture
struct CORDL_TYPE DebugScreenCapture {
public:
  // Declarations
  __declspec(property(put = set_Height)) int32_t Height;

  __declspec(property(put = set_ImageFormat)) ::UnityEngine::TextureFormat ImageFormat;

  __declspec(property(put = set_RawImageDataReference)) ::Unity::Collections::NativeArray_1<uint8_t> RawImageDataReference;

  __declspec(property(put = set_Width)) int32_t Width;

  /// @brief Method set_Height, addr 0x47e867c, size 0x8, virtual false, abstract: false, final false
  inline void set_Height(int32_t value);

  /// @brief Method set_ImageFormat, addr 0x47e866c, size 0x8, virtual false, abstract: false, final false
  inline void set_ImageFormat(::UnityEngine::TextureFormat value);

  /// @brief Method set_RawImageDataReference, addr 0x47e8664, size 0x8, virtual false, abstract: false, final false
  inline void set_RawImageDataReference(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method set_Width, addr 0x47e8674, size 0x8, virtual false, abstract: false, final false
  inline void set_Width(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugScreenCapture();

  // Ctor Parameters [CppParam { name: "_RawImageDataReference_k__BackingField", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name:
  // "_ImageFormat_k__BackingField", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugScreenCapture(::Unity::Collections::NativeArray_1<uint8_t> _RawImageDataReference_k__BackingField, ::UnityEngine::TextureFormat _ImageFormat_k__BackingField,
                               int32_t _Width_k__BackingField, int32_t _Height_k__BackingField) noexcept;

  /// @brief Field <RawImageDataReference>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> _RawImageDataReference_k__BackingField;

  /// @brief Field <ImageFormat>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::TextureFormat _ImageFormat_k__BackingField;

  /// @brief Field <Width>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t _Width_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t _Height_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10532 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::DebugScreenCapture, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Profiling::DebugScreenCapture, _RawImageDataReference_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Profiling::DebugScreenCapture, _ImageFormat_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Profiling::DebugScreenCapture, _Width_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Profiling::DebugScreenCapture, _Height_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::DebugScreenCapture, "Unity.Profiling", "DebugScreenCapture");
