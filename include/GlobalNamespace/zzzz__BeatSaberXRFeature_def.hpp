#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberXRFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatSaberXRFeature)
namespace GlobalNamespace {
struct BeatSaberXRFeature_SessionState;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatSaberXRFeature_SessionState;
}
namespace GlobalNamespace {
class BeatSaberXRFeature;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatSaberXRFeature_SessionState);
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberXRFeature);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatSaberXRFeature/SessionState
struct CORDL_TYPE BeatSaberXRFeature_SessionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatSaberXRFeature_SessionState_Unwrapped
  enum struct __BeatSaberXRFeature_SessionState_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Idle = static_cast<int32_t>(0x1),
    __E_Ready = static_cast<int32_t>(0x2),
    __E_Synchronized = static_cast<int32_t>(0x3),
    __E_Visible = static_cast<int32_t>(0x4),
    __E_Focused = static_cast<int32_t>(0x5),
    __E_Stopping = static_cast<int32_t>(0x6),
    __E_Pending = static_cast<int32_t>(0x7),
    __E_Exiting = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatSaberXRFeature_SessionState_Unwrapped() const noexcept {
    return static_cast<__BeatSaberXRFeature_SessionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberXRFeature_SessionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatSaberXRFeature_SessionState(int32_t value__) noexcept;

  /// @brief Field Exiting value: I32(8)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Exiting;

  /// @brief Field Focused value: I32(5)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Focused;

  /// @brief Field Idle value: I32(1)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Idle;

  /// @brief Field Pending value: I32(7)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Pending;

  /// @brief Field Ready value: I32(2)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Ready;

  /// @brief Field Stopping value: I32(6)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Stopping;

  /// @brief Field Synchronized value: I32(3)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Synchronized;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Unknown;

  /// @brief Field Visible value: I32(4)
  static ::GlobalNamespace::BeatSaberXRFeature_SessionState const Visible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20299 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberXRFeature_SessionState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberXRFeature_SessionState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaberXRFeature::SessionState, UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatSaberXRFeature
class CORDL_TYPE BeatSaberXRFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  using SessionState = ::GlobalNamespace::BeatSaberXRFeature_SessionState;

  /// @brief Field <currentSessionState>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__currentSessionState_k__BackingField,
                      put = __cordl_internal_set__currentSessionState_k__BackingField)) ::GlobalNamespace::BeatSaberXRFeature_SessionState _currentSessionState_k__BackingField;

  __declspec(property(get = get_currentSessionState, put = set_currentSessionState)) ::GlobalNamespace::BeatSaberXRFeature_SessionState currentSessionState;

  /// @brief Field sessionStateChangedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_sessionStateChangedEvent,
                      put = __cordl_internal_set_sessionStateChangedEvent)) ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*
      sessionStateChangedEvent;

  static inline ::GlobalNamespace::BeatSaberXRFeature* New_ctor();

  /// @brief Method OnSessionStateChange, addr 0x56a4cf4, size 0x20, virtual true, abstract: false, final false
  inline void OnSessionStateChange(int32_t oldState, int32_t newState);

  constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState const& __cordl_internal_get__currentSessionState_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatSaberXRFeature_SessionState& __cordl_internal_get__currentSessionState_k__BackingField();

  constexpr ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* const& __cordl_internal_get_sessionStateChangedEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>*& __cordl_internal_get_sessionStateChangedEvent();

  constexpr void __cordl_internal_set__currentSessionState_k__BackingField(::GlobalNamespace::BeatSaberXRFeature_SessionState value);

  constexpr void __cordl_internal_set_sessionStateChangedEvent(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* value);

  /// @brief Method .ctor, addr 0x56a4d14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_sessionStateChangedEvent, addr 0x56a4b74, size 0xc0, virtual false, abstract: false, final false
  inline void add_sessionStateChangedEvent(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* value);

  /// @brief Method get_currentSessionState, addr 0x56a4b64, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatSaberXRFeature_SessionState get_currentSessionState();

  /// @brief Method remove_sessionStateChangedEvent, addr 0x56a4c34, size 0xc0, virtual false, abstract: false, final false
  inline void remove_sessionStateChangedEvent(::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* value);

  /// @brief Method set_currentSessionState, addr 0x56a4b6c, size 0x8, virtual false, abstract: false, final false
  inline void set_currentSessionState(::GlobalNamespace::BeatSaberXRFeature_SessionState value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberXRFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberXRFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberXRFeature(BeatSaberXRFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberXRFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberXRFeature(BeatSaberXRFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20300 };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.beatgames.beatsaber.feature.beatsaberxr" };

  /// @brief Field <currentSessionState>k__BackingField, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::BeatSaberXRFeature_SessionState ____currentSessionState_k__BackingField;

  /// @brief Field sessionStateChangedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::BeatSaberXRFeature_SessionState, ::GlobalNamespace::BeatSaberXRFeature_SessionState>* ___sessionStateChangedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatSaberXRFeature, ____currentSessionState_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatSaberXRFeature, ___sessionStateChangedEvent) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberXRFeature, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberXRFeature_SessionState, "", "BeatSaberXRFeature/SessionState");
NEED_NO_BOX(::GlobalNamespace::BeatSaberXRFeature);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberXRFeature*, "", "BeatSaberXRFeature");
