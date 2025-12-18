#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Background.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Background)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class Background_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_Background_RenderTextureProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Background_SpriteProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Background_TextureProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Background_VectorImageProperty;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Background_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_Background_RenderTextureProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Background_SpriteProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Background_TextureProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_Background_VectorImageProperty;
}
namespace UnityEngine::UIElements {
struct Background;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Background_PropertyBag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Background_RenderTextureProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Background_SpriteProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Background_TextureProperty);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropertyBag_Background_VectorImageProperty);
MARK_VAL_T(::UnityEngine::UIElements::Background);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Background
struct CORDL_TYPE Background {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::Background_PropertyBag;

  __declspec(property(get = get_renderTexture, put = set_renderTexture)) ::UnityW<::UnityEngine::RenderTexture> renderTexture;

  __declspec(property(get = get_sprite, put = set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  __declspec(property(get = get_texture, put = set_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  __declspec(property(get = get_vectorImage, put = set_vectorImage)) ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Background>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Background>*();

  /// @brief Method Equals, addr 0x6c0f850, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6c0f81c, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Background other);

  /// @brief Method FromObject, addr 0x6c0f36c, size 0x24c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromObject(::System::Object* obj);

  /// @brief Method FromRenderTexture, addr 0x6c0f2d0, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromRenderTexture(::UnityEngine::RenderTexture* rt);

  /// @brief Method FromSprite, addr 0x6c0f304, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromSprite(::UnityEngine::Sprite* s);

  /// @brief Method FromTexture2D, addr 0x6c0f29c, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromTexture2D(::UnityEngine::Texture2D* t);

  /// @brief Method FromVectorImage, addr 0x6c0f338, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromVectorImage(::UnityEngine::UIElements::VectorImage* vi);

  /// @brief Method GetHashCode, addr 0x6c0f8e4, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsEmpty, addr 0x6c0f5b8, size 0xec, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method ToString, addr 0x6c0f97c, size 0x140, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_renderTexture, addr 0x6c0f194, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_renderTexture();

  /// @brief Method get_sprite, addr 0x6c0f10c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method get_texture, addr 0x6c0f084, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_texture();

  /// @brief Method get_vectorImage, addr 0x6c0d988, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VectorImage> get_vectorImage();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Background>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Background>* i___System__IEquatable_1___UnityEngine__UIElements__Background_();

  /// @brief Method op_Equality, addr 0x6c0f6a4, size 0x10c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Background lhs, ::UnityEngine::UIElements::Background rhs);

  /// @brief Method op_Implicit, addr 0x6c0f7e8, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background op_Implicit___UnityEngine__UIElements__Background(::UnityEngine::Texture2D* v);

  /// @brief Method op_Inequality, addr 0x6c0f7b0, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Background lhs, ::UnityEngine::UIElements::Background rhs);

  /// @brief Method set_renderTexture, addr 0x6c0f19c, size 0x80, virtual false, abstract: false, final false
  inline void set_renderTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_sprite, addr 0x6c0f114, size 0x80, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_texture, addr 0x6c0f08c, size 0x80, virtual false, abstract: false, final false
  inline void set_texture(::UnityEngine::Texture2D* value);

  /// @brief Method set_vectorImage, addr 0x6c0f21c, size 0x80, virtual false, abstract: false, final false
  inline void set_vectorImage(::UnityEngine::UIElements::VectorImage* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Background();

  // Ctor Parameters [CppParam { name: "m_Texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "m_Sprite", ty: "::UnityW<::UnityEngine::Sprite>",
  // modifiers: "", def_value: None }, CppParam { name: "m_RenderTexture", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "m_VectorImage", ty:
  // "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: None }]
  constexpr Background(::UnityW<::UnityEngine::Texture2D> m_Texture, ::UnityW<::UnityEngine::Sprite> m_Sprite, ::UnityW<::UnityEngine::RenderTexture> m_RenderTexture,
                       ::UnityW<::UnityEngine::UIElements::VectorImage> m_VectorImage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4703 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Texture, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> m_Texture;

  /// @brief Field m_Sprite, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> m_Sprite;

  /// @brief Field m_RenderTexture, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> m_RenderTexture;

  /// @brief Field m_VectorImage, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VectorImage> m_VectorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Background, m_Texture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Background, m_Sprite) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Background, m_RenderTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Background, m_VectorImage) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Background, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Background
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Background/PropertyBag/TextureProperty
class CORDL_TYPE PropertyBag_Background_TextureProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Background, ::UnityW<::UnityEngine::Texture2D>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6c0fe10, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> GetValue(::ByRef<::UnityEngine::UIElements::Background> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Background_TextureProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c0fe18, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Background> container, ::UnityEngine::Texture2D* value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6c0fc70, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c0fe08, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c0fe00, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Background_TextureProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Background_TextureProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Background_TextureProperty(PropertyBag_Background_TextureProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Background_TextureProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Background_TextureProperty(PropertyBag_Background_TextureProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4698 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Background_TextureProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Background_TextureProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Background_TextureProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Background
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Background/PropertyBag/SpriteProperty
class CORDL_TYPE PropertyBag_Background_SpriteProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Background, ::UnityW<::UnityEngine::Sprite>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6c0fe34, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> GetValue(::ByRef<::UnityEngine::UIElements::Background> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Background_SpriteProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c0fe3c, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Background> container, ::UnityEngine::Sprite* value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6c0fcd4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c0fe2c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c0fe24, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Background_SpriteProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Background_SpriteProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Background_SpriteProperty(PropertyBag_Background_SpriteProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Background_SpriteProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Background_SpriteProperty(PropertyBag_Background_SpriteProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4699 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Background_SpriteProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Background_SpriteProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Background_SpriteProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Background
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Background/PropertyBag/RenderTextureProperty
class CORDL_TYPE PropertyBag_Background_RenderTextureProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Background, ::UnityW<::UnityEngine::RenderTexture>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6c0fe58, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> GetValue(::ByRef<::UnityEngine::UIElements::Background> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Background_RenderTextureProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c0fe60, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Background> container, ::UnityEngine::RenderTexture* value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6c0fd38, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c0fe50, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c0fe48, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Background_RenderTextureProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Background_RenderTextureProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Background_RenderTextureProperty(PropertyBag_Background_RenderTextureProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Background_RenderTextureProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Background_RenderTextureProperty(PropertyBag_Background_RenderTextureProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4700 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Background_RenderTextureProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Background_RenderTextureProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Background_RenderTextureProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Background
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Background/PropertyBag/VectorImageProperty
class CORDL_TYPE PropertyBag_Background_VectorImageProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::Background, ::UnityW<::UnityEngine::UIElements::VectorImage>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x6c0fe7c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VectorImage> GetValue(::ByRef<::UnityEngine::UIElements::Background> container);

  static inline ::UnityEngine::UIElements::PropertyBag_Background_VectorImageProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6c0fe84, size 0xc, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::UnityEngine::UIElements::Background> container, ::UnityEngine::UIElements::VectorImage* value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x6c0fd9c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6c0fe74, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6c0fe6c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_Background_VectorImageProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Background_VectorImageProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_Background_VectorImageProperty(PropertyBag_Background_VectorImageProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_Background_VectorImageProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_Background_VectorImageProperty(PropertyBag_Background_VectorImageProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4701 };

  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Background_VectorImageProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_Background_VectorImageProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropertyBag_Background_VectorImageProperty, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.Background
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Background/PropertyBag
class CORDL_TYPE Background_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::Background> {
public:
  // Declarations
  using RenderTextureProperty = ::UnityEngine::UIElements::PropertyBag_Background_RenderTextureProperty;

  using SpriteProperty = ::UnityEngine::UIElements::PropertyBag_Background_SpriteProperty;

  using TextureProperty = ::UnityEngine::UIElements::PropertyBag_Background_TextureProperty;

  using VectorImageProperty = ::UnityEngine::UIElements::PropertyBag_Background_VectorImageProperty;

  static inline ::UnityEngine::UIElements::Background_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6c0fabc, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Background_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Background_PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Background_PropertyBag(Background_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Background_PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Background_PropertyBag(Background_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4702 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Background_PropertyBag, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Background_PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Background_PropertyBag*, "UnityEngine.UIElements", "Background/PropertyBag");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Background_RenderTextureProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Background_RenderTextureProperty*, "UnityEngine.UIElements", "Background/PropertyBag/RenderTextureProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Background_SpriteProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Background_SpriteProperty*, "UnityEngine.UIElements", "Background/PropertyBag/SpriteProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Background_TextureProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Background_TextureProperty*, "UnityEngine.UIElements", "Background/PropertyBag/TextureProperty");
NEED_NO_BOX(::UnityEngine::UIElements::PropertyBag_Background_VectorImageProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropertyBag_Background_VectorImageProperty*, "UnityEngine.UIElements", "Background/PropertyBag/VectorImageProperty");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Background, "UnityEngine.UIElements", "Background");
