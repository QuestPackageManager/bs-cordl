#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorArrayLightWithIds)
namespace GlobalNamespace {
class MaterialController;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class __ColorArrayLightWithIds__ColorArrayLightWithId;
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
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
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
// CS Name: ::ColorArrayLightWithIds::ColorArrayLightWithId*
class CORDL_TYPE __ColorArrayLightWithIds__ColorArrayLightWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
  // Declarations
  /// @brief Field _index, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field didSetColorEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didSetColorEvent, put = __cordl_internal_set_didSetColorEvent))::System::Action_2<int32_t, ::UnityEngine::Color>* didSetColorEvent;

  /// @brief Method ColorWasSet, addr 0x23fa16c, size 0x48, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color newColor);

  static inline ::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId* New_ctor(int32_t index, int32_t lightId);

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Action_2<int32_t, ::UnityEngine::Color>*& __cordl_internal_get_didSetColorEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, ::UnityEngine::Color>*> const& __cordl_internal_get_didSetColorEvent() const;

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value);

  /// @brief Method .ctor, addr 0x23fa114, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t index, int32_t lightId);

  /// @brief Method add_didSetColorEvent, addr 0x23f9f38, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value);

  /// @brief Method remove_didSetColorEvent, addr 0x23f9fe8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorArrayLightWithIds__ColorArrayLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorArrayLightWithIds__ColorArrayLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorArrayLightWithIds__ColorArrayLightWithId(__ColorArrayLightWithIds__ColorArrayLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorArrayLightWithIds__ColorArrayLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorArrayLightWithIds__ColorArrayLightWithId(__ColorArrayLightWithIds__ColorArrayLightWithId const&) = delete;

  /// @brief Field _index, offset: 0x30, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field didSetColorEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<int32_t, ::UnityEngine::Color>* ___didSetColorEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId, ____index) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId, ___didSetColorEvent) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorArrayLightWithIds
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorArrayLightWithIds*
class CORDL_TYPE ColorArrayLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using ColorArrayLightWithId = ::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId;

  /// @brief Field _colorArrayLightWithIds, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorArrayLightWithIds,
                      put = __cordl_internal_set__colorArrayLightWithIds))::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*,
                                                                                   ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*> _colorArrayLightWithIds;

  /// @brief Field _colorsArray, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__colorsArray, put = __cordl_internal_set__colorsArray))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _colorsArray;

  /// @brief Field _colorsArrayOffsetPropertyId, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__colorsArrayOffsetPropertyId, put = __cordl_internal_set__colorsArrayOffsetPropertyId)) int32_t _colorsArrayOffsetPropertyId;

  /// @brief Field _colorsArrayOffsetPropertyName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__colorsArrayOffsetPropertyName, put = __cordl_internal_set__colorsArrayOffsetPropertyName))::StringW _colorsArrayOffsetPropertyName;

  /// @brief Field _colorsArrayPropertyId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__colorsArrayPropertyId, put = __cordl_internal_set__colorsArrayPropertyId)) int32_t _colorsArrayPropertyId;

  /// @brief Field _colorsArrayPropertyName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorsArrayPropertyName, put = __cordl_internal_set__colorsArrayPropertyName))::StringW _colorsArrayPropertyName;

  /// @brief Field _materialController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__materialController, put = __cordl_internal_set__materialController))::UnityW<::GlobalNamespace::MaterialController> _materialController;

  /// @brief Field _materialPropertyBlockControllers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockControllers,
                      put = __cordl_internal_set__materialPropertyBlockControllers))::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>,
                                                                                             ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> _materialPropertyBlockControllers;

  /// @brief Method GetLightWithIds, addr 0x23f9dd8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  /// @brief Method HandleColorLightWithIdDidSetColor, addr 0x23f9de0, size 0x8c, virtual false, abstract: false, final false
  inline void HandleColorLightWithIdDidSetColor(int32_t index, ::UnityEngine::Color color);

  static inline ::GlobalNamespace::ColorArrayLightWithIds* New_ctor();

  /// @brief Method OnDestroy, addr 0x23f9ccc, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x23f9b2c, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ProcessNewColorData, addr 0x23f9da4, size 0x4, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  /// @brief Method RegisterArrayForColorChanges, addr 0x23f9b48, size 0x184, virtual false, abstract: false, final false
  inline void RegisterArrayForColorChanges();

  /// @brief Method SetColorArrayOffsetToMaterialPropertyBlocks, addr 0x23f9e6c, size 0xcc, virtual false, abstract: false, final false
  inline void SetColorArrayOffsetToMaterialPropertyBlocks();

  /// @brief Method SetColorDataToMaterial, addr 0x23f9da8, size 0x30, virtual false, abstract: false, final false
  inline void SetColorDataToMaterial();

  /// @brief Method UnregisterArrayFromColorChanges, addr 0x23f9cd0, size 0xd4, virtual false, abstract: false, final false
  inline void UnregisterArrayFromColorChanges();

  constexpr ::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*> const&
  __cordl_internal_get__colorArrayLightWithIds() const;

  constexpr ::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*>&
  __cordl_internal_get__colorArrayLightWithIds();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__colorsArray() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__colorsArray();

  constexpr int32_t const& __cordl_internal_get__colorsArrayOffsetPropertyId() const;

  constexpr int32_t& __cordl_internal_get__colorsArrayOffsetPropertyId();

  constexpr ::StringW const& __cordl_internal_get__colorsArrayOffsetPropertyName() const;

  constexpr ::StringW& __cordl_internal_get__colorsArrayOffsetPropertyName();

  constexpr int32_t const& __cordl_internal_get__colorsArrayPropertyId() const;

  constexpr int32_t& __cordl_internal_get__colorsArrayPropertyId();

  constexpr ::StringW const& __cordl_internal_get__colorsArrayPropertyName() const;

  constexpr ::StringW& __cordl_internal_get__colorsArrayPropertyName();

  constexpr ::UnityW<::GlobalNamespace::MaterialController> const& __cordl_internal_get__materialController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialController>& __cordl_internal_get__materialController();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> const&
  __cordl_internal_get__materialPropertyBlockControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>&
  __cordl_internal_get__materialPropertyBlockControllers();

  constexpr void __cordl_internal_set__colorArrayLightWithIds(
      ::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*> value);

  constexpr void __cordl_internal_set__colorsArray(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__colorsArrayOffsetPropertyId(int32_t value);

  constexpr void __cordl_internal_set__colorsArrayOffsetPropertyName(::StringW value);

  constexpr void __cordl_internal_set__colorsArrayPropertyId(int32_t value);

  constexpr void __cordl_internal_set__colorsArrayPropertyName(::StringW value);

  constexpr void __cordl_internal_set__materialController(::UnityW<::GlobalNamespace::MaterialController> value);

  constexpr void __cordl_internal_set__materialPropertyBlockControllers(
      ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value);

  /// @brief Method .ctor, addr 0x23fa098, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorArrayLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorArrayLightWithIds(ColorArrayLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorArrayLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorArrayLightWithIds(ColorArrayLightWithIds const&) = delete;

  /// @brief Field _colorArrayLightWithIds, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, ::Array<::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*>*> ____colorArrayLightWithIds;

  /// @brief Field _materialController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialController> ____materialController;

  /// @brief Field _materialPropertyBlockControllers, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> ____materialPropertyBlockControllers;

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

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIds, ____colorArrayLightWithIds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIds, ____materialController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIds, ____materialPropertyBlockControllers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIds, ____colorsArrayPropertyName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIds, ____colorsArrayOffsetPropertyName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIds, ____colorsArrayPropertyId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIds, ____colorsArrayOffsetPropertyId) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorArrayLightWithIds, ____colorsArray) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorArrayLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorArrayLightWithIds*, "", "ColorArrayLightWithIds");
NEED_NO_BOX(::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ColorArrayLightWithIds__ColorArrayLightWithId*, "", "ColorArrayLightWithIds/ColorArrayLightWithId");
