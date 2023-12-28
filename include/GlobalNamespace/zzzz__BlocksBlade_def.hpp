#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BlocksBlade)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Mesh;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
class __BlocksBlade__Element;
}
// Forward declare root types
namespace GlobalNamespace {
class BlocksBlade;
}
namespace GlobalNamespace {
class __BlocksBlade__Element;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlocksBlade);
MARK_REF_PTR_T(::GlobalNamespace::__BlocksBlade__Element);
// Type: ::Element
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5282))
// CS Name: ::BlocksBlade::Element*
class CORDL_TYPE __BlocksBlade__Element : public ::System::Object {
public:
  // Declarations
  /// @brief Field idx, offset 0x10, size 0x4
  __declspec(property(get = __get_idx, put = __set_idx)) int32_t idx;

  /// @brief Field velocity, offset 0x14, size 0x4
  __declspec(property(get = __get_velocity, put = __set_velocity)) float_t velocity;

  constexpr int32_t& __get_idx();

  constexpr int32_t const& __get_idx() const;

  constexpr void __set_idx(int32_t value);

  constexpr float_t& __get_velocity();

  constexpr float_t const& __get_velocity() const;

  constexpr void __set_velocity(float_t value);

  static inline ::GlobalNamespace::__BlocksBlade__Element* New_ctor();

  /// @brief Method .ctor addr 0x2261abc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BlocksBlade__Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BlocksBlade__Element(__BlocksBlade__Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BlocksBlade__Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BlocksBlade__Element(__BlocksBlade__Element const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BlocksBlade__Element();

public:
  /// @brief Field idx, offset: 0x10, size: 0x4, def value: None
  int32_t ___idx;

