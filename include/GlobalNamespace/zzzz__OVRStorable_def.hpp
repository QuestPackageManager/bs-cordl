#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRStorable)
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
struct __OVRPlugin__SpaceComponentType;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRStorable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRStorable);
// Type: ::OVRStorable
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRStorable
struct CORDL_TYPE OVRStorable {
public:
  // Declarations
  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRStorable__get_Handle)) uint64_t IOVRAnchorComponent_OVRStorable__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRStorable__get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRStorable__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRStorable Null;

  __declspec(property(get = get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRStorable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRStorable>*();

  /// @brief Method Equals, addr 0x2ae93b0, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2ae9388, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRStorable other);

  /// @brief Method GetHashCode, addr 0x2ae9428, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRStorable>.FromAnchor, addr 0x2ae91e0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRStorable IOVRAnchorComponent_OVRStorable__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRStorable>.get_Handle, addr 0x2ae91d8, size 0x8, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRStorable__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRStorable>.get_Type, addr 0x2ae91c8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRStorable__get_Type();

  /// @brief Method SetEnabledAsync, addr 0x2ae92ac, size 0xdc, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method ToString, addr 0x2ae9474, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2ae91e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRStorable getStaticF_Null();

  /// @brief Method get_Handle, addr 0x2ae94f8, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x2ae9204, size 0xa8, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x2ae91f4, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x2ae91d0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRStorable_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRStorable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRStorable>* i___System__IEquatable_1___GlobalNamespace__OVRStorable_();

  /// @brief Method op_Equality, addr 0x2ae9398, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRStorable lhs, ::GlobalNamespace::OVRStorable rhs);

  /// @brief Method op_Inequality, addr 0x2ae93a4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRStorable lhs, ::GlobalNamespace::OVRStorable rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRStorable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRStorable();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRStorable(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRStorable, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRStorable, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRStorable, "", "OVRStorable");
