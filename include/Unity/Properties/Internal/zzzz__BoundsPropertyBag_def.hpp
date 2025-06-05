#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/BoundsPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BoundsPropertyBag)
namespace Unity::Properties::Internal {
class BoundsPropertyBag_CenterProperty;
}
namespace Unity::Properties::Internal {
class BoundsPropertyBag_ExtentsProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class BoundsPropertyBag;
}
namespace Unity::Properties::Internal {
class BoundsPropertyBag_CenterProperty;
}
namespace Unity::Properties::Internal {
class BoundsPropertyBag_ExtentsProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::BoundsPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Bounds, UnityEngine.Vector3
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.BoundsPropertyBag/CenterProperty
class CORDL_TYPE BoundsPropertyBag_CenterProperty : public ::Unity::Properties::Property_2<::UnityEngine::Bounds, ::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty* New_ctor();

  /// @brief Method .ctor, addr 0x49173b0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917440, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsPropertyBag_CenterProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsPropertyBag_CenterProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsPropertyBag_CenterProperty(BoundsPropertyBag_CenterProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsPropertyBag_CenterProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsPropertyBag_CenterProperty(BoundsPropertyBag_CenterProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Bounds, UnityEngine.Vector3
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.BoundsPropertyBag/ExtentsProperty
class CORDL_TYPE BoundsPropertyBag_ExtentsProperty : public ::Unity::Properties::Property_2<::UnityEngine::Bounds, ::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty* New_ctor();

  /// @brief Method .ctor, addr 0x49173f8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917480, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsPropertyBag_ExtentsProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsPropertyBag_ExtentsProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsPropertyBag_ExtentsProperty(BoundsPropertyBag_ExtentsProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsPropertyBag_ExtentsProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsPropertyBag_ExtentsProperty(BoundsPropertyBag_ExtentsProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.Bounds
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.BoundsPropertyBag
class CORDL_TYPE BoundsPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Bounds> {
public:
  // Declarations
  using CenterProperty = ::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty;

  using ExtentsProperty = ::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty;

  static inline ::Unity::Properties::Internal::BoundsPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x49162a0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsPropertyBag(BoundsPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsPropertyBag(BoundsPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::BoundsPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::BoundsPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsPropertyBag*, "Unity.Properties.Internal", "BoundsPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty*, "Unity.Properties.Internal", "BoundsPropertyBag/CenterProperty");
NEED_NO_BOX(::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty*, "Unity.Properties.Internal", "BoundsPropertyBag/ExtentsProperty");
