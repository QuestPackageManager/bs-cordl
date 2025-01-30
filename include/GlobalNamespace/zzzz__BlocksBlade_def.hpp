#pragma once
// IWYU pragma private; include "GlobalNamespace/BlocksBlade.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BlocksBlade)
namespace GlobalNamespace {
class BlocksBlade_Element;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class BlocksBlade;
}
namespace GlobalNamespace {
class BlocksBlade_Element;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlocksBlade);
MARK_REF_PTR_T(::GlobalNamespace::BlocksBlade_Element);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlocksBlade/Element
class CORDL_TYPE BlocksBlade_Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field idx, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_idx, put = __cordl_internal_set_idx)) int32_t idx;

  /// @brief Field velocity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_velocity, put = __cordl_internal_set_velocity)) float_t velocity;

  static inline ::GlobalNamespace::BlocksBlade_Element* New_ctor();

  constexpr int32_t const& __cordl_internal_get_idx() const;

  constexpr int32_t& __cordl_internal_get_idx();

  constexpr float_t const& __cordl_internal_get_velocity() const;

  constexpr float_t& __cordl_internal_get_velocity();

  constexpr void __cordl_internal_set_idx(int32_t value);

  constexpr void __cordl_internal_set_velocity(float_t value);

  /// @brief Method .ctor, addr 0x3bead9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlocksBlade_Element();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlocksBlade_Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlocksBlade_Element(BlocksBlade_Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlocksBlade_Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlocksBlade_Element(BlocksBlade_Element const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4645 };

  /// @brief Field idx, offset: 0x10, size: 0x4, def value: None
  int32_t ___idx;

  /// @brief Field velocity, offset: 0x14, size: 0x4, def value: None
  float_t ___velocity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlocksBlade_Element, ___idx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade_Element, ___velocity) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlocksBlade_Element, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BlocksBlade
