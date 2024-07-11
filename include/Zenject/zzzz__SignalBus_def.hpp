#pragma once
// IWYU pragma private; include "Zenject/SignalBus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalBus)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class ILateDisposable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
struct SignalMissingHandlerResponses;
}
namespace Zenject {
struct SignalSubscriptionId;
}
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class __SignalBus____c;
}
namespace Zenject {
template <typename TSignal> class __SignalBus____c__DisplayClass25_0_1;
}
namespace Zenject {
template <typename TSignal> class __SignalBus____c__DisplayClass27_0_1;
}
namespace Zenject {
class __SignalDeclaration__Factory;
}
namespace Zenject {
class __SignalSubscription__Pool;
}
namespace Zenject {
class __ZenjectSettings__SignalSettings;
}
// Forward declare root types
namespace Zenject {
class SignalBus;
}
namespace Zenject {
class __SignalBus____c;
}
namespace Zenject {
template <typename TSignal> class __SignalBus____c__DisplayClass25_0_1;
}
namespace Zenject {
template <typename TSignal> class __SignalBus____c__DisplayClass27_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalBus);
MARK_REF_PTR_T(::Zenject::__SignalBus____c);
MARK_GEN_REF_PTR_T(::Zenject::__SignalBus____c__DisplayClass25_0_1);
MARK_GEN_REF_PTR_T(::Zenject::__SignalBus____c__DisplayClass27_0_1);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::SignalBus::<>c*
class CORDL_TYPE __SignalBus____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__SignalBus____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Func_2<::Zenject::SignalSubscription*, ::StringW>* __9__12_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1))::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>* __9__7_1;

  static inline ::Zenject::__SignalBus____c* New_ctor();

  /// @brief Method <LateDispose>b__12_0, addr 0x365cb7c, size 0x34, virtual false, abstract: false, final false
  inline ::StringW _LateDispose_b__12_0(::Zenject::SignalSubscription* x);

  /// @brief Method <.ctor>b__7_0, addr 0x365cb5c, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::BindingId __ctor_b__7_0(::Zenject::SignalDeclaration* x);

  /// @brief Method <.ctor>b__7_1, addr 0x365cb74, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SignalDeclaration* __ctor_b__7_1(::Zenject::SignalDeclaration* x);

  /// @brief Method __zenCreate, addr 0x365cbb0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x365cc0c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x365cb54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__SignalBus____c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::SignalSubscription*, ::StringW>* getStaticF___9__12_0();

  static inline ::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>* getStaticF___9__7_0();

  static inline ::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>* getStaticF___9__7_1();

  static inline void setStaticF___9(::Zenject::__SignalBus____c* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::Zenject::SignalSubscription*, ::StringW>* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::BindingId>* value);

  static inline void setStaticF___9__7_1(::System::Func_2<::Zenject::SignalDeclaration*, ::Zenject::SignalDeclaration*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SignalBus____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SignalBus____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SignalBus____c(__SignalBus____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SignalBus____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SignalBus____c(__SignalBus____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SignalBus____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass25_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TSignal>
// Is value type: false
// CS Name: ::SignalBus::<>c__DisplayClass25_0`1<TSignal>*
class CORDL_TYPE __SignalBus____c__DisplayClass25_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Action* callback;

  static inline ::Zenject::__SignalBus____c__DisplayClass25_0_1<TSignal>* New_ctor();

  /// @brief Method <SubscribeId>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeId_b__0(::System::Object* args);

  constexpr ::System::Action*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::System::Action* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SignalBus____c__DisplayClass25_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SignalBus____c__DisplayClass25_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SignalBus____c__DisplayClass25_0_1(__SignalBus____c__DisplayClass25_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SignalBus____c__DisplayClass25_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SignalBus____c__DisplayClass25_0_1(__SignalBus____c__DisplayClass25_0_1 const&) = delete;

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass27_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TSignal>
// Is value type: false
// CS Name: ::SignalBus::<>c__DisplayClass27_0`1<TSignal>*
class CORDL_TYPE __SignalBus____c__DisplayClass27_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Action_1<TSignal>* callback;

  static inline ::Zenject::__SignalBus____c__DisplayClass27_0_1<TSignal>* New_ctor();

  /// @brief Method <SubscribeId>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _SubscribeId_b__0(::System::Object* args);

  constexpr ::System::Action_1<TSignal>*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TSignal>*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::System::Action_1<TSignal>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SignalBus____c__DisplayClass27_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SignalBus____c__DisplayClass27_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SignalBus____c__DisplayClass27_0_1(__SignalBus____c__DisplayClass27_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SignalBus____c__DisplayClass27_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SignalBus____c__DisplayClass27_0_1(__SignalBus____c__DisplayClass27_0_1 const&) = delete;

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TSignal>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::SignalBus
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SignalBus*
class CORDL_TYPE SignalBus : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__SignalBus____c;

  template <typename TSignal> using __c__DisplayClass25_0_1 = ::Zenject::__SignalBus____c__DisplayClass25_0_1<TSignal>;

  template <typename TSignal> using __c__DisplayClass27_0_1 = ::Zenject::__SignalBus____c__DisplayClass27_0_1<TSignal>;

  __declspec(property(get = get_NumSubscribers)) int32_t NumSubscribers;

  __declspec(property(get = get_ParentBus))::Zenject::SignalBus* ParentBus;

  /// @brief Field _container, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _localDeclarationMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localDeclarationMap,
                      put = __cordl_internal_set__localDeclarationMap))::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::Zenject::SignalDeclaration*>* _localDeclarationMap;

  /// @brief Field _parentBus, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__parentBus, put = __cordl_internal_set__parentBus))::Zenject::SignalBus* _parentBus;

  /// @brief Field _settings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings))::Zenject::__ZenjectSettings__SignalSettings* _settings;

  /// @brief Field _signalDeclarationFactory, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__signalDeclarationFactory, put = __cordl_internal_set__signalDeclarationFactory))::Zenject::__SignalDeclaration__Factory* _signalDeclarationFactory;

  /// @brief Field _subscriptionMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__subscriptionMap,
                      put = __cordl_internal_set__subscriptionMap))::System::Collections::Generic::Dictionary_2<::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscription*>* _subscriptionMap;

  /// @brief Field _subscriptionPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__subscriptionPool, put = __cordl_internal_set__subscriptionPool))::Zenject::__SignalSubscription__Pool* _subscriptionPool;

  /// @brief Convert operator to "::Zenject::ILateDisposable"
  constexpr operator ::Zenject::ILateDisposable*() noexcept;

  /// @brief Method DeclareSignal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void DeclareSignal(::System::Object* identifier, ::System::Nullable_1<::Zenject::SignalMissingHandlerResponses> missingHandlerResponse, ::System::Nullable_1<bool> forceAsync,
                            ::System::Nullable_1<int32_t> asyncTickPriority);

  /// @brief Method DeclareSignal, addr 0x365c1a0, size 0x198, virtual false, abstract: false, final false
  inline void DeclareSignal(::System::Type* signalType, ::System::Object* identifier, ::System::Nullable_1<::Zenject::SignalMissingHandlerResponses> missingHandlerResponse,
                            ::System::Nullable_1<bool> forceAsync, ::System::Nullable_1<int32_t> asyncTickPriority);

  /// @brief Method Fire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void Fire();

  /// @brief Method Fire, addr 0x365bc44, size 0xc, virtual false, abstract: false, final false
  inline void Fire(::System::Object* signal);

  /// @brief Method Fire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void Fire(TSignal signal);

  /// @brief Method FireId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void FireId(::System::Object* identifier);

  /// @brief Method FireId, addr 0x365bbb0, size 0x50, virtual false, abstract: false, final false
  inline void FireId(::System::Object* identifier, ::System::Object* signal);

  /// @brief Method FireId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void FireId(::System::Object* identifier, TSignal signal);

  /// @brief Method GetDeclaration, addr 0x365c068, size 0x138, virtual false, abstract: false, final false
  inline ::Zenject::SignalDeclaration* GetDeclaration(::Zenject::BindingId signalId, bool requireDeclaration);

  /// @brief Method GetDeclaration, addr 0x365bc00, size 0x44, virtual false, abstract: false, final false
  inline ::Zenject::SignalDeclaration* GetDeclaration(::System::Type* signalType, ::System::Object* identifier, bool requireDeclaration);

  /// @brief Method LateDispose, addr 0x365b760, size 0x450, virtual true, abstract: false, final true
  inline void LateDispose();

  static inline ::Zenject::SignalBus* New_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* signalDeclarations, ::Zenject::SignalBus* parentBus,
                                               ::Zenject::ZenjectSettings* zenjectSettings, ::Zenject::__SignalSubscription__Pool* subscriptionPool,
                                               ::Zenject::__SignalDeclaration__Factory* signalDeclarationFactory, ::Zenject::DiContainer* container);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void Subscribe(::System::Action* callback);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void Subscribe(::System::Action_1<TSignal>* callback);

  /// @brief Method Subscribe, addr 0x365bd0c, size 0x10, virtual false, abstract: false, final false
  inline void Subscribe(::System::Type* signalType, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method SubscribeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void SubscribeId(::System::Object* identifier, ::System::Action* callback);

  /// @brief Method SubscribeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void SubscribeId(::System::Object* identifier, ::System::Action_1<TSignal>* callback);

  /// @brief Method SubscribeId, addr 0x36581c8, size 0x8, virtual false, abstract: false, final false
  inline void SubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method SubscribeInternal, addr 0x365bf28, size 0x140, virtual false, abstract: false, final false
  inline void SubscribeInternal(::Zenject::SignalSubscriptionId id, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method SubscribeInternal, addr 0x365bf04, size 0x24, virtual false, abstract: false, final false
  inline void SubscribeInternal(::Zenject::BindingId signalId, ::System::Object* token, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method SubscribeInternal, addr 0x365bcb8, size 0x54, virtual false, abstract: false, final false
  inline void SubscribeInternal(::System::Type* signalType, ::System::Object* identifier, ::System::Object* token, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method TryFire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void TryFire();

  /// @brief Method TryFire, addr 0x365bcac, size 0xc, virtual false, abstract: false, final false
  inline void TryFire(::System::Object* signal);

  /// @brief Method TryFire, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void TryFire(TSignal signal);

  /// @brief Method TryFireId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void TryFireId(::System::Object* identifier);

  /// @brief Method TryFireId, addr 0x365bc50, size 0x5c, virtual false, abstract: false, final false
  inline void TryFireId(::System::Object* identifier, ::System::Object* signal);

  /// @brief Method TryFireId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void TryFireId(::System::Object* identifier, TSignal signal);

  /// @brief Method TryUnsubscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void TryUnsubscribe(::System::Action* callback);

  /// @brief Method TryUnsubscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void TryUnsubscribe(::System::Action_1<TSignal>* callback);

  /// @brief Method TryUnsubscribe, addr 0x365bda0, size 0x10, virtual false, abstract: false, final false
  inline void TryUnsubscribe(::System::Type* signalType, ::System::Action* callback);

  /// @brief Method TryUnsubscribe, addr 0x365bdb8, size 0x10, virtual false, abstract: false, final false
  inline void TryUnsubscribe(::System::Type* signalType, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method TryUnsubscribeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void TryUnsubscribeId(::System::Object* identifier, ::System::Action* callback);

  /// @brief Method TryUnsubscribeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void TryUnsubscribeId(::System::Object* identifier, ::System::Action_1<TSignal>* callback);

  /// @brief Method TryUnsubscribeId, addr 0x365bd98, size 0x8, virtual false, abstract: false, final false
  inline void TryUnsubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action* callback);

  /// @brief Method TryUnsubscribeId, addr 0x365bdb0, size 0x8, virtual false, abstract: false, final false
  inline void TryUnsubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method Unsubscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void Unsubscribe(::System::Action* callback);

  /// @brief Method Unsubscribe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void Unsubscribe(::System::Action_1<TSignal>* callback);

  /// @brief Method Unsubscribe, addr 0x365bd78, size 0x10, virtual false, abstract: false, final false
  inline void Unsubscribe(::System::Type* signalType, ::System::Action* callback);

  /// @brief Method Unsubscribe, addr 0x365bd88, size 0x10, virtual false, abstract: false, final false
  inline void Unsubscribe(::System::Type* signalType, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method UnsubscribeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void UnsubscribeId(::System::Object* identifier, ::System::Action* callback);

  /// @brief Method UnsubscribeId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSignal> inline void UnsubscribeId(::System::Object* identifier, ::System::Action_1<TSignal>* callback);

  /// @brief Method UnsubscribeId, addr 0x365bd1c, size 0x8, virtual false, abstract: false, final false
  inline void UnsubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action* callback);

  /// @brief Method UnsubscribeId, addr 0x3658438, size 0x8, virtual false, abstract: false, final false
  inline void UnsubscribeId(::System::Type* signalType, ::System::Object* identifier, ::System::Action_1<::System::Object*>* callback);

  /// @brief Method UnsubscribeInternal, addr 0x365bdec, size 0x118, virtual false, abstract: false, final false
  inline void UnsubscribeInternal(::Zenject::SignalSubscriptionId id, bool throwIfMissing);

  /// @brief Method UnsubscribeInternal, addr 0x365bdc8, size 0x24, virtual false, abstract: false, final false
  inline void UnsubscribeInternal(::Zenject::BindingId signalId, ::System::Object* token, bool throwIfMissing);

  /// @brief Method UnsubscribeInternal, addr 0x365bd24, size 0x54, virtual false, abstract: false, final false
  inline void UnsubscribeInternal(::System::Type* signalType, ::System::Object* identifier, ::System::Object* token, bool throwIfMissing);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::Zenject::SignalDeclaration*>*& __cordl_internal_get__localDeclarationMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::Zenject::SignalDeclaration*>*> const&
  __cordl_internal_get__localDeclarationMap() const;

  constexpr ::Zenject::SignalBus*& __cordl_internal_get__parentBus();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalBus*> const& __cordl_internal_get__parentBus() const;

  constexpr ::Zenject::__ZenjectSettings__SignalSettings*& __cordl_internal_get__settings();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__ZenjectSettings__SignalSettings*> const& __cordl_internal_get__settings() const;

  constexpr ::Zenject::__SignalDeclaration__Factory*& __cordl_internal_get__signalDeclarationFactory();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__SignalDeclaration__Factory*> const& __cordl_internal_get__signalDeclarationFactory() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscription*>*& __cordl_internal_get__subscriptionMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscription*>*> const&
  __cordl_internal_get__subscriptionMap() const;

  constexpr ::Zenject::__SignalSubscription__Pool*& __cordl_internal_get__subscriptionPool();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__SignalSubscription__Pool*> const& __cordl_internal_get__subscriptionPool() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__localDeclarationMap(::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::Zenject::SignalDeclaration*>* value);

  constexpr void __cordl_internal_set__parentBus(::Zenject::SignalBus* value);

  constexpr void __cordl_internal_set__settings(::Zenject::__ZenjectSettings__SignalSettings* value);

  constexpr void __cordl_internal_set__signalDeclarationFactory(::Zenject::__SignalDeclaration__Factory* value);

  constexpr void __cordl_internal_set__subscriptionMap(::System::Collections::Generic::Dictionary_2<::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscription*>* value);

  constexpr void __cordl_internal_set__subscriptionPool(::Zenject::__SignalSubscription__Pool* value);

  /// @brief Method __zenCreate, addr 0x365c338, size 0x288, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x365c5c0, size 0x530, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x365b488, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* signalDeclarations, ::Zenject::SignalBus* parentBus, ::Zenject::ZenjectSettings* zenjectSettings,
                    ::Zenject::__SignalSubscription__Pool* subscriptionPool, ::Zenject::__SignalDeclaration__Factory* signalDeclarationFactory, ::Zenject::DiContainer* container);

  /// @brief Method get_NumSubscribers, addr 0x365b710, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_NumSubscribers();

  /// @brief Method get_ParentBus, addr 0x365b708, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SignalBus* get_ParentBus();

  /// @brief Convert to "::Zenject::ILateDisposable"
  constexpr ::Zenject::ILateDisposable* i___Zenject__ILateDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalBus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalBus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalBus(SignalBus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalBus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalBus(SignalBus const&) = delete;

  /// @brief Field _subscriptionPool, offset: 0x10, size: 0x8, def value: None
  ::Zenject::__SignalSubscription__Pool* ____subscriptionPool;

  /// @brief Field _localDeclarationMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Zenject::BindingId, ::Zenject::SignalDeclaration*>* ____localDeclarationMap;

  /// @brief Field _parentBus, offset: 0x20, size: 0x8, def value: None
  ::Zenject::SignalBus* ____parentBus;

  /// @brief Field _subscriptionMap, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Zenject::SignalSubscriptionId, ::Zenject::SignalSubscription*>* ____subscriptionMap;

  /// @brief Field _settings, offset: 0x30, size: 0x8, def value: None
  ::Zenject::__ZenjectSettings__SignalSettings* ____settings;

  /// @brief Field _signalDeclarationFactory, offset: 0x38, size: 0x8, def value: None
  ::Zenject::__SignalDeclaration__Factory* ____signalDeclarationFactory;

  /// @brief Field _container, offset: 0x40, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalBus, 0x48>, "Size mismatch!");

static_assert(offsetof(::Zenject::SignalBus, ____subscriptionPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalBus, ____localDeclarationMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalBus, ____parentBus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalBus, ____subscriptionMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalBus, ____settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalBus, ____signalDeclarationFactory) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalBus, ____container) == 0x40, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalBus);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalBus*, "Zenject", "SignalBus");
NEED_NO_BOX(::Zenject::__SignalBus____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SignalBus____c*, "Zenject", "SignalBus/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__SignalBus____c__DisplayClass25_0_1, "Zenject", "SignalBus/<>c__DisplayClass25_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__SignalBus____c__DisplayClass27_0_1, "Zenject", "SignalBus/<>c__DisplayClass27_0`1");
