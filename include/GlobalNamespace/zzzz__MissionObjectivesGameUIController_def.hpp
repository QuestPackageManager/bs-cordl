#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MissionObjectivesGameUIController)
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class MissionObjectiveGameUIView;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectivesGameUIController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectivesGameUIController);
// Type: ::MissionObjectivesGameUIController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5036))
// CS Name: ::MissionObjectivesGameUIController*
class CORDL_TYPE MissionObjectivesGameUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _missionObjectiveGameUIViewPrefab, offset 0x18, size 0x8
  __declspec(property(get = __get__missionObjectiveGameUIViewPrefab, put = __set__missionObjectiveGameUIViewPrefab))::GlobalNamespace::MissionObjectiveGameUIView* _missionObjectiveGameUIViewPrefab;

  /// @brief Field _separator, offset 0x20, size 0x4
  __declspec(property(get = __get__separator, put = __set__separator)) float_t _separator;

  /// @brief Field _elementWidth, offset 0x24, size 0x4
  __declspec(property(get = __get__elementWidth, put = __set__elementWidth)) float_t _elementWidth;

  /// @brief Field _missionObjectiveCheckersManager, offset 0x28, size 0x8
  __declspec(property(get = __get__missionObjectiveCheckersManager, put = __set__missionObjectiveCheckersManager))::GlobalNamespace::MissionObjectiveCheckersManager* _missionObjectiveCheckersManager;

  /// @brief Field _missionObjectiveGameUIViews, offset 0x30, size 0x8
  __declspec(property(get = __get__missionObjectiveGameUIViews,
                      put = __set__missionObjectiveGameUIViews))::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>* _missionObjectiveGameUIViews;

  constexpr ::GlobalNamespace::MissionObjectiveGameUIView*& __get__missionObjectiveGameUIViewPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveGameUIView*> const& __get__missionObjectiveGameUIViewPrefab() const;

  constexpr void __set__missionObjectiveGameUIViewPrefab(::GlobalNamespace::MissionObjectiveGameUIView* value);

  constexpr float_t& __get__separator();

  constexpr float_t const& __get__separator() const;

  constexpr void __set__separator(float_t value);

  constexpr float_t& __get__elementWidth();

  constexpr float_t const& __get__elementWidth() const;

  constexpr void __set__elementWidth(float_t value);

  constexpr ::GlobalNamespace::MissionObjectiveCheckersManager*& __get__missionObjectiveCheckersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveCheckersManager*> const& __get__missionObjectiveCheckersManager() const;

  constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*& __get__missionObjectiveGameUIViews();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*> const& __get__missionObjectiveGameUIViews() const;

  constexpr void __set__missionObjectiveGameUIViews(::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>* value);

  /// @brief Method Start, addr 0x23c1424, size 0x94, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23c1858, size 0xd4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleMissionObjectiveCheckersManagerObjectivesListDidChange, addr 0x23c192c, size 0x4, virtual false, abstract: false, final false
  inline void HandleMissionObjectiveCheckersManagerObjectivesListDidChange();

  /// @brief Method CreateUIElements, addr 0x23c14b8, size 0x3a0, virtual false, abstract: false, final false
  inline void CreateUIElements();

  static inline ::GlobalNamespace::MissionObjectivesGameUIController* New_ctor();

  /// @brief Method .ctor, addr 0x23c1930, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectivesGameUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionObjectivesGameUIController(MissionObjectivesGameUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionObjectivesGameUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionObjectivesGameUIController(MissionObjectivesGameUIController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectivesGameUIController();

public:
  /// @brief Field _missionObjectiveGameUIViewPrefab, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjectiveGameUIView* ____missionObjectiveGameUIViewPrefab;

  /// @brief Field _separator, offset: 0x20, size: 0x4, def value: None
  float_t ____separator;

  /// @brief Field _elementWidth, offset: 0x24, size: 0x4, def value: None
  float_t ____elementWidth;

  /// @brief Field _missionObjectiveCheckersManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjectiveCheckersManager* ____missionObjectiveCheckersManager;

  /// @brief Field _missionObjectiveGameUIViews, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>* ____missionObjectiveGameUIViews;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectivesGameUIController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____missionObjectiveGameUIViewPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____separator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____elementWidth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____missionObjectiveCheckersManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionObjectivesGameUIController, ____missionObjectiveGameUIViews) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectivesGameUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectivesGameUIController*, "", "MissionObjectivesGameUIController");
