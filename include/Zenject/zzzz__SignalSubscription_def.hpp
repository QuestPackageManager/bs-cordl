#pragma once
// IWYU pragma private; include "Zenject/SignalSubscription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__IPoolable_2_def.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_3_def.hpp"
CORDL_MODULE_EXPORT(SignalSubscription)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class SignalSubscription_Pool;
}
// Forward declare root types
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class SignalSubscription_Pool;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalSubscription);
MARK_REF_PTR_T(::Zenject::SignalSubscription_Pool);
// Dependencies Zenject.PoolableMemoryPool`3<TParam1, TParam2, TValue>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalSubscription/Pool
class CORDL_TYPE SignalSubscription_Pool : public ::Zenject::PoolableMemoryPool_3<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*, ::Zenject::SignalSubscription*> {
public:
  // Declarations
  static inline ::Zenject::SignalSubscription_Pool* New_ctor();

  /// @brief Method __zenCreate, addr 0x4afd9e0, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4afda30, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4afd998, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalSubscription_Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalSubscription_Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalSubscription_Pool(SignalSubscription_Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalSubscription_Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalSubscription_Pool(SignalSubscription_Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12000 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalSubscription_Pool, 0x38>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.IDisposable, System.Object, Zenject.BindingId, Zenject.IPoolable`2<TParam1, TParam2>
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SignalSubscription
class CORDL_TYPE SignalSubscription : public ::System::Object {
public:
  // Declarations
  using Pool = ::Zenject::SignalSubscription_Pool;

  __declspec(property(get = get_SignalId)) ::Zenject::BindingId SignalId;

  /// @brief Field _callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__callback, put = __cordl_internal_set__callback)) ::System::Action_1<::System::Object*>* _callback;

  /// @brief Field _declaration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__declaration, put = __cordl_internal_set__declaration)) ::Zenject::SignalDeclaration* _declaration;

  /// @brief Field _pool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pool, put = __cordl_internal_set__pool)) ::Zenject::SignalSubscription_Pool* _pool;

  /// @brief Field _signalId, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__signalId, put = __cordl_internal_set__signalId)) ::Zenject::BindingId _signalId;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*>"
  constexpr operator ::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*>*() noexcept;

  /// @brief Method Dispose, addr 0x4afd5c4, size 0x9c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Invoke, addr 0x4afca2c, size 0x24, virtual false, abstract: false, final false
  inline void Invoke(::System::Object* signal);

  static inline ::Zenject::SignalSubscription* New_ctor(::Zenject::SignalSubscription_Pool* pool);

  /// @brief Method OnDeclarationDespawned, addr 0x4afc50c, size 0x8, virtual false, abstract: false, final false
  inline void OnDeclarationDespawned();

  /// @brief Method OnDespawned, addr 0x4afd598, size 0x2c, virtual true, abstract: false, final true
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0x4afd554, size 0x44, virtual true, abstract: false, final true
  inline void OnSpawned(::System::Action_1<::System::Object*>* callback, ::Zenject::SignalDeclaration* declaration);

  /// @brief Method SetDefaults, addr 0x4afd538, size 0x10, virtual false, abstract: false, final false
  inline void SetDefaults();

  constexpr ::System::Action_1<::System::Object*>* const& __cordl_internal_get__callback() const;

  constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get__callback();

  constexpr ::Zenject::SignalDeclaration* const& __cordl_internal_get__declaration() const;

  constexpr ::Zenject::SignalDeclaration*& __cordl_internal_get__declaration();

  constexpr ::Zenject::SignalSubscription_Pool* const& __cordl_internal_get__pool() const;

  constexpr ::Zenject::SignalSubscription_Pool*& __cordl_internal_get__pool();

  constexpr ::Zenject::BindingId const& __cordl_internal_get__signalId() const;

  constexpr ::Zenject::BindingId& __cordl_internal_get__signalId();

  constexpr void __cordl_internal_set__callback(::System::Action_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__declaration(::Zenject::SignalDeclaration* value);

  constexpr void __cordl_internal_set__pool(::Zenject::SignalSubscription_Pool* value);

  constexpr void __cordl_internal_set__signalId(::Zenject::BindingId value);

  /// @brief Method __zenCreate, addr 0x4afd660, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4afd730, size 0x268, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4afd504, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalSubscription_Pool* pool);

  /// @brief Method get_SignalId, addr 0x4afd548, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::BindingId get_SignalId();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*>"
  constexpr ::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*>*
  i___Zenject__IPoolable_2___System__Action_1___System__Object______Zenject__SignalDeclaration__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalSubscription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalSubscription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalSubscription(SignalSubscription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalSubscription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalSubscription(SignalSubscription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12001 };

  /// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SignalSubscription_Pool* ____pool;

  /// @brief Field _callback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* ____callback;

  /// @brief Field _declaration, offset: 0x20, size: 0x8, def value: None
  ::Zenject::SignalDeclaration* ____declaration;

  /// @brief Field _signalId, offset: 0x28, size: 0x10, def value: None
  ::Zenject::BindingId ____signalId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SignalSubscription, ____pool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalSubscription, ____callback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalSubscription, ____declaration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalSubscription, ____signalId) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SignalSubscription, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalSubscription);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscription*, "Zenject", "SignalSubscription");
NEED_NO_BOX(::Zenject::SignalSubscription_Pool);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscription_Pool*, "Zenject", "SignalSubscription/Pool");
