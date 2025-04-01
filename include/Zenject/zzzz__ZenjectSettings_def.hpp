#pragma once
// IWYU pragma private; include "Zenject/ZenjectSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__RootResolveMethods_def.hpp"
#include "Zenject/zzzz__SignalDefaultSyncModes_def.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
#include "Zenject/zzzz__ValidationErrorResponses_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZenjectSettings)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct RootResolveMethods;
}
namespace Zenject {
struct SignalDefaultSyncModes;
}
namespace Zenject {
struct SignalMissingHandlerResponses;
}
namespace Zenject {
struct ValidationErrorResponses;
}
namespace Zenject {
class ZenjectSettings_SignalSettings;
}
// Forward declare root types
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class ZenjectSettings_SignalSettings;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ZenjectSettings);
MARK_REF_PTR_T(::Zenject::ZenjectSettings_SignalSettings);
// Dependencies System.Object, Zenject.SignalDefaultSyncModes, Zenject.SignalMissingHandlerResponses
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenjectSettings/SignalSettings
class CORDL_TYPE ZenjectSettings_SignalSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::Zenject::ZenjectSettings_SignalSettings* Default;

  __declspec(property(get = get_DefaultAsyncTickPriority)) int32_t DefaultAsyncTickPriority;

  __declspec(property(get = get_DefaultSyncMode)) ::Zenject::SignalDefaultSyncModes DefaultSyncMode;

  __declspec(property(get = get_MissingHandlerDefaultResponse)) ::Zenject::SignalMissingHandlerResponses MissingHandlerDefaultResponse;

  __declspec(property(get = get_RequireStrictUnsubscribe)) bool RequireStrictUnsubscribe;

  /// @brief Field _defaultAsyncTickPriority, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultAsyncTickPriority, put = __cordl_internal_set__defaultAsyncTickPriority)) int32_t _defaultAsyncTickPriority;

  /// @brief Field _defaultSyncMode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultSyncMode, put = __cordl_internal_set__defaultSyncMode)) ::Zenject::SignalDefaultSyncModes _defaultSyncMode;

  /// @brief Field _missingHandlerDefaultResponse, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__missingHandlerDefaultResponse,
                      put = __cordl_internal_set__missingHandlerDefaultResponse)) ::Zenject::SignalMissingHandlerResponses _missingHandlerDefaultResponse;

  /// @brief Field _requireStrictUnsubscribe, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__requireStrictUnsubscribe, put = __cordl_internal_set__requireStrictUnsubscribe)) bool _requireStrictUnsubscribe;

  static inline ::Zenject::ZenjectSettings_SignalSettings* New_ctor();

  static inline ::Zenject::ZenjectSettings_SignalSettings* New_ctor(::Zenject::SignalDefaultSyncModes defaultSyncMode, ::Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse,
                                                                    bool requireStrictUnsubscribe, int32_t defaultAsyncTickPriority);

  constexpr int32_t const& __cordl_internal_get__defaultAsyncTickPriority() const;

  constexpr int32_t& __cordl_internal_get__defaultAsyncTickPriority();

  constexpr ::Zenject::SignalDefaultSyncModes const& __cordl_internal_get__defaultSyncMode() const;

  constexpr ::Zenject::SignalDefaultSyncModes& __cordl_internal_get__defaultSyncMode();

  constexpr ::Zenject::SignalMissingHandlerResponses const& __cordl_internal_get__missingHandlerDefaultResponse() const;

  constexpr ::Zenject::SignalMissingHandlerResponses& __cordl_internal_get__missingHandlerDefaultResponse();

  constexpr bool const& __cordl_internal_get__requireStrictUnsubscribe() const;

  constexpr bool& __cordl_internal_get__requireStrictUnsubscribe();

  constexpr void __cordl_internal_set__defaultAsyncTickPriority(int32_t value);

  constexpr void __cordl_internal_set__defaultSyncMode(::Zenject::SignalDefaultSyncModes value);

  constexpr void __cordl_internal_set__missingHandlerDefaultResponse(::Zenject::SignalMissingHandlerResponses value);

  constexpr void __cordl_internal_set__requireStrictUnsubscribe(bool value);

  /// @brief Method __zenCreate, addr 0x4b34cfc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b34d68, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b34c38, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4b34bf4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalDefaultSyncModes defaultSyncMode, ::Zenject::SignalMissingHandlerResponses missingHandlerDefaultResponse, bool requireStrictUnsubscribe,
                    int32_t defaultAsyncTickPriority);

  static inline ::Zenject::ZenjectSettings_SignalSettings* getStaticF_Default();

  /// @brief Method get_DefaultAsyncTickPriority, addr 0x4b34c68, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DefaultAsyncTickPriority();

  /// @brief Method get_DefaultSyncMode, addr 0x4b34c70, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SignalDefaultSyncModes get_DefaultSyncMode();

  /// @brief Method get_MissingHandlerDefaultResponse, addr 0x4b34c78, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SignalMissingHandlerResponses get_MissingHandlerDefaultResponse();

  /// @brief Method get_RequireStrictUnsubscribe, addr 0x4b34c80, size 0x8, virtual false, abstract: false, final false
  inline bool get_RequireStrictUnsubscribe();

  static inline void setStaticF_Default(::Zenject::ZenjectSettings_SignalSettings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectSettings_SignalSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSettings_SignalSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectSettings_SignalSettings(ZenjectSettings_SignalSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSettings_SignalSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectSettings_SignalSettings(ZenjectSettings_SignalSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12515 };

  /// @brief Field _defaultSyncMode, offset: 0x10, size: 0x4, def value: None
  ::Zenject::SignalDefaultSyncModes ____defaultSyncMode;

  /// @brief Field _missingHandlerDefaultResponse, offset: 0x14, size: 0x4, def value: None
  ::Zenject::SignalMissingHandlerResponses ____missingHandlerDefaultResponse;

  /// @brief Field _requireStrictUnsubscribe, offset: 0x18, size: 0x1, def value: None
  bool ____requireStrictUnsubscribe;

  /// @brief Field _defaultAsyncTickPriority, offset: 0x1c, size: 0x4, def value: None
  int32_t ____defaultAsyncTickPriority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ZenjectSettings_SignalSettings, ____defaultSyncMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSettings_SignalSettings, ____missingHandlerDefaultResponse) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSettings_SignalSettings, ____requireStrictUnsubscribe) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSettings_SignalSettings, ____defaultAsyncTickPriority) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectSettings_SignalSettings, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object, Zenject.RootResolveMethods, Zenject.ValidationErrorResponses
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenjectSettings
class CORDL_TYPE ZenjectSettings : public ::System::Object {
public:
  // Declarations
  using SignalSettings = ::Zenject::ZenjectSettings_SignalSettings;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::Zenject::ZenjectSettings* Default;

