#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
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
namespace UnityEngine::Profiling::Experimental {
struct DebugScreenCapture;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Profiling::Experimental::DebugScreenCapture);
// Type: UnityEngine.Profiling.Experimental::DebugScreenCapture
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Profiling::Experimental {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8730)), TypeDefinitionIndex(TypeDefinitionIndex(8851)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8730), inst: 736
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(9046)) CS Name: ::UnityEngine.Profiling.Experimental::DebugScreenCapture
struct CORDL_TYPE DebugScreenCapture {
public:
  // Declarations
  __declspec(property(put = set_rawImageDataReference))::Unity::Collections::NativeArray_1<uint8_t> rawImageDataReference;

  __declspec(property(put = set_imageFormat))::UnityEngine::TextureFormat imageFormat;

  __declspec(property(put = set_width)) int32_t width;

  __declspec(property(put = set_height)) int32_t height;

  /// @brief Method set_rawImageDataReference, addr 0x2cee284, size 0x8, virtual false, abstract: false, final false
  inline void set_rawImageDataReference(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method set_imageFormat, addr 0x2cee28c, size 0x8, virtual false, abstract: false, final false
  inline void set_imageFormat(::UnityEngine::TextureFormat value);

  /// @brief Method set_width, addr 0x2cee294, size 0x8, virtual false, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_height, addr 0x2cee29c, size 0x8, virtual false, abstract: false, final false
  inline void set_height(int32_t value);

  // Ctor Parameters [CppParam { name: "_rawImageDataReference_k__BackingField", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name:
  // "_imageFormat_k__BackingField", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "_width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_height_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugScreenCapture(::Unity::Collections::NativeArray_1<uint8_t> _rawImageDataReference_k__BackingField, ::UnityEngine::TextureFormat _imageFormat_k__BackingField,
                               int32_t _width_k__BackingField, int32_t _height_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugScreenCapture();

  /// @brief Field <rawImageDataReference>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> _rawImageDataReference_k__BackingField;

  /// @brief Field <imageFormat>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::TextureFormat _imageFormat_k__BackingField;

  /// @brief Field <width>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t _width_k__BackingField;

  /// @brief Field <height>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t _height_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Experimental::DebugScreenCapture, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Profiling::Experimental::DebugScreenCapture, _rawImageDataReference_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Profiling::Experimental::DebugScreenCapture, _imageFormat_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Profiling::Experimental::DebugScreenCapture, _width_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Profiling::Experimental::DebugScreenCapture, _height_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Profiling::Experimental
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Experimental::DebugScreenCapture, "UnityEngine.Profiling.Experimental", "DebugScreenCapture");
