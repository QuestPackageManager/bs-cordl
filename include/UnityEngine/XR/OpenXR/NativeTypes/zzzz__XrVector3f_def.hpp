#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrVector3f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrVector3f)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector3f;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, "UnityEngine.XR.OpenXR.NativeTypes", "XrVector3f");
// Dependencies
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrVector3f
struct CORDL_TYPE XrVector3f {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>*();

  /// [IsReadOnly]
  /// @brief Method AsVector3, addr 0x6e3e354, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 AsVector3();

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6e3e364, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6e3ddc4, size 0xbc, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f other);

  /// @brief Method FromSessionSpaceCoordinates, addr 0x6e3dc24, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f FromSessionSpaceCoordinates(::UnityEngine::Vector3 position);

  /// @brief Method FromSessionSpaceCoordinates, addr 0x6e3e350, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f FromSessionSpaceCoordinates(float_t x, float_t y, float_t z);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6e3e3e8, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [IsReadOnly]
  /// @brief Method ToSessionSpaceVector3, addr 0x6e3dc70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ToSessionSpaceVector3();

  /// @brief Method .ctor, addr 0x6e3dbc4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x6e3e340, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y, float_t z);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrVector3f_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrVector3f();

  // Ctor Parameters [CppParam { name: "X", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Y", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "Z", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr XrVector3f(float_t X, float_t Y, float_t Z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17523 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field X, offset: 0x0, size: 0x4, def value: None
  float_t X;

  /// @brief Field Y, offset: 0x4, size: 0x4, def value: None
  float_t Y;

  /// @brief Field Z, offset: 0x8, size: 0x4, def value: None
  float_t Z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, Y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f, Z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f) == 0xc, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
