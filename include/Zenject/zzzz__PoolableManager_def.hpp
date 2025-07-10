#pragma once
// IWYU pragma private; include "Zenject/PoolableManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoolableManager)
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class IPoolable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct PoolableManager_PoolableInfo;
}
namespace Zenject {
class PoolableManager___c;
}
namespace Zenject {
class PoolableManager___c__DisplayClass2_0;
}
namespace Zenject {
class PoolableManager___c__DisplayClass3_0;
}
// Forward declare root types
namespace Zenject {
class PoolableManager;
}
namespace Zenject {
class PoolableManager___c;
}
namespace Zenject {
class PoolableManager___c__DisplayClass2_0;
}
namespace Zenject {
class PoolableManager___c__DisplayClass3_0;
}
namespace Zenject {
struct PoolableManager_PoolableInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PoolableManager);
MARK_REF_PTR_T(::Zenject::PoolableManager___c);
MARK_REF_PTR_T(::Zenject::PoolableManager___c__DisplayClass2_0);
MARK_REF_PTR_T(::Zenject::PoolableManager___c__DisplayClass3_0);
MARK_VAL_T(::Zenject::PoolableManager_PoolableInfo);
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.PoolableManager/PoolableInfo
struct CORDL_TYPE PoolableManager_PoolableInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4b4d06c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IPoolable* poolable, int32_t priority);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableManager_PoolableInfo();

  // Ctor Parameters [CppParam { name: "Poolable", ty: "::Zenject::IPoolable*", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PoolableManager_PoolableInfo(::Zenject::IPoolable* Poolable, int32_t Priority) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Poolable, offset: 0x0, size: 0x8, def value: None
  ::Zenject::IPoolable* Poolable;

  /// @brief Field Priority, offset: 0x8, size: 0x4, def value: None
  int32_t Priority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PoolableManager_PoolableInfo, Poolable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::PoolableManager_PoolableInfo, Priority) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PoolableManager_PoolableInfo, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PoolableManager/<>c
class CORDL_TYPE PoolableManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::PoolableManager___c* __9;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1)) ::System::Func_2<::Zenject::PoolableManager_PoolableInfo, int32_t>* __9__2_1;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_2, put = setStaticF___9__2_2)) ::System::Func_2<::Zenject::PoolableManager_PoolableInfo, ::Zenject::IPoolable*>* __9__2_2;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_1, put = setStaticF___9__3_1)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* __9__3_1;

  static inline ::Zenject::PoolableManager___c* New_ctor();

  /// @brief Method <CreatePoolableInfo>b__3_1, addr 0x4b4d724, size 0x60, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> _CreatePoolableInfo_b__3_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <.ctor>b__2_1, addr 0x4b4d714, size 0x8, virtual false, abstract: false, final false
  inline int32_t __ctor_b__2_1(::Zenject::PoolableManager_PoolableInfo x);

  /// @brief Method <.ctor>b__2_2, addr 0x4b4d71c, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::IPoolable* __ctor_b__2_2(::Zenject::PoolableManager_PoolableInfo x);

  /// @brief Method __zenCreate, addr 0x4b4d784, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4d7d8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4d70c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::PoolableManager___c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::PoolableManager_PoolableInfo, int32_t>* getStaticF___9__2_1();

  static inline ::System::Func_2<::Zenject::PoolableManager_PoolableInfo, ::Zenject::IPoolable*>* getStaticF___9__2_2();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* getStaticF___9__3_1();

  static inline void setStaticF___9(::Zenject::PoolableManager___c* value);

  static inline void setStaticF___9__2_1(::System::Func_2<::Zenject::PoolableManager_PoolableInfo, int32_t>* value);

  static inline void setStaticF___9__2_2(::System::Func_2<::Zenject::PoolableManager_PoolableInfo, ::Zenject::IPoolable*>* value);

  static inline void setStaticF___9__3_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableManager___c(PoolableManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableManager___c(PoolableManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PoolableManager___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PoolableManager/<>c__DisplayClass2_0
class CORDL_TYPE PoolableManager___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::PoolableManager* __4__this;

  /// @brief Field priorities, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_priorities,
                      put = __cordl_internal_set_priorities)) ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities;

  static inline ::Zenject::PoolableManager___c__DisplayClass2_0* New_ctor();

  constexpr ::Zenject::PoolableManager* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::PoolableManager*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* const& __cordl_internal_get_priorities() const;

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __cordl_internal_get_priorities();

  constexpr void __cordl_internal_set___4__this(::Zenject::PoolableManager* value);

  constexpr void __cordl_internal_set_priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  /// @brief Method <.ctor>b__0, addr 0x4b4d990, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::PoolableManager_PoolableInfo __ctor_b__0(::Zenject::IPoolable* x);

  /// @brief Method __zenCreate, addr 0x4b4d9ac, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4da00, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4ce44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableManager___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableManager___c__DisplayClass2_0(PoolableManager___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableManager___c__DisplayClass2_0(PoolableManager___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12671 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PoolableManager* _____4__this;

  /// @brief Field priorities, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* ___priorities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PoolableManager___c__DisplayClass2_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PoolableManager___c__DisplayClass2_0, ___priorities) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PoolableManager___c__DisplayClass2_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PoolableManager/<>c__DisplayClass3_0
