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
// CS Name: ::MultiplayerLayoutProvider*
class CORDL_TYPE MultiplayerLayoutProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field <activePlayerSpotsCount>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__activePlayerSpotsCount_k__BackingField,
                      put = __cordl_internal_set__activePlayerSpotsCount_k__BackingField)) int32_t _activePlayerSpotsCount_k__BackingField;

  /// @brief Field <layout>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__layout_k__BackingField, put = __cordl_internal_set__layout_k__BackingField))::GlobalNamespace::MultiplayerPlayerLayout _layout_k__BackingField;

  __declspec(property(get = get_activePlayerSpotsCount, put = set_activePlayerSpotsCount)) int32_t activePlayerSpotsCount;

  __declspec(property(get = get_layout, put = set_layout))::GlobalNamespace::MultiplayerPlayerLayout layout;

  /// @brief Field playersLayoutWasCalculatedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playersLayoutWasCalculatedEvent,
                      put = __cordl_internal_set_playersLayoutWasCalculatedEvent))::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* playersLayoutWasCalculatedEvent;

  /// @brief Method CalculateLayout, addr 0x24e502c, size 0x5c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerPlayerLayout CalculateLayout(int32_t activePlayersCount);

  static inline ::GlobalNamespace::MultiplayerLayoutProvider* New_ctor();

  constexpr int32_t const& __cordl_internal_get__activePlayerSpotsCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__activePlayerSpotsCount_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& __cordl_internal_get__layout_k__BackingField() const;

  constexpr ::GlobalNamespace::MultiplayerPlayerLayout& __cordl_internal_get__layout_k__BackingField();

  constexpr ::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*& __cordl_internal_get_playersLayoutWasCalculatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>*> const& __cordl_internal_get_playersLayoutWasCalculatedEvent() const;

  constexpr void __cordl_internal_set__activePlayerSpotsCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__layout_k__BackingField(::GlobalNamespace::MultiplayerPlayerLayout value);

  constexpr void __cordl_internal_set_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value);

  /// @brief Method .ctor, addr 0x24e5088, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playersLayoutWasCalculatedEvent, addr 0x24db034, size 0xb0, virtual false, abstract: false, final false
  inline void add_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value);

  /// @brief Method get_activePlayerSpotsCount, addr 0x24e501c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_activePlayerSpotsCount();

  /// @brief Method get_layout, addr 0x24e500c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerPlayerLayout get_layout();

  /// @brief Method remove_playersLayoutWasCalculatedEvent, addr 0x24db178, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playersLayoutWasCalculatedEvent(::System::Action_2<::GlobalNamespace::MultiplayerPlayerLayout, int32_t>* value);

  /// @brief Method set_activePlayerSpotsCount, addr 0x24e5024, size 0x8, virtual false, abstract: false, final false
  inline void set_activePlayerSpotsCount(int32_t value);

  /// @brief Method set_layout, addr 0x24e5014, size 0x8, virtual false, abstract: false, final false
  inline void set_layout(::GlobalNamespace::MultiplayerPlayerLayout value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLayoutProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLayoutProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLayoutProvider(MultiplayerLayoutProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLayoutProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLayoutProvider(MultiplayerLayoutProvider const&) = delete;

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

static_assert(offsetof(::GlobalNamespace::MultiplayerLayoutProvider, ____layout_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLayoutProvider, ____activePlayerSpotsCount_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLayoutProvider, ___playersLayoutWasCalculatedEvent) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLayoutProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLayoutProvider*, "", "MultiplayerLayoutProvider");
