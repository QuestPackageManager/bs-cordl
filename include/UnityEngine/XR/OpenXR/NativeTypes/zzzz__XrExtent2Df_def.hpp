#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrExtent2Df.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrExtent2Df)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrExtent2Df;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df, "UnityEngine.XR.OpenXR.NativeTypes", "XrExtent2Df");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrExtent2Df
struct CORDL_TYPE XrExtent2Df {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>*();

  /// @brief Method Equals, addr 0x6e3da2c, size 0xe8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e3d9a8, size 0x84, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df other);

  /// @brief Method GetHashCode, addr 0x6e3db14, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6e3d9a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t width, float_t height);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrExtent2Df_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrExtent2Df();

  // Ctor Parameters [CppParam { name: "Width", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Height", ty: "float_t", modifiers: "", def_value: None, comment: None
  // }]
  constexpr XrExtent2Df(float_t Width, float_t Height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17510 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Width, offset: 0x0, size: 0x4, def value: None
  float_t Width;

  /// @brief Field Height, offset: 0x4, size: 0x4, def value: None
  float_t Height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df, Width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df, Height) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrExtent2Df) == 0x8, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
