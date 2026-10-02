#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrSpatialPolygon2DDataEXT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialBufferEXT_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrSpatialPolygon2DDataEXT)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialBufferEXT;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpatialPolygon2DDataEXT;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT, "UnityEngine.XR.OpenXR.NativeTypes", "XrSpatialPolygon2DDataEXT");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrPosef, UnityEngine.XR.OpenXR.NativeTypes.XrSpatialBufferEXT
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSpatialPolygon2DDataEXT
struct CORDL_TYPE XrSpatialPolygon2DDataEXT {
public:
  // Declarations
  __declspec(property(get = get_origin)) ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef origin;

  __declspec(property(get = get_vertexBuffer)) ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT vertexBuffer;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>*();

  /// @brief Method Equals, addr 0x6e48a88, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e48a08, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT other);

  /// @brief Method GetHashCode, addr 0x6e48b1c, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6e489e8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef origin, ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT vertexBuffer);

  /// [CompilerGenerated]
  /// @brief Method get_origin, addr 0x6e489c8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef get_origin();

  /// [CompilerGenerated]
  /// @brief Method get_vertexBuffer, addr 0x6e489dc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT get_vertexBuffer();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrSpatialPolygon2DDataEXT_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrSpatialPolygon2DDataEXT();

  // Ctor Parameters [CppParam { name: "_origin_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrPosef", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_vertexBuffer_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT", modifiers: "", def_value: None, comment: None }]
  constexpr XrSpatialPolygon2DDataEXT(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _origin_k__BackingField,
                                      ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT _vertexBuffer_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17596 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// [CompilerGenerated]
  /// @brief Field <origin>k__BackingField, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _origin_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <vertexBuffer>k__BackingField, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialBufferEXT _vertexBuffer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT, _origin_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT, _vertexBuffer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialPolygon2DDataEXT) == 0x30, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes
