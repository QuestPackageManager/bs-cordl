#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeColorGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompositeColorGroup)
namespace GlobalNamespace {
struct CompositeColorGroup_AssignMethod;
}
namespace GlobalNamespace {
class LightWithIdMonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
struct CompositeColorGroup_AssignMethod;
}
namespace GlobalNamespace {
class CompositeColorGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CompositeColorGroup_AssignMethod);
MARK_REF_T(::GlobalNamespace::CompositeColorGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeColorGroup_AssignMethod, "", "CompositeColorGroup/AssignMethod");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeColorGroup*, "", "CompositeColorGroup");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: CompositeColorGroup/AssignMethod
struct CORDL_TYPE CompositeColorGroup_AssignMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CompositeColorGroup_AssignMethod_Unwrapped
  enum struct __CompositeColorGroup_AssignMethod_Unwrapped : int32_t {
    __E_Static = static_cast<int32_t>(0x0),
    __E_Incremental = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CompositeColorGroup_AssignMethod_Unwrapped() const noexcept {
    return static_cast<__CompositeColorGroup_AssignMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeColorGroup_AssignMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompositeColorGroup_AssignMethod(int32_t value__) noexcept;

  /// @brief Field Incremental value: I32(1)
  static ::GlobalNamespace::CompositeColorGroup_AssignMethod const Incremental;

  /// @brief Field Static value: I32(0)
  static ::GlobalNamespace::CompositeColorGroup_AssignMethod const Static;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5818 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeColorGroup_AssignMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeColorGroup_AssignMethod) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightWithIdMonoBehaviour, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeColorGroup
class CORDL_TYPE CompositeColorGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AssignMethod = ::GlobalNamespace::CompositeColorGroup_AssignMethod;

  /// @brief Field _colorTargets, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorTargets, put = __cordl_internal_set__colorTargets)) ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> _colorTargets;

  __declspec(property(get = get_colorTargets)) ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> colorTargets;

  static inline ::GlobalNamespace::CompositeColorGroup* New_ctor();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> const& __cordl_internal_get__colorTargets() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>>& __cordl_internal_get__colorTargets();

  constexpr void __cordl_internal_set__colorTargets(::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> value);

  /// @brief Method .ctor, addr 0x598dafc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorTargets, addr 0x598daf4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> get_colorTargets();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeColorGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeColorGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeColorGroup(CompositeColorGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeColorGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeColorGroup(CompositeColorGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5819 };

  /// @brief Field _colorTargets, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> ____colorTargets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeColorGroup, ____colorTargets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeColorGroup) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
