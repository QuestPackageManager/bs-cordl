#pragma once
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
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7517))
// CS Name: ::OVRBounded3D
struct CORDL_TYPE OVRBounded3D {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRBounded3D Null;

  __declspec(property(get = IOVRAnchorComponent_OVRBounded3D__get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRBounded3D__Type;

  __declspec(property(get = IOVRAnchorComponent_OVRBounded3D__get_Handle)) uint64_t IOVRAnchorComponent_OVRBounded3D__Handle;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = get_BoundingBox))::UnityEngine::Bounds BoundingBox;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded3D>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded3D>*();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded3D>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRBounded3D>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRBounded3D_();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRBounded3D>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRBounded3D>*();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRBounded3D>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRBounded3D>* i___System__IEquatable_1___GlobalNamespace__OVRBounded3D_();

  static inline void setStaticF_Null(::GlobalNamespace::OVRBounded3D value);

  static inline ::GlobalNamespace::OVRBounded3D getStaticF_Null();

  /// @brief Method IOVRAnchorComponent<OVRBounded3D>.get_Type, addr 0x2713c24, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRBounded3D__get_Type();

  /// @brief Method IOVRAnchorComponent<OVRBounded3D>.get_Handle, addr 0x2713c34, size 0x8, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRBounded3D__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRBounded3D>.FromAnchor, addr 0x2713c3c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRBounded3D IOVRAnchorComponent_OVRBounded3D__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method get_IsNull, addr 0x2713c50, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_IsEnabled, addr 0x2713c60, size 0xa8, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method IOVRAnchorComponent<OVRBounded3D>.SetEnabledAsync, addr 0x2713d08, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRBounded3D__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method Equals, addr 0x2713d58, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRBounded3D other);

  /// @brief Method op_Equality, addr 0x2713d68, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRBounded3D lhs, ::GlobalNamespace::OVRBounded3D rhs);

  /// @brief Method op_Inequality, addr 0x2713d74, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRBounded3D lhs, ::GlobalNamespace::OVRBounded3D rhs);

  /// @brief Method Equals, addr 0x2713d80, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2713df8, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2713e44, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Type, addr 0x2713c2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Method get_Handle, addr 0x2713ec8, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method .ctor, addr 0x2713c44, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method get_BoundingBox, addr 0x2713ed0, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_BoundingBox();

  /// @brief Method ConvertBounds, addr 0x2713fcc, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds ConvertBounds(::GlobalNamespace::__OVRPlugin__Boundsf openXrBounds);

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRBounded3D(uint64_t _Handle_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBounded3D();

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBounded3D, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBounded3D, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBounded3D, "", "OVRBounded3D");
