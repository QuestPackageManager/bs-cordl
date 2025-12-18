#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Cursor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cursor)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class Cursor_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_Cursor_DefaultCursorIdProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Cursor_HotspotProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Cursor_TextureProperty;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Cursor_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_Cursor_DefaultCursorIdProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Cursor_HotspotProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Cursor_TextureProperty;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Cursor_PropertyBag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Cursor_DefaultCursorIdProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Cursor_HotspotProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Cursor_TextureProperty);
MARK_VAL_T(::UnityEngine::UIElements::Cursor);
// Dependencies UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Cursor
struct CORDL_TYPE Cursor {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::Cursor_PropertyBag;

  __declspec(property(get = get_defaultCursorId, put = set_defaultCursorId)) int32_t defaultCursorId;

  __declspec(property(get = get_hotspot, put = set_hotspot)) ::UnityEngine::Vector2 hotspot;

  __declspec(property(get = get_texture, put = set_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Cursor>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Cursor>*();

  /// @brief Method Equals, addr 0x6bb72d0, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6bb7364, size 0xb4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Cursor other);

  /// @brief Method GetHashCode, addr 0x6bb7418, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x6bb750c, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_defaultCursorId, addr 0x6bb72c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_defaultCursorId();

  /// @brief Method get_hotspot, addr 0x6bb72b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_hotspot();

  /// @brief Method get_texture, addr 0x6bb72a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_texture();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Cursor>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Cursor>* i___System__IEquatable_1___UnityEngine__UIElements__Cursor_();

  /// @brief Method op_Equality, addr 0x6bb74dc, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Cursor style1, ::UnityEngine::UIElements::Cursor style2);

  /// @brief Method set_defaultCursorId, addr 0x6bb72c8, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultCursorId(int32_t value);

  /// @brief Method set_hotspot, addr 0x6bb72b8, size 0x8, virtual false, abstract: false, final false
  inline void set_hotspot(::UnityEngine::Vector2 value);

  /// @brief Method set_texture, addr 0x6bb72a8, size 0x8, virtual false, abstract: false, final false
  inline void set_texture(::UnityEngine::Texture2D* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cursor();

  // Ctor Parameters [CppParam { name: "_texture_k__BackingField", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "_hotspot_k__BackingField", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_defaultCursorId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Cursor(::UnityW<::UnityEngine::Texture2D> _texture_k__BackingField, ::UnityEngine::Vector2 _hotspot_k__BackingField, int32_t _defaultCursorId_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4373 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <texture>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> _texture_k__BackingField;

  /// @brief Field <hotspot>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 _hotspot_k__BackingField;

  /// @brief Field <defaultCursorId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _defaultCursorId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Cursor, _texture_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Cursor, _hotspot_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Cursor, _defaultCursorId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Cursor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Cursor
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Cursor/PropertyBag/TextureProperty
class CORDL_TYPE PropertyBag_Cursor_TextureProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Cursor, ::UnityW<::UnityEngine::Texture2D>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6bb7860, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> GetValue(::ByRef<::UnityEngine::UIElements::Cursor> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Cursor_TextureProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb7868, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Cursor> container, ::UnityEngine::Texture2D* value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6bb7724, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb7858, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb7850, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Cursor_TextureProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Cursor_TextureProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Cursor_TextureProperty(PropertyBag_Cursor_TextureProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Cursor_TextureProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Cursor_TextureProperty(PropertyBag_Cursor_TextureProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4369 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Cursor_TextureProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Cursor_TextureProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Cursor_TextureProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Cursor, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Cursor/PropertyBag/HotspotProperty
class CORDL_TYPE PropertyBag_Cursor_HotspotProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Cursor, ::UnityEngine::Vector2> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6bb7880, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 GetValue(::ByRef<::UnityEngine::UIElements::Cursor> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Cursor_HotspotProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb7888, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Cursor> container, ::UnityEngine::Vector2 value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6bb7788, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb7878, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb7870, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Cursor_HotspotProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Cursor_HotspotProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Cursor_HotspotProperty(PropertyBag_Cursor_HotspotProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Cursor_HotspotProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Cursor_HotspotProperty(PropertyBag_Cursor_HotspotProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4370 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Cursor_HotspotProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Cursor_HotspotProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Cursor_HotspotProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Cursor
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Cursor/PropertyBag/DefaultCursorIdProperty
class CORDL_TYPE PropertyBag_Cursor_DefaultCursorIdProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Cursor, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6bb78a0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetValue(::ByRef<::UnityEngine::UIElements::Cursor> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Cursor_DefaultCursorIdProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb78a8, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Cursor> container, int32_t value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6bb77ec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb7898, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb7890, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Cursor_DefaultCursorIdProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Cursor_DefaultCursorIdProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Cursor_DefaultCursorIdProperty(PropertyBag_Cursor_DefaultCursorIdProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Cursor_DefaultCursorIdProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Cursor_DefaultCursorIdProperty(PropertyBag_Cursor_DefaultCursorIdProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4371 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Cursor_DefaultCursorIdProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Cursor_DefaultCursorIdProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Cursor_DefaultCursorIdProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Cursor
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Cursor/PropertyBag
class CORDL_TYPE Cursor_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Cursor> {
public:
  // Declarations
  using DefaultCursorIdProperty = ::UnityEngine::UIElements::PropertyBag_Cursor_DefaultCursorIdProperty;

  using HotspotProperty = ::UnityEngine::UIElements::PropertyBag_Cursor_HotspotProperty;

  using TextureProperty = ::UnityEngine::UIElements::PropertyBag_Cursor_TextureProperty;

  static inline ::UnityEngine::UIElements::Cursor_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6bb75c0, size 0x164, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cursor_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cursor_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cursor_PropertyBag(Cursor_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cursor_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cursor_PropertyBag(Cursor_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Cursor_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Cursor_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Cursor_PropertyBag*, "UnityEngine.UIElements", "Cursor/PropertyBag");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Cursor_DefaultCursorIdProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Cursor_DefaultCursorIdProperty*, "UnityEngine.UIElements", "Cursor/PropertyBag/DefaultCursorIdProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Cursor_HotspotProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Cursor_HotspotProperty*, "UnityEngine.UIElements", "Cursor/PropertyBag/HotspotProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Cursor_TextureProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Cursor_TextureProperty*, "UnityEngine.UIElements", "Cursor/PropertyBag/TextureProperty");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Cursor, "UnityEngine.UIElements", "Cursor");
