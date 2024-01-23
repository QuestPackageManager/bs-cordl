#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSharable)
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
struct OVRSharable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSharable);
// Type: ::OVRSharable
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7515))
// CS Name: ::OVRSharable
struct CORDL_TYPE OVRSharable {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::GlobalNamespace::OVRSharable Null;

  __declspec(property(get = IOVRAnchorComponent_OVRSharable__get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRSharable__Type;

  __declspec(property(get = IOVRAnchorComponent_OVRSharable__get_Handle)) uint64_t IOVRAnchorComponent_OVRSharable__Handle;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_Type))::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>*();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSharable>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRSharable_();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSharable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRSharable>*();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSharable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSharable>* i___System__IEquatable_1___GlobalNamespace__OVRSharable_();

  static inline void setStaticF_Null(::GlobalNamespace::OVRSharable value);

  static inline ::GlobalNamespace::OVRSharable getStaticF_Null();

  /// @brief Method IOVRAnchorComponent<OVRSharable>.get_Type, addr 0x2713350, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRSharable__get_Type();

  /// @brief Method IOVRAnchorComponent<OVRSharable>.get_Handle, addr 0x2713360, size 0x8, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRSharable__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRSharable>.FromAnchor, addr 0x2713368, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRSharable IOVRAnchorComponent_OVRSharable__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method get_IsNull, addr 0x271337c, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_IsEnabled, addr 0x271338c, size 0xa8, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method SetEnabledAsync, addr 0x2713434, size 0xdc, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method Equals, addr 0x2713510, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRSharable other);

  /// @brief Method op_Equality, addr 0x2713520, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRSharable lhs, ::GlobalNamespace::OVRSharable rhs);

  /// @brief Method op_Inequality, addr 0x271352c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRSharable lhs, ::GlobalNamespace::OVRSharable rhs);

  /// @brief Method Equals, addr 0x2713538, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x27135b0, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x27135fc, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Type, addr 0x2713358, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Method get_Handle, addr 0x2713680, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method .ctor, addr 0x2713370, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRSharable(uint64_t _Handle_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSharable();

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSharable, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSharable, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSharable, "", "OVRSharable");
