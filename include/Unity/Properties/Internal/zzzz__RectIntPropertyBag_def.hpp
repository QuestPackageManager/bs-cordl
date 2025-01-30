#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/RectIntPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectIntPropertyBag)
namespace Unity::Properties::Internal {
class RectIntPropertyBag_HeightProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_WidthProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_YProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class RectIntPropertyBag;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_HeightProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_WidthProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_YProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::RectIntPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::RectIntPropertyBag_XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::RectIntPropertyBag_YProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag/XProperty
class CORDL_TYPE RectIntPropertyBag_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::RectIntPropertyBag_XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4917940, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917a60, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag_XProperty(RectIntPropertyBag_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag_XProperty(RectIntPropertyBag_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectIntPropertyBag_XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag/YProperty
class CORDL_TYPE RectIntPropertyBag_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::RectIntPropertyBag_YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4917988, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917aa0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag_YProperty(RectIntPropertyBag_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag_YProperty(RectIntPropertyBag_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17519 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectIntPropertyBag_YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag/WidthProperty
class CORDL_TYPE RectIntPropertyBag_WidthProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty* New_ctor();

  /// @brief Method .ctor, addr 0x49179d0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917ae0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag_WidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_WidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag_WidthProperty(RectIntPropertyBag_WidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_WidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag_WidthProperty(RectIntPropertyBag_WidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17520 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag/HeightProperty
class CORDL_TYPE RectIntPropertyBag_HeightProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4917a18, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917b20, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag_HeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_HeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag_HeightProperty(RectIntPropertyBag_HeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_HeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag_HeightProperty(RectIntPropertyBag_HeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17521 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag
class CORDL_TYPE RectIntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::RectInt> {
public:
  // Declarations
  using HeightProperty = ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty;

  using WidthProperty = ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty;

  using XProperty = ::Unity::Properties::Internal::RectIntPropertyBag_XProperty;

  using YProperty = ::Unity::Properties::Internal::RectIntPropertyBag_YProperty;

  static inline ::Unity::Properties::Internal::RectIntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x49168f0, size 0x160, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag(RectIntPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag(RectIntPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17522 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectIntPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::RectIntPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectIntPropertyBag*, "Unity.Properties.Internal", "RectIntPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/HeightProperty");
NEED_NO_BOX(::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/WidthProperty");
NEED_NO_BOX(::Unity::Properties::Internal::RectIntPropertyBag_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectIntPropertyBag_XProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::RectIntPropertyBag_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectIntPropertyBag_YProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/YProperty");
