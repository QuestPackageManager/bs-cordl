#pragma once
// IWYU pragma private; include "Zenject/PoolCleanupChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ILateDisposable_def.hpp"
CORDL_MODULE_EXPORT(PoolCleanupChecker)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class PoolCleanupChecker___c;
}
// Forward declare root types
namespace Zenject {
class PoolCleanupChecker;
}
namespace Zenject {
class PoolCleanupChecker___c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PoolCleanupChecker);
MARK_REF_PTR_T(::Zenject::PoolCleanupChecker___c);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PoolCleanupChecker/<>c
class CORDL_TYPE PoolCleanupChecker___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::PoolCleanupChecker___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<::System::Type*, bool>* __9__2_0;

  static inline ::Zenject::PoolCleanupChecker___c* New_ctor();

  /// @brief Method <.ctor>b__2_0, addr 0x4b20818, size 0x6c, virtual false, abstract: false, final false
  inline bool __ctor_b__2_0(::System::Type* x);

  /// @brief Method __zenCreate, addr 0x4b20884, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b208d8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b20810, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::PoolCleanupChecker___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__2_0();

  static inline void setStaticF___9(::Zenject::PoolCleanupChecker___c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolCleanupChecker___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolCleanupChecker___c(PoolCleanupChecker___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolCleanupChecker___c(PoolCleanupChecker___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12440 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PoolCleanupChecker___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object, Zenject.ILateDisposable
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PoolCleanupChecker
class CORDL_TYPE PoolCleanupChecker : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::PoolCleanupChecker___c;

  /// @brief Field _ignoredPools, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ignoredPools, put = __cordl_internal_set__ignoredPools)) ::System::Collections::Generic::List_1<::System::Type*>* _ignoredPools;

  /// @brief Field _poolFactories, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__poolFactories, put = __cordl_internal_set__poolFactories)) ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* _poolFactories;

  /// @brief Convert operator to "::Zenject::ILateDisposable"
  constexpr operator ::Zenject::ILateDisposable*() noexcept;

  /// @brief Method LateDispose, addr 0x4b1ffd4, size 0x3d0, virtual true, abstract: false, final true
  inline void LateDispose();

  static inline ::Zenject::PoolCleanupChecker* New_ctor(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* poolFactories,
                                                        ::System::Collections::Generic::List_1<::System::Type*>* ignoredPools);

  constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& __cordl_internal_get__ignoredPools() const;

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get__ignoredPools();

  constexpr ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* const& __cordl_internal_get__poolFactories() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*& __cordl_internal_get__poolFactories();

  constexpr void __cordl_internal_set__ignoredPools(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr void __cordl_internal_set__poolFactories(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* value);

  /// @brief Method __zenCreate, addr 0x4b203a4, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b204bc, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1fec0, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* poolFactories, ::System::Collections::Generic::List_1<::System::Type*>* ignoredPools);

  /// @brief Convert to "::Zenject::ILateDisposable"
  constexpr ::Zenject::ILateDisposable* i___Zenject__ILateDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolCleanupChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolCleanupChecker(PoolCleanupChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolCleanupChecker(PoolCleanupChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12441 };

  /// @brief Field _poolFactories, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* ____poolFactories;

  /// @brief Field _ignoredPools, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ____ignoredPools;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PoolCleanupChecker, ____poolFactories) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PoolCleanupChecker, ____ignoredPools) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PoolCleanupChecker, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PoolCleanupChecker);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolCleanupChecker*, "Zenject", "PoolCleanupChecker");
NEED_NO_BOX(::Zenject::PoolCleanupChecker___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolCleanupChecker___c*, "Zenject", "PoolCleanupChecker/<>c");
