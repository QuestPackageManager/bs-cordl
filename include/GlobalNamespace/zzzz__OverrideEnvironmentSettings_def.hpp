#pragma once
// IWYU pragma private; include "GlobalNamespace/OverrideEnvironmentSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OverrideEnvironmentSettings)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct EnvironmentType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OverrideEnvironmentSettings);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OverrideEnvironmentSettings
class CORDL_TYPE OverrideEnvironmentSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__data,
                      put = __cordl_internal_set__data)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _data;

  /// @brief Field _overrideEnvironments, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideEnvironments, put = __cordl_internal_set__overrideEnvironments)) bool _overrideEnvironments;

  /// @brief Field didChangeOverrideSettingsEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeOverrideSettingsEvent, put = __cordl_internal_set_didChangeOverrideSettingsEvent)) ::System::Action* didChangeOverrideSettingsEvent;

  __declspec(property(get = get_overrideEnvironments, put = set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Method GetOverrideEnvironmentInfoForType, addr 0x26edbec, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetOverrideEnvironmentInfoForType(::GlobalNamespace::EnvironmentType environmentType);

  static inline ::GlobalNamespace::OverrideEnvironmentSettings* New_ctor();

  /// @brief Method SetEnvironmentInfoForType, addr 0x26edb5c, size 0x90, virtual false, abstract: false, final false
  inline void SetEnvironmentInfoForType(::GlobalNamespace::EnvironmentType environmentType, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const& __cordl_internal_get__data() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__data();

  constexpr bool const& __cordl_internal_get__overrideEnvironments() const;

  constexpr bool& __cordl_internal_get__overrideEnvironments();

  constexpr ::System::Action* const& __cordl_internal_get_didChangeOverrideSettingsEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didChangeOverrideSettingsEvent();

  constexpr void __cordl_internal_set__data(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set__overrideEnvironments(bool value);

  constexpr void __cordl_internal_set_didChangeOverrideSettingsEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x26edc64, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeOverrideSettingsEvent, addr 0x26eda24, size 0x9c, virtual false, abstract: false, final false
  inline void add_didChangeOverrideSettingsEvent(::System::Action* value);

  /// @brief Method get_overrideEnvironments, addr 0x26ed9f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideEnvironments();

  /// @brief Method remove_didChangeOverrideSettingsEvent, addr 0x26edac0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didChangeOverrideSettingsEvent(::System::Action* value);

  /// @brief Method set_overrideEnvironments, addr 0x26eda00, size 0x24, virtual false, abstract: false, final false
  inline void set_overrideEnvironments(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverrideEnvironmentSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverrideEnvironmentSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverrideEnvironmentSettings(OverrideEnvironmentSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverrideEnvironmentSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverrideEnvironmentSettings(OverrideEnvironmentSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13219 };

  /// @brief Field didChangeOverrideSettingsEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didChangeOverrideSettingsEvent;

  /// @brief Field _overrideEnvironments, offset: 0x18, size: 0x1, def value: None
  bool ____overrideEnvironments;

  /// @brief Field _data, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OverrideEnvironmentSettings, ___didChangeOverrideSettingsEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideEnvironmentSettings, ____overrideEnvironments) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OverrideEnvironmentSettings, ____data) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OverrideEnvironmentSettings, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverrideEnvironmentSettings*, "", "OverrideEnvironmentSettings");
