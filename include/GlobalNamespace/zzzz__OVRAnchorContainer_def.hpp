#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchorContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchorContainer)
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchorContainer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchorContainer);
// Type: ::OVRAnchorContainer
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRAnchorContainer
struct CORDL_TYPE OVRAnchorContainer {
public:
  // Declarations
  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRAnchorContainer__get_Handle)) uint64_t IOVRAnchorComponent_OVRAnchorContainer__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRAnchorContainer__get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRAnchorContainer__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRAnchorContainer Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  __declspec(property(get = get_Uuids)) ::ArrayW<::System::Guid, ::Array<::System::Guid>*> Uuids;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRAnchorContainer>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRAnchorContainer>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchorContainer>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchorContainer>*();

  /// @brief Method Equals, addr 0x3f2b57c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3f2b438, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRAnchorContainer other);

  /// @brief Method FetchChildrenAsync, addr 0x3f2b834, size 0xa0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> FetchChildrenAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  /// @brief Method GetHashCode, addr 0x3f2b60c, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRAnchorContainer>.FromAnchor, addr 0x3f2b210, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRAnchorContainer IOVRAnchorComponent_OVRAnchorContainer__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRAnchorContainer>.SetEnabledAsync, addr 0x3f2b3ec, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRAnchorContainer__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method IOVRAnchorComponent<OVRAnchorContainer>.get_Handle, addr 0x3f2b1bc, size 0x54, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRAnchorContainer__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRAnchorContainer>.get_Type, addr 0x3f2b164, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRAnchorContainer__get_Type();

  /// @brief Method ToString, addr 0x3f2b6a0, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3f2b240, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRAnchorContainer getStaticF_Null();

  /// @brief Method get_Handle, addr 0x3f2b748, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x3f2b300, size 0xec, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x3f2b2a4, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x3f2b1b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Method get_Uuids, addr 0x3f2b750, size 0xe4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> get_Uuids();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRAnchorContainer>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRAnchorContainer>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRAnchorContainer_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchorContainer>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchorContainer>* i___System__IEquatable_1___GlobalNamespace__OVRAnchorContainer_();

  /// @brief Method op_Equality, addr 0x3f2b4a0, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRAnchorContainer lhs, ::GlobalNamespace::OVRAnchorContainer rhs);

  /// @brief Method op_Inequality, addr 0x3f2b50c, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRAnchorContainer lhs, ::GlobalNamespace::OVRAnchorContainer rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRAnchorContainer value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAnchorContainer();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRAnchorContainer(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7801 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAnchorContainer, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchorContainer, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchorContainer, "", "OVRAnchorContainer");
