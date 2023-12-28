#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorArrayLightWithIds)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class MaterialController;
}
namespace GlobalNamespace {
class __ColorArrayLightWithIds__ColorArrayLightWithId;
}
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorArrayLightWithIds;
}
namespace GlobalNamespace {
class __ColorArrayLightWithIds__ColorArrayLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorArrayLightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId);
// Type: ::ColorArrayLightWithId
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14543))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14519))
// CS Name: ::ColorArrayLightWithIds::ColorArrayLightWithId*
class CORDL_TYPE __ColorArrayLightWithIds__ColorArrayLightWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
  // Declarations
  /// @brief Field _index, offset 0x30, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  /// @brief Field didSetColorEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_didSetColorEvent, put = __set_didSetColorEvent))::System::Action_2<int32_t, ::UnityEngine::Color>* didSetColorEvent;

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  constexpr ::System::Action_2<int32_t, ::UnityEngine::Color>*& __get_didSetColorEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, ::UnityEngine::Color>*> const& __get_didSetColorEvent() const;

  constexpr void __set_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value);

  /// @brief Method add_didSetColorEvent addr 0x210ede4 size 0xb0 virtual false final false
  inline void add_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value);

  /// @brief Method remove_didSetColorEvent addr 0x210ee94 size 0xb0 virtual false final false
  inline void remove_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value);

  static inline ::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId* New_ctor(int32_t index, int32_t lightId);

  /// @brief Method .ctor addr 0x210efc0 size 0x30 virtual false final false
  inline void _ctor(int32_t index, int32_t lightId);

  /// @brief Method ColorWasSet addr 0x210f018 size 0x48 virtual true final false
  inline void ColorWasSet(::UnityEngine::Color newColor);

  // Ctor Parameters [CppParam { name: "", ty: "__ColorArrayLightWithIds__ColorArrayLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorArrayLightWithIds__ColorArrayLightWithId(__ColorArrayLightWithIds__ColorArrayLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorArrayLightWithIds__ColorArrayLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorArrayLightWithIds__ColorArrayLightWithId(__ColorArrayLightWithIds__ColorArrayLightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorArrayLightWithIds__ColorArrayLightWithId();

