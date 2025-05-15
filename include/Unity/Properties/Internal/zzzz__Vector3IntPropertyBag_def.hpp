#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector3IntPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3IntPropertyBag)
namespace Unity::Properties::Internal {
class Vector3IntPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector3IntPropertyBag_YProperty;
}
namespace Unity::Properties::Internal {
class Vector3IntPropertyBag_ZProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector3IntPropertyBag;
}
namespace Unity::Properties::Internal {
class Vector3IntPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector3IntPropertyBag_YProperty;
}
namespace Unity::Properties::Internal {
class Vector3IntPropertyBag_ZProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector3IntPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector3Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector3IntPropertyBag/XProperty
class CORDL_TYPE Vector3IntPropertyBag_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4916e50, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4916f28, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3IntPropertyBag_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3IntPropertyBag_XProperty(Vector3IntPropertyBag_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3IntPropertyBag_XProperty(Vector3IntPropertyBag_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector3Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector3IntPropertyBag/YProperty
class CORDL_TYPE Vector3IntPropertyBag_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4916e98, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4916f68, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3IntPropertyBag_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3IntPropertyBag_YProperty(Vector3IntPropertyBag_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3IntPropertyBag_YProperty(Vector3IntPropertyBag_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector3Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector3IntPropertyBag/ZProperty
class CORDL_TYPE Vector3IntPropertyBag_ZProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4916ee0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4916fa8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3IntPropertyBag_ZProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag_ZProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3IntPropertyBag_ZProperty(Vector3IntPropertyBag_ZProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag_ZProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3IntPropertyBag_ZProperty(Vector3IntPropertyBag_ZProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17519 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.Vector3Int
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector3IntPropertyBag
class CORDL_TYPE Vector3IntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector3Int> {
public:
  // Declarations
  using XProperty = ::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty;

  using YProperty = ::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty;

  using ZProperty = ::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty;

  static inline ::Unity::Properties::Internal::Vector3IntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x4915f2c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3IntPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3IntPropertyBag(Vector3IntPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3IntPropertyBag(Vector3IntPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17520 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector3IntPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::Vector3IntPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector3IntPropertyBag*, "Unity.Properties.Internal", "Vector3IntPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector3IntPropertyBag_XProperty*, "Unity.Properties.Internal", "Vector3IntPropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector3IntPropertyBag_YProperty*, "Unity.Properties.Internal", "Vector3IntPropertyBag/YProperty");
NEED_NO_BOX(::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector3IntPropertyBag_ZProperty*, "Unity.Properties.Internal", "Vector3IntPropertyBag/ZProperty");
