#pragma once
// IWYU pragma private; include "Unity\Properties\Internal\Vector3PropertyBag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3PropertyBag)
namespace Unity::Properties::Internal {
class Vector3PropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector3PropertyBag_YProperty;
}
namespace Unity::Properties::Internal {
class Vector3PropertyBag_ZProperty;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector3PropertyBag;
}
namespace Unity::Properties::Internal {
class Vector3PropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class Vector3PropertyBag_YProperty;
}
namespace Unity::Properties::Internal {
class Vector3PropertyBag_ZProperty;
}
// Write type traits
MARK_REF_T(::Unity::Properties::Internal::Vector3PropertyBag*);
MARK_REF_T(::Unity::Properties::Internal::Vector3PropertyBag_XProperty*);
MARK_REF_T(::Unity::Properties::Internal::Vector3PropertyBag_YProperty*);
MARK_REF_T(::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::Vector3PropertyBag*, "Unity.Properties.Internal", "Vector3PropertyBag");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::Vector3PropertyBag_XProperty*, "Unity.Properties.Internal", "Vector3PropertyBag/XProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::Vector3PropertyBag_YProperty*, "Unity.Properties.Internal", "Vector3PropertyBag/YProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::Vector3PropertyBag_ZProperty*, "Unity.Properties.Internal", "Vector3PropertyBag/ZProperty");
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector3
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector3PropertyBag/XProperty
class CORDL_TYPE Vector3PropertyBag_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb3830, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Vector3> container);

  static inline ::Unity::Properties::Internal::Vector3PropertyBag_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb3838, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Vector3> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb3730, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb3828, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb37e4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3PropertyBag_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3PropertyBag_XProperty(Vector3PropertyBag_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3PropertyBag_XProperty(Vector3PropertyBag_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::Vector3PropertyBag_XProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector3
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector3PropertyBag/YProperty
class CORDL_TYPE Vector3PropertyBag_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb388c, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Vector3> container);

  static inline ::Unity::Properties::Internal::Vector3PropertyBag_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb3894, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Vector3> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb376c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb3884, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb3840, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3PropertyBag_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3PropertyBag_YProperty(Vector3PropertyBag_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3PropertyBag_YProperty(Vector3PropertyBag_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19722 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::Vector3PropertyBag_YProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Vector3
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector3PropertyBag/ZProperty
class CORDL_TYPE Vector3PropertyBag_ZProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb38e8, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Vector3> container);

  static inline ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb38f0, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Vector3> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb37a8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb38e0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb389c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3PropertyBag_ZProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag_ZProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3PropertyBag_ZProperty(Vector3PropertyBag_ZProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag_ZProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3PropertyBag_ZProperty(Vector3PropertyBag_ZProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19723 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::Vector3PropertyBag_ZProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.Vector3
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.Vector3PropertyBag
class CORDL_TYPE Vector3PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector3> {
public:
  // Declarations
  using XProperty = ::Unity::Properties::Internal::Vector3PropertyBag_XProperty;

  using YProperty = ::Unity::Properties::Internal::Vector3PropertyBag_YProperty;

  using ZProperty = ::Unity::Properties::Internal::Vector3PropertyBag_ZProperty;

  static inline ::Unity::Properties::Internal::Vector3PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6bb24f4, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3PropertyBag(Vector3PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3PropertyBag(Vector3PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::Vector3PropertyBag) == 0x28, "Size mismatch!");

} // namespace Unity::Properties::Internal
