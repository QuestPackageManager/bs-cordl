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
class __BoundsPropertyBag__CenterProperty;
}
namespace Unity::Properties::Internal {
class __BoundsPropertyBag__ExtentsProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class BoundsPropertyBag;
}
namespace Unity::Properties::Internal {
class __BoundsPropertyBag__CenterProperty;
}
namespace Unity::Properties::Internal {
class __BoundsPropertyBag__ExtentsProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::BoundsPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__BoundsPropertyBag__CenterProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__BoundsPropertyBag__ExtentsProperty);
// Type: ::CenterProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::BoundsPropertyBag::CenterProperty*
class CORDL_TYPE __BoundsPropertyBag__CenterProperty : public ::Unity::Properties::Property_2<::UnityEngine::Bounds, ::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__BoundsPropertyBag__CenterProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489bb54, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489bbe4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsPropertyBag__CenterProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BoundsPropertyBag__CenterProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BoundsPropertyBag__CenterProperty(__BoundsPropertyBag__CenterProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BoundsPropertyBag__CenterProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BoundsPropertyBag__CenterProperty(__BoundsPropertyBag__CenterProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17468 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__BoundsPropertyBag__CenterProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::ExtentsProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::BoundsPropertyBag::ExtentsProperty*
class CORDL_TYPE __BoundsPropertyBag__ExtentsProperty : public ::Unity::Properties::Property_2<::UnityEngine::Bounds, ::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__BoundsPropertyBag__ExtentsProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489bb9c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489bc24, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsPropertyBag__ExtentsProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BoundsPropertyBag__ExtentsProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BoundsPropertyBag__ExtentsProperty(__BoundsPropertyBag__ExtentsProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BoundsPropertyBag__ExtentsProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BoundsPropertyBag__ExtentsProperty(__BoundsPropertyBag__ExtentsProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__BoundsPropertyBag__ExtentsProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::BoundsPropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::BoundsPropertyBag*
class CORDL_TYPE BoundsPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Bounds> {
public:
  // Declarations
  using CenterProperty = ::Unity::Properties::Internal::__BoundsPropertyBag__CenterProperty;

  using ExtentsProperty = ::Unity::Properties::Internal::__BoundsPropertyBag__ExtentsProperty;

  static inline ::Unity::Properties::Internal::BoundsPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x489aa44, size 0xf0, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17470 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::BoundsPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::BoundsPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsPropertyBag*, "Unity.Properties.Internal", "BoundsPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__BoundsPropertyBag__CenterProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__BoundsPropertyBag__CenterProperty*, "Unity.Properties.Internal", "BoundsPropertyBag/CenterProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__BoundsPropertyBag__ExtentsProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__BoundsPropertyBag__ExtentsProperty*, "Unity.Properties.Internal", "BoundsPropertyBag/ExtentsProperty");
