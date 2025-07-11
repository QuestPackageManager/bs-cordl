#pragma once
// IWYU pragma private; include "GlobalNamespace/LightWithIdManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightWithIdManager)
namespace GlobalNamespace {
class ILightWithId;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightWithIdManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightWithIdManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightWithIdManager
class CORDL_TYPE LightWithIdManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colors,
                      put = __cordl_internal_set__colors)) ::ArrayW<::System::Nullable_1<::UnityEngine::Color>, ::Array<::System::Nullable_1<::UnityEngine::Color>>*>
      _colors;

  /// @brief Field _didChangeSomeColorsThisFrame, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__didChangeSomeColorsThisFrame, put = __cordl_internal_set__didChangeSomeColorsThisFrame)) bool _didChangeSomeColorsThisFrame;

  /// @brief Field _lights, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lights, put = __cordl_internal_set__lights)) ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*,
                                                                                                        ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*>*>
      _lights;

  /// @brief Field _lightsToUnregister, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightsToUnregister,
                      put = __cordl_internal_set__lightsToUnregister)) ::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>* _lightsToUnregister;

  /// @brief Field didChangeSomeColorsThisFrameEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeSomeColorsThisFrameEvent, put = __cordl_internal_set_didChangeSomeColorsThisFrameEvent)) ::System::Action* didChangeSomeColorsThisFrameEvent;

  /// @brief Method GetColorForId, addr 0x39e2df0, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColorForId(int32_t lightId, bool initializeIfNull);

  /// @brief Method LateUpdate, addr 0x39e2548, size 0x27c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::LightWithIdManager* New_ctor();

  /// @brief Method RegisterLight, addr 0x39e27c4, size 0x42c, virtual false, abstract: false, final false
  inline void RegisterLight(::GlobalNamespace::ILightWithId* lightWithId);

  /// @brief Method SetColorForId, addr 0x39e01dc, size 0x23c, virtual false, abstract: false, final false
  inline void SetColorForId(int32_t lightId, ::UnityEngine::Color color);

  /// @brief Method UnregisterLight, addr 0x39e2bf0, size 0x200, virtual false, abstract: false, final false
  inline void UnregisterLight(::GlobalNamespace::ILightWithId* lightWithId);

  constexpr ::ArrayW<::System::Nullable_1<::UnityEngine::Color>, ::Array<::System::Nullable_1<::UnityEngine::Color>>*> const& __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::System::Nullable_1<::UnityEngine::Color>, ::Array<::System::Nullable_1<::UnityEngine::Color>>*>& __cordl_internal_get__colors();

  constexpr bool const& __cordl_internal_get__didChangeSomeColorsThisFrame() const;

  constexpr bool& __cordl_internal_get__didChangeSomeColorsThisFrame();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*>*> const&
  __cordl_internal_get__lights() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*>*>&
  __cordl_internal_get__lights();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>* const& __cordl_internal_get__lightsToUnregister() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*& __cordl_internal_get__lightsToUnregister();

  constexpr ::System::Action* const& __cordl_internal_get_didChangeSomeColorsThisFrameEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didChangeSomeColorsThisFrameEvent();

  constexpr void __cordl_internal_set__colors(::ArrayW<::System::Nullable_1<::UnityEngine::Color>, ::Array<::System::Nullable_1<::UnityEngine::Color>>*> value);

  constexpr void __cordl_internal_set__didChangeSomeColorsThisFrame(bool value);

  constexpr void __cordl_internal_set__lights(
      ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*>*> value);

  constexpr void __cordl_internal_set__lightsToUnregister(::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>* value);

  constexpr void __cordl_internal_set_didChangeSomeColorsThisFrameEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x39e2ebc, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeSomeColorsThisFrameEvent, addr 0x39e2410, size 0x9c, virtual false, abstract: false, final false
  inline void add_didChangeSomeColorsThisFrameEvent(::System::Action* value);

  /// @brief Method remove_didChangeSomeColorsThisFrameEvent, addr 0x39e24ac, size 0x9c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16331 };

  /// @brief Field kMaxLightId offset 0xffffffff size 0x4
  static constexpr int32_t kMaxLightId{ static_cast<int32_t>(0x1f4) };

  /// @brief Field didChangeSomeColorsThisFrameEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___didChangeSomeColorsThisFrameEvent;

  /// @brief Field _lights, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*>*> ____lights;

  /// @brief Field _colors, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Nullable_1<::UnityEngine::Color>, ::Array<::System::Nullable_1<::UnityEngine::Color>>*> ____colors;

  /// @brief Field _lightsToUnregister, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>* ____lightsToUnregister;

  /// @brief Field _didChangeSomeColorsThisFrame, offset: 0x40, size: 0x1, def value: None
  bool ____didChangeSomeColorsThisFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ___didChangeSomeColorsThisFrameEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ____lights) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ____colors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ____lightsToUnregister) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIdManager, ____didChangeSomeColorsThisFrame) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightWithIdManager, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightWithIdManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIdManager*, "", "LightWithIdManager");
