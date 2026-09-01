#pragma once
// IWYU pragma private; include "GlobalNamespace\LightWithIdManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILightWithId_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightWithIdManager)
namespace GlobalNamespace {
class ILightWithId;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class LightWithIdManager_LightMapData;
}
namespace GlobalNamespace {
class LightWithIdManager___c;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class LightWithIdManager_LightMapData;
}
namespace GlobalNamespace {
class LightWithIdManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightWithIdManager*);
MARK_REF_T(::GlobalNamespace::LightWithIdManager_LightMapData*);
MARK_REF_T(::GlobalNamespace::LightWithIdManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightWithIdManager*, "", "LightWithIdManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightWithIdManager_LightMapData*, "", "LightWithIdManager/LightMapData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightWithIdManager___c*, "", "LightWithIdManager/<>c");
// Dependencies ILightWithId, System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightWithIdManager/LightMapData
class CORDL_TYPE LightWithIdManager_LightMapData : public ::System::Object {
public:
  // Declarations
  /// @brief Field color, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field hasColor, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hasColor, put = __cordl_internal_set_hasColor)) bool hasColor;

  /// @brief Field lightInstances, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightInstances, put = __cordl_internal_set_lightInstances)) ::ArrayW<::GlobalNamespace::ILightWithId*> lightInstances;

  static inline ::GlobalNamespace::LightWithIdManager_LightMapData* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr bool const& __cordl_internal_get_hasColor() const;

  constexpr bool& __cordl_internal_get_hasColor();

  constexpr ::ArrayW<::GlobalNamespace::ILightWithId*> const& __cordl_internal_get_lightInstances() const;

  constexpr ::ArrayW<::GlobalNamespace::ILightWithId*>& __cordl_internal_get_lightInstances();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_hasColor(bool value);

  constexpr void __cordl_internal_set_lightInstances(::ArrayW<::GlobalNamespace::ILightWithId*> value);

  /// @brief Method .ctor, addr 0x586e8ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightWithIdManager_LightMapData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdManager_LightMapData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightWithIdManager_LightMapData(LightWithIdManager_LightMapData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdManager_LightMapData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightWithIdManager_LightMapData(LightWithIdManager_LightMapData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19540 };

  /// @brief Field lightInstances, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ILightWithId*> ___lightInstances;

  /// @brief Field color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field hasColor, offset: 0x28, size: 0x1, def value: None
  bool ___hasColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightWithIdManager_LightMapData, ___lightInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager_LightMapData, ___color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager_LightMapData, ___hasColor) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightWithIdManager_LightMapData) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightWithIdManager/<>c
