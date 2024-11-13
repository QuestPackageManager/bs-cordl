#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRBounded3D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBounded3D)
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__Boundsf;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRBounded3D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBounded3D);
// Type: ::OVRBounded3D
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRBounded3D
struct CORDL_TYPE OVRBounded3D {
public:
  // Declarations
  __declspec(property(get = get_BoundingBox)) ::UnityEngine::Bounds BoundingBox;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRBounded3D__get_Handle)) uint64_t IOVRAnchorComponent_OVRBounded3D__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRBounded3D__get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRBounded3D__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRBounded3D Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded3D>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded3D>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRBounded3D>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRBounded3D>*();

  /// @brief Method ConvertBounds, addr 0x3f3e6a4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds ConvertBounds(::GlobalNamespace::__OVRPlugin__Boundsf openXrBounds);

  /// @brief Method Equals, addr 0x3f3e380, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3f3e23c, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRBounded3D other);

  /// @brief Method GetHashCode, addr 0x3f3e410, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRBounded3D>.FromAnchor, addr 0x3f3e014, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRBounded3D IOVRAnchorComponent_OVRBounded3D__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRBounded3D>.SetEnabledAsync, addr 0x3f3e1f0, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRBounded3D__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method IOVRAnchorComponent<OVRBounded3D>.get_Handle, addr 0x3f3dfc0, size 0x54, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRBounded3D__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRBounded3D>.get_Type, addr 0x3f3df68, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRBounded3D__get_Type();

  /// @brief Method ToString, addr 0x3f3e4a4, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3f3e044, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRBounded3D getStaticF_Null();

  /// @brief Method get_BoundingBox, addr 0x3f3e554, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_BoundingBox();

  /// @brief Method get_Handle, addr 0x3f3e54c, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x3f3e104, size 0xec, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x3f3e0a8, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x3f3dfb8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded3D>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded3D>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRBounded3D_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRBounded3D>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRBounded3D>* i___System__IEquatable_1___GlobalNamespace__OVRBounded3D_();

  /// @brief Method op_Equality, addr 0x3f3e2a4, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRBounded3D lhs, ::GlobalNamespace::OVRBounded3D rhs);

  /// @brief Method op_Inequality, addr 0x3f3e310, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRBounded3D lhs, ::GlobalNamespace::OVRBounded3D rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRBounded3D value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBounded3D();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRBounded3D(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7803 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBounded3D, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBounded3D, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBounded3D, "", "OVRBounded3D");
