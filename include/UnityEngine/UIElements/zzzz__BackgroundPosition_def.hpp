#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundPosition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPositionKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundPosition)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct BackgroundPositionKeyword;
}
namespace UnityEngine::UIElements {
class BackgroundPosition_PropertyBag;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundPosition_KeywordProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundPosition_OffsetProperty;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BackgroundPosition_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundPosition_KeywordProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_BackgroundPosition_OffsetProperty;
}
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BackgroundPosition_PropertyBag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_KeywordProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_OffsetProperty);
MARK_VAL_T(::UnityEngine::UIElements::BackgroundPosition);
// Dependencies UnityEngine.UIElements.BackgroundPositionKeyword, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BackgroundPosition
struct CORDL_TYPE BackgroundPosition {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::BackgroundPosition_PropertyBag;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>*();

  /// @brief Method Equals, addr 0x69fac98, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x69fad50, size 0x48, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::BackgroundPosition other);

  /// @brief Method GetHashCode, addr 0x69fad98, size 0x44, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x69fac80, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundPosition Initial();

  /// @brief Method ToString, addr 0x69fae6c, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x69fac68, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundPositionKeyword keyword);

  /// @brief Method .ctor, addr 0x69fac74, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundPositionKeyword keyword, ::UnityEngine::UIElements::Length offset);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>* i___System__IEquatable_1___UnityEngine__UIElements__BackgroundPosition_();

  /// @brief Method op_Equality, addr 0x69faddc, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::BackgroundPosition style1, ::UnityEngine::UIElements::BackgroundPosition style2);

  /// @brief Method op_Inequality, addr 0x69fae24, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::BackgroundPosition style1, ::UnityEngine::UIElements::BackgroundPosition style2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundPosition();

  // Ctor Parameters [CppParam { name: "keyword", ty: "::UnityEngine::UIElements::BackgroundPositionKeyword", modifiers: "", def_value: None }, CppParam { name: "offset", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
  constexpr BackgroundPosition(::UnityEngine::UIElements::BackgroundPositionKeyword keyword, ::UnityEngine::UIElements::Length offset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4006 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field keyword, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::BackgroundPositionKeyword keyword;

  /// @brief Field offset, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length offset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BackgroundPosition, keyword) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundPosition, offset) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundPosition, 0xc>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.BackgroundPosition, UnityEngine.UIElements.BackgroundPositionKeyword
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundPosition/PropertyBag/KeywordProperty
class CORDL_TYPE PropertyBag_BackgroundPosition_KeywordProperty
    : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::BackgroundPositionKeyword> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x69fb138, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BackgroundPositionKeyword GetValue(::ByRef<::UnityEngine::UIElements::BackgroundPosition> container);

  static inline ::UnityEngine::UIElements::PropertyBag_BackgroundPosition_KeywordProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69fb140, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::BackgroundPosition> container, ::UnityEngine::UIElements::BackgroundPositionKeyword value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x69fb060, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69fb130, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69fb128, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_BackgroundPosition_KeywordProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundPosition_KeywordProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_BackgroundPosition_KeywordProperty(PropertyBag_BackgroundPosition_KeywordProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundPosition_KeywordProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_BackgroundPosition_KeywordProperty(PropertyBag_BackgroundPosition_KeywordProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4003 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_KeywordProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_KeywordProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_BackgroundPosition_KeywordProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.BackgroundPosition, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundPosition/PropertyBag/OffsetProperty
class CORDL_TYPE PropertyBag_BackgroundPosition_OffsetProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x69fb158, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::ByRef<::UnityEngine::UIElements::BackgroundPosition> container);

  static inline ::UnityEngine::UIElements::PropertyBag_BackgroundPosition_OffsetProperty* New_ctor();

  /// @brief Method SetValue, addr 0x69fb160, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::BackgroundPosition> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x69fb0c4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x69fb150, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69fb148, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_BackgroundPosition_OffsetProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundPosition_OffsetProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_BackgroundPosition_OffsetProperty(PropertyBag_BackgroundPosition_OffsetProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_BackgroundPosition_OffsetProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_BackgroundPosition_OffsetProperty(PropertyBag_BackgroundPosition_OffsetProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4004 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_OffsetProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_OffsetProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_BackgroundPosition_OffsetProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.BackgroundPosition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BackgroundPosition/PropertyBag
class CORDL_TYPE BackgroundPosition_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::BackgroundPosition> {
public:
  // Declarations
  using KeywordProperty = ::UnityEngine::UIElements::PropertyBag_BackgroundPosition_KeywordProperty;

  using OffsetProperty = ::UnityEngine::UIElements::PropertyBag_BackgroundPosition_OffsetProperty;

  static inline ::UnityEngine::UIElements::BackgroundPosition_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x69faf4c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundPosition_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackgroundPosition_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackgroundPosition_PropertyBag(BackgroundPosition_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackgroundPosition_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackgroundPosition_PropertyBag(BackgroundPosition_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundPosition_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BackgroundPosition_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundPosition_PropertyBag*, "UnityEngine.UIElements", "BackgroundPosition/PropertyBag");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_KeywordProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_KeywordProperty*, "UnityEngine.UIElements", "BackgroundPosition/PropertyBag/KeywordProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_OffsetProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_BackgroundPosition_OffsetProperty*, "UnityEngine.UIElements", "BackgroundPosition/PropertyBag/OffsetProperty");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundPosition, "UnityEngine.UIElements", "BackgroundPosition");
