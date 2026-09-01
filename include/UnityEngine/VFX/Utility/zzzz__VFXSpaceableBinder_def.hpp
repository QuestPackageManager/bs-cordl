#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXSpaceableBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXSpaceableBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX::Utility {
struct VFXSpaceableBinder_BinderSpace;
}
namespace UnityEngine::VFX {
struct VFXSpace;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
struct VFXSpaceableBinder_BinderSpace;
}
namespace UnityEngine::VFX::Utility {
class VFXSpaceableBinder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXSpaceableBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace, "UnityEngine.VFX.Utility", "VFXSpaceableBinder/BinderSpace");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXSpaceableBinder*, "UnityEngine.VFX.Utility", "VFXSpaceableBinder");
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXSpaceableBinder/BinderSpace
struct CORDL_TYPE VFXSpaceableBinder_BinderSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXSpaceableBinder_BinderSpace_Unwrapped
  enum struct __VFXSpaceableBinder_BinderSpace_Unwrapped : int32_t {
    __E_Automatic = static_cast<int32_t>(0x0),
    __E_World = static_cast<int32_t>(0x1),
    __E_Local = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXSpaceableBinder_BinderSpace_Unwrapped() const noexcept {
    return static_cast<__VFXSpaceableBinder_BinderSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSpaceableBinder_BinderSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXSpaceableBinder_BinderSpace(int32_t value__) noexcept;

  /// @brief Field Automatic value: I32(0)
  static ::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace const Automatic;

  /// @brief Field Local value: I32(2)
  static ::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace const Local;

  /// @brief Field World value: I32(1)
  static ::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace const World;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20005 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.VFX.Utility.VFXSpaceableBinder::BinderSpace
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXSpaceableBinder
class CORDL_TYPE VFXSpaceableBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  using BinderSpace = ::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace;

  /// @brief Field Space, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_Space, put = __cordl_internal_set_Space)) ::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace Space;

  /// @brief Method ApplySpacePosition, addr 0x69e6708, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ApplySpacePosition(::UnityEngine::VFX::VisualEffect* component, ::UnityEngine::VFX::Utility::ExposedProperty* targetProperty,
                                                   ::UnityEngine::Vector3 sourceWorldPosition);

  /// @brief Method ApplySpacePositionNormal, addr 0x69e62c0, size 0x174, virtual false, abstract: false, final false
  inline void ApplySpacePositionNormal(::UnityEngine::VFX::VisualEffect* component, ::UnityEngine::VFX::Utility::ExposedProperty* targetProperty, ::UnityEngine::Transform* sourceTransform,
                                       ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> normal);

  /// @brief Method ApplySpaceTRS, addr 0x69e7548, size 0x148, virtual false, abstract: false, final false
  inline void ApplySpaceTRS(::UnityEngine::VFX::VisualEffect* component, ::UnityEngine::VFX::Utility::ExposedProperty* targetProperty, ::UnityEngine::Transform* sourceTransform,
                            ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> eulerAngles, ::by_ref<::UnityEngine::Vector3> scale);

  /// @brief Method ApplySpaceTS, addr 0x69e7458, size 0xf0, virtual false, abstract: false, final false
  inline void ApplySpaceTS(::UnityEngine::VFX::VisualEffect* component, ::UnityEngine::VFX::Utility::ExposedProperty* targetProperty, ::UnityEngine::Transform* sourceTransform,
                           ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> scale);

  /// @brief Method GetTargetSpace, addr 0x69e73dc, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXSpace GetTargetSpace(::UnityEngine::VFX::VisualEffect* component, ::UnityEngine::VFX::Utility::ExposedProperty* targetProperty);

  static inline ::UnityEngine::VFX::Utility::VFXSpaceableBinder* New_ctor();

  constexpr ::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace const& __cordl_internal_get_Space() const;

  constexpr ::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace& __cordl_internal_get_Space();

  constexpr void __cordl_internal_set_Space(::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace value);

  /// @brief Method .ctor, addr 0x69e658c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXSpaceableBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXSpaceableBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXSpaceableBinder(VFXSpaceableBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXSpaceableBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXSpaceableBinder(VFXSpaceableBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20006 };

  /// @brief Field Space, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::VFX::Utility::VFXSpaceableBinder_BinderSpace ___Space;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXSpaceableBinder, ___Space) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXSpaceableBinder) == 0x30, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
