#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector2IntPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2IntPropertyBag)
namespace Unity::Properties::Internal {
class __Vector2IntPropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector2IntPropertyBag__YProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector2IntPropertyBag;
}
namespace Unity::Properties::Internal {
class __Vector2IntPropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector2IntPropertyBag__YProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector2IntPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector2IntPropertyBag__XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector2IntPropertyBag__YProperty);
// Type: ::XProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector2IntPropertyBag::XProperty*
class CORDL_TYPE __Vector2IntPropertyBag__XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector2IntPropertyBag__XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x48afb84, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x48afc14, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector2IntPropertyBag__XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector2IntPropertyBag__XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector2IntPropertyBag__XProperty(__Vector2IntPropertyBag__XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector2IntPropertyBag__XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector2IntPropertyBag__XProperty(__Vector2IntPropertyBag__XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector2IntPropertyBag__XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::YProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector2IntPropertyBag::YProperty*
class CORDL_TYPE __Vector2IntPropertyBag__YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector2IntPropertyBag__YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x48afbcc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x48afc54, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector2IntPropertyBag__YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector2IntPropertyBag__YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector2IntPropertyBag__YProperty(__Vector2IntPropertyBag__YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector2IntPropertyBag__YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector2IntPropertyBag__YProperty(__Vector2IntPropertyBag__YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector2IntPropertyBag__YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::Vector2IntPropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::Vector2IntPropertyBag*
class CORDL_TYPE Vector2IntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector2Int> {
public:
  // Declarations
  using XProperty = ::Unity::Properties::Internal::__Vector2IntPropertyBag__XProperty;

  using YProperty = ::Unity::Properties::Internal::__Vector2IntPropertyBag__YProperty;

  static inline ::Unity::Properties::Internal::Vector2IntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x48aec80, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2IntPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntPropertyBag(Vector2IntPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntPropertyBag(Vector2IntPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17460 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector2IntPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::Vector2IntPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector2IntPropertyBag*, "Unity.Properties.Internal", "Vector2IntPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector2IntPropertyBag__XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector2IntPropertyBag__XProperty*, "Unity.Properties.Internal", "Vector2IntPropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector2IntPropertyBag__YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector2IntPropertyBag__YProperty*, "Unity.Properties.Internal", "Vector2IntPropertyBag/YProperty");
