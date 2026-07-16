#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector2PropertyBag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2PropertyBag)
namespace Unity::Properties::Internal {
class Vector2PropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector2PropertyBag_YProperty;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector2PropertyBag;
}
namespace Unity::Properties::Internal {
class Vector2PropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector2PropertyBag_YProperty;
}
// Write type traits
MARK_REF_T(::Unity::Properties::Internal::Vector2PropertyBag*);
MARK_REF_T(::Unity::Properties::Internal::Vector2PropertyBag_XProperty*);
MARK_REF_T(::Unity::Properties::Internal::Vector2PropertyBag_YProperty*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::Vector2PropertyBag*, "Unity.Properties.Internal", "Vector2PropertyBag");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::Vector2PropertyBag_XProperty*, "Unity.Properties.Internal", "Vector2PropertyBag/XProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::Vector2PropertyBag_YProperty*, "Unity.Properties.Internal", "Vector2PropertyBag/YProperty");
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector2
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector2PropertyBag/XProperty
class CORDL_TYPE Vector2PropertyBag_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb013c, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Vector2> container);

  static inline ::Unity::Properties::Internal::Vector2PropertyBag_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb0144, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Vector2> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb0078, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb0134, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb00f0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2PropertyBag_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2PropertyBag_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2PropertyBag_XProperty(Vector2PropertyBag_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2PropertyBag_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2PropertyBag_XProperty(Vector2PropertyBag_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19685 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::Vector2PropertyBag_XProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector2
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector2PropertyBag/YProperty
class CORDL_TYPE Vector2PropertyBag_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb0198, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Vector2> container);

  static inline ::Unity::Properties::Internal::Vector2PropertyBag_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb01a0, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Vector2> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb00b4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb0190, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb014c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2PropertyBag_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2PropertyBag_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2PropertyBag_YProperty(Vector2PropertyBag_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2PropertyBag_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2PropertyBag_YProperty(Vector2PropertyBag_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::Vector2PropertyBag_YProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.Vector2
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector2PropertyBag
class CORDL_TYPE Vector2PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector2> {
public:
  // Declarations
  using XProperty = ::Unity::Properties::Internal::Vector2PropertyBag_XProperty;

  using YProperty = ::Unity::Properties::Internal::Vector2PropertyBag_YProperty;

  static inline ::Unity::Properties::Internal::Vector2PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6baee20, size 0x14c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::Vector2PropertyBag) == 0x28, "Size mismatch!");

} // namespace Unity::Properties::Internal
