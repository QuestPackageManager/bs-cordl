#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDynamicObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDynamicObject)
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor_TrackableType;
}
namespace GlobalNamespace {
struct OVRAnchor;
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
// Forward declare root types
namespace GlobalNamespace {
struct OVRDynamicObject;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDynamicObject);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDynamicObject
struct CORDL_TYPE OVRDynamicObject {
public:
  // Declarations
  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRDynamicObject__get_Handle)) uint64_t IOVRAnchorComponent_OVRDynamicObject__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRDynamicObject__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRDynamicObject__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRDynamicObject Null;

  __declspec(property(get = get_TrackableType)) ::GlobalNamespace::OVRAnchor_TrackableType TrackableType;

  __declspec(property(get = get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>*();

  /// @brief Method Equals, addr 0x5c02e78, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5c02d28, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRDynamicObject other);

  /// @brief Method GetHashCode, addr 0x5c02f08, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRDynamicObject>.FromAnchor, addr 0x5c02af8, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRDynamicObject IOVRAnchorComponent_OVRDynamicObject__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRDynamicObject>.SetEnabledAsync, addr 0x5c02cdc, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRDynamicObject__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method IOVRAnchorComponent<OVRDynamicObject>.get_Handle, addr 0x5c02aa0, size 0x58, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRDynamicObject__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRDynamicObject>.get_Type, addr 0x5c02a3c, size 0x58, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRDynamicObject__get_Type();

  /// @brief Method ToString, addr 0x5c02f78, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5c02b28, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRDynamicObject getStaticF_Null();

  /// @brief Method get_Handle, addr 0x5c03038, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x5c02bf0, size 0xec, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x5c02b90, size 0x60, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_TrackableType, addr 0x5c03040, size 0xb4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRAnchor_TrackableType get_TrackableType();

  /// @brief Method get_Type, addr 0x5c02a94, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRDynamicObject>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRDynamicObject_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRDynamicObject>* i___System__IEquatable_1___GlobalNamespace__OVRDynamicObject_();

  /// @brief Method op_Equality, addr 0x5c02d94, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRDynamicObject lhs, ::GlobalNamespace::OVRDynamicObject rhs);

  /// @brief Method op_Inequality, addr 0x5c02e04, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRDynamicObject lhs, ::GlobalNamespace::OVRDynamicObject rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRDynamicObject value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDynamicObject();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRDynamicObject(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7097 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDynamicObject, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDynamicObject, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDynamicObject, "", "OVRDynamicObject");
