#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrQuaternionf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrQuaternionf)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrQuaternionf;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, "UnityEngine.XR.OpenXR.NativeTypes", "XrQuaternionf");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrQuaternionf
struct CORDL_TYPE XrQuaternionf {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>*();

  /// @brief Method AsQuaternion, addr 0x6e3dfe8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion AsQuaternion();

  /// @brief Method Equals, addr 0x6e3dffc, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e3dcd0, size 0xf4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf other);

  /// @brief Method FromSessionSpaceCoordinates, addr 0x6e3dc28, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf FromSessionSpaceCoordinates(::UnityEngine::Quaternion quaternion);

  /// @brief Method FromSessionSpaceCoordinates, addr 0x6e3dfe4, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf FromSessionSpaceCoordinates(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method GetHashCode, addr 0x6e3e080, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToSessionSpaceQuaternion, addr 0x6e3dc7c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ToSessionSpaceQuaternion();

  /// @brief Method .ctor, addr 0x6e3dbd4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Quaternion quaternion);

  /// @brief Method .ctor, addr 0x6e3dfd0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z, float_t w);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrQuaternionf_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrQuaternionf();

  // Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "Z", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "W", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrQuaternionf(float_t X, float_t Y, float_t Z, float_t W) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17513 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field X, offset: 0x0, size: 0x4, def value: None
  float_t X;

  /// @brief Field Y, offset: 0x4, size: 0x4, def value: None
  float_t Y;

  /// @brief Field Z, offset: 0x8, size: 0x4, def value: None
  float_t Z;

  /// @brief Field W, offset: 0xc, size: 0x4, def value: None
  float_t W;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, Y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, Z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf, W) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
