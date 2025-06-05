#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/RectPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RectPropertyBag)
namespace Unity::Properties::Internal {
class RectPropertyBag_HeightProperty;
}
namespace Unity::Properties::Internal {
class RectPropertyBag_WidthProperty;
}
namespace Unity::Properties::Internal {
class RectPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class RectPropertyBag_YProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class RectPropertyBag;
}
namespace Unity::Properties::Internal {
class RectPropertyBag_HeightProperty;
}
namespace Unity::Properties::Internal {
class RectPropertyBag_WidthProperty;
}
namespace Unity::Properties::Internal {
class RectPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class RectPropertyBag_YProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::RectPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::RectPropertyBag_HeightProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::RectPropertyBag_WidthProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::RectPropertyBag_XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::RectPropertyBag_YProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Rect
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectPropertyBag/XProperty
class CORDL_TYPE RectPropertyBag_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Rect, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::RectPropertyBag_XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4916f70, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917090, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectPropertyBag_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectPropertyBag_XProperty(RectPropertyBag_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectPropertyBag_XProperty(RectPropertyBag_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17521 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectPropertyBag_XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Rect
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectPropertyBag/YProperty
class CORDL_TYPE RectPropertyBag_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Rect, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::RectPropertyBag_YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4916fb8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x49170d0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectPropertyBag_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectPropertyBag_YProperty(RectPropertyBag_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectPropertyBag_YProperty(RectPropertyBag_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17522 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectPropertyBag_YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Rect
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectPropertyBag/WidthProperty
class CORDL_TYPE RectPropertyBag_WidthProperty : public ::Unity::Properties::Property_2<::UnityEngine::Rect, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::RectPropertyBag_WidthProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4917000, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917110, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectPropertyBag_WidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag_WidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectPropertyBag_WidthProperty(RectPropertyBag_WidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag_WidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectPropertyBag_WidthProperty(RectPropertyBag_WidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17523 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectPropertyBag_WidthProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Rect
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectPropertyBag/HeightProperty
class CORDL_TYPE RectPropertyBag_HeightProperty : public ::Unity::Properties::Property_2<::UnityEngine::Rect, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::RectPropertyBag_HeightProperty* New_ctor();

  /// @brief Method .ctor, addr 0x4917048, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x4917150, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectPropertyBag_HeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag_HeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectPropertyBag_HeightProperty(RectPropertyBag_HeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag_HeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectPropertyBag_HeightProperty(RectPropertyBag_HeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17524 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectPropertyBag_HeightProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.Rect
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectPropertyBag
class CORDL_TYPE RectPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Rect> {
public:
  // Declarations
  using HeightProperty = ::Unity::Properties::Internal::RectPropertyBag_HeightProperty;

  using WidthProperty = ::Unity::Properties::Internal::RectPropertyBag_WidthProperty;

  using XProperty = ::Unity::Properties::Internal::RectPropertyBag_XProperty;

  using YProperty = ::Unity::Properties::Internal::RectPropertyBag_YProperty;

  static inline ::Unity::Properties::Internal::RectPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x4915fe0, size 0x160, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectPropertyBag(RectPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectPropertyBag(RectPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17525 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::RectPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectPropertyBag*, "Unity.Properties.Internal", "RectPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::RectPropertyBag_HeightProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectPropertyBag_HeightProperty*, "Unity.Properties.Internal", "RectPropertyBag/HeightProperty");
NEED_NO_BOX(::Unity::Properties::Internal::RectPropertyBag_WidthProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectPropertyBag_WidthProperty*, "Unity.Properties.Internal", "RectPropertyBag/WidthProperty");
NEED_NO_BOX(::Unity::Properties::Internal::RectPropertyBag_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectPropertyBag_XProperty*, "Unity.Properties.Internal", "RectPropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::RectPropertyBag_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectPropertyBag_YProperty*, "Unity.Properties.Internal", "RectPropertyBag/YProperty");
