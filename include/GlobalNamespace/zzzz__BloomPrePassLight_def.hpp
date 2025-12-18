#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassLight.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassLight)
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
namespace GlobalNamespace {
class BloomPrePassLight_LightsDataItem;
}
namespace GlobalNamespace {
struct BloomPrePassRendererSO_InputData;
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
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLight;
}
namespace GlobalNamespace {
class BloomPrePassLight_LightsDataItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassLight);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassLight_LightsDataItem);
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

  /// @brief Method .ctor, addr 0x56b0cdc, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19658 };

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

  /// @brief Method FillInputData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void FillInputData(::ByRef<int32_t> lightNum, ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*> data);

  static inline ::GlobalNamespace::BloomPrePassLight* New_ctor();

  /// @brief Method OnDestroy, addr 0x56b0cd0, size 0xc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x56b0be8, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x56b08f8, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method RegisterLight, addr 0x56b08fc, size 0x2ec, virtual false, abstract: false, final false
  inline void RegisterLight();

  /// @brief Method UnregisterLight, addr 0x56b0bec, size 0xe4, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x56b0ce4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>,
                                                             ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*
  getStaticF__bloomLightsDict();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BloomPrePassLight_LightsDataItem*>* getStaticF__lightsDataItems();

  /// @brief Method get_bloomLightsDict, addr 0x56b0840, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>,
                                                             ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BloomPrePassLight>>*>*
  get_bloomLightsDict();

  /// @brief Method get_lightsDataItems, addr 0x56b089c, size 0x5c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19659 };

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
