#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FontDefinition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontDefinition)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::UIElements {
class FontDefinition_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_FontDefinition_FontAssetProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_FontDefinition_FontProperty;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FontDefinition_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_FontDefinition_FontAssetProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_FontDefinition_FontProperty;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FontDefinition_PropertyBag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty);
MARK_VAL_T(::UnityEngine::UIElements::FontDefinition);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FontDefinition
struct CORDL_TYPE FontDefinition {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::FontDefinition_PropertyBag;

  __declspec(property(get = get_font, put = set_font)) ::UnityW<::UnityEngine::Font> font;

  __declspec(property(get = get_fontAsset, put = set_fontAsset)) ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>*();

  /// @brief Method Equals, addr 0x6ba9580, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6ba94f8, size 0x88, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::FontDefinition other);

  /// @brief Method FromFont, addr 0x6ba925c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FontDefinition FromFont(::UnityEngine::Font* f);

  /// @brief Method FromObject, addr 0x6ba9270, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FontDefinition FromObject(::System::Object* obj);

  /// @brief Method FromSDFFont, addr 0x6ba9264, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FontDefinition FromSDFFont(::UnityEngine::TextCore::Text::FontAsset* f);

  /// @brief Method GetHashCode, addr 0x6ba9600, size 0xe4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsEmpty, addr 0x6ba9394, size 0x9c, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method ToString, addr 0x6ba9430, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_font, addr 0x6ba907c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_font();

  /// @brief Method get_fontAsset, addr 0x6ba916c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> get_fontAsset();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>* i___System__IEquatable_1___UnityEngine__UIElements__FontDefinition_();

  /// @brief Method op_Equality, addr 0x6ba96e4, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::FontDefinition left, ::UnityEngine::UIElements::FontDefinition right);

  /// @brief Method op_Inequality, addr 0x6ba9710, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::FontDefinition left, ::UnityEngine::UIElements::FontDefinition right);

  /// @brief Method set_font, addr 0x6ba9084, size 0xe8, virtual false, abstract: false, final false
  inline void set_font(::UnityEngine::Font* value);

  /// @brief Method set_fontAsset, addr 0x6ba9174, size 0xe8, virtual false, abstract: false, final false
  inline void set_fontAsset(::UnityEngine::TextCore::Text::FontAsset* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontDefinition();

  // Ctor Parameters [CppParam { name: "m_Font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: None }, CppParam { name: "m_FontAsset", ty:
  // "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }]
  constexpr FontDefinition(::UnityW<::UnityEngine::Font> m_Font, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> m_FontAsset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4717 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Font, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> m_Font;

  /// @brief Field m_FontAsset, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> m_FontAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FontDefinition, m_Font) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FontDefinition, m_FontAsset) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FontDefinition, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.FontDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FontDefinition/PropertyBag/FontProperty
class CORDL_TYPE PropertyBag_FontDefinition_FontProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::FontDefinition, ::UnityW<::UnityEngine::Font>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6ba992c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> GetValue(::ByRef<::UnityEngine::UIElements::FontDefinition> container);

  static inline ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6ba9934, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::FontDefinition> container, ::UnityEngine::Font* value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6ba9854, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6ba9924, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6ba991c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_FontDefinition_FontProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_FontDefinition_FontProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_FontDefinition_FontProperty(PropertyBag_FontDefinition_FontProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_FontDefinition_FontProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_FontDefinition_FontProperty(PropertyBag_FontDefinition_FontProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4714 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.FontDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FontDefinition/PropertyBag/FontAssetProperty
class CORDL_TYPE PropertyBag_FontDefinition_FontAssetProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::FontDefinition, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6ba9950, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> GetValue(::ByRef<::UnityEngine::UIElements::FontDefinition> container);

  static inline ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6ba9958, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::FontDefinition> container, ::UnityEngine::TextCore::Text::FontAsset* value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6ba98b8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6ba9948, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6ba9940, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_FontDefinition_FontAssetProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_FontDefinition_FontAssetProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_FontDefinition_FontAssetProperty(PropertyBag_FontDefinition_FontAssetProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_FontDefinition_FontAssetProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_FontDefinition_FontAssetProperty(PropertyBag_FontDefinition_FontAssetProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4715 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.FontDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FontDefinition/PropertyBag
class CORDL_TYPE FontDefinition_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::FontDefinition> {
public:
  // Declarations
  using FontAssetProperty = ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty;

  using FontProperty = ::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty;

  static inline ::UnityEngine::UIElements::FontDefinition_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6ba9740, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontDefinition_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontDefinition_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontDefinition_PropertyBag(FontDefinition_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontDefinition_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontDefinition_PropertyBag(FontDefinition_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4716 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FontDefinition_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FontDefinition_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FontDefinition_PropertyBag*, "UnityEngine.UIElements", "FontDefinition/PropertyBag");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontAssetProperty*, "UnityEngine.UIElements", "FontDefinition/PropertyBag/FontAssetProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_FontDefinition_FontProperty*, "UnityEngine.UIElements", "FontDefinition/PropertyBag/FontProperty");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FontDefinition, "UnityEngine.UIElements", "FontDefinition");