class CORDL_TYPE PoolableManager___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field poolable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_poolable, put = __cordl_internal_set_poolable)) ::Zenject::IPoolable* poolable;

  static inline ::Zenject::PoolableManager___c__DisplayClass3_0* New_ctor();

  /// @brief Method <CreatePoolableInfo>b__0, addr 0x4b4dbb8, size 0x80, virtual false, abstract: false, final false
  inline bool _CreatePoolableInfo_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  constexpr ::Zenject::IPoolable* const& __cordl_internal_get_poolable() const;

  constexpr ::Zenject::IPoolable*& __cordl_internal_get_poolable();

  constexpr void __cordl_internal_set_poolable(::Zenject::IPoolable* value);

  /// @brief Method __zenCreate, addr 0x4b4dc38, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4dc8c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4d064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableManager___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableManager___c__DisplayClass3_0(PoolableManager___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableManager___c__DisplayClass3_0(PoolableManager___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12672 };

  /// @brief Field poolable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IPoolable* ___poolable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PoolableManager___c__DisplayClass3_0, ___poolable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PoolableManager___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PoolableManager
class CORDL_TYPE PoolableManager : public ::System::Object {
public:
  // Declarations
  using PoolableInfo = ::Zenject::PoolableManager_PoolableInfo;

  using __c = ::Zenject::PoolableManager___c;

  using __c__DisplayClass2_0 = ::Zenject::PoolableManager___c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::Zenject::PoolableManager___c__DisplayClass3_0;

  /// @brief Field _isSpawned, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isSpawned, put = __cordl_internal_set__isSpawned)) bool _isSpawned;

  /// @brief Field _poolables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__poolables, put = __cordl_internal_set__poolables)) ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* _poolables;

  /// @brief Method CreatePoolableInfo, addr 0x4b4ce4c, size 0x218, virtual false, abstract: false, final false
  inline ::Zenject::PoolableManager_PoolableInfo CreatePoolableInfo(::Zenject::IPoolable* poolable,
                                                                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  static inline ::Zenject::PoolableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables,
                                                     ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  /// @brief Method TriggerOnDespawned, addr 0x4b4d194, size 0x10c, virtual false, abstract: false, final false
  inline void TriggerOnDespawned();

  /// @brief Method TriggerOnSpawned, addr 0x4b4d078, size 0x11c, virtual false, abstract: false, final false
  inline void TriggerOnSpawned();

  constexpr bool const& __cordl_internal_get__isSpawned() const;

  constexpr bool& __cordl_internal_get__isSpawned();

  constexpr ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* const& __cordl_internal_get__poolables() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IPoolable*>*& __cordl_internal_get__poolables();

  constexpr void __cordl_internal_set__isSpawned(bool value);

  constexpr void __cordl_internal_set__poolables(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* value);

  /// @brief Method __zenCreate, addr 0x4b4d2a0, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4d3b8, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4cba4, size 0x2a0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableManager(PoolableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableManager(PoolableManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12673 };

  /// @brief Field _poolables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* ____poolables;

  /// @brief Field _isSpawned, offset: 0x18, size: 0x1, def value: None
  bool ____isSpawned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PoolableManager, ____poolables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PoolableManager, ____isSpawned) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PoolableManager, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PoolableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager*, "Zenject", "PoolableManager");
NEED_NO_BOX(::Zenject::PoolableManager___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager___c*, "Zenject", "PoolableManager/<>c");
NEED_NO_BOX(::Zenject::PoolableManager___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager___c__DisplayClass2_0*, "Zenject", "PoolableManager/<>c__DisplayClass2_0");
NEED_NO_BOX(::Zenject::PoolableManager___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager___c__DisplayClass3_0*, "Zenject", "PoolableManager/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager_PoolableInfo, "Zenject", "PoolableManager/PoolableInfo");
