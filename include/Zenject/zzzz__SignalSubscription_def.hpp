#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_3_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignalSubscription)
namespace System {
template <typename T> class Action_1;
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
template <typename TParam1, typename TParam2> class IPoolable_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class __SignalSubscription__Pool;
}
// Forward declare root types
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class __SignalSubscription__Pool;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalSubscription);
MARK_REF_PTR_T(::Zenject::__SignalSubscription__Pool);
// Type: Zenject::SignalSubscription
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SignalSubscription*
class CORDL_TYPE SignalSubscription : public ::System::Object {
public:
  // Declarations
  using Pool = ::Zenject::__SignalSubscription__Pool;

  __declspec(property(get = get_SignalId))::Zenject::BindingId SignalId;

  /// @brief Field _callback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__callback, put = __cordl_internal_set__callback))::System::Action_1<::System::Object*>* _callback;

  /// @brief Field _declaration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__declaration, put = __cordl_internal_set__declaration))::Zenject::SignalDeclaration* _declaration;

  /// @brief Field _pool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__pool, put = __cordl_internal_set__pool))::Zenject::__SignalSubscription__Pool* _pool;

  /// @brief Field _signalId, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__signalId, put = __cordl_internal_set__signalId))::Zenject::BindingId _signalId;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*>"
  constexpr operator ::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*>*() noexcept;

  /// @brief Method Dispose, addr 0x302bcf4, size 0x9c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Invoke, addr 0x302b13c, size 0x24, virtual false, abstract: false, final false
  inline void Invoke(::System::Object* signal);

  static inline ::Zenject::SignalSubscription* New_ctor(::Zenject::__SignalSubscription__Pool* pool);

  /// @brief Method OnDeclarationDespawned, addr 0x302ac1c, size 0x8, virtual false, abstract: false, final false
  inline void OnDeclarationDespawned();

  /// @brief Method OnDespawned, addr 0x302bcc8, size 0x2c, virtual true, abstract: false, final true
  inline void OnDespawned();

  /// @brief Method OnSpawned, addr 0x302bc84, size 0x44, virtual true, abstract: false, final true
  inline void OnSpawned(::System::Action_1<::System::Object*>* callback, ::Zenject::SignalDeclaration* declaration);

  /// @brief Method SetDefaults, addr 0x302bc68, size 0x10, virtual false, abstract: false, final false
  inline void SetDefaults();

  constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get__callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const& __cordl_internal_get__callback() const;

  constexpr ::Zenject::SignalDeclaration*& __cordl_internal_get__declaration();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalDeclaration*> const& __cordl_internal_get__declaration() const;

  constexpr ::Zenject::__SignalSubscription__Pool*& __cordl_internal_get__pool();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__SignalSubscription__Pool*> const& __cordl_internal_get__pool() const;

  constexpr ::Zenject::BindingId const& __cordl_internal_get__signalId() const;

  constexpr ::Zenject::BindingId& __cordl_internal_get__signalId();

  constexpr void __cordl_internal_set__callback(::System::Action_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__declaration(::Zenject::SignalDeclaration* value);

  constexpr void __cordl_internal_set__pool(::Zenject::__SignalSubscription__Pool* value);

  constexpr void __cordl_internal_set__signalId(::Zenject::BindingId value);

  /// @brief Method __zenCreate, addr 0x302bd90, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x302be64, size 0x274, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x302bc34, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::__SignalSubscription__Pool* pool);

  /// @brief Method get_SignalId, addr 0x302bc78, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field _pool, offset: 0x10, size: 0x8, def value: None
  ::Zenject::__SignalSubscription__Pool* ____pool;

  /// @brief Field _callback, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* ____callback;

  /// @brief Field _declaration, offset: 0x20, size: 0x8, def value: None
  ::Zenject::SignalDeclaration* ____declaration;

  /// @brief Field _signalId, offset: 0x28, size: 0x10, def value: None
  ::Zenject::BindingId ____signalId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalSubscription, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::SignalSubscription, ____pool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalSubscription, ____callback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalSubscription, ____declaration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SignalSubscription, ____signalId) == 0x28, "Offset mismatch!");

} // namespace Zenject
// Type: ::Pool
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::SignalSubscription::Pool*
class CORDL_TYPE __SignalSubscription__Pool : public ::Zenject::PoolableMemoryPool_3<::System::Action_1<::System::Object*>*, ::Zenject::SignalDeclaration*, ::Zenject::SignalSubscription*> {
public:
  // Declarations
  static inline ::Zenject::__SignalSubscription__Pool* New_ctor();

  /// @brief Method __zenCreate, addr 0x302c120, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x302c178, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x302c0d8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SignalSubscription__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SignalSubscription__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SignalSubscription__Pool(__SignalSubscription__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SignalSubscription__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SignalSubscription__Pool(__SignalSubscription__Pool const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SignalSubscription__Pool, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalSubscription);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscription*, "Zenject", "SignalSubscription");
NEED_NO_BOX(::Zenject::__SignalSubscription__Pool);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SignalSubscription__Pool*, "Zenject", "SignalSubscription/Pool");
