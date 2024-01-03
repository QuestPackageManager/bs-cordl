#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoader_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRManagerSettings)
namespace UnityEngine::XR::Management {
class XRLoader;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::XR::Management {
class __XRManagerSettings___InitializeLoader_d__24;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRManagerSettings;
}
namespace UnityEngine::XR::Management {
class __XRManagerSettings___InitializeLoader_d__24;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRManagerSettings);
MARK_REF_PTR_T(::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24);
// Type: ::<InitializeLoader>d__24
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3842)), TypeDefinitionIndex(TypeDefinitionIndex(16035)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 1697 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(16039)) CS Name:
// ::XRManagerSettings::<InitializeLoader>d__24*
class CORDL_TYPE __XRManagerSettings___InitializeLoader_d__24 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::XR::Management::XRManagerSettings* __4__this;

  /// @brief Field <>7__wrap1, offset 0x28, size 0x18
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::XR::Management::XRLoader*> __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::UnityEngine::XR::Management::XRManagerSettings*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Management::XRManagerSettings*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::XR::Management::XRManagerSettings* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::XR::Management::XRLoader*>& __get___7__wrap1();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::XR::Management::XRLoader*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::XR::Management::XRLoader*> value);

  static inline ::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2c767fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2c76d3c, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2c76d58, size 0x2bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x2c77014, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c77064, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c7706c, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c770ac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__XRManagerSettings___InitializeLoader_d__24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRManagerSettings___InitializeLoader_d__24(__XRManagerSettings___InitializeLoader_d__24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRManagerSettings___InitializeLoader_d__24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRManagerSettings___InitializeLoader_d__24(__XRManagerSettings___InitializeLoader_d__24 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRManagerSettings___InitializeLoader_d__24();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::XR::Management::XRManagerSettings* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::XR::Management::XRLoader*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24, _____7__wrap1) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::XR::Management
// Type: UnityEngine.XR.Management::XRManagerSettings
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16040))
// CS Name: ::UnityEngine.XR.Management::XRManagerSettings*
class CORDL_TYPE XRManagerSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using _InitializeLoader_d__24 = ::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24;

  /// @brief Field m_InitializationComplete, offset 0x18, size 0x1
  __declspec(property(get = __get_m_InitializationComplete, put = __set_m_InitializationComplete)) bool m_InitializationComplete;

  /// @brief Field m_RequiresSettingsUpdate, offset 0x19, size 0x1
  __declspec(property(get = __get_m_RequiresSettingsUpdate, put = __set_m_RequiresSettingsUpdate)) bool m_RequiresSettingsUpdate;

  /// @brief Field m_AutomaticLoading, offset 0x1a, size 0x1
  __declspec(property(get = __get_m_AutomaticLoading, put = __set_m_AutomaticLoading)) bool m_AutomaticLoading;

  /// @brief Field m_AutomaticRunning, offset 0x1b, size 0x1
  __declspec(property(get = __get_m_AutomaticRunning, put = __set_m_AutomaticRunning)) bool m_AutomaticRunning;

  /// @brief Field m_Loaders, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Loaders, put = __set_m_Loaders))::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* m_Loaders;

  /// @brief Field m_RegisteredLoaders, offset 0x28, size 0x8
  __declspec(property(get = __get_m_RegisteredLoaders, put = __set_m_RegisteredLoaders))::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Management::XRLoader*>* m_RegisteredLoaders;

  /// @brief Field <activeLoader>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__activeLoader_k__BackingField, put = __set__activeLoader_k__BackingField))::UnityEngine::XR::Management::XRLoader* _activeLoader_k__BackingField;

  __declspec(property(get = get_automaticLoading, put = set_automaticLoading)) bool automaticLoading;

  __declspec(property(get = get_automaticRunning, put = set_automaticRunning)) bool automaticRunning;

  __declspec(property(get = get_loaders))::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* loaders;

  __declspec(property(get = get_activeLoaders))::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::XR::Management::XRLoader*>* activeLoaders;

  __declspec(property(get = get_isInitializationComplete)) bool isInitializationComplete;

  __declspec(property(get = get_activeLoader, put = set_activeLoader))::UnityEngine::XR::Management::XRLoader* activeLoader;

  __declspec(property(get = get_currentLoaders, put = set_currentLoaders))::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* currentLoaders;

  __declspec(property(get = get_registeredLoaders))::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Management::XRLoader*>* registeredLoaders;

  constexpr bool& __get_m_InitializationComplete();

  constexpr bool const& __get_m_InitializationComplete() const;

  constexpr void __set_m_InitializationComplete(bool value);

  constexpr bool& __get_m_RequiresSettingsUpdate();

  constexpr bool const& __get_m_RequiresSettingsUpdate() const;

  constexpr void __set_m_RequiresSettingsUpdate(bool value);

  constexpr bool& __get_m_AutomaticLoading();

  constexpr bool const& __get_m_AutomaticLoading() const;

  constexpr void __set_m_AutomaticLoading(bool value);

  constexpr bool& __get_m_AutomaticRunning();

  constexpr bool const& __get_m_AutomaticRunning() const;

  constexpr void __set_m_AutomaticRunning(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>*& __get_m_Loaders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>*> const& __get_m_Loaders() const;

  constexpr void __set_m_Loaders(::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Management::XRLoader*>*& __get_m_RegisteredLoaders();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Management::XRLoader*>*> const& __get_m_RegisteredLoaders() const;

  constexpr void __set_m_RegisteredLoaders(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Management::XRLoader*>* value);

  constexpr ::UnityEngine::XR::Management::XRLoader*& __get__activeLoader_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Management::XRLoader*> const& __get__activeLoader_k__BackingField() const;

  constexpr void __set__activeLoader_k__BackingField(::UnityEngine::XR::Management::XRLoader* value);

  /// @brief Method get_automaticLoading, addr 0x2c765f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_automaticLoading();

  /// @brief Method set_automaticLoading, addr 0x2c765f8, size 0xc, virtual false, abstract: false, final false
  inline void set_automaticLoading(bool value);

  /// @brief Method get_automaticRunning, addr 0x2c76604, size 0x8, virtual false, abstract: false, final false
  inline bool get_automaticRunning();

  /// @brief Method set_automaticRunning, addr 0x2c7660c, size 0xc, virtual false, abstract: false, final false
  inline void set_automaticRunning(bool value);

  /// @brief Method get_loaders, addr 0x2c76618, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* get_loaders();

  /// @brief Method get_activeLoaders, addr 0x2c76620, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::XR::Management::XRLoader*>* get_activeLoaders();

  /// @brief Method get_isInitializationComplete, addr 0x2c76628, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitializationComplete();

  /// @brief Method get_activeLoader, addr 0x2c76630, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Management::XRLoader* get_activeLoader();

  /// @brief Method set_activeLoader, addr 0x2c76638, size 0x8, virtual false, abstract: false, final false
  inline void set_activeLoader(::UnityEngine::XR::Management::XRLoader* value);

  /// @brief Method ActiveLoaderAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T ActiveLoaderAs();

  /// @brief Method InitializeLoaderSync, addr 0x2c75e7c, size 0x23c, virtual false, abstract: false, final false
  inline void InitializeLoaderSync();

  /// @brief Method InitializeLoader, addr 0x2c76794, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* InitializeLoader();

  /// @brief Method TryAddLoader, addr 0x2c76824, size 0x194, virtual false, abstract: false, final false
  /// @param index: int32_t (default: static_cast<int32_t>(0xffffffff))
  inline bool TryAddLoader(::UnityEngine::XR::Management::XRLoader* loader, int32_t index = static_cast<int32_t>(0xffffffff));

  /// @brief Method TryRemoveLoader, addr 0x2c769b8, size 0x94, virtual false, abstract: false, final false
  inline bool TryRemoveLoader(::UnityEngine::XR::Management::XRLoader* loader);

  /// @brief Method TrySetLoaders, addr 0x2c76a4c, size 0x1d8, virtual false, abstract: false, final false
  inline bool TrySetLoaders(::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* reorderedLoaders);

  /// @brief Method CheckGraphicsAPICompatibility, addr 0x2c76640, size 0x154, virtual false, abstract: false, final false
  inline bool CheckGraphicsAPICompatibility(::UnityEngine::XR::Management::XRLoader* loader);

  /// @brief Method StartSubsystems, addr 0x2c760b8, size 0xdc, virtual false, abstract: false, final false
  inline void StartSubsystems();

  /// @brief Method StopSubsystems, addr 0x2c76240, size 0xdc, virtual false, abstract: false, final false
  inline void StopSubsystems();

  /// @brief Method DeinitializeLoader, addr 0x2c7631c, size 0xe4, virtual false, abstract: false, final false
  inline void DeinitializeLoader();

  /// @brief Method Start, addr 0x2c76c24, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDisable, addr 0x2c76c3c, size 0x18, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2c76c54, size 0x10, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method get_currentLoaders, addr 0x2c76c64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* get_currentLoaders();

  /// @brief Method set_currentLoaders, addr 0x2c76c6c, size 0x8, virtual false, abstract: false, final false
  inline void set_currentLoaders(::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* value);

  /// @brief Method get_registeredLoaders, addr 0x2c76c74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Management::XRLoader*>* get_registeredLoaders();

  static inline ::UnityEngine::XR::Management::XRManagerSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2c76c7c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XRManagerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRManagerSettings(XRManagerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRManagerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRManagerSettings(XRManagerSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRManagerSettings();

public:
  /// @brief Field m_InitializationComplete, offset: 0x18, size: 0x1, def value: None
  bool ___m_InitializationComplete;

  /// @brief Field m_RequiresSettingsUpdate, offset: 0x19, size: 0x1, def value: None
  bool ___m_RequiresSettingsUpdate;

  /// @brief Field m_AutomaticLoading, offset: 0x1a, size: 0x1, def value: None
  bool ___m_AutomaticLoading;

  /// @brief Field m_AutomaticRunning, offset: 0x1b, size: 0x1, def value: None
  bool ___m_AutomaticRunning;

  /// @brief Field m_Loaders, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Management::XRLoader*>* ___m_Loaders;

  /// @brief Field m_RegisteredLoaders, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Management::XRLoader*>* ___m_RegisteredLoaders;

  /// @brief Field <activeLoader>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::XR::Management::XRLoader* ____activeLoader_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRManagerSettings, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_InitializationComplete) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_RequiresSettingsUpdate) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_AutomaticLoading) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_AutomaticRunning) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_Loaders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ___m_RegisteredLoaders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagerSettings, ____activeLoader_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRManagerSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRManagerSettings*, "UnityEngine.XR.Management", "XRManagerSettings");
NEED_NO_BOX(::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::__XRManagerSettings___InitializeLoader_d__24*, "UnityEngine.XR.Management", "XRManagerSettings/<InitializeLoader>d__24");