class CORDL_TYPE BlocksBlade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Element = ::GlobalNamespace::BlocksBlade_Element;

  /// @brief Field _colorPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__colorPropertyID, put = setStaticF__colorPropertyID)) int32_t _colorPropertyID;

  /// @brief Field <color>k__BackingField, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__color_k__BackingField, put = __cordl_internal_set__color_k__BackingField)) ::UnityEngine::Color _color_k__BackingField;

  /// @brief Field _colors, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colors;

  /// @brief Field _elementMesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__elementMesh, put = __cordl_internal_set__elementMesh)) ::UnityW<::UnityEngine::Mesh> _elementMesh;

  /// @brief Field _elementWidth, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__elementWidth, put = __cordl_internal_set__elementWidth)) float_t _elementWidth;

  /// @brief Field _elements, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__elements, put = __cordl_internal_set__elements)) ::System::Collections::Generic::List_1<::GlobalNamespace::BlocksBlade_Element*>* _elements;

  /// @brief Field _layer, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__layer, put = __cordl_internal_set__layer)) int32_t _layer;

  /// @brief Field _length, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) float_t _length;

  /// @brief Field _material, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _materialPropertyBlock, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlock, put = __cordl_internal_set__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _matrices, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__matrices, put = __cordl_internal_set__matrices)) ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> _matrices;

  /// @brief Field _maxElementLength, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxElementLength, put = __cordl_internal_set__maxElementLength)) float_t _maxElementLength;

  /// @brief Field _maxVelocity, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__maxVelocity, put = __cordl_internal_set__maxVelocity)) float_t _maxVelocity;

  /// @brief Field _minElementLength, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__minElementLength, put = __cordl_internal_set__minElementLength)) float_t _minElementLength;

  /// @brief Field _minVelocity, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__minVelocity, put = __cordl_internal_set__minVelocity)) float_t _minVelocity;

  /// @brief Field _numberOfElements, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElements, put = __cordl_internal_set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Field _positionPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__positionPropertyID, put = setStaticF__positionPropertyID)) int32_t _positionPropertyID;

  /// @brief Field _positions, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__positions, put = __cordl_internal_set__positions)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _positions;

  /// @brief Field _radius, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__radius, put = __cordl_internal_set__radius)) float_t _radius;

  /// @brief Field _sizePropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__sizePropertyID, put = setStaticF__sizePropertyID)) int32_t _sizePropertyID;

  /// @brief Field _sizes, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sizes, put = __cordl_internal_set__sizes)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _sizes;

  /// @brief Field _zClipPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__zClipPropertyID, put = setStaticF__zClipPropertyID)) int32_t _zClipPropertyID;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  static inline ::GlobalNamespace::BlocksBlade* New_ctor();

  /// @brief Method RandomPointOnCircle, addr 0x3beb31c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 RandomPointOnCircle(float_t radius);

  /// @brief Method SetUpElement, addr 0x3beada4, size 0x168, virtual false, abstract: false, final false
  inline void SetUpElement(::GlobalNamespace::BlocksBlade_Element* element, float_t velocity, ::UnityEngine::Color color);

  /// @brief Method Start, addr 0x3beab70, size 0x22c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3beaf0c, size 0x410, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__colors();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__elementMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__elementMesh();

  constexpr float_t const& __cordl_internal_get__elementWidth() const;

  constexpr float_t& __cordl_internal_get__elementWidth();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlocksBlade_Element*>* const& __cordl_internal_get__elements() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BlocksBlade_Element*>*& __cordl_internal_get__elements();

  constexpr int32_t const& __cordl_internal_get__layer() const;

  constexpr int32_t& __cordl_internal_get__layer();

  constexpr float_t const& __cordl_internal_get__length() const;

  constexpr float_t& __cordl_internal_get__length();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialPropertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialPropertyBlock();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get__matrices() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get__matrices();

  constexpr float_t const& __cordl_internal_get__maxElementLength() const;

  constexpr float_t& __cordl_internal_get__maxElementLength();

  constexpr float_t const& __cordl_internal_get__maxVelocity() const;

  constexpr float_t& __cordl_internal_get__maxVelocity();

  constexpr float_t const& __cordl_internal_get__minElementLength() const;

  constexpr float_t& __cordl_internal_get__minElementLength();

  constexpr float_t const& __cordl_internal_get__minVelocity() const;

  constexpr float_t& __cordl_internal_get__minVelocity();

  constexpr int32_t const& __cordl_internal_get__numberOfElements() const;

  constexpr int32_t& __cordl_internal_get__numberOfElements();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__positions() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__positions();

  constexpr float_t const& __cordl_internal_get__radius() const;

  constexpr float_t& __cordl_internal_get__radius();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__sizes() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__sizes();

  constexpr void __cordl_internal_set__color_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__elementMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__elementWidth(float_t value);

  constexpr void __cordl_internal_set__elements(::System::Collections::Generic::List_1<::GlobalNamespace::BlocksBlade_Element*>* value);

  constexpr void __cordl_internal_set__layer(int32_t value);

  constexpr void __cordl_internal_set__length(float_t value);

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set__matrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set__maxElementLength(float_t value);

  constexpr void __cordl_internal_set__maxVelocity(float_t value);

  constexpr void __cordl_internal_set__minElementLength(float_t value);

  constexpr void __cordl_internal_set__minVelocity(float_t value);

  constexpr void __cordl_internal_set__numberOfElements(int32_t value);

  constexpr void __cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__radius(float_t value);

  constexpr void __cordl_internal_set__sizes(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method .ctor, addr 0x3beb368, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__colorPropertyID();

  static inline int32_t getStaticF__positionPropertyID();

  static inline int32_t getStaticF__sizePropertyID();

  static inline int32_t getStaticF__zClipPropertyID();

  /// @brief Method get_color, addr 0x3beab58, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  static inline void setStaticF__colorPropertyID(int32_t value);

  static inline void setStaticF__positionPropertyID(int32_t value);

  static inline void setStaticF__sizePropertyID(int32_t value);

  static inline void setStaticF__zClipPropertyID(int32_t value);

  /// @brief Method set_color, addr 0x3beab64, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlocksBlade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlocksBlade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlocksBlade(BlocksBlade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlocksBlade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlocksBlade(BlocksBlade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4646 };

  /// @brief Field _elementMesh, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____elementMesh;

  /// @brief Field _material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _numberOfElements, offset: 0x30, size: 0x4, def value: None
  int32_t ____numberOfElements;

  /// @brief Field _radius, offset: 0x34, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _length, offset: 0x38, size: 0x4, def value: None
  float_t ____length;

  /// @brief Field _minVelocity, offset: 0x3c, size: 0x4, def value: None
  float_t ____minVelocity;

  /// @brief Field _maxVelocity, offset: 0x40, size: 0x4, def value: None
  float_t ____maxVelocity;

  /// @brief Field _elementWidth, offset: 0x44, size: 0x4, def value: None
  float_t ____elementWidth;

  /// @brief Field _minElementLength, offset: 0x48, size: 0x4, def value: None
  float_t ____minElementLength;

  /// @brief Field _maxElementLength, offset: 0x4c, size: 0x4, def value: None
  float_t ____maxElementLength;

  /// @brief Field <color>k__BackingField, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____color_k__BackingField;

  /// @brief Field _elements, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BlocksBlade_Element*>* ____elements;

  /// @brief Field _positions, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____positions;

  /// @brief Field _sizes, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____sizes;

  /// @brief Field _colors, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____colors;

  /// @brief Field _matrices, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ____matrices;

  /// @brief Field _materialPropertyBlock, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____materialPropertyBlock;

  /// @brief Field _layer, offset: 0x90, size: 0x4, def value: None
  int32_t ____layer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____elementMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____numberOfElements) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____radius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____length) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____minVelocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____maxVelocity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____elementWidth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____minElementLength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____maxElementLength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____color_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____elements) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____positions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____sizes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____colors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____matrices) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____materialPropertyBlock) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BlocksBlade, ____layer) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlocksBlade, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlocksBlade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlocksBlade*, "", "BlocksBlade");
NEED_NO_BOX(::GlobalNamespace::BlocksBlade_Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlocksBlade_Element*, "", "BlocksBlade/Element");