  __declspec(property(get = get_DisplayWarningWhenResolvingDuringInstall)) bool DisplayWarningWhenResolvingDuringInstall;

  __declspec(property(get = get_EnsureDeterministicDestructionOrderOnApplicationQuit)) bool EnsureDeterministicDestructionOrderOnApplicationQuit;

  __declspec(property(get = get_Signals)) ::Zenject::ZenjectSettings_SignalSettings* Signals;

  __declspec(property(get = get_ValidationErrorResponse)) ::Zenject::ValidationErrorResponses ValidationErrorResponse;

  __declspec(property(get = get_ValidationRootResolveMethod)) ::Zenject::RootResolveMethods ValidationRootResolveMethod;

  /// @brief Field _displayWarningWhenResolvingDuringInstall, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__displayWarningWhenResolvingDuringInstall,
                      put = __cordl_internal_set__displayWarningWhenResolvingDuringInstall)) bool _displayWarningWhenResolvingDuringInstall;

  /// @brief Field _ensureDeterministicDestructionOrderOnApplicationQuit, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ensureDeterministicDestructionOrderOnApplicationQuit,
                      put = __cordl_internal_set__ensureDeterministicDestructionOrderOnApplicationQuit)) bool _ensureDeterministicDestructionOrderOnApplicationQuit;

  /// @brief Field _signalSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__signalSettings, put = __cordl_internal_set__signalSettings)) ::Zenject::ZenjectSettings_SignalSettings* _signalSettings;

  /// @brief Field _validationErrorResponse, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__validationErrorResponse, put = __cordl_internal_set__validationErrorResponse)) ::Zenject::ValidationErrorResponses _validationErrorResponse;

  /// @brief Field _validationRootResolveMethod, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__validationRootResolveMethod, put = __cordl_internal_set__validationRootResolveMethod)) ::Zenject::RootResolveMethods _validationRootResolveMethod;

  static inline ::Zenject::ZenjectSettings* New_ctor();

  static inline ::Zenject::ZenjectSettings* New_ctor(::Zenject::ValidationErrorResponses validationErrorResponse, ::Zenject::RootResolveMethods validationRootResolveMethod,
                                                     bool displayWarningWhenResolvingDuringInstall, bool ensureDeterministicDestructionOrderOnApplicationQuit,
                                                     ::Zenject::ZenjectSettings_SignalSettings* signalSettings);

  constexpr bool const& __cordl_internal_get__displayWarningWhenResolvingDuringInstall() const;

  constexpr bool& __cordl_internal_get__displayWarningWhenResolvingDuringInstall();

  constexpr bool const& __cordl_internal_get__ensureDeterministicDestructionOrderOnApplicationQuit() const;

  constexpr bool& __cordl_internal_get__ensureDeterministicDestructionOrderOnApplicationQuit();

  constexpr ::Zenject::ZenjectSettings_SignalSettings* const& __cordl_internal_get__signalSettings() const;

  constexpr ::Zenject::ZenjectSettings_SignalSettings*& __cordl_internal_get__signalSettings();

  constexpr ::Zenject::ValidationErrorResponses const& __cordl_internal_get__validationErrorResponse() const;

  constexpr ::Zenject::ValidationErrorResponses& __cordl_internal_get__validationErrorResponse();

  constexpr ::Zenject::RootResolveMethods const& __cordl_internal_get__validationRootResolveMethod() const;

  constexpr ::Zenject::RootResolveMethods& __cordl_internal_get__validationRootResolveMethod();

  constexpr void __cordl_internal_set__displayWarningWhenResolvingDuringInstall(bool value);

  constexpr void __cordl_internal_set__ensureDeterministicDestructionOrderOnApplicationQuit(bool value);

  constexpr void __cordl_internal_set__signalSettings(::Zenject::ZenjectSettings_SignalSettings* value);

  constexpr void __cordl_internal_set__validationErrorResponse(::Zenject::ValidationErrorResponses value);

  constexpr void __cordl_internal_set__validationRootResolveMethod(::Zenject::RootResolveMethods value);

  /// @brief Method .ctor, addr 0x4b34b48, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4b34aa8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ValidationErrorResponses validationErrorResponse, ::Zenject::RootResolveMethods validationRootResolveMethod, bool displayWarningWhenResolvingDuringInstall,
                    bool ensureDeterministicDestructionOrderOnApplicationQuit, ::Zenject::ZenjectSettings_SignalSettings* signalSettings);

  static inline ::Zenject::ZenjectSettings* getStaticF_Default();

  /// @brief Method get_DisplayWarningWhenResolvingDuringInstall, addr 0x4b34b78, size 0x8, virtual false, abstract: false, final false
  inline bool get_DisplayWarningWhenResolvingDuringInstall();

  /// @brief Method get_EnsureDeterministicDestructionOrderOnApplicationQuit, addr 0x4b34b80, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnsureDeterministicDestructionOrderOnApplicationQuit();

  /// @brief Method get_Signals, addr 0x4b34b60, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ZenjectSettings_SignalSettings* get_Signals();

  /// @brief Method get_ValidationErrorResponse, addr 0x4b34b68, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ValidationErrorResponses get_ValidationErrorResponse();

  /// @brief Method get_ValidationRootResolveMethod, addr 0x4b34b70, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::RootResolveMethods get_ValidationRootResolveMethod();

  static inline void setStaticF_Default(::Zenject::ZenjectSettings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectSettings(ZenjectSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectSettings(ZenjectSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12516 };

  /// @brief Field _ensureDeterministicDestructionOrderOnApplicationQuit, offset: 0x10, size: 0x1, def value: None
  bool ____ensureDeterministicDestructionOrderOnApplicationQuit;

  /// @brief Field _displayWarningWhenResolvingDuringInstall, offset: 0x11, size: 0x1, def value: None
  bool ____displayWarningWhenResolvingDuringInstall;

  /// @brief Field _validationRootResolveMethod, offset: 0x14, size: 0x4, def value: None
  ::Zenject::RootResolveMethods ____validationRootResolveMethod;

  /// @brief Field _validationErrorResponse, offset: 0x18, size: 0x4, def value: None
  ::Zenject::ValidationErrorResponses ____validationErrorResponse;

  /// @brief Field _signalSettings, offset: 0x20, size: 0x8, def value: None
  ::Zenject::ZenjectSettings_SignalSettings* ____signalSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ZenjectSettings, ____ensureDeterministicDestructionOrderOnApplicationQuit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSettings, ____displayWarningWhenResolvingDuringInstall) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSettings, ____validationRootResolveMethod) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSettings, ____validationErrorResponse) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectSettings, ____signalSettings) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectSettings, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ZenjectSettings);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectSettings*, "Zenject", "ZenjectSettings");
NEED_NO_BOX(::Zenject::ZenjectSettings_SignalSettings);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectSettings_SignalSettings*, "Zenject", "ZenjectSettings/SignalSettings");
