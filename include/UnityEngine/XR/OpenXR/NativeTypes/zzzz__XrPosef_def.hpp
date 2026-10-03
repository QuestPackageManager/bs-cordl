#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrPosef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrQuaternionf_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector3f_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrPosef)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, "UnityEngine.XR.OpenXR.NativeTypes", "XrPosef");
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrQuaternionf, UnityEngine.XR.OpenXR.NativeTypes.XrVector3f
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrPosef
struct CORDL_TYPE XrPosef {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>*();

  /// @brief Method Equals, addr 0x6e3de80, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e3dc88, size 0x48, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef other);

  /// @brief Method FromSessionSpaceCoordinates, addr 0x6e3dc2c, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef FromSessionSpaceCoordinates(::UnityEngine::Pose pose);

  /// @brief Method FromSessionSpaceCoordinates, addr 0x6e3dc10, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef FromSessionSpaceCoordinates(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method GetHashCode, addr 0x6e3df14, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToSessionSpacePose, addr 0x6e3dc48, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose ToSessionSpacePose();

  /// @brief Method .ctor, addr 0x6e3dbe8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Pose pose);

  /// @brief Method .ctor, addr 0x6e3dba4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 vec3, ::UnityEngine::Quaternion quaternion);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrPosef_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrPosef();

  // Ctor Parameters [CppParam { name: "Orientation", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty:
  // "::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f", modifiers: "", def_value: None, comment: None }]
  constexpr XrPosef(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf Orientation, ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f Position) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17512 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field Orientation, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf Orientation;

  /// @brief Field Position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f Position;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, Orientation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef, Position) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef) == 0x1c, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
