#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector2PropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2PropertyBag)
namespace Unity::Properties::Internal {
class __Vector2PropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector2PropertyBag__YProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector2PropertyBag;
}
namespace Unity::Properties::Internal {
class __Vector2PropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector2PropertyBag__YProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector2PropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector2PropertyBag__XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector2PropertyBag__YProperty);
// Type: ::XProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector2PropertyBag::XProperty*
class CORDL_TYPE __Vector2PropertyBag__XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector2PropertyBag__XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489afa4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b034, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector2PropertyBag__XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector2PropertyBag__XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector2PropertyBag__XProperty(__Vector2PropertyBag__XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector2PropertyBag__XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector2PropertyBag__XProperty(__Vector2PropertyBag__XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector2PropertyBag__XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::YProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector2PropertyBag::YProperty*
class CORDL_TYPE __Vector2PropertyBag__YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector2PropertyBag__YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489afec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b074, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector2PropertyBag__YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector2PropertyBag__YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector2PropertyBag__YProperty(__Vector2PropertyBag__YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector2PropertyBag__YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector2PropertyBag__YProperty(__Vector2PropertyBag__YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17440 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector2PropertyBag__YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::Vector2PropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::Vector2PropertyBag*
class CORDL_TYPE Vector2PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector2> {
public:
  // Declarations
  using XProperty = ::Unity::Properties::Internal::__Vector2PropertyBag__XProperty;

  using YProperty = ::Unity::Properties::Internal::__Vector2PropertyBag__YProperty;

  static inline ::Unity::Properties::Internal::Vector2PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x489a1ec, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2PropertyBag(Vector2PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2PropertyBag(Vector2PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector2PropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::Vector2PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector2PropertyBag*, "Unity.Properties.Internal", "Vector2PropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector2PropertyBag__XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector2PropertyBag__XProperty*, "Unity.Properties.Internal", "Vector2PropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector2PropertyBag__YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector2PropertyBag__YProperty*, "Unity.Properties.Internal", "Vector2PropertyBag/YProperty");