class CORDL_TYPE LightWithIdManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LightWithIdManager___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityW<::GlobalNamespace::LightGroup>, int32_t>* __9__9_0;

  static inline ::GlobalNamespace::LightWithIdManager___c* New_ctor();

  /// @brief Method <OnEnable>b__9_0, addr 0x586f14c, size 0x14, virtual false, abstract: false, final false
  inline int32_t _OnEnable_b__9_0(::GlobalNamespace::LightGroup* lg);

  /// @brief Method .ctor, addr 0x586f148, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LightWithIdManager___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::LightGroup>, int32_t>* getStaticF___9__9_0();

  static inline void setStaticF___9(::GlobalNamespace::LightWithIdManager___c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::GlobalNamespace::LightGroup>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightWithIdManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightWithIdManager___c(LightWithIdManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightWithIdManager___c(LightWithIdManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LightWithIdManager___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightGroup, LightWithIdManager::LightMapData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightWithIdManager
class CORDL_TYPE LightWithIdManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LightMapData = ::GlobalNamespace::LightWithIdManager_LightMapData;

  using __c = ::GlobalNamespace::LightWithIdManager___c;

  /// @brief Field _didChangeSomeColorsThisFrame, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__didChangeSomeColorsThisFrame, put = __cordl_internal_set__didChangeSomeColorsThisFrame)) bool _didChangeSomeColorsThisFrame;

  /// @brief Field _lightGroups, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroups, put = __cordl_internal_set__lightGroups)) ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> _lightGroups;

  /// @brief Field _newMapping, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__newMapping, put = __cordl_internal_set__newMapping)) ::ArrayW<::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>> _newMapping;

  /// @brief Field _oldMapping, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__oldMapping, put = __cordl_internal_set__oldMapping)) ::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*> _oldMapping;

  /// @brief Field didChangeSomeColorsThisFrameEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeSomeColorsThisFrameEvent, put = __cordl_internal_set_didChangeSomeColorsThisFrameEvent)) ::System::Action* didChangeSomeColorsThisFrameEvent;

  /// @brief Method GetColorForId, addr 0x586ef28, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorForId(int32_t groupId, int32_t elementId, bool initializeIfNull);

  /// @brief Method GetColorForId, addr 0x586ee7c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorForId(int32_t lightId, bool initializeIfNull);

  /// @brief Method GetColorForId, addr 0x586ef00, size 0x28, virtual false, abstract: false, final false
  inline bool GetColorForId(::GlobalNamespace::LightWithIdManager_LightMapData* lightMapData, ::by_ref<::UnityEngine::Color> color);

  /// @brief Method LateUpdate, addr 0x586e22c, size 0x34, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::LightWithIdManager* New_ctor();

  /// @brief Method OnEnable, addr 0x586dfc8, size 0x264, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterLight, addr 0x586e260, size 0x68c, virtual false, abstract: false, final false
  inline void RegisterLight(::GlobalNamespace::ILightWithId* lightWithId);

  /// @brief Method SetColorForId, addr 0x586b9e4, size 0x1b4, virtual false, abstract: false, final false
  inline void SetColorForId(int32_t groupId, int32_t elementId, ::UnityEngine::Color color);

  /// @brief Method SetColorForId, addr 0x586bb98, size 0x19c, virtual false, abstract: false, final false
  inline void SetColorForId(int32_t lightId, ::UnityEngine::Color color);

  /// @brief Method SetColorForId, addr 0x586ece8, size 0x194, virtual false, abstract: false, final false
  inline void SetColorForId(::GlobalNamespace::LightWithIdManager_LightMapData* lightMapData, ::UnityEngine::Color color);

  /// @brief Method UnregisterLight, addr 0x586e8f0, size 0x3f8, virtual false, abstract: false, final false
  inline void UnregisterLight(::GlobalNamespace::ILightWithId* lightWithId);

  constexpr bool const& __cordl_internal_get__didChangeSomeColorsThisFrame() const;

  constexpr bool& __cordl_internal_get__didChangeSomeColorsThisFrame();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> const& __cordl_internal_get__lightGroups() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>>& __cordl_internal_get__lightGroups();

  constexpr ::ArrayW<::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>> const& __cordl_internal_get__newMapping() const;

  constexpr ::ArrayW<::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>>& __cordl_internal_get__newMapping();

  constexpr ::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*> const& __cordl_internal_get__oldMapping() const;

  constexpr ::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>& __cordl_internal_get__oldMapping();

  constexpr ::System::Action* const& __cordl_internal_get_didChangeSomeColorsThisFrameEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didChangeSomeColorsThisFrameEvent();

  constexpr void __cordl_internal_set__didChangeSomeColorsThisFrame(bool value);

  constexpr void __cordl_internal_set__lightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> value);

  constexpr void __cordl_internal_set__newMapping(::ArrayW<::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>> value);

  constexpr void __cordl_internal_set__oldMapping(::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*> value);

  constexpr void __cordl_internal_set_didChangeSomeColorsThisFrameEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x586efc0, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeSomeColorsThisFrameEvent, addr 0x586de70, size 0xac, virtual false, abstract: false, final false
  inline void add_didChangeSomeColorsThisFrameEvent(::System::Action* value);

  /// @brief Method remove_didChangeSomeColorsThisFrameEvent, addr 0x586df1c, size 0xac, virtual false, abstract: false, final false
  inline void remove_didChangeSomeColorsThisFrameEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightWithIdManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightWithIdManager(LightWithIdManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIdManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightWithIdManager(LightWithIdManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19542 };

  /// @brief Field kMaxLightId offset 0xffffffff size 0x4
  static constexpr int32_t kMaxLightId{ static_cast<int32_t>(0x226) };

  /// @brief Field didChangeSomeColorsThisFrameEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___didChangeSomeColorsThisFrameEvent;

  /// @brief Field _lightGroups, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> ____lightGroups;

  /// @brief Field _oldMapping, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*> ____oldMapping;

  /// @brief Field _newMapping, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>> ____newMapping;

  /// @brief Field _didChangeSomeColorsThisFrame, offset: 0x40, size: 0x1, def value: None
  bool ____didChangeSomeColorsThisFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ___didChangeSomeColorsThisFrameEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ____lightGroups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ____oldMapping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ____newMapping) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ____didChangeSomeColorsThisFrame) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightWithIdManager) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
