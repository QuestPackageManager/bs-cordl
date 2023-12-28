#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalDeclaration)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
namespace Zenject {
struct BindingId;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class ITickable;
}
namespace Zenject {
class __SignalDeclaration__Factory;
}
namespace Zenject {
class __ZenjectSettings__SignalSettings;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class __SignalDeclaration__Factory;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalDeclaration);
MARK_REF_PTR_T(::Zenject::__SignalDeclaration__Factory);
// Type: Zenject::SignalDeclaration
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11158)), TypeDefinitionIndex(TypeDefinitionIndex(11172))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10659))
// CS Name: ::Zenject::SignalDeclaration*
class CORDL_TYPE SignalDeclaration : public ::System::Object {
public:
  // Declarations
  using Factory = ::Zenject::__SignalDeclaration__Factory;

  /// @brief Field _subscriptions, offset 0x10, size 0x8
  __declspec(property(get = __get__subscriptions, put = __set__subscriptions))::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* _subscriptions;

  /// @brief Field _asyncQueue, offset 0x18, size 0x8
  __declspec(property(get = __get__asyncQueue, put = __set__asyncQueue))::System::Collections::Generic::List_1<::System::Object*>* _asyncQueue;

  /// @brief Field _bindingId, offset 0x20, size 0x10
  __declspec(property(get = __get__bindingId, put = __set__bindingId))::Zenject::BindingId _bindingId;

  /// @brief Field _missingHandlerResponses, offset 0x30, size 0x4
  __declspec(property(get = __get__missingHandlerResponses, put = __set__missingHandlerResponses))::Zenject::SignalMissingHandlerResponses _missingHandlerResponses;

  /// @brief Field _isAsync, offset 0x34, size 0x1
  __declspec(property(get = __get__isAsync, put = __set__isAsync)) bool _isAsync;

  /// @brief Field _settings, offset 0x38, size 0x8
  __declspec(property(get = __get__settings, put = __set__settings))::Zenject::__ZenjectSettings__SignalSettings* _settings;

  /// @brief Field <TickPriority>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__TickPriority_k__BackingField, put = __set__TickPriority_k__BackingField)) int32_t _TickPriority_k__BackingField;

  __declspec(property(get = get_TickPriority, put = set_TickPriority)) int32_t TickPriority;

  __declspec(property(get = get_IsAsync)) bool IsAsync;

  __declspec(property(get = get_BindingId))::Zenject::BindingId BindingId;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*& __get__subscriptions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>*> const& __get__subscriptions() const;

  constexpr void __set__subscriptions(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __get__asyncQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __get__asyncQueue() const;

  constexpr void __set__asyncQueue(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr ::Zenject::BindingId& __get__bindingId();

  constexpr ::Zenject::BindingId const& __get__bindingId() const;

  constexpr void __set__bindingId(::Zenject::BindingId value);

  constexpr ::Zenject::SignalMissingHandlerResponses& __get__missingHandlerResponses();

  constexpr ::Zenject::SignalMissingHandlerResponses const& __get__missingHandlerResponses() const;

  constexpr void __set__missingHandlerResponses(::Zenject::SignalMissingHandlerResponses value);

  constexpr bool& __get__isAsync();

  constexpr bool const& __get__isAsync() const;

  constexpr void __set__isAsync(bool value);

  constexpr ::Zenject::__ZenjectSettings__SignalSettings*& __get__settings();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__ZenjectSettings__SignalSettings*> const& __get__settings() const;

  constexpr void __set__settings(::Zenject::__ZenjectSettings__SignalSettings* value);

  constexpr int32_t& __get__TickPriority_k__BackingField();

  constexpr int32_t const& __get__TickPriority_k__BackingField() const;

  constexpr void __set__TickPriority_k__BackingField(int32_t value);

  static inline ::Zenject::SignalDeclaration* New_ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings);

  /// @brief Method .ctor addr 0x2ec2874 size 0x188 virtual false final false
  inline void _ctor(::Zenject::SignalDeclarationBindInfo* bindInfo, ::Zenject::ZenjectSettings* zenjectSettings);

  /// @brief Method get_TickPriority addr 0x2ec29fc size 0x8 virtual false final false
  inline int32_t get_TickPriority();

  /// @brief Method set_TickPriority addr 0x2ec2a04 size 0x8 virtual false final false
  inline void set_TickPriority(int32_t value);

  /// @brief Method get_IsAsync addr 0x2ec2a0c size 0x8 virtual false final false
  inline bool get_IsAsync();

  /// @brief Method get_BindingId addr 0x2ec2a14 size 0xc virtual false final false
  inline ::Zenject::BindingId get_BindingId();

  /// @brief Method Dispose addr 0x2ec2a20 size 0x154 virtual true final true
  inline void Dispose();

  /// @brief Method Fire addr 0x2ec2b7c size 0x2dc virtual false final false
  inline void Fire(::System::Object* signal);

  /// @brief Method FireInternal addr 0x2ec2e58 size 0x23c virtual false final false
  inline void FireInternal(::System::Collections::Generic::List_1<::Zenject::SignalSubscription*>* subscriptions, ::System::Object* signal);

  /// @brief Method Tick addr 0x2ec30b8 size 0x320 virtual true final true
  inline void Tick();

  /// @brief Method Add addr 0x2ec33d8 size 0xdc virtual false final false
  inline void Add(::Zenject::SignalSubscription* subscription);

  /// @brief Method Remove addr 0x2ec34b4 size 0x58 virtual false final false
  inline void Remove(::Zenject::SignalSubscription* subscription);

  /// @brief Method __zenCreate addr 0x2ec350c size 0x11c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ec3628 size 0x304 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclaration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalDeclaration(SignalDeclaration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclaration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalDeclaration(SignalDeclaration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalDeclaration();

public:
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
  ::Zenject::__ZenjectSettings__SignalSettings* ____settings;

  /// @brief Field <TickPriority>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____TickPriority_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalDeclaration, 0x48>, "Size mismatch!");

} // namespace Zenject
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10659)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11005), inst: 3493 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10654)), TypeDefinitionIndex(TypeDefinitionIndex(11005))} Self: TypeDefinitionIndex(TypeDefinitionIndex(10658)) CS Name: ::SignalDeclaration::Factory*
class CORDL_TYPE __SignalDeclaration__Factory : public ::Zenject::PlaceholderFactory_2<::Zenject::SignalDeclarationBindInfo*, ::Zenject::SignalDeclaration*> {
public:
  // Declarations
  static inline ::Zenject::__SignalDeclaration__Factory* New_ctor();

  /// @brief Method .ctor addr 0x2ec392c size 0x48 virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x2ec3974 size 0x58 virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ec39cc size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SignalDeclaration__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SignalDeclaration__Factory(__SignalDeclaration__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SignalDeclaration__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SignalDeclaration__Factory(__SignalDeclaration__Factory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SignalDeclaration__Factory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SignalDeclaration__Factory, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclaration*, "Zenject", "SignalDeclaration");
NEED_NO_BOX(::Zenject::__SignalDeclaration__Factory);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SignalDeclaration__Factory*, "Zenject", "SignalDeclaration/Factory");
