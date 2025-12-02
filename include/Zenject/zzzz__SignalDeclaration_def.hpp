#pragma once
// IWYU pragma private; include "Zenject/SignalDeclaration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalDeclaration)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class ITickable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
namespace Zenject {
class SignalDeclaration_Factory;
}
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class ZenjectSettings_SignalSettings;
}
namespace Zenject {
class ZenjectSettings;
}
// Forward declare root types
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class SignalDeclaration_Factory;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalDeclaration);
MARK_REF_PTR_T(::Zenject::SignalDeclaration_Factory);
// Dependencies Zenject.PlaceholderFactory`2<TParam1, TValue>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalDeclaration/Factory
class CORDL_TYPE SignalDeclaration_Factory : public ::Zenject::PlaceholderFactory_2<::Zenject::SignalDeclarationBindInfo*, ::Zenject::SignalDeclaration*> {
public:
  // Declarations
  static inline ::Zenject::SignalDeclaration_Factory* New_ctor();

  /// @brief Method __zenCreate, addr 0x6c12844, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6c128bc, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6c12808, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalDeclaration_Factory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclaration_Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalDeclaration_Factory(SignalDeclaration_Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclaration_Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalDeclaration_Factory(SignalDeclaration_Factory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13980 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalDeclaration_Factory, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object, Zenject.BindingId, Zenject.SignalMissingHandlerResponses
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalDeclaration
class CORDL_TYPE SignalDeclaration : public ::System::Object {
public:
  // Declarations
  using Factory = ::Zenject::SignalDeclaration_Factory;

  __declspec(property(get = get_BindingId)) ::Zenject::BindingId BindingId;

  __declspec(property(get = get_IsAsync)) bool IsAsync;

  __declspec(property(get = get_TickPriority, put = set_TickPriority)) int32_t TickPriority;

  /// @brief Field <TickPriority>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__TickPriority_k__BackingField, put = __cordl_internal_set__TickPriority_k__BackingField)) int32_t _TickPriority_k__BackingField;

  /// @brief Field _asyncQueue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncQueue, put = __cordl_internal_set__asyncQueue)) ::System::Collections::Generic::List_1<::System::Object*>* _asyncQueue;

  /// @brief Field _bindingId, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__bindingId, put = __cordl_internal_set__bindingId)) ::Zenject::BindingId _bindingId;

  /// @brief Field _isAsync, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__isAsync, put = __cordl_internal_set__isAsync)) bool _isAsync;

  /// @brief Field _missingHandlerResponses, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__missingHandlerResponses, put = __cordl_internal_set__missingHandlerResponses)) ::Zenject::SignalMissingHandlerResponses _missingHandlerResponses;

  /// @brief Field _settings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::Zenject::ZenjectSettings_SignalSettings* _settings;

  /// @brief Field _subscriptions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__subscriptions, put = __cordl_internal_set__subscriptions)) ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* _subscriptions;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method Add, addr 0x6c122c0, size 0xec, virtual false, abstract: false, final false
  inline void Add(::Zenject::SignalSubscription* subscription);

  /// @brief Method Dispose, addr 0x6c11920, size 0x150, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Fire, addr 0x6c11a78, size 0x2b4, virtual false, abstract: false, final false
  inline void Fire(::System::Object* signal);

  /// @brief Method FireInternal, addr 0x6c11d2c, size 0x258, virtual false, abstract: false, final false
  inline void FireInternal(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* subscriptions, ::System::Object* signal);

  static inline ::Zenject::SignalDeclaration* New_ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings);

  /// @brief Method Remove, addr 0x6c123ac, size 0x5c, virtual false, abstract: false, final false
  inline void Remove(::Zenject::SignalSubscription* subscription);

  /// @brief Method Tick, addr 0x6c11fa4, size 0x31c, virtual true, abstract: false, final true
  inline void Tick();

  constexpr int32_t const& __cordl_internal_get__TickPriority_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__TickPriority_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__asyncQueue() const;

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__asyncQueue();

  constexpr ::Zenject::BindingId const& __cordl_internal_get__bindingId() const;

  constexpr ::Zenject::BindingId& __cordl_internal_get__bindingId();

  constexpr bool const& __cordl_internal_get__isAsync() const;

  constexpr bool& __cordl_internal_get__isAsync();

  constexpr ::Zenject::SignalMissingHandlerResponses const& __cordl_internal_get__missingHandlerResponses() const;

  constexpr ::Zenject::SignalMissingHandlerResponses& __cordl_internal_get__missingHandlerResponses();

  constexpr ::Zenject::ZenjectSettings_SignalSettings* const& __cordl_internal_get__settings() const;

  constexpr ::Zenject::ZenjectSettings_SignalSettings*& __cordl_internal_get__settings();

  constexpr ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* const& __cordl_internal_get__subscriptions() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*& __cordl_internal_get__subscriptions();

  constexpr void __cordl_internal_set__TickPriority_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__asyncQueue(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__bindingId(::Zenject::BindingId value);

  constexpr void __cordl_internal_set__isAsync(bool value);

  constexpr void __cordl_internal_set__missingHandlerResponses(::Zenject::SignalMissingHandlerResponses value);

  constexpr void __cordl_internal_set__settings(::Zenject::ZenjectSettings_SignalSettings* value);

  constexpr void __cordl_internal_set__subscriptions(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* value);

  /// @brief Method __zenCreate, addr 0x6c12408, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6c1252c, size 0x2dc, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6c1178c, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings);

  /// @brief Method get_BindingId, addr 0x6c11914, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::BindingId get_BindingId();

  /// @brief Method get_IsAsync, addr 0x6c1190c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAsync();

  /// @brief Method get_TickPriority, addr 0x6c118fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TickPriority();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method set_TickPriority, addr 0x6c11904, size 0x8, virtual false, abstract: false, final false
  inline void set_TickPriority(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalDeclaration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclaration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalDeclaration(SignalDeclaration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclaration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalDeclaration(SignalDeclaration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13981 };

  /// @brief Field _subscriptions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* ____subscriptions;

  /// @brief Field _asyncQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____asyncQueue;

  /// @brief Field _bindingId, offset: 0x20, size: 0x10, def value: None
  ::Zenject::BindingId ____bindingId;

  /// @brief Field _missingHandlerResponses, offset: 0x30, size: 0x4, def value: None
  ::Zenject::SignalMissingHandlerResponses ____missingHandlerResponses;

  /// @brief Field _isAsync, offset: 0x34, size: 0x1, def value: None
  bool ____isAsync;

  /// @brief Field _settings, offset: 0x38, size: 0x8, def value: None
  ::Zenject::ZenjectSettings_SignalSettings* ____settings;

  /// @brief Field <TickPriority>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____TickPriority_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SignalDeclaration, ____subscriptions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclaration, ____asyncQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclaration, ____bindingId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclaration, ____missingHandlerResponses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclaration, ____isAsync) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclaration, ____settings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalDeclaration, ____TickPriority_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SignalDeclaration, 0x48>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclaration*, "Zenject", "SignalDeclaration");
NEED_NO_BOX(::Zenject::SignalDeclaration_Factory);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclaration_Factory*, "Zenject", "SignalDeclaration/Factory");
