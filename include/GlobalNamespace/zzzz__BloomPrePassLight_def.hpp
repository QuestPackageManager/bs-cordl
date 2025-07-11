#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassLight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassLight)
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
namespace GlobalNamespace {
class BloomPrePassLight_LightsDataItem;
}
namespace GlobalNamespace {
struct BloomPrePassLight_QuadData;
}
namespace GlobalNamespace {
struct BloomPrePassLight_VertexData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLight;
}
namespace GlobalNamespace {
class BloomPrePassLight_LightsDataItem;
}
namespace GlobalNamespace {
struct BloomPrePassLight_QuadData;
}
namespace GlobalNamespace {
struct BloomPrePassLight_VertexData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassLight);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassLight_LightsDataItem);
MARK_VAL_T(::GlobalNamespace::BloomPrePassLight_QuadData);
MARK_VAL_T(::GlobalNamespace::BloomPrePassLight_VertexData);
// Dependencies UnityEngine.Color, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BloomPrePassLight/VertexData
struct CORDL_TYPE BloomPrePassLight_VertexData {
public:
  // Declarations
  /// @brief Field color, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field uv, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_uv, put = __cordl_internal_set_uv)) ::UnityEngine::Vector3 uv;

  /// @brief Field vertex, offset 0x0, size 0xc
  __declspec(property(get = __cordl_internal_get_vertex, put = __cordl_internal_set_vertex)) ::UnityEngine::Vector3 vertex;