  /// @brief Field velocity, offset: 0x14, size: 0x4, def value: None
  float_t ___velocity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BlocksBlade__Element, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BlocksBlade
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5283))
// CS Name: ::BlocksBlade*
class CORDL_TYPE BlocksBlade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Element = ::GlobalNamespace::__BlocksBlade__Element;

  /// @brief Field _elementMesh, offset 0x18, size 0x8
  __declspec(property(get = __get__elementMesh, put = __set__elementMesh))::UnityEngine::Mesh* _elementMesh;

  /// @brief Field _material, offset 0x20, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  /// @brief Field _numberOfElements, offset 0x28, size 0x4
  __declspec(property(get = __get__numberOfElements, put = __set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Field _radius, offset 0x2c, size 0x4
  __declspec(property(get = __get__radius, put = __set__radius)) float_t _radius;

  /// @brief Field _length, offset 0x30, size 0x4
  __declspec(property(get = __get__length, put = __set__length)) float_t _length;

  /// @brief Field _minVelocity, offset 0x34, size 0x4
  __declspec(property(get = __get__minVelocity, put = __set__minVelocity)) float_t _minVelocity;

  /// @brief Field _maxVelocity, offset 0x38, size 0x4
  __declspec(property(get = __get__maxVelocity, put = __set__maxVelocity)) float_t _maxVelocity;

  /// @brief Field _elementWidth, offset 0x3c, size 0x4
  __declspec(property(get = __get__elementWidth, put = __set__elementWidth)) float_t _elementWidth;

  /// @brief Field _minElementLength, offset 0x40, size 0x4
  __declspec(property(get = __get__minElementLength, put = __set__minElementLength)) float_t _minElementLength;

  /// @brief Field _maxElementLength, offset 0x44, size 0x4
  __declspec(property(get = __get__maxElementLength, put = __set__maxElementLength)) float_t _maxElementLength;

  /// @brief Field <color>k__BackingField, offset 0x48, size 0x10
  __declspec(property(get = __get__color_k__BackingField, put = __set__color_k__BackingField))::UnityEngine::Color _color_k__BackingField;

  /// @brief Field _elements, offset 0x58, size 0x8
  __declspec(property(get = __get__elements, put = __set__elements))::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>* _elements;

  /// @brief Field _positions, offset 0x60, size 0x8
  __declspec(property(get = __get__positions, put = __set__positions))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _positions;

  /// @brief Field _sizes, offset 0x68, size 0x8
  __declspec(property(get = __get__sizes, put = __set__sizes))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _sizes;

  /// @brief Field _colors, offset 0x70, size 0x8
  __declspec(property(get = __get__colors, put = __set__colors))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colors;

  /// @brief Field _matrices, offset 0x78, size 0x8
  __declspec(property(get = __get__matrices, put = __set__matrices))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> _matrices;

  /// @brief Field _materialPropertyBlock, offset 0x80, size 0x8
  __declspec(property(get = __get__materialPropertyBlock, put = __set__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _layer, offset 0x88, size 0x4
  __declspec(property(get = __get__layer, put = __set__layer)) int32_t _layer;

  /// @brief Field _positionPropertyID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__positionPropertyID, put = setStaticF__positionPropertyID)) int32_t _positionPropertyID;

  /// @brief Field _sizePropertyID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__sizePropertyID, put = setStaticF__sizePropertyID)) int32_t _sizePropertyID;

  /// @brief Field _colorPropertyID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorPropertyID, put = setStaticF__colorPropertyID)) int32_t _colorPropertyID;

  /// @brief Field _zClipPropertyID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__zClipPropertyID, put = setStaticF__zClipPropertyID)) int32_t _zClipPropertyID;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::Mesh*& __get__elementMesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__elementMesh() const;

  constexpr void __set__elementMesh(::UnityEngine::Mesh* value);

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  constexpr int32_t& __get__numberOfElements();

  constexpr int32_t const& __get__numberOfElements() const;

  constexpr void __set__numberOfElements(int32_t value);

  constexpr float_t& __get__radius();

  constexpr float_t const& __get__radius() const;

  constexpr void __set__radius(float_t value);

  constexpr float_t& __get__length();

  constexpr float_t const& __get__length() const;

  constexpr void __set__length(float_t value);

  constexpr float_t& __get__minVelocity();

  constexpr float_t const& __get__minVelocity() const;

  constexpr void __set__minVelocity(float_t value);

  constexpr float_t& __get__maxVelocity();

  constexpr float_t const& __get__maxVelocity() const;

  constexpr void __set__maxVelocity(float_t value);

  constexpr float_t& __get__elementWidth();

  constexpr float_t const& __get__elementWidth() const;

  constexpr void __set__elementWidth(float_t value);

  constexpr float_t& __get__minElementLength();

  constexpr float_t const& __get__minElementLength() const;

  constexpr void __set__minElementLength(float_t value);

  constexpr float_t& __get__maxElementLength();

  constexpr float_t const& __get__maxElementLength() const;

  constexpr void __set__maxElementLength(float_t value);

  constexpr ::UnityEngine::Color& __get__color_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__color_k__BackingField() const;

  constexpr void __set__color_k__BackingField(::UnityEngine::Color value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>*& __get__elements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>*> const& __get__elements() const;

  constexpr void __set__elements(::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>* value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__positions();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__positions() const;

  constexpr void __set__positions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__sizes();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__sizes() const;

  constexpr void __set__sizes(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__colors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__colors() const;

  constexpr void __set__colors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __get__matrices();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __get__matrices() const;

  constexpr void __set__matrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr ::UnityEngine::MaterialPropertyBlock*& __get__materialPropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __get__materialPropertyBlock() const;

  constexpr void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr int32_t& __get__layer();

  constexpr int32_t const& __get__layer() const;

  constexpr void __set__layer(int32_t value);

  static inline void setStaticF__positionPropertyID(int32_t value);

  static inline int32_t getStaticF__positionPropertyID();

  static inline void setStaticF__sizePropertyID(int32_t value);

  static inline int32_t getStaticF__sizePropertyID();

  static inline void setStaticF__colorPropertyID(int32_t value);

  static inline int32_t getStaticF__colorPropertyID();

  static inline void setStaticF__zClipPropertyID(int32_t value);

  static inline int32_t getStaticF__zClipPropertyID();

  /// @brief Method get_color addr 0x226186c size 0xc virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x2261878 size 0xc virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method Start addr 0x2261884 size 0x238 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x2261c28 size 0x458 virtual false final false
  inline void Update();

  /// @brief Method SetUpElement addr 0x2261ac4 size 0x164 virtual false final false
  inline void SetUpElement(::GlobalNamespace::__BlocksBlade__Element* element, float_t velocity, ::UnityEngine::Color color);

  /// @brief Method RandomPointOnCircle addr 0x2262080 size 0x4c virtual false final false
  inline ::UnityEngine::Vector2 RandomPointOnCircle(float_t radius);

  static inline ::GlobalNamespace::BlocksBlade* New_ctor();

  /// @brief Method .ctor addr 0x22620cc size 0x38 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BlocksBlade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlocksBlade(BlocksBlade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlocksBlade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlocksBlade(BlocksBlade const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlocksBlade();

public:
  /// @brief Field _elementMesh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____elementMesh;

  /// @brief Field _material, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

  /// @brief Field _numberOfElements, offset: 0x28, size: 0x4, def value: None
  int32_t ____numberOfElements;

  /// @brief Field _radius, offset: 0x2c, size: 0x4, def value: None
  float_t ____radius;

  /// @brief Field _length, offset: 0x30, size: 0x4, def value: None
  float_t ____length;

  /// @brief Field _minVelocity, offset: 0x34, size: 0x4, def value: None
  float_t ____minVelocity;

  /// @brief Field _maxVelocity, offset: 0x38, size: 0x4, def value: None
  float_t ____maxVelocity;

  /// @brief Field _elementWidth, offset: 0x3c, size: 0x4, def value: None
  float_t ____elementWidth;

  /// @brief Field _minElementLength, offset: 0x40, size: 0x4, def value: None
  float_t ____minElementLength;

  /// @brief Field _maxElementLength, offset: 0x44, size: 0x4, def value: None
  float_t ____maxElementLength;

  /// @brief Field <color>k__BackingField, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____color_k__BackingField;

  /// @brief Field _elements, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BlocksBlade__Element*>* ____elements;

  /// @brief Field _positions, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____positions;

  /// @brief Field _sizes, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____sizes;

  /// @brief Field _colors, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____colors;

  /// @brief Field _matrices, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ____matrices;

  /// @brief Field _materialPropertyBlock, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ____materialPropertyBlock;

  /// @brief Field _layer, offset: 0x88, size: 0x4, def value: None
  int32_t ____layer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlocksBlade, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlocksBlade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlocksBlade*, "", "BlocksBlade");
NEED_NO_BOX(::GlobalNamespace::__BlocksBlade__Element);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BlocksBlade__Element*, "", "BlocksBlade/Element");
