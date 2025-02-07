#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRStorable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRStorable)
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
struct OVRStorable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRStorable);
// Dependencies IOVRAnchorComponent`1<T>, System.IEquatable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRStorable
struct CORDL_TYPE OVRStorable {
public:
  // Declarations
  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRStorable__get_Handle)) uint64_t IOVRAnchorComponent_OVRStorable__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRStorable__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRStorable__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRStorable Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRStorable>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRStorable>*();

  /// @brief Method Equals, addr 0x3fa2d38, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3fa2bf4, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRStorable other);

  /// @brief Method GetHashCode, addr 0x3fa2dc8, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRStorable>.FromAnchor, addr 0x3fa2918, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRStorable IOVRAnchorComponent_OVRStorable__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRStorable>.get_Handle, addr 0x3fa28c4, size 0x54, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRStorable__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRStorable>.get_Type, addr 0x3fa286c, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRStorable__get_Type();

  /// @brief Method SetEnabledAsync, addr 0x3fa2af4, size 0x100, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method ToString, addr 0x3fa2e5c, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x3fa2948, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRStorable getStaticF_Null();

  /// @brief Method get_Handle, addr 0x3fa2f04, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x3fa2a08, size 0xec, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x3fa29ac, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x3fa28bc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRStorable_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRStorable>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRStorable>* i___System__IEquatable_1___GlobalNamespace__OVRStorable_();

  /// @brief Method op_Equality, addr 0x3fa2c5c, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRStorable lhs, ::GlobalNamespace::OVRStorable rhs);

  /// @brief Method op_Inequality, addr 0x3fa2cc8, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRStorable lhs, ::GlobalNamespace::OVRStorable rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRStorable value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRStorable();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRStorable(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7829 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRStorable, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRStorable, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRStorable, "", "OVRStorable");
