#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/BoundsPropertyBag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BoundsPropertyBag)
namespace Unity::Properties::Internal {
class BoundsPropertyBag_CenterProperty;
}
namespace Unity::Properties::Internal {
class BoundsPropertyBag_ExtentsProperty;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
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
MARK_REF_T(::Unity::Properties::Internal::BoundsPropertyBag*);
MARK_REF_T(::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty*);
MARK_REF_T(::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::BoundsPropertyBag*, "Unity.Properties.Internal", "BoundsPropertyBag");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty*, "Unity.Properties.Internal", "BoundsPropertyBag/CenterProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty*, "Unity.Properties.Internal", "BoundsPropertyBag/ExtentsProperty");
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Bounds, UnityEngine.Vector3
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.BoundsPropertyBag/CenterProperty
class CORDL_TYPE BoundsPropertyBag_CenterProperty : public ::Unity::Properties::Property_2<::UnityEngine::Bounds, ::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb0e4c, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetValue(::by_ref<::UnityEngine::Bounds> container);

  static inline ::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb0e58, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Bounds> container, ::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x6bb0d88, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb0e44, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb0e00, size 0x44, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::BoundsPropertyBag_CenterProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Bounds, UnityEngine.Vector3
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.BoundsPropertyBag/ExtentsProperty
class CORDL_TYPE BoundsPropertyBag_ExtentsProperty : public ::Unity::Properties::Property_2<::UnityEngine::Bounds, ::UnityEngine::Vector3> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb0eb0, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetValue(::by_ref<::UnityEngine::Bounds> container);

  static inline ::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb0ebc, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Bounds> container, ::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x6bb0dc4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb0ea8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb0e64, size 0x44, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19715 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::BoundsPropertyBag_ExtentsProperty) == 0x18, "Size mismatch!");

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

  /// @brief Method .ctor, addr 0x6bafa14, size 0x14c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19716 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::BoundsPropertyBag) == 0x28, "Size mismatch!");

} // namespace Unity::Properties::Internal
