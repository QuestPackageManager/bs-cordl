#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector4PropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector4PropertyBag)
namespace Unity::Properties::Internal {
class Vector4PropertyBag_WProperty;
}
namespace Unity::Properties::Internal {
class Vector4PropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector4PropertyBag_YProperty;
}
namespace Unity::Properties::Internal {
class Vector4PropertyBag_ZProperty;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector4PropertyBag;
}
namespace Unity::Properties::Internal {
class Vector4PropertyBag_WProperty;
}
namespace Unity::Properties::Internal {
class Vector4PropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector4PropertyBag_YProperty;
}
namespace Unity::Properties::Internal {
class Vector4PropertyBag_ZProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector4PropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector4PropertyBag_WProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector4PropertyBag_XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector4PropertyBag_YProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector4PropertyBag_ZProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector4
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector4PropertyBag/XProperty
class CORDL_TYPE Vector4PropertyBag_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector4, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x69e8550, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::ByRef<::UnityEngine::Vector4> container);

  static inline ::Unity::Properties::Internal::Vector4PropertyBag_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69e8558, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::Vector4> container, float_t value);

  /// @brief Method .ctor, addr 0x69e8414, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69e8548, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69e8504, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4PropertyBag_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4PropertyBag_XProperty(Vector4PropertyBag_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4PropertyBag_XProperty(Vector4PropertyBag_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19443 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector4PropertyBag_XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector4
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector4PropertyBag/YProperty
class CORDL_TYPE Vector4PropertyBag_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector4, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x69e85ac, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::ByRef<::UnityEngine::Vector4> container);

  static inline ::Unity::Properties::Internal::Vector4PropertyBag_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69e85b4, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::Vector4> container, float_t value);

  /// @brief Method .ctor, addr 0x69e8450, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69e85a4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69e8560, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4PropertyBag_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4PropertyBag_YProperty(Vector4PropertyBag_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4PropertyBag_YProperty(Vector4PropertyBag_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19444 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector4PropertyBag_YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector4
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector4PropertyBag/ZProperty
class CORDL_TYPE Vector4PropertyBag_ZProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector4, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x69e8608, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::ByRef<::UnityEngine::Vector4> container);

  static inline ::Unity::Properties::Internal::Vector4PropertyBag_ZProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69e8610, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::Vector4> container, float_t value);

  /// @brief Method .ctor, addr 0x69e848c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69e8600, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69e85bc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4PropertyBag_ZProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag_ZProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4PropertyBag_ZProperty(Vector4PropertyBag_ZProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag_ZProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4PropertyBag_ZProperty(Vector4PropertyBag_ZProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector4PropertyBag_ZProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector4
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector4PropertyBag/WProperty
class CORDL_TYPE Vector4PropertyBag_WProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector4, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x69e8664, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::ByRef<::UnityEngine::Vector4> container);

  static inline ::Unity::Properties::Internal::Vector4PropertyBag_WProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69e866c, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::Vector4> container, float_t value);

  /// @brief Method .ctor, addr 0x69e84c8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69e865c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69e8618, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4PropertyBag_WProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag_WProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4PropertyBag_WProperty(Vector4PropertyBag_WProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag_WProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4PropertyBag_WProperty(Vector4PropertyBag_WProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19446 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector4PropertyBag_WProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.Vector4
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector4PropertyBag
class CORDL_TYPE Vector4PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector4> {
public:
  // Declarations
  using WProperty = ::Unity::Properties::Internal::Vector4PropertyBag_WProperty;

  using XProperty = ::Unity::Properties::Internal::Vector4PropertyBag_XProperty;

  using YProperty = ::Unity::Properties::Internal::Vector4PropertyBag_YProperty;

  using ZProperty = ::Unity::Properties::Internal::Vector4PropertyBag_ZProperty;

  static inline ::Unity::Properties::Internal::Vector4PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x69e71b8, size 0x204, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4PropertyBag(Vector4PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4PropertyBag(Vector4PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector4PropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::Vector4PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector4PropertyBag*, "Unity.Properties.Internal", "Vector4PropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::Vector4PropertyBag_WProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector4PropertyBag_WProperty*, "Unity.Properties.Internal", "Vector4PropertyBag/WProperty");
NEED_NO_BOX(::Unity::Properties::Internal::Vector4PropertyBag_XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector4PropertyBag_XProperty*, "Unity.Properties.Internal", "Vector4PropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::Vector4PropertyBag_YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector4PropertyBag_YProperty*, "Unity.Properties.Internal", "Vector4PropertyBag/YProperty");
NEED_NO_BOX(::Unity::Properties::Internal::Vector4PropertyBag_ZProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector4PropertyBag_ZProperty*, "Unity.Properties.Internal", "Vector4PropertyBag/ZProperty");
