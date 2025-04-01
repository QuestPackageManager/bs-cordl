#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSemanticLabels.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSemanticLabels)
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
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSemanticLabels;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSemanticLabels);
// Dependencies IOVRAnchorComponent`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSemanticLabels
struct CORDL_TYPE OVRSemanticLabels {
public:
  // Declarations
  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRSemanticLabels__get_Handle)) uint64_t IOVRAnchorComponent_OVRSemanticLabels__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRSemanticLabels__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRSemanticLabels__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Labels)) ::StringW Labels;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRSemanticLabels Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*();

  /// @brief Method Equals, addr 0x3f9b630, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3f9b4ec, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRSemanticLabels other);

  /// @brief Method GetHashCode, addr 0x3f9b6c0, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor, addr 0x3f9b2c4, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRSemanticLabels IOVRAnchorComponent_OVRSemanticLabels__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync, addr 0x3f9b4a0, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRSemanticLabels__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.get_Handle, addr 0x3f9b270, size 0x54, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRSemanticLabels__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.get_Type, addr 0x3f9b218, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRSemanticLabels__get_Type();

  /// @brief Method ToString, addr 0x3f9b754, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3f9b2f4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRSemanticLabels getStaticF_Null();

  /// @brief Method get_Handle, addr 0x3f9b7fc, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x3f9b3b4, size 0xec, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x3f9b358, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Labels, addr 0x3f9b804, size 0xec, virtual false, abstract: false, final false
  inline ::StringW get_Labels();

  /// @brief Method get_Type, addr 0x3f9b268, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRSemanticLabels_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>* i___System__IEquatable_1___GlobalNamespace__OVRSemanticLabels_();

  /// @brief Method op_Equality, addr 0x3f9b554, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRSemanticLabels lhs, ::GlobalNamespace::OVRSemanticLabels rhs);

  /// @brief Method op_Inequality, addr 0x3f9b5c0, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRSemanticLabels lhs, ::GlobalNamespace::OVRSemanticLabels rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRSemanticLabels value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSemanticLabels();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRSemanticLabels(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7834 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSemanticLabels, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSemanticLabels, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSemanticLabels, "", "OVRSemanticLabels");