  /// @brief Field viewPos, offset 0xc, size 0xc
  __declspec(property(get = __cordl_internal_get_viewPos, put = __cordl_internal_set_viewPos)) ::UnityEngine::Vector3 viewPos;

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_uv() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_uv();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_vertex() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_vertex();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_viewPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_viewPos();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_uv(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_vertex(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_viewPos(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassLight_VertexData();

  // Ctor Parameters [CppParam { name: "vertex", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "viewPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr BloomPrePassLight_VertexData(::UnityEngine::Vector3 vertex, ::UnityEngine::Vector3 viewPos, ::UnityEngine::Color color, ::UnityEngine::Vector3 uv) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___vertex_padding[0x0];
      /// @brief Field vertex, offset: 0x0, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___vertex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___vertex_padding_forAlignment[0x0];
      /// @brief Field vertex, offset: 0x0, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___vertex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___viewPos_padding[0xc];
      /// @brief Field viewPos, offset: 0xc, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___viewPos;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___viewPos_padding_forAlignment[0xc];
      /// @brief Field viewPos, offset: 0xc, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___viewPos_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___color_padding[0x18];
      /// @brief Field color, offset: 0x18, size: 0x10, def value: None
      ::UnityEngine::Color ___color;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___color_padding_forAlignment[0x18];
      /// @brief Field color, offset: 0x18, size: 0x10, def value: None
      ::UnityEngine::Color ___color_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x28
      uint8_t ___uv_padding[0x28];
      /// @brief Field uv, offset: 0x28, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___uv;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x28 for alignment
      uint8_t ___uv_padding_forAlignment[0x28];
      /// @brief Field uv, offset: 0x28, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___uv_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16258 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLight_VertexData, 0x34>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BloomPrePassLight::VertexData
namespace GlobalNamespace {
// Is value type: true
// CS Name: BloomPrePassLight/QuadData
struct CORDL_TYPE BloomPrePassLight_QuadData {
public:
  // Declarations
  /// @brief Field vertex0, offset 0x0, size 0x34
  __declspec(property(get = __cordl_internal_get_vertex0, put = __cordl_internal_set_vertex0)) ::GlobalNamespace::BloomPrePassLight_VertexData vertex0;

  /// @brief Field vertex1, offset 0x34, size 0x34
  __declspec(property(get = __cordl_internal_get_vertex1, put = __cordl_internal_set_vertex1)) ::GlobalNamespace::BloomPrePassLight_VertexData vertex1;

  /// @brief Field vertex2, offset 0x68, size 0x34
  __declspec(property(get = __cordl_internal_get_vertex2, put = __cordl_internal_set_vertex2)) ::GlobalNamespace::BloomPrePassLight_VertexData vertex2;

  /// @brief Field vertex3, offset 0x9c, size 0x34
  __declspec(property(get = __cordl_internal_get_vertex3, put = __cordl_internal_set_vertex3)) ::GlobalNamespace::BloomPrePassLight_VertexData vertex3;

  constexpr ::GlobalNamespace::BloomPrePassLight_VertexData const& __cordl_internal_get_vertex0() const;

  constexpr ::GlobalNamespace::BloomPrePassLight_VertexData& __cordl_internal_get_vertex0();

  constexpr ::GlobalNamespace::BloomPrePassLight_VertexData const& __cordl_internal_get_vertex1() const;

  constexpr ::GlobalNamespace::BloomPrePassLight_VertexData& __cordl_internal_get_vertex1();

  constexpr ::GlobalNamespace::BloomPrePassLight_VertexData const& __cordl_internal_get_vertex2() const;

  constexpr ::GlobalNamespace::BloomPrePassLight_VertexData& __cordl_internal_get_vertex2();

  constexpr ::GlobalNamespace::BloomPrePassLight_VertexData const& __cordl_internal_get_vertex3() const;

  constexpr ::GlobalNamespace::BloomPrePassLight_VertexData& __cordl_internal_get_vertex3();

  constexpr void __cordl_internal_set_vertex0(::GlobalNamespace::BloomPrePassLight_VertexData value);

  constexpr void __cordl_internal_set_vertex1(::GlobalNamespace::BloomPrePassLight_VertexData value);

  constexpr void __cordl_internal_set_vertex2(::GlobalNamespace::BloomPrePassLight_VertexData value);

  constexpr void __cordl_internal_set_vertex3(::GlobalNamespace::BloomPrePassLight_VertexData value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassLight_QuadData();

  // Ctor Parameters [CppParam { name: "vertex0", ty: "::GlobalNamespace::BloomPrePassLight_VertexData", modifiers: "", def_value: None }, CppParam { name: "vertex1", ty:
  // "::GlobalNamespace::BloomPrePassLight_VertexData", modifiers: "", def_value: None }, CppParam { name: "vertex2", ty: "::GlobalNamespace::BloomPrePassLight_VertexData", modifiers: "", def_value:
  // None }, CppParam { name: "vertex3", ty: "::GlobalNamespace::BloomPrePassLight_VertexData", modifiers: "", def_value: None }]
  constexpr BloomPrePassLight_QuadData(::GlobalNamespace::BloomPrePassLight_VertexData vertex0, ::GlobalNamespace::BloomPrePassLight_VertexData vertex1,
                                       ::GlobalNamespace::BloomPrePassLight_VertexData vertex2, ::GlobalNamespace::BloomPrePassLight_VertexData vertex3) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___vertex0_padding[0x0];
      /// @brief Field vertex0, offset: 0x0, size: 0x34, def value: None
      ::GlobalNamespace::BloomPrePassLight_VertexData ___vertex0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___vertex0_padding_forAlignment[0x0];
      /// @brief Field vertex0, offset: 0x0, size: 0x34, def value: None
      ::GlobalNamespace::BloomPrePassLight_VertexData ___vertex0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x34
      uint8_t ___vertex1_padding[0x34];
      /// @brief Field vertex1, offset: 0x34, size: 0x34, def value: None
      ::GlobalNamespace::BloomPrePassLight_VertexData ___vertex1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x34 for alignment
      uint8_t ___vertex1_padding_forAlignment[0x34];
      /// @brief Field vertex1, offset: 0x34, size: 0x34, def value: None
      ::GlobalNamespace::BloomPrePassLight_VertexData ___vertex1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x68
      uint8_t ___vertex2_padding[0x68];
      /// @brief Field vertex2, offset: 0x68, size: 0x34, def value: None
      ::GlobalNamespace::BloomPrePassLight_VertexData ___vertex2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x68 for alignment
      uint8_t ___vertex2_padding_forAlignment[0x68];
      /// @brief Field vertex2, offset: 0x68, size: 0x34, def value: None
      ::GlobalNamespace::BloomPrePassLight_VertexData ___vertex2_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x9c
      uint8_t ___vertex3_padding[0x9c];
      /// @brief Field vertex3, offset: 0x9c, size: 0x34, def value: None
      ::GlobalNamespace::BloomPrePassLight_VertexData ___vertex3;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x9c for alignment
      uint8_t ___vertex3_padding_forAlignment[0x9c];
      /// @brief Field vertex3, offset: 0x9c, size: 0x34, def value: None
      ::GlobalNamespace::BloomPrePassLight_VertexData ___vertex3_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16259 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLight_QuadData, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassLight/LightsDataItem
class CORDL_TYPE BloomPrePassLight_LightsDataItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightType, put = __cordl_internal_set_lightType)) ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> lightType;

  /// @brief Field lights, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lights, put = __cordl_internal_set_lights)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* lights;

  static inline ::GlobalNamespace::BloomPrePassLight_LightsDataItem* New_ctor(::GlobalNamespace::BloomPrePassLightTypeSO* lightType,
                                                                              ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* lights);

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& __cordl_internal_get_lightType() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& __cordl_internal_get_lightType();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* const& __cordl_internal_get_lights() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*& __cordl_internal_get_lights();

  constexpr void __cordl_internal_set_lightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value);

  constexpr void __cordl_internal_set_lights(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* value);

  /// @brief Method .ctor, addr 0x39d89fc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BloomPrePassLightTypeSO* lightType, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* lights);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassLight_LightsDataItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLight_LightsDataItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassLight_LightsDataItem(BloomPrePassLight_LightsDataItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLight_LightsDataItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassLight_LightsDataItem(BloomPrePassLight_LightsDataItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16260 };

  /// @brief Field lightType, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> ___lightType;

  /// @brief Field lights, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>* ___lights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassLight_LightsDataItem, ___lightType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassLight_LightsDataItem, ___lights) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLight_LightsDataItem, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassLight
class CORDL_TYPE BloomPrePassLight : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LightsDataItem = ::GlobalNamespace::BloomPrePassLight_LightsDataItem;

  using QuadData = ::GlobalNamespace::BloomPrePassLight_QuadData;

  using VertexData = ::GlobalNamespace::BloomPrePassLight_VertexData;

  /// @brief Field _bloomLightsDict, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__bloomLightsDict, put = setStaticF__bloomLightsDict)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>* _bloomLightsDict;

  /// @brief Field _isBeingDestroyed, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__isBeingDestroyed, put = __cordl_internal_set__isBeingDestroyed)) bool _isBeingDestroyed;

  /// @brief Field _isRegistered, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isRegistered, put = __cordl_internal_set__isRegistered)) bool _isRegistered;

  /// @brief Field _lightType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightType, put = __cordl_internal_set__lightType)) ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> _lightType;

  /// @brief Field _lightsDataItems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__lightsDataItems,
                      put = setStaticF__lightsDataItems)) ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* _lightsDataItems;

  /// @brief Field _registeredWithLightType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__registeredWithLightType, put = __cordl_internal_set__registeredWithLightType)) ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>
      _registeredWithLightType;

  /// @brief Method DidRegisterLight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DidRegisterLight();

  /// @brief Method FillMeshData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void FillMeshData(::ByRef<int32_t> lightNum, ::ArrayW<::GlobalNamespace::BloomPrePassLight_QuadData, ::Array<::GlobalNamespace::BloomPrePassLight_QuadData>*> lightQuads,
                           ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t lineWidth);

