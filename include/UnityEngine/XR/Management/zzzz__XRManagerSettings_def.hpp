#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRManagerSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRManagerSettings)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::Management {
class XRLoader;
}
namespace UnityEngine::XR::Management {
class XRManagerSettings__InitializeLoader_d__24;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRManagerSettings;
}
namespace UnityEngine::XR::Management {
class XRManagerSettings__InitializeLoader_d__24;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRManagerSettings);
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
class CORDL_TYPE XRManagerSettings__InitializeLoader_d__24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> __4__this;

  /// @brief Field <>7__wrap1, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::XR::Management::XRLoader>>
      __7__wrap1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4830dd4, size 0x2c0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x48310e4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x48310ec, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4831124, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4830db8, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::XR::Management::XRManagerSettings>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::XR::Management::XRLoader>> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::XR::Management::XRLoader>>& __cordl_internal_get___7__wrap1();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Management::XRManagerSettings> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::XR::Management::XRLoader>> value);

  /// @brief Method <>m__Finally1, addr 0x4831094, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x48306dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRManagerSettings__InitializeLoader_d__24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRManagerSettings__InitializeLoader_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRManagerSettings__InitializeLoader_d__24(XRManagerSettings__InitializeLoader_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRManagerSettings__InitializeLoader_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRManagerSettings__InitializeLoader_d__24(XRManagerSettings__InitializeLoader_d__24 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18682 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Management::XRManagerSettings> _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::XR::Management::XRLoader>> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24, 0x40>, "Size mismatch!");

} // namespace UnityEngine::XR::Management
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: UnityEngine.XR.Management.XRManagerSettings
class CORDL_TYPE XRManagerSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using _InitializeLoader_d__24 = ::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24;

  /// @brief Field <activeLoader>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__activeLoader_k__BackingField, put = __cordl_internal_set__activeLoader_k__BackingField)) ::UnityW<::UnityEngine::XR::Management::XRLoader>
      _activeLoader_k__BackingField;

  __declspec(property(get = get_activeLoader, put = set_activeLoader)) ::UnityW<::UnityEngine::XR::Management::XRLoader> activeLoader;

  __declspec(property(get = get_activeLoaders)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* activeLoaders;

  __declspec(property(get = get_automaticLoading, put = set_automaticLoading)) bool automaticLoading;

  __declspec(property(get = get_automaticRunning, put = set_automaticRunning)) bool automaticRunning;

  __declspec(property(get = get_currentLoaders, put = set_currentLoaders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* currentLoaders;

  __declspec(property(get = get_isInitializationComplete)) bool isInitializationComplete;

  __declspec(property(get = get_loaders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* loaders;

  /// @brief Field m_AutomaticLoading, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AutomaticLoading, put = __cordl_internal_set_m_AutomaticLoading)) bool m_AutomaticLoading;

  /// @brief Field m_AutomaticRunning, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AutomaticRunning, put = __cordl_internal_set_m_AutomaticRunning)) bool m_AutomaticRunning;

  /// @brief Field m_InitializationComplete, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InitializationComplete, put = __cordl_internal_set_m_InitializationComplete)) bool m_InitializationComplete;

  /// @brief Field m_Loaders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Loaders, put = __cordl_internal_set_m_Loaders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* m_Loaders;

  /// @brief Field m_RegisteredLoaders, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RegisteredLoaders,
                      put = __cordl_internal_set_m_RegisteredLoaders)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* m_RegisteredLoaders;

  /// @brief Field m_RequiresSettingsUpdate, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequiresSettingsUpdate, put = __cordl_internal_set_m_RequiresSettingsUpdate)) bool m_RequiresSettingsUpdate;

  __declspec(property(get = get_registeredLoaders)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* registeredLoaders;

  /// @brief Method ActiveLoaderAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ActiveLoaderAs();

  /// @brief Method Awake, addr 0x4830afc, size 0x1a0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckGraphicsAPICompatibility, addr 0x4830530, size 0x14c, virtual false, abstract: false, final false
  inline bool CheckGraphicsAPICompatibility(::UnityEngine::XR::Management::XRLoader* loader);

  /// @brief Method DeinitializeLoader, addr 0x4830214, size 0xe4, virtual false, abstract: false, final false
  inline void DeinitializeLoader();

  /// @brief Method InitializeLoader, addr 0x483067c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* InitializeLoader();

  /// @brief Method InitializeLoaderSync, addr 0x482fd5c, size 0x254, virtual false, abstract: false, final false
  inline void InitializeLoaderSync();

  static inline ::UnityEngine::XR::Management::XRManagerSettings* New_ctor();

  /// @brief Method OnDestroy, addr 0x4830ccc, size 0x10, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x4830cb4, size 0x18, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Start, addr 0x4830c9c, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartSubsystems, addr 0x482ffb0, size 0xdc, virtual false, abstract: false, final false
  inline void StartSubsystems();

  /// @brief Method StopSubsystems, addr 0x4830138, size 0xdc, virtual false, abstract: false, final false
  inline void StopSubsystems();

  /// @brief Method TryAddLoader, addr 0x4830704, size 0x190, virtual false, abstract: false, final false
  inline bool TryAddLoader(::UnityEngine::XR::Management::XRLoader* loader, int32_t index);

  /// @brief Method TryRemoveLoader, addr 0x4830894, size 0x94, virtual false, abstract: false, final false
  inline bool TryRemoveLoader(::UnityEngine::XR::Management::XRLoader* loader);

  /// @brief Method TrySetLoaders, addr 0x4830928, size 0x1d4, virtual false, abstract: false, final false
  inline bool TrySetLoaders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* reorderedLoaders);

  constexpr ::UnityW<::UnityEngine::XR::Management::XRLoader> const& __cordl_internal_get__activeLoader_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::XR::Management::XRLoader>& __cordl_internal_get__activeLoader_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_AutomaticLoading() const;

  constexpr bool& __cordl_internal_get_m_AutomaticLoading();

  constexpr bool const& __cordl_internal_get_m_AutomaticRunning() const;

  constexpr bool& __cordl_internal_get_m_AutomaticRunning();

  constexpr bool const& __cordl_internal_get_m_InitializationComplete() const;

  constexpr bool& __cordl_internal_get_m_InitializationComplete();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* const& __cordl_internal_get_m_Loaders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>*& __cordl_internal_get_m_Loaders();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* const& __cordl_internal_get_m_RegisteredLoaders() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>*& __cordl_internal_get_m_RegisteredLoaders();

  constexpr bool const& __cordl_internal_get_m_RequiresSettingsUpdate() const;

  constexpr bool& __cordl_internal_get_m_RequiresSettingsUpdate();

  constexpr void __cordl_internal_set__activeLoader_k__BackingField(::UnityW<::UnityEngine::XR::Management::XRLoader> value);

  constexpr void __cordl_internal_set_m_AutomaticLoading(bool value);

  constexpr void __cordl_internal_set_m_AutomaticRunning(bool value);

  constexpr void __cordl_internal_set_m_InitializationComplete(bool value);

  constexpr void __cordl_internal_set_m_Loaders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* value);

  constexpr void __cordl_internal_set_m_RegisteredLoaders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* value);

  constexpr void __cordl_internal_set_m_RequiresSettingsUpdate(bool value);

  /// @brief Method .ctor, addr 0x4830cf4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeLoader, addr 0x4830520, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Management::XRLoader> get_activeLoader();

  /// @brief Method get_activeLoaders, addr 0x4830510, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* get_activeLoaders();

  /// @brief Method get_automaticLoading, addr 0x48304e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_automaticLoading();

  /// @brief Method get_automaticRunning, addr 0x48304f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_automaticRunning();

  /// @brief Method get_currentLoaders, addr 0x4830cdc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* get_currentLoaders();

  /// @brief Method get_isInitializationComplete, addr 0x4830518, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitializationComplete();

  /// @brief Method get_loaders, addr 0x4830508, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* get_loaders();

  /// @brief Method get_registeredLoaders, addr 0x4830cec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* get_registeredLoaders();

  /// @brief Method set_activeLoader, addr 0x4830528, size 0x8, virtual false, abstract: false, final false
  inline void set_activeLoader(::UnityEngine::XR::Management::XRLoader* value);

  /// @brief Method set_automaticLoading, addr 0x48304e8, size 0xc, virtual false, abstract: false, final false
  inline void set_automaticLoading(bool value);

  /// @brief Method set_automaticRunning, addr 0x48304fc, size 0xc, virtual false, abstract: false, final false
  inline void set_automaticRunning(bool value);

  /// @brief Method set_currentLoaders, addr 0x4830ce4, size 0x8, virtual false, abstract: false, final false
  inline void set_currentLoaders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRManagerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRManagerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRManagerSettings(XRManagerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRManagerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRManagerSettings(XRManagerSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18683 };

  /// @brief Field m_InitializationComplete, offset: 0x18, size: 0x1, def value: None
  bool ___m_InitializationComplete;

  /// @brief Field m_RequiresSettingsUpdate, offset: 0x19, size: 0x1, def value: None
  bool ___m_RequiresSettingsUpdate;

  /// @brief Field m_AutomaticLoading, offset: 0x1a, size: 0x1, def value: None
  bool ___m_AutomaticLoading;

  /// @brief Field m_AutomaticRunning, offset: 0x1b, size: 0x1, def value: None
  bool ___m_AutomaticRunning;

  /// @brief Field m_Loaders, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* ___m_Loaders;

  /// @brief Field m_RegisteredLoaders, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Management::XRLoader>>* ___m_RegisteredLoaders;

  /// @brief Field <activeLoader>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Management::XRLoader> ____activeLoader_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_InitializationComplete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_RequiresSettingsUpdate) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_AutomaticLoading) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_AutomaticRunning) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_Loaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_RegisteredLoaders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ____activeLoader_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRManagerSettings, 0x38>, "Size mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRManagerSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRManagerSettings*, "UnityEngine.XR.Management", "XRManagerSettings");
NEED_NO_BOX(::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRManagerSettings__InitializeLoader_d__24*, "UnityEngine.XR.Management", "XRManagerSettings/<InitializeLoader>d__24");
