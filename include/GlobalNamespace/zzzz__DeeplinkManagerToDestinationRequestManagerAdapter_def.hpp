#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DeeplinkManagerToDestinationRequestManagerAdapter)
namespace GlobalNamespace {
class IDestinationRequestManager;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class IDeeplinkManager;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class Deeplink;
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
// Type: ::DeeplinkManagerToDestinationRequestManagerAdapter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4180))
// CS Name: ::DeeplinkManagerToDestinationRequestManagerAdapter*
class CORDL_TYPE DeeplinkManagerToDestinationRequestManagerAdapter : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapLevelsModel, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevelsModel, put = __set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicCollection,
                      put = __set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollectionSO* _beatmapCharacteristicCollection;

  /// @brief Field didSendMenuDestinationRequestEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didSendMenuDestinationRequestEvent,
                      put = __set_didSendMenuDestinationRequestEvent))::System::Action_1<::GlobalNamespace::MenuDestination*>* didSendMenuDestinationRequestEvent;

  /// @brief Field _currentMenuDestinationRequest, offset 0x28, size 0x8
  __declspec(property(get = __get__currentMenuDestinationRequest, put = __set__currentMenuDestinationRequest))::GlobalNamespace::MenuDestination* _currentMenuDestinationRequest;

  __declspec(property(get = get_currentMenuDestinationRequest, put = set_currentMenuDestinationRequest))::GlobalNamespace::MenuDestination* currentMenuDestinationRequest;

  /// @brief Convert operator to "::GlobalNamespace::IDestinationRequestManager"
  constexpr operator ::GlobalNamespace::IDestinationRequestManager*() noexcept;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __get__beatmapLevelsModel() const;

  constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollectionSO*& __get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollectionSO*> const& __get__beatmapCharacteristicCollection() const;

  constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO* value);

  constexpr ::System::Action_1<::GlobalNamespace::MenuDestination*>*& __get_didSendMenuDestinationRequestEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MenuDestination*>*> const& __get_didSendMenuDestinationRequestEvent() const;

  constexpr void __set_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value);

  constexpr ::GlobalNamespace::MenuDestination*& __get__currentMenuDestinationRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __get__currentMenuDestinationRequest() const;

  constexpr void __set__currentMenuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  /// @brief Method add_didSendMenuDestinationRequestEvent addr 0x21ce1f8 size 0xb0 virtual true final true
  inline void add_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value);

  /// @brief Method remove_didSendMenuDestinationRequestEvent addr 0x21ce2a8 size 0xb0 virtual true final true
  inline void remove_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value);

  /// @brief Method get_currentMenuDestinationRequest addr 0x21ce358 size 0x8 virtual true final true
  inline ::GlobalNamespace::MenuDestination* get_currentMenuDestinationRequest();

  /// @brief Method set_currentMenuDestinationRequest addr 0x21ce360 size 0x20 virtual true final true
  inline void set_currentMenuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  /// @brief Method Init addr 0x21ce380 size 0x1cc virtual false final false
  inline void Init(::GlobalNamespace::IDeeplinkManager* deeplinkManager);

  /// @brief Method Clear addr 0x21ceb10 size 0x8 virtual true final true
  inline void Clear();

  /// @brief Method HandleDeeplinkManagerDidReceiveDeeplink addr 0x21ce54c size 0x5c4 virtual false final false
  inline void HandleDeeplinkManagerDidReceiveDeeplink(::GlobalNamespace::Deeplink* deeplink);

  static inline ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter* New_ctor();

  /// @brief Method .ctor addr 0x21ced2c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DeeplinkManagerToDestinationRequestManagerAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeeplinkManagerToDestinationRequestManagerAdapter(DeeplinkManagerToDestinationRequestManagerAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeeplinkManagerToDestinationRequestManagerAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeeplinkManagerToDestinationRequestManagerAdapter(DeeplinkManagerToDestinationRequestManagerAdapter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeeplinkManagerToDestinationRequestManagerAdapter();

public:
  /// @brief Field _beatmapLevelsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollectionSO* ____beatmapCharacteristicCollection;

  /// @brief Field didSendMenuDestinationRequestEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MenuDestination*>* ___didSendMenuDestinationRequestEvent;

  /// @brief Field _currentMenuDestinationRequest, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ____currentMenuDestinationRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, ____beatmapLevelsModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, ____beatmapCharacteristicCollection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, ___didSendMenuDestinationRequestEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter, ____currentMenuDestinationRequest) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*, "", "DeeplinkManagerToDestinationRequestManagerAdapter");
