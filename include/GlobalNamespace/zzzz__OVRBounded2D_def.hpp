#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBounded2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBounded2D)
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_Rectf;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRBounded2D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBounded2D);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRBounded2D
struct CORDL_TYPE OVRBounded2D {
public:
  // Declarations
  __declspec(property(get = get_BoundingBox)) ::UnityEngine::Rect BoundingBox;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRBounded2D__get_Handle)) uint64_t IOVRAnchorComponent_OVRBounded2D__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRBounded2D__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRBounded2D__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRBounded2D Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>*();

  /// @brief Method ConvertRect, addr 0x5bfe22c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect ConvertRect(::GlobalNamespace::OVRPlugin_Rectf openXrRect);

  /// @brief Method Equals, addr 0x5bfdf44, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5bfddf4, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRBounded2D other);

  /// @brief Method GetHashCode, addr 0x5bfdfd4, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRBounded2D>.FromAnchor, addr 0x5bfdbc8, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRBounded2D IOVRAnchorComponent_OVRBounded2D__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRBounded2D>.SetEnabledAsync, addr 0x5bfdda8, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRBounded2D__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method IOVRAnchorComponent<OVRBounded2D>.get_Handle, addr 0x5bfdb70, size 0x58, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRBounded2D__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRBounded2D>.get_Type, addr 0x5bfdb14, size 0x54, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRBounded2D__get_Type();

  /// @brief Method ToString, addr 0x5bfe040, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetBoundaryPoints, addr 0x5bfe2dc, size 0x184, virtual false, abstract: false, final false
  inline bool TryGetBoundaryPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> positions);

  /// @brief Method TryGetBoundaryPointsCount, addr 0x5bfe244, size 0x98, virtual false, abstract: false, final false
  inline bool TryGetBoundaryPointsCount(::ByRef<int32_t> count);

  /// @brief Method .ctor, addr 0x5bfdbf8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRBounded2D getStaticF_Null();

  /// @brief Method get_BoundingBox, addr 0x5bfe108, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_BoundingBox();

  /// @brief Method get_Handle, addr 0x5bfe100, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x5bfdcc0, size 0xe8, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x5bfdc60, size 0x60, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x5bfdb68, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded2D>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRBounded2D_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRBounded2D>* i___System__IEquatable_1___GlobalNamespace__OVRBounded2D_();

  /// @brief Method op_Equality, addr 0x5bfde60, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRBounded2D lhs, ::GlobalNamespace::OVRBounded2D rhs);

  /// @brief Method op_Inequality, addr 0x5bfded0, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRBounded2D lhs, ::GlobalNamespace::OVRBounded2D rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRBounded2D value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBounded2D();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRBounded2D(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7086 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRBounded2D, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBounded2D, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBounded2D, "", "OVRBounded2D");
