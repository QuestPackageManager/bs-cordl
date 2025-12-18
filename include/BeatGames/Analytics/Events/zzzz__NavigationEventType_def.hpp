#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/NavigationEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NavigationEventType)
// Forward declare root types
namespace BeatGames::Analytics::Events {
class NavigationEventType;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::Events::NavigationEventType);
// Dependencies System.Object
namespace BeatGames::Analytics::Events {
// Is value type: false
// CS Name: BeatGames.Analytics.Events.NavigationEventType
class CORDL_TYPE NavigationEventType : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) ::StringW _Value_k__BackingField;

  static inline ::BeatGames::Analytics::Events::NavigationEventType* New_ctor(::StringW value);

  /// @brief Method ToString, addr 0x3191d84, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Value_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3191c9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method get_CancelDrag, addr 0x3191d1c, size 0x68, virtual false, abstract: false, final false
  static inline ::BeatGames::Analytics::Events::NavigationEventType* get_CancelDrag();

  /// @brief Method get_Click, addr 0x3191268, size 0x68, virtual false, abstract: false, final false
  static inline ::BeatGames::Analytics::Events::NavigationEventType* get_Click();

  /// @brief Method get_Drag, addr 0x3191cb4, size 0x68, virtual false, abstract: false, final false
  static inline ::BeatGames::Analytics::Events::NavigationEventType* get_Drag();

  /// @brief Method get_Impression, addr 0x3191104, size 0x68, virtual false, abstract: false, final false
  static inline ::BeatGames::Analytics::Events::NavigationEventType* get_Impression();

  /// @brief Method get_Value, addr 0x3191ca4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x3191cac, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationEventType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationEventType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationEventType(NavigationEventType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationEventType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationEventType(NavigationEventType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22983 };

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatGames::Analytics::Events::NavigationEventType, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::Events::NavigationEventType, 0x18>, "Size mismatch!");

} // namespace BeatGames::Analytics::Events
NEED_NO_BOX(::BeatGames::Analytics::Events::NavigationEventType);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::Events::NavigationEventType*, "BeatGames.Analytics.Events", "NavigationEventType");
