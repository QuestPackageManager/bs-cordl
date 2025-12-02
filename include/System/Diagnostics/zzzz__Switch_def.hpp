#pragma once
// IWYU pragma private; include "System/Diagnostics/Switch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Switch)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Diagnostics {
class Switch;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Switch);
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.Switch
class CORDL_TYPE Switch : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IntializedLock)) ::System::Object* IntializedLock;

  __declspec(property(get = get_SwitchSetting, put = set_SwitchSetting)) int32_t SwitchSetting;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Field defaultValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultValue, put = __cordl_internal_set_defaultValue)) ::StringW defaultValue;

  /// @brief Field description, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_description, put = __cordl_internal_set_description)) ::StringW description;

  /// @brief Field displayName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName)) ::StringW displayName;

  /// @brief Field initialized, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_initialized, put = __cordl_internal_set_initialized)) bool initialized;

  /// @brief Field initializing, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_initializing, put = __cordl_internal_set_initializing)) bool initializing;

  /// @brief Field m_intializedLock, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_intializedLock, put = __cordl_internal_set_m_intializedLock)) ::System::Object* m_intializedLock;

  /// @brief Field s_LastCollectionCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_LastCollectionCount, put = setStaticF_s_LastCollectionCount)) int32_t s_LastCollectionCount;

  /// @brief Field switchSetting, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_switchSetting, put = __cordl_internal_set_switchSetting)) int32_t switchSetting;

  /// @brief Field switchSettings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_switchSettings, put = __cordl_internal_set_switchSettings)) ::System::Object* switchSettings;

  /// @brief Field switchValueString, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_switchValueString, put = __cordl_internal_set_switchValueString)) ::StringW switchValueString;

  /// @brief Field switches, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_switches, put = setStaticF_switches)) ::System::Collections::Generic::List_1<::System::WeakReference*>* switches;

  /// @brief Method Initialize, addr 0x617a5b4, size 0x4, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitializeConfigSettings, addr 0x617a5b8, size 0x8, virtual false, abstract: false, final false
  inline bool InitializeConfigSettings();

  /// @brief Method InitializeWithStatus, addr 0x617a490, size 0x124, virtual false, abstract: false, final false
  inline bool InitializeWithStatus();

  static inline ::System::Diagnostics::Switch* New_ctor(::StringW displayName, ::StringW description);

  static inline ::System::Diagnostics::Switch* New_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue);

  /// @brief Method OnSwitchSettingChanged, addr 0x617a5c0, size 0x4, virtual true, abstract: false, final false
  inline void OnSwitchSettingChanged();

  /// @brief Method OnValueChanged, addr 0x6179a00, size 0x84, virtual true, abstract: false, final false
  inline void OnValueChanged();

  constexpr ::StringW const& __cordl_internal_get_defaultValue() const;

  constexpr ::StringW& __cordl_internal_get_defaultValue();

  constexpr ::StringW const& __cordl_internal_get_description() const;

  constexpr ::StringW& __cordl_internal_get_description();

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr bool const& __cordl_internal_get_initialized() const;

  constexpr bool& __cordl_internal_get_initialized();

  constexpr bool const& __cordl_internal_get_initializing() const;

  constexpr bool& __cordl_internal_get_initializing();

  constexpr ::System::Object* const& __cordl_internal_get_m_intializedLock() const;

  constexpr ::System::Object*& __cordl_internal_get_m_intializedLock();

  constexpr int32_t const& __cordl_internal_get_switchSetting() const;

  constexpr int32_t& __cordl_internal_get_switchSetting();

  constexpr ::System::Object* const& __cordl_internal_get_switchSettings() const;

  constexpr ::System::Object*& __cordl_internal_get_switchSettings();

  constexpr ::StringW const& __cordl_internal_get_switchValueString() const;

  constexpr ::StringW& __cordl_internal_get_switchValueString();

  constexpr void __cordl_internal_set_defaultValue(::StringW value);

  constexpr void __cordl_internal_set_description(::StringW value);

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr void __cordl_internal_set_initialized(bool value);

  constexpr void __cordl_internal_set_initializing(bool value);

  constexpr void __cordl_internal_set_m_intializedLock(::System::Object* value);

  constexpr void __cordl_internal_set_switchSetting(int32_t value);

  constexpr void __cordl_internal_set_switchSettings(::System::Object* value);

  constexpr void __cordl_internal_set_switchValueString(::StringW value);

  /// @brief Method .ctor, addr 0x6179808, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW description);

  /// @brief Method .ctor, addr 0x6179bcc, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue);

  /// @brief Method _pruneCachedSwitches, addr 0x6179f84, size 0x50c, virtual false, abstract: false, final false
  static inline void _pruneCachedSwitches();

  static inline int32_t getStaticF_s_LastCollectionCount();

  static inline ::System::Collections::Generic::List_1<::System::WeakReference*>* getStaticF_switches();

  /// @brief Method get_IntializedLock, addr 0x6179f18, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Object* get_IntializedLock();

  /// @brief Method get_SwitchSetting, addr 0x6179e04, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_SwitchSetting();

  /// @brief Method get_Value, addr 0x61798d4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  static inline void setStaticF_s_LastCollectionCount(int32_t value);

  static inline void setStaticF_switches(::System::Collections::Generic::List_1<::System::WeakReference*>* value);

  /// @brief Method set_SwitchSetting, addr 0x61798f0, size 0x110, virtual false, abstract: false, final false
  inline void set_SwitchSetting(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Switch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Switch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Switch(Switch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Switch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Switch(Switch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11103 };

  /// @brief Field switchSettings, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___switchSettings;

  /// @brief Field description, offset: 0x18, size: 0x8, def value: None
  ::StringW ___description;

  /// @brief Field displayName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field switchSetting, offset: 0x28, size: 0x4, def value: None
  int32_t ___switchSetting;

  /// @brief Field initialized, offset: 0x2c, size: 0x1, def value: None
  bool ___initialized;

  /// @brief Field initializing, offset: 0x2d, size: 0x1, def value: None
  bool ___initializing;

  /// @brief Field switchValueString, offset: 0x30, size: 0x8, def value: None
  ::StringW ___switchValueString;

  /// @brief Field defaultValue, offset: 0x38, size: 0x8, def value: None
  ::StringW ___defaultValue;

  /// @brief Field m_intializedLock, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___m_intializedLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Switch, ___switchSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___displayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___switchSetting) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___initialized) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___initializing) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___switchValueString) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___defaultValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::Switch, ___m_intializedLock) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Switch, 0x48>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::Switch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Switch*, "System.Diagnostics", "Switch");