public:
  /// @brief Field _index, offset: 0x30, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field didSetColorEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<int32_t, ::UnityEngine::Color>* ___didSetColorEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorArrayLightWithIds
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14520))
// CS Name: ::ColorArrayLightWithIds*
class CORDL_TYPE ColorArrayLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using ColorArrayLightWithId = ::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId;

  /// @brief Field _colorArrayLightWithIds, offset 0x30, size 0x8
  __declspec(property(get = __get__colorArrayLightWithIds,
                      put = __set__colorArrayLightWithIds))::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*,
                                                                    ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*> _colorArrayLightWithIds;

  /// @brief Field _materialController, offset 0x38, size 0x8
  __declspec(property(get = __get__materialController, put = __set__materialController))::GlobalNamespace::MaterialController* _materialController;

  /// @brief Field _materialPropertyBlockControllers, offset 0x40, size 0x8
  __declspec(property(get = __get__materialPropertyBlockControllers,
                      put = __set__materialPropertyBlockControllers))::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*,
                                                                              ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> _materialPropertyBlockControllers;

  /// @brief Field _colorsArrayPropertyName, offset 0x48, size 0x8
  __declspec(property(get = __get__colorsArrayPropertyName, put = __set__colorsArrayPropertyName))::StringW _colorsArrayPropertyName;

  /// @brief Field _colorsArrayOffsetPropertyName, offset 0x50, size 0x8
  __declspec(property(get = __get__colorsArrayOffsetPropertyName, put = __set__colorsArrayOffsetPropertyName))::StringW _colorsArrayOffsetPropertyName;

  /// @brief Field _colorsArrayPropertyId, offset 0x58, size 0x4
  __declspec(property(get = __get__colorsArrayPropertyId, put = __set__colorsArrayPropertyId)) int32_t _colorsArrayPropertyId;

  /// @brief Field _colorsArrayOffsetPropertyId, offset 0x5c, size 0x4
  __declspec(property(get = __get__colorsArrayOffsetPropertyId, put = __set__colorsArrayOffsetPropertyId)) int32_t _colorsArrayOffsetPropertyId;

  /// @brief Field _colorsArray, offset 0x60, size 0x8
  __declspec(property(get = __get__colorsArray, put = __set__colorsArray))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colorsArray;

  constexpr ::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*>&
  __get__colorArrayLightWithIds();

  constexpr ::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*> const&
  __get__colorArrayLightWithIds() const;

  constexpr void
  __set__colorArrayLightWithIds(::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*> value);

  constexpr ::GlobalNamespace::MaterialController*& __get__materialController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialController*> const& __get__materialController() const;

  constexpr void __set__materialController(::GlobalNamespace::MaterialController* value);

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>& __get__materialPropertyBlockControllers();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const& __get__materialPropertyBlockControllers() const;

  constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> value);

  constexpr ::StringW& __get__colorsArrayPropertyName();

  constexpr ::StringW const& __get__colorsArrayPropertyName() const;

  constexpr void __set__colorsArrayPropertyName(::StringW value);

  constexpr ::StringW& __get__colorsArrayOffsetPropertyName();

  constexpr ::StringW const& __get__colorsArrayOffsetPropertyName() const;

  constexpr void __set__colorsArrayOffsetPropertyName(::StringW value);

  constexpr int32_t& __get__colorsArrayPropertyId();

  constexpr int32_t const& __get__colorsArrayPropertyId() const;

  constexpr void __set__colorsArrayPropertyId(int32_t value);

  constexpr int32_t& __get__colorsArrayOffsetPropertyId();

  constexpr int32_t const& __get__colorsArrayOffsetPropertyId() const;

  constexpr void __set__colorsArrayOffsetPropertyId(int32_t value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__colorsArray();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__colorsArray() const;

  constexpr void __set__colorsArray(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method OnEnable addr 0x210e9d8 size 0x18 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDestroy addr 0x210eb78 size 0x4 virtual false final false
  inline void OnDestroy();

  /// @brief Method ProcessNewColorData addr 0x210ec50 size 0x4 virtual true final false
  inline void ProcessNewColorData();

  /// @brief Method GetLightWithIds addr 0x210ec84 size 0x8 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  /// @brief Method HandleColorLightWithIdDidSetColor addr 0x210ec8c size 0x8c virtual false final false
  inline void HandleColorLightWithIdDidSetColor(int32_t index, ::UnityEngine::Color color);

  /// @brief Method SetColorDataToMaterial addr 0x210ec54 size 0x30 virtual false final false
  inline void SetColorDataToMaterial();

  /// @brief Method SetColorArrayOffsetToMaterialPropertyBlocks addr 0x210ed18 size 0xcc virtual false final false
  inline void SetColorArrayOffsetToMaterialPropertyBlocks();

  /// @brief Method RegisterArrayForColorChanges addr 0x210e9f4 size 0x184 virtual false final false
  inline void RegisterArrayForColorChanges();

  /// @brief Method UnregisterArrayFromColorChanges addr 0x210eb7c size 0xd4 virtual false final false
  inline void UnregisterArrayFromColorChanges();

  static inline ::GlobalNamespace::ColorArrayLightWithIds* New_ctor();

  /// @brief Method .ctor addr 0x210ef44 size 0x74 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorArrayLightWithIds(ColorArrayLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorArrayLightWithIds(ColorArrayLightWithIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorArrayLightWithIds();

public:
  /// @brief Field _colorArrayLightWithIds, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*> ____colorArrayLightWithIds;

  /// @brief Field _materialController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MaterialController* ____materialController;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> ____materialPropertyBlockControllers;

  /// @brief Field _colorsArrayPropertyName, offset: 0x48, size: 0x8, def value: None
  ::StringW ____colorsArrayPropertyName;

  /// @brief Field _colorsArrayOffsetPropertyName, offset: 0x50, size: 0x8, def value: None
  ::StringW ____colorsArrayOffsetPropertyName;

  /// @brief Field _colorsArrayPropertyId, offset: 0x58, size: 0x4, def value: None
  int32_t ____colorsArrayPropertyId;

  /// @brief Field _colorsArrayOffsetPropertyId, offset: 0x5c, size: 0x4, def value: None
  int32_t ____colorsArrayOffsetPropertyId;

  /// @brief Field _colorsArray, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____colorsArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorArrayLightWithIds, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorArrayLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorArrayLightWithIds*, "", "ColorArrayLightWithIds");
NEED_NO_BOX(::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, "", "ColorArrayLightWithIds/ColorArrayLightWithId");