  static inline ::GlobalNamespace::BloomPrePassLight* New_ctor();

  /// @brief Method OnDestroy, addr 0x39d89f0, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x39d8928, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39d8680, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method RegisterLight, addr 0x39d8684, size 0x2a4, virtual false, abstract: false, final false
  inline void RegisterLight();

  /// @brief Method UnregisterLight, addr 0x39d892c, size 0xc4, virtual false, abstract: false, final false
  inline void UnregisterLight();

  constexpr bool const& __cordl_internal_get__isBeingDestroyed() const;

  constexpr bool& __cordl_internal_get__isBeingDestroyed();

  constexpr bool const& __cordl_internal_get__isRegistered() const;

  constexpr bool& __cordl_internal_get__isRegistered();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& __cordl_internal_get__lightType() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& __cordl_internal_get__lightType();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& __cordl_internal_get__registeredWithLightType() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& __cordl_internal_get__registeredWithLightType();

  constexpr void __cordl_internal_set__isBeingDestroyed(bool value);

  constexpr void __cordl_internal_set__isRegistered(bool value);

  constexpr void __cordl_internal_set__lightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value);

  constexpr void __cordl_internal_set__registeredWithLightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value);

  /// @brief Method .ctor, addr 0x39d8a28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>,
                                                             ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*
  getStaticF__bloomLightsDict();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* getStaticF__lightsDataItems();

  /// @brief Method get_bloomLightsDict, addr 0x39d85d0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>,
                                                             ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*
  get_bloomLightsDict();

  /// @brief Method get_lightsDataItems, addr 0x39d8628, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* get_lightsDataItems();

  static inline void setStaticF__bloomLightsDict(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>,
                                                                                              ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>* value);

  static inline void setStaticF__lightsDataItems(::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassLight();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLight", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassLight(BloomPrePassLight&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLight", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassLight(BloomPrePassLight const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16261 };

  /// @brief Field kColorOffset offset 0xffffffff size 0x4
  static constexpr int32_t kColorOffset{ static_cast<int32_t>(0x18) };

  /// @brief Field kColorSize offset 0xffffffff size 0x4
  static constexpr int32_t kColorSize{ static_cast<int32_t>(0x10) };

  /// @brief Field kFloatSize offset 0xffffffff size 0x4
  static constexpr int32_t kFloatSize{ static_cast<int32_t>(0x4) };

  /// @brief Field kUvOffset offset 0xffffffff size 0x4
  static constexpr int32_t kUvOffset{ static_cast<int32_t>(0x28) };

  /// @brief Field kUvSize offset 0xffffffff size 0x4
  static constexpr int32_t kUvSize{ static_cast<int32_t>(0xc) };

  /// @brief Field kVertexDataSize offset 0xffffffff size 0x4
  static constexpr int32_t kVertexDataSize{ static_cast<int32_t>(0x34) };

  /// @brief Field kVertexOffset offset 0xffffffff size 0x4
  static constexpr int32_t kVertexOffset{ static_cast<int32_t>(0x0) };

  /// @brief Field kVertexSize offset 0xffffffff size 0x4
  static constexpr int32_t kVertexSize{ static_cast<int32_t>(0xc) };

  /// @brief Field kViewPosOffset offset 0xffffffff size 0x4
  static constexpr int32_t kViewPosOffset{ static_cast<int32_t>(0xc) };

  /// @brief Field kViewPosSize offset 0xffffffff size 0x4
  static constexpr int32_t kViewPosSize{ static_cast<int32_t>(0xc) };

  /// @brief Field _lightType, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> ____lightType;

  /// @brief Field _registeredWithLightType, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> ____registeredWithLightType;

  /// @brief Field _isRegistered, offset: 0x30, size: 0x1, def value: None
  bool ____isRegistered;

  /// @brief Field _isBeingDestroyed, offset: 0x31, size: 0x1, def value: None
  bool ____isBeingDestroyed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassLight, ____lightType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassLight, ____registeredWithLightType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassLight, ____isRegistered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassLight, ____isBeingDestroyed) == 0x31, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLight, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLight*, "", "BloomPrePassLight");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLight_LightsDataItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLight_LightsDataItem*, "", "BloomPrePassLight/LightsDataItem");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLight_QuadData, "", "BloomPrePassLight/QuadData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLight_VertexData, "", "BloomPrePassLight/VertexData");
