#pragma once
// IWYU pragma private; include "GlobalNamespace/DeeplinkManagerToDestinationRequestManagerAdapter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IDestinationRequestManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeeplinkManagerToDestinationRequestManagerAdapter)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class Deeplink;
}
namespace GlobalNamespace {
class IDeeplinkManager;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DeeplinkManagerToDestinationRequestManagerAdapter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter);
// Dependencies IDestinationRequestManager, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeeplinkManagerToDestinationRequestManagerAdapter
class CORDL_TYPE DeeplinkManagerToDestinationRequestManagerAdapter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicCollection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapLevelsModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _currentMenuDestinationRequest, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__currentMenuDestinationRequest,
                      put = __cordl_internal_set__currentMenuDestinationRequest)) ::GlobalNamespace::MenuDestination* _currentMenuDestinationRequest;

  __declspec(property(get = get_currentMenuDestinationRequest, put = set_currentMenuDestinationRequest)) ::GlobalNamespace::MenuDestination* currentMenuDestinationRequest;

  /// @brief Field didSendMenuDestinationRequestEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didSendMenuDestinationRequestEvent,
                      put = __cordl_internal_set_didSendMenuDestinationRequestEvent)) ::System::Action_1<::GlobalNamespace::MenuDestination*>* didSendMenuDestinationRequestEvent;

  /// @brief Convert operator to "::GlobalNamespace::IDestinationRequestManager"
  constexpr operator ::GlobalNamespace::IDestinationRequestManager*() noexcept;

  /// @brief Method Clear, addr 0x3b7e7ac, size 0x8, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method HandleDeeplinkManagerDidReceiveDeeplink, addr 0x3b7e1ec, size 0x5c0, virtual false, abstract: false, final false
  inline void HandleDeeplinkManagerDidReceiveDeeplink(::GlobalNamespace::Deeplink* deeplink);

  /// @brief Method Init, addr 0x3b7e024, size 0x1c8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IDeeplinkManager* deeplinkManager);

  static inline ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter* New_ctor();

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::MenuDestination* const& __cordl_internal_get__currentMenuDestinationRequest() const;

  constexpr ::GlobalNamespace::MenuDestination*& __cordl_internal_get__currentMenuDestinationRequest();

  constexpr ::System::Action_1<::GlobalNamespace::MenuDestination*>* const& __cordl_internal_get_didSendMenuDestinationRequestEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MenuDestination*>*& __cordl_internal_get_didSendMenuDestinationRequestEvent();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__currentMenuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  constexpr void __cordl_internal_set_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value);

  /// @brief Method .ctor, addr 0x3b7e7b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSendMenuDestinationRequestEvent, addr 0x3b7de9c, size 0xb0, virtual true, abstract: false, final true
  inline void add_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value);

  /// @brief Method get_currentMenuDestinationRequest, addr 0x3b7dffc, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::MenuDestination* get_currentMenuDestinationRequest();

  /// @brief Convert to "::GlobalNamespace::IDestinationRequestManager"
  constexpr ::GlobalNamespace::IDestinationRequestManager* i___GlobalNamespace__IDestinationRequestManager() noexcept;

  /// @brief Method remove_didSendMenuDestinationRequestEvent, addr 0x3b7df4c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value);

  /// @brief Method set_currentMenuDestinationRequest, addr 0x3b7e004, size 0x20, virtual true, abstract: false, final true
  inline void set_currentMenuDestinationRequest(::GlobalNamespace::MenuDestination* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeeplinkManagerToDestinationRequestManagerAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeeplinkManagerToDestinationRequestManagerAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeeplinkManagerToDestinationRequestManagerAdapter(DeeplinkManagerToDestinationRequestManagerAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeeplinkManagerToDestinationRequestManagerAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeeplinkManagerToDestinationRequestManagerAdapter(DeeplinkManagerToDestinationRequestManagerAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4192 };

  /// @brief Field _beatmapLevelsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field didSendMenuDestinationRequestEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MenuDestination*>* ___didSendMenuDestinationRequestEvent;

  /// @brief Field _currentMenuDestinationRequest, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ____currentMenuDestinationRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, ____beatmapLevelsModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, ____beatmapCharacteristicCollection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, ___didSendMenuDestinationRequestEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, ____currentMenuDestinationRequest) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*, "", "DeeplinkManagerToDestinationRequestManagerAdapter");
