#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Telemetry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Telemetry)
namespace Meta::XR::ImmersiveDebugger::Manager {
class DebugManager;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class IDebugManager;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Button;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Panel;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache;
}
namespace Meta::XR::ImmersiveDebugger {
class Telemetry_AnnotationType;
}
namespace Meta::XR::ImmersiveDebugger {
class Telemetry_MarkerId;
}
namespace Meta::XR::ImmersiveDebugger {
struct Telemetry_Method;
}
namespace Meta::XR::ImmersiveDebugger {
struct Telemetry_State;
}
namespace Meta::XR::ImmersiveDebugger {
class Telemetry_TelemetryTracker;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
struct Telemetry_Method;
}
namespace Meta::XR::ImmersiveDebugger {
struct Telemetry_State;
}
namespace Meta::XR::ImmersiveDebugger {
class Telemetry;
}
namespace Meta::XR::ImmersiveDebugger {
class Telemetry_AnnotationType;
}
namespace Meta::XR::ImmersiveDebugger {
class Telemetry_MarkerId;
}
namespace Meta::XR::ImmersiveDebugger {
class Telemetry_TelemetryTracker;
}
// Write type traits
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::Telemetry_Method);
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::Telemetry_State);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Telemetry);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Telemetry_AnnotationType);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Telemetry_MarkerId);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Telemetry/MarkerId
class CORDL_TYPE Telemetry_MarkerId : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry_MarkerId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Telemetry_MarkerId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Telemetry_MarkerId(Telemetry_MarkerId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Telemetry_MarkerId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Telemetry_MarkerId(Telemetry_MarkerId const&) = delete;

  /// @brief Field ComponentTracked offset 0xffffffff size 0x4
  static constexpr int32_t ComponentTracked{ static_cast<int32_t>(0x9b81762) };

  /// @brief Field FrameUpdate offset 0xffffffff size 0x4
  static constexpr int32_t FrameUpdate{ static_cast<int32_t>(0x9b80c0f) };

  /// @brief Field PanelClose offset 0xffffffff size 0x4
  static constexpr int32_t PanelClose{ static_cast<int32_t>(0x9b818cf) };

  /// @brief Field PanelInteraction offset 0xffffffff size 0x4
  static constexpr int32_t PanelInteraction{ static_cast<int32_t>(0x9b8146a) };

  /// @brief Field PanelOpen offset 0xffffffff size 0x4
  static constexpr int32_t PanelOpen{ static_cast<int32_t>(0x9b80e5b) };

  /// @brief Field Run offset 0xffffffff size 0x4
  static constexpr int32_t Run{ static_cast<int32_t>(0x9b81f98) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18288 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Telemetry_MarkerId, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies
namespace Meta::XR::ImmersiveDebugger {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Telemetry/State
struct CORDL_TYPE Telemetry_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Telemetry_State_Unwrapped
  enum struct __Telemetry_State_Unwrapped : int32_t {
    __E_OnStart = static_cast<int32_t>(0x0),
    __E_OnFocusLost = static_cast<int32_t>(0x1),
    __E_OnDisable = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Telemetry_State_Unwrapped() const noexcept {
    return static_cast<__Telemetry_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Telemetry_State(int32_t value__) noexcept;

  /// @brief Field OnDisable value: I32(2)
  static ::Meta::XR::ImmersiveDebugger::Telemetry_State const OnDisable;

  /// @brief Field OnFocusLost value: I32(1)
  static ::Meta::XR::ImmersiveDebugger::Telemetry_State const OnFocusLost;

  /// @brief Field OnStart value: I32(0)
  static ::Meta::XR::ImmersiveDebugger::Telemetry_State const OnStart;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18289 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Telemetry_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Telemetry_State, 0x4>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies
namespace Meta::XR::ImmersiveDebugger {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Telemetry/Method
struct CORDL_TYPE Telemetry_Method {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Telemetry_Method_Unwrapped
  enum struct __Telemetry_Method_Unwrapped : int32_t {
    __E_Attributes = static_cast<int32_t>(0x0),
    __E_DebugInspector = static_cast<int32_t>(0x1),
    __E_Hierarchy = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Telemetry_Method_Unwrapped() const noexcept {
    return static_cast<__Telemetry_Method_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry_Method();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Telemetry_Method(int32_t value__) noexcept;

  /// @brief Field Attributes value: I32(0)
  static ::Meta::XR::ImmersiveDebugger::Telemetry_Method const Attributes;

  /// @brief Field DebugInspector value: I32(1)
  static ::Meta::XR::ImmersiveDebugger::Telemetry_Method const DebugInspector;

  /// @brief Field Hierarchy value: I32(2)
  static ::Meta::XR::ImmersiveDebugger::Telemetry_Method const Hierarchy;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18290 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Telemetry_Method, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Telemetry_Method, 0x4>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Telemetry/AnnotationType
class CORDL_TYPE Telemetry_AnnotationType : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry_AnnotationType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Telemetry_AnnotationType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Telemetry_AnnotationType(Telemetry_AnnotationType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Telemetry_AnnotationType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Telemetry_AnnotationType(Telemetry_AnnotationType const&) = delete;

  /// @brief Field Action offset 0xffffffff size 0x8
  static constexpr ::ConstString Action{ u"action" };

  /// @brief Field ActionType offset 0xffffffff size 0x8
  static constexpr ::ConstString ActionType{ u"action_type" };

  /// @brief Field Actions offset 0xffffffff size 0x8
  static constexpr ::ConstString Actions{ u"Actions" };

  /// @brief Field Gizmos offset 0xffffffff size 0x8
  static constexpr ::ConstString Gizmos{ u"Gizmos" };

  /// @brief Field Instances offset 0xffffffff size 0x8
  static constexpr ::ConstString Instances{ u"Instances" };

  /// @brief Field IsCustom offset 0xffffffff size 0x8
  static constexpr ::ConstString IsCustom{ u"IsCustom" };

  /// @brief Field Method offset 0xffffffff size 0x8
  static constexpr ::ConstString Method{ u"Method" };

  /// @brief Field Origin offset 0xffffffff size 0x8
  static constexpr ::ConstString Origin{ u"origin" };

  /// @brief Field OriginType offset 0xffffffff size 0x8
  static constexpr ::ConstString OriginType{ u"origin_type" };

  /// @brief Field Platform offset 0xffffffff size 0x8
  static constexpr ::ConstString Platform{ u"platform" };

  /// @brief Field State offset 0xffffffff size 0x8
  static constexpr ::ConstString State{ u"State" };

  /// @brief Field Tweaks offset 0xffffffff size 0x8
  static constexpr ::ConstString Tweaks{ u"Tweaks" };

  /// @brief Field Type offset 0xffffffff size 0x8
  static constexpr ::ConstString Type{ u"Type" };

  /// @brief Field Watches offset 0xffffffff size 0x8
  static constexpr ::ConstString Watches{ u"Watches" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18291 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Telemetry_AnnotationType, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies Meta.XR.ImmersiveDebugger.Telemetry::Method, OVRTelemetryMarker, System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Telemetry/TelemetryTracker
class CORDL_TYPE Telemetry_TelemetryTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__cache, put = __cordl_internal_set__cache)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* _cache;

  /// @brief Field _managers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__managers,
                      put = __cordl_internal_set__managers)) ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* _managers;

  /// @brief Field _method, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__method, put = __cordl_internal_set__method)) ::Meta::XR::ImmersiveDebugger::Telemetry_Method _method;

  /// @brief Field _runTelemetryMarker, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__runTelemetryMarker, put = __cordl_internal_set__runTelemetryMarker)) ::GlobalNamespace::OVRTelemetryMarker _runTelemetryMarker;

  /// @brief Method Init, addr 0x582db98, size 0x128, virtual false, abstract: false, final false
  static inline ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker* Init(::Meta::XR::ImmersiveDebugger::Telemetry_Method method,
                                                                                ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* managers,
                                                                                ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache,
                                                                                ::Meta::XR::ImmersiveDebugger::Manager::DebugManager* debugManager);

  static inline ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker* New_ctor(::Meta::XR::ImmersiveDebugger::Telemetry_Method method,
                                                                                    ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* managers,
                                                                                    ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache);

  /// @brief Method OnDisable, addr 0x582e8c4, size 0x8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnFocusLost, addr 0x582e8bc, size 0x8, virtual false, abstract: false, final false
  inline void OnFocusLost();

  /// @brief Method OnStart, addr 0x582de74, size 0x30, virtual false, abstract: false, final false
  inline void OnStart();

  /// @brief Method SendComponentTracked, addr 0x582dec8, size 0x9f4, virtual false, abstract: false, final false
  inline void SendComponentTracked(::Meta::XR::ImmersiveDebugger::Telemetry_State state);

  /// @brief Method SendStart, addr 0x582dea4, size 0x24, virtual false, abstract: false, final false
  inline void SendStart();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& __cordl_internal_get__cache() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& __cordl_internal_get__cache();

  constexpr ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* const& __cordl_internal_get__managers() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*& __cordl_internal_get__managers();

  constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method const& __cordl_internal_get__method() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Telemetry_Method& __cordl_internal_get__method();

  constexpr ::GlobalNamespace::OVRTelemetryMarker const& __cordl_internal_get__runTelemetryMarker() const;

  constexpr ::GlobalNamespace::OVRTelemetryMarker& __cordl_internal_get__runTelemetryMarker();

  constexpr void __cordl_internal_set__cache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value);

  constexpr void __cordl_internal_set__managers(::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* value);

  constexpr void __cordl_internal_set__method(::Meta::XR::ImmersiveDebugger::Telemetry_Method value);

  constexpr void __cordl_internal_set__runTelemetryMarker(::GlobalNamespace::OVRTelemetryMarker value);

  /// @brief Method .ctor, addr 0x582dcc0, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::Meta::XR::ImmersiveDebugger::Telemetry_Method method, ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* managers,
                    ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry_TelemetryTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Telemetry_TelemetryTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Telemetry_TelemetryTracker(Telemetry_TelemetryTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Telemetry_TelemetryTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Telemetry_TelemetryTracker(Telemetry_TelemetryTracker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18292 };

  /// @brief Field _method, offset: 0x10, size: 0x4, def value: None
  ::Meta::XR::ImmersiveDebugger::Telemetry_Method ____method;

  /// @brief Field _cache, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* ____cache;

  /// @brief Field _managers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* ____managers;

  /// @brief Field _runTelemetryMarker, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::OVRTelemetryMarker ____runTelemetryMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker, ____method) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker, ____cache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker, ____managers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker, ____runTelemetryMarker) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker, 0x40>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Telemetry
class CORDL_TYPE Telemetry : public ::System::Object {
public:
  // Declarations
  using AnnotationType = ::Meta::XR::ImmersiveDebugger::Telemetry_AnnotationType;

  using MarkerId = ::Meta::XR::ImmersiveDebugger::Telemetry_MarkerId;

  using Method = ::Meta::XR::ImmersiveDebugger::Telemetry_Method;

  using State = ::Meta::XR::ImmersiveDebugger::Telemetry_State;

  using TelemetryTracker = ::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker;

  /// @brief Field NonCustomAssemblies, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NonCustomAssemblies, put = setStaticF_NonCustomAssemblies)) ::System::Collections::Generic::List_1<::StringW>* NonCustomAssemblies;

  /// @brief Method FetchPanel, addr 0x582d904, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel> FetchPanel(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller);

  /// @brief Method GetTypeHash, addr 0x582d290, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetTypeHash(::System::Type* type);

  /// @brief Method IsTypeCustom, addr 0x582d2f8, size 0x18c, virtual false, abstract: false, final false
  static inline bool IsTypeCustom(::System::Type* type);

  /// @brief Method OnButtonClicked, addr 0x582d650, size 0x2b4, virtual false, abstract: false, final false
  static inline void OnButtonClicked(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button* button);

  /// @brief Method OnPanelActiveStateChanged, addr 0x582d484, size 0x1cc, virtual false, abstract: false, final false
  static inline void OnPanelActiveStateChanged(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel* panel);

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_NonCustomAssemblies();

  static inline void setStaticF_NonCustomAssemblies(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Telemetry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Telemetry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Telemetry(Telemetry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Telemetry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Telemetry(Telemetry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Telemetry, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Telemetry_Method, "Meta.XR.ImmersiveDebugger", "Telemetry/Method");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Telemetry_State, "Meta.XR.ImmersiveDebugger", "Telemetry/State");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Telemetry);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Telemetry*, "Meta.XR.ImmersiveDebugger", "Telemetry");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Telemetry_AnnotationType);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Telemetry_AnnotationType*, "Meta.XR.ImmersiveDebugger", "Telemetry/AnnotationType");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Telemetry_MarkerId);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Telemetry_MarkerId*, "Meta.XR.ImmersiveDebugger", "Telemetry/MarkerId");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Telemetry_TelemetryTracker*, "Meta.XR.ImmersiveDebugger", "Telemetry/TelemetryTracker");
