#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/DebugManagerAddon_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DebugManagerAddon_1)
namespace Meta::XR::ImmersiveDebugger::Manager {
class DebugManager;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class IDebugManager;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IDebugUIPanel;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache;
}
namespace Meta::XR::ImmersiveDebugger {
struct Telemetry_Method;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename Type> class DebugManagerAddon_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// cpp template
template <typename Type>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.DebugManagerAddon`1<Type>
class CORDL_TYPE DebugManagerAddon_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Method)) ::Meta::XR::ImmersiveDebugger::Telemetry_Method Method;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) Type _instance;

  /// @brief Field _instanceCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__instanceCache, put = __cordl_internal_set__instanceCache)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* _instanceCache;

  /// @brief Field _subDebugManagers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__subDebugManagers,
                      put = __cordl_internal_set__subDebugManagers)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* _subDebugManagers;

  /// @brief Field _uiPanel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__uiPanel, put = setStaticF__uiPanel)) ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* _uiPanel;

  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Destroy();

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method InitSubManagers, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InitSubManagers();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<Type>* New_ctor();

  /// @brief Method OnReady, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnReady(::Meta::XR::ImmersiveDebugger::Manager::DebugManager* debugManager);

  /// @brief Method OnReadyInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnReadyInternal();

  /// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Setup();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& __cordl_internal_get__instanceCache() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& __cordl_internal_get__instanceCache();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* const& __cordl_internal_get__subDebugManagers() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>*& __cordl_internal_get__subDebugManagers();

  constexpr void __cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value);

  constexpr void __cordl_internal_set__subDebugManagers(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline Type getStaticF__instance();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* getStaticF__uiPanel();

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline Type get_Instance();

  /// @brief Method get_Method, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Telemetry_Method get_Method();

  /// @brief Method get__subManagersToInitialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* get__subManagersToInitialize();

  static inline void setStaticF__instance(Type value);

  static inline void setStaticF__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugManagerAddon_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugManagerAddon_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugManagerAddon_1(DebugManagerAddon_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugManagerAddon_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugManagerAddon_1(DebugManagerAddon_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18397 };

  /// @brief Field _instanceCache, offset: 0x10, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* ____instanceCache;

  /// @brief Field _subDebugManagers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*>* ____subDebugManagers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Manager
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1, "Meta.XR.ImmersiveDebugger.Manager", "DebugManagerAddon`1");
