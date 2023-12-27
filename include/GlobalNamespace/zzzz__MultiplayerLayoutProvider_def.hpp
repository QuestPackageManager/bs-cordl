#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerLayout_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLayoutProvider)
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLayoutProvider);
// Type: ::MultiplayerLayoutProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5233)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5215))
// CS Name: ::MultiplayerLayoutProvider*
class CORDL_TYPE MultiplayerLayoutProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field <layout>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__layout_k__BackingField, put = __set__layout_k__BackingField))::GlobalNamespace::MultiplayerPlayerLayout _layout_k__BackingField;

  /// @brief Field <activePlayerSpotsCount>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __get__activePlayerSpotsCount_k__BackingField, put = __set__activePlayerSpotsCount_k__BackingField)) int32_t _activePlayerSpotsCount_k__BackingField;

  /// @brief Field playersLayoutWasCalculatedEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_playersLayoutWasCalculatedEvent,
                      put = __set_playersLayoutWasCalculatedEvent))::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* playersLayoutWasCalculatedEvent;

  __declspec(property(get = get_layout, put = set_layout))::GlobalNamespace::MultiplayerPlayerLayout layout;

  __declspec(property(get = get_activePlayerSpotsCount, put = set_activePlayerSpotsCount)) int32_t activePlayerSpotsCount;

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout& __get__layout_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& __get__layout_k__BackingField() const;

  constexpr void __set__layout_k__BackingField(::GlobalNamespace::MultiplayerPlayerLayout value);

  constexpr int32_t& __get__activePlayerSpotsCount_k__BackingField();

  constexpr int32_t const& __get__activePlayerSpotsCount_k__BackingField() const;

  constexpr void __set__activePlayerSpotsCount_k__BackingField(int32_t value);

  constexpr ::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*& __get_playersLayoutWasCalculatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*> const& __get_playersLayoutWasCalculatedEvent() const;

  constexpr void __set_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value);

  /// @brief Method get_layout addr 0x224fcdc size 0x8 virtual false final false
  inline ::GlobalNamespace::MultiplayerPlayerLayout get_layout();

  /// @brief Method set_layout addr 0x224fce4 size 0x8 virtual false final false
  inline void set_layout(::GlobalNamespace::MultiplayerPlayerLayout value);

  /// @brief Method get_activePlayerSpotsCount addr 0x224fcec size 0x8 virtual false final false
  inline int32_t get_activePlayerSpotsCount();

  /// @brief Method set_activePlayerSpotsCount addr 0x224fcf4 size 0x8 virtual false final false
  inline void set_activePlayerSpotsCount(int32_t value);

  /// @brief Method add_playersLayoutWasCalculatedEvent addr 0x22457c4 size 0xb0 virtual false final false
  inline void add_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value);

  /// @brief Method remove_playersLayoutWasCalculatedEvent addr 0x2245908 size 0xb0 virtual false final false
  inline void remove_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value);

  /// @brief Method CalculateLayout addr 0x224fcfc size 0x5c virtual false final false
  inline ::GlobalNamespace::MultiplayerPlayerLayout CalculateLayout(int32_t activePlayersCount);

  static inline ::GlobalNamespace::MultiplayerLayoutProvider* New_ctor();

  /// @brief Method .ctor addr 0x224fd58 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLayoutProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLayoutProvider(MultiplayerLayoutProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLayoutProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLayoutProvider(MultiplayerLayoutProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLayoutProvider();

public:
  /// @brief Field <layout>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerPlayerLayout ____layout_k__BackingField;

  /// @brief Field <activePlayerSpotsCount>k__BackingField, offset: 0x14, size: 0x4, def value: None
  int32_t ____activePlayerSpotsCount_k__BackingField;

  /// @brief Field playersLayoutWasCalculatedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* ___playersLayoutWasCalculatedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLayoutProvider, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLayoutProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLayoutProvider*, "", "MultiplayerLayoutProvider");
