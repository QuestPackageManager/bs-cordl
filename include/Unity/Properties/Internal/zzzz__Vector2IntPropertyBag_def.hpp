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
class Vector2IntPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector2IntPropertyBag_YProperty;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector2IntPropertyBag;
}
namespace Unity::Properties::Internal {
class Vector2IntPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector2IntPropertyBag_YProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector2IntPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector2Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector2IntPropertyBag/XProperty
class CORDL_TYPE Vector2IntPropertyBag_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x697f8b4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetValue(::ByRef<::UnityEngine::Vector2Int> container);

  static inline ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x697f8bc, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::Vector2Int> container, int32_t value);

  /// @brief Method .ctor, addr 0x697f7f0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x697f8ac, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x697f868, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2IntPropertyBag_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntPropertyBag_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntPropertyBag_XProperty(Vector2IntPropertyBag_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntPropertyBag_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntPropertyBag_XProperty(Vector2IntPropertyBag_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19422 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector2Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector2IntPropertyBag/YProperty
class CORDL_TYPE Vector2IntPropertyBag_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x697f910, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetValue(::ByRef<::UnityEngine::Vector2Int> container);

  static inline ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x697f918, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::Vector2Int> container, int32_t value);

  /// @brief Method .ctor, addr 0x697f82c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x697f908, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x697f8c4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2IntPropertyBag_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntPropertyBag_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntPropertyBag_YProperty(Vector2IntPropertyBag_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntPropertyBag_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntPropertyBag_YProperty(Vector2IntPropertyBag_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19423 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.Vector2Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector2IntPropertyBag
class CORDL_TYPE Vector2IntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector2Int> {
public:
  // Declarations
  using XProperty = ::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty;

  using YProperty = ::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty;

  static inline ::Unity::Properties::Internal::Vector2IntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x697e538, size 0x14c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector2IntPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::Vector2IntPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector2IntPropertyBag*, "Unity.Properties.Internal", "Vector2IntPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector2IntPropertyBag_XProperty*, "Unity.Properties.Internal", "Vector2IntPropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector2IntPropertyBag_YProperty*, "Unity.Properties.Internal", "Vector2IntPropertyBag/YProperty");
