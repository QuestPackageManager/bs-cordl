#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrExtent3Df.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrExtent3Df)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrExtent3Df;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df, "UnityEngine.XR.OpenXR.NativeTypes", "XrExtent3Df");
// [IsReadOnly]
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrExtent3Df
struct CORDL_TYPE XrExtent3Df {
public:
  // Declarations
  __declspec(property(get = get_depth)) float_t depth;

  __declspec(property(get = get_height)) float_t height;

  __declspec(property(get = get_width)) float_t width;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df>*();

  /// @brief Method Equals, addr 0x6e48ec8, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e48c90, size 0xbc, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df other);

  /// @brief Method GetHashCode, addr 0x6e48f4c, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6e48ebc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t width, float_t height, float_t depth);

  /// [CompilerGenerated]
  /// @brief Method get_depth, addr 0x6e48eb4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_depth();

  /// [CompilerGenerated]
  /// @brief Method get_height, addr 0x6e48eac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_height();

  /// [CompilerGenerated]
  /// @brief Method get_width, addr 0x6e48ea4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_width();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrExtent3Df_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrExtent3Df();

  // Ctor Parameters [CppParam { name: "_width_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_height_k__BackingField", ty: "float_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "_depth_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrExtent3Df(float_t _width_k__BackingField, float_t _height_k__BackingField, float_t _depth_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17598 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// [CompilerGenerated]
  /// @brief Field <width>k__BackingField, offset: 0x0, size: 0x4, def value: None
  float_t _width_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <height>k__BackingField, offset: 0x4, size: 0x4, def value: None
  float_t _height_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <depth>k__BackingField, offset: 0x8, size: 0x4, def value: None
  float_t _depth_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df, _width_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df, _height_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df, _depth_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df) == 0xc, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
