#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/BoundsIntPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BoundsIntPropertyBag)
namespace Unity::Properties::Internal {
class BoundsIntPropertyBag_PositionProperty;
}
namespace Unity::Properties::Internal {
class BoundsIntPropertyBag_SizeProperty;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class BoundsIntPropertyBag;
}
namespace Unity::Properties::Internal {
class BoundsIntPropertyBag_PositionProperty;
}
namespace Unity::Properties::Internal {
class BoundsIntPropertyBag_SizeProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::BoundsIntPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.BoundsInt, UnityEngine.Vector3Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.BoundsIntPropertyBag/PositionProperty
class CORDL_TYPE BoundsIntPropertyBag_PositionProperty : public ::Unity::Properties::Property_2<::UnityEngine::BoundsInt, ::UnityEngine::Vector3Int> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x69e9030, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetValue(::ByRef<::UnityEngine::BoundsInt> container);

  static inline ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69e903c, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::BoundsInt> container, ::UnityEngine::Vector3Int value);

  /// @brief Method .ctor, addr 0x69e8f6c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69e9028, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69e8fe4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsIntPropertyBag_PositionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntPropertyBag_PositionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsIntPropertyBag_PositionProperty(BoundsIntPropertyBag_PositionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntPropertyBag_PositionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsIntPropertyBag_PositionProperty(BoundsIntPropertyBag_PositionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19468 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.BoundsInt, UnityEngine.Vector3Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.BoundsIntPropertyBag/SizeProperty
class CORDL_TYPE BoundsIntPropertyBag_SizeProperty : public ::Unity::Properties::Property_2<::UnityEngine::BoundsInt, ::UnityEngine::Vector3Int> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x69e9094, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetValue(::ByRef<::UnityEngine::BoundsInt> container);

  static inline ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69e90a0, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::BoundsInt> container, ::UnityEngine::Vector3Int value);

  /// @brief Method .ctor, addr 0x69e8fa8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69e908c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69e9048, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsIntPropertyBag_SizeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntPropertyBag_SizeProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsIntPropertyBag_SizeProperty(BoundsIntPropertyBag_SizeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntPropertyBag_SizeProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsIntPropertyBag_SizeProperty(BoundsIntPropertyBag_SizeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.BoundsInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.BoundsIntPropertyBag
class CORDL_TYPE BoundsIntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::BoundsInt> {
public:
  // Declarations
  using PositionProperty = ::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty;

  using SizeProperty = ::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty;

  static inline ::Unity::Properties::Internal::BoundsIntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x69e7c04, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsIntPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsIntPropertyBag(BoundsIntPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsIntPropertyBag(BoundsIntPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19470 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::BoundsIntPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::BoundsIntPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsIntPropertyBag*, "Unity.Properties.Internal", "BoundsIntPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsIntPropertyBag_PositionProperty*, "Unity.Properties.Internal", "BoundsIntPropertyBag/PositionProperty");
NEED_NO_BOX(::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsIntPropertyBag_SizeProperty*, "Unity.Properties.Internal", "BoundsIntPropertyBag/SizeProperty");
