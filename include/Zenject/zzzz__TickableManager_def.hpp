#pragma once
// IWYU pragma private; include "Zenject/TickableManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TickableManager)
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
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
class FixedTickablesTaskUpdater;
}
namespace Zenject {
class IFixedTickable;
}
namespace Zenject {
class ILateTickable;
}
namespace Zenject {
class ITickable;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class LateTickablesTaskUpdater;
}
namespace Zenject {
class TickableManager___c;
}
namespace Zenject {
class TickableManager___c__DisplayClass17_0;
}
namespace Zenject {
class TickableManager___c__DisplayClass18_0;
}
namespace Zenject {
class TickableManager___c__DisplayClass19_0;
}
namespace Zenject {
class TickablesTaskUpdater;
}
// Forward declare root types
namespace Zenject {
class TickableManager;
}
namespace Zenject {
class TickableManager___c;
}
namespace Zenject {
class TickableManager___c__DisplayClass17_0;
}
namespace Zenject {
class TickableManager___c__DisplayClass18_0;
}
namespace Zenject {
class TickableManager___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::TickableManager);
MARK_REF_PTR_T(::Zenject::TickableManager___c);
MARK_REF_PTR_T(::Zenject::TickableManager___c__DisplayClass17_0);
MARK_REF_PTR_T(::Zenject::TickableManager___c__DisplayClass18_0);
MARK_REF_PTR_T(::Zenject::TickableManager___c__DisplayClass19_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TickableManager/<>c
class CORDL_TYPE TickableManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::TickableManager___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* __9__17_0;

  /// @brief Field <>9__17_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_2, put = setStaticF___9__17_2)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__17_2;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* __9__18_0;

  /// @brief Field <>9__18_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_2, put = setStaticF___9__18_2)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__18_2;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* __9__19_0;

  /// @brief Field <>9__19_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__19_2, put = setStaticF___9__19_2)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__19_2;

  static inline ::Zenject::TickableManager___c* New_ctor();

  /// @brief Method <InitFixedTickables>b__17_0, addr 0x4b4f728, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitFixedTickables_b__17_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitFixedTickables>b__17_2, addr 0x4b4f740, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitFixedTickables_b__17_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitLateTickables>b__19_0, addr 0x4b4f788, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitLateTickables_b__19_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitLateTickables>b__19_2, addr 0x4b4f7a0, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitLateTickables_b__19_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitTickables>b__18_0, addr 0x4b4f758, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitTickables_b__18_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitTickables>b__18_2, addr 0x4b4f770, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitTickables_b__18_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4b4f7b8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4f80c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4f720, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::TickableManager___c* getStaticF___9();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__17_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__17_2();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__18_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__18_2();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__19_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__19_2();

  static inline void setStaticF___9(::Zenject::TickableManager___c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline void setStaticF___9__17_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

  static inline void setStaticF___9__18_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline void setStaticF___9__18_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

  static inline void setStaticF___9__19_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline void setStaticF___9__19_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TickableManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TickableManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TickableManager___c(TickableManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TickableManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TickableManager___c(TickableManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::TickableManager___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TickableManager/<>c__DisplayClass17_0
class CORDL_TYPE TickableManager___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tickable, put = __cordl_internal_set_tickable)) ::Zenject::IFixedTickable* tickable;

  static inline ::Zenject::TickableManager___c__DisplayClass17_0* New_ctor();

  /// @brief Method <InitFixedTickables>b__1, addr 0x4b4f9c4, size 0x80, virtual false, abstract: false, final false
  inline bool _InitFixedTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  constexpr ::Zenject::IFixedTickable* const& __cordl_internal_get_tickable() const;

  constexpr ::Zenject::IFixedTickable*& __cordl_internal_get_tickable();

  constexpr void __cordl_internal_set_tickable(::Zenject::IFixedTickable* value);

  /// @brief Method __zenCreate, addr 0x4b4fa44, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4fa98, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4e3e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TickableManager___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TickableManager___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TickableManager___c__DisplayClass17_0(TickableManager___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TickableManager___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TickableManager___c__DisplayClass17_0(TickableManager___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12679 };

  /// @brief Field tickable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IFixedTickable* ___tickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::TickableManager___c__DisplayClass17_0, ___tickable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::TickableManager___c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TickableManager/<>c__DisplayClass18_0
class CORDL_TYPE TickableManager___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tickable, put = __cordl_internal_set_tickable)) ::Zenject::ITickable* tickable;

  static inline ::Zenject::TickableManager___c__DisplayClass18_0* New_ctor();

  /// @brief Method <InitTickables>b__1, addr 0x4b4fc50, size 0x80, virtual false, abstract: false, final false
  inline bool _InitTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  constexpr ::Zenject::ITickable* const& __cordl_internal_get_tickable() const;

  constexpr ::Zenject::ITickable*& __cordl_internal_get_tickable();

  constexpr void __cordl_internal_set_tickable(::Zenject::ITickable* value);

  /// @brief Method __zenCreate, addr 0x4b4fcd0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4fd24, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4e3f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TickableManager___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TickableManager___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TickableManager___c__DisplayClass18_0(TickableManager___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TickableManager___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TickableManager___c__DisplayClass18_0(TickableManager___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12680 };

  /// @brief Field tickable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ITickable* ___tickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::TickableManager___c__DisplayClass18_0, ___tickable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::TickableManager___c__DisplayClass18_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TickableManager/<>c__DisplayClass19_0
class CORDL_TYPE TickableManager___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tickable, put = __cordl_internal_set_tickable)) ::Zenject::ILateTickable* tickable;

  static inline ::Zenject::TickableManager___c__DisplayClass19_0* New_ctor();

  /// @brief Method <InitLateTickables>b__1, addr 0x4b4fedc, size 0x80, virtual false, abstract: false, final false
  inline bool _InitLateTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  constexpr ::Zenject::ILateTickable* const& __cordl_internal_get_tickable() const;

  constexpr ::Zenject::ILateTickable*& __cordl_internal_get_tickable();

  constexpr void __cordl_internal_set_tickable(::Zenject::ILateTickable* value);

  /// @brief Method __zenCreate, addr 0x4b4ff5c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4ffb0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b4e3f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TickableManager___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TickableManager___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TickableManager___c__DisplayClass19_0(TickableManager___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TickableManager___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TickableManager___c__DisplayClass19_0(TickableManager___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12681 };

  /// @brief Field tickable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ILateTickable* ___tickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::TickableManager___c__DisplayClass19_0, ___tickable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::TickableManager___c__DisplayClass19_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.TickableManager
class CORDL_TYPE TickableManager : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::TickableManager___c;

  using __c__DisplayClass17_0 = ::Zenject::TickableManager___c__DisplayClass17_0;

  using __c__DisplayClass18_0 = ::Zenject::TickableManager___c__DisplayClass18_0;

  using __c__DisplayClass19_0 = ::Zenject::TickableManager___c__DisplayClass19_0;

  __declspec(property(get = get_IsPaused, put = set_IsPaused)) bool IsPaused;

  __declspec(property(get = get_Tickables)) ::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* Tickables;

  /// @brief Field _fixedPriorities, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fixedPriorities,
                      put = __cordl_internal_set__fixedPriorities)) ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _fixedPriorities;

  /// @brief Field _fixedTickables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fixedTickables, put = __cordl_internal_set__fixedTickables)) ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* _fixedTickables;

  /// @brief Field _fixedUpdater, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__fixedUpdater, put = __cordl_internal_set__fixedUpdater)) ::Zenject::FixedTickablesTaskUpdater* _fixedUpdater;

  /// @brief Field _isPaused, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isPaused, put = __cordl_internal_set__isPaused)) bool _isPaused;

  /// @brief Field _latePriorities, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__latePriorities,
                      put = __cordl_internal_set__latePriorities)) ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _latePriorities;

  /// @brief Field _lateTickables, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lateTickables, put = __cordl_internal_set__lateTickables)) ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* _lateTickables;

  /// @brief Field _lateUpdater, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lateUpdater, put = __cordl_internal_set__lateUpdater)) ::Zenject::LateTickablesTaskUpdater* _lateUpdater;

  /// @brief Field _priorities, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__priorities,
                      put = __cordl_internal_set__priorities)) ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _priorities;

  /// @brief Field _tickables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tickables, put = __cordl_internal_set__tickables)) ::System::Collections::Generic::List_1<::Zenject::ITickable*>* _tickables;

  /// @brief Field _updater, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__updater, put = __cordl_internal_set__updater)) ::Zenject::TickablesTaskUpdater* _updater;

  /// @brief Method Add, addr 0x4b4e468, size 0x8, virtual false, abstract: false, final false
  inline void Add(::Zenject::ITickable* tickable);

  /// @brief Method Add, addr 0x4b4e400, size 0x68, virtual false, abstract: false, final false
  inline void Add(::Zenject::ITickable* tickable, int32_t priority);

  /// @brief Method AddFixed, addr 0x4b4e548, size 0x5c, virtual false, abstract: false, final false
  inline void AddFixed(::Zenject::IFixedTickable* tickable);

  /// @brief Method AddFixed, addr 0x4b4e4e0, size 0x68, virtual false, abstract: false, final false
  inline void AddFixed(::Zenject::IFixedTickable* tickable, int32_t priority);

  /// @brief Method AddLate, addr 0x4b4e4d8, size 0x8, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateTickable* tickable);

  /// @brief Method AddLate, addr 0x4b4e470, size 0x68, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateTickable* tickable, int32_t priority);

  /// @brief Method FixedUpdate, addr 0x4b48370, size 0x88, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method InitFixedTickables, addr 0x4b4d4c0, size 0x794, virtual false, abstract: false, final false
  inline void InitFixedTickables();

  /// @brief Method InitLateTickables, addr 0x4b4dc54, size 0x794, virtual false, abstract: false, final false
  inline void InitLateTickables();

  /// @brief Method InitTickables, addr 0x4b4cd2c, size 0x794, virtual false, abstract: false, final false
  inline void InitTickables();

  /// @brief Method Initialize, addr 0x4b4cd0c, size 0x20, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method LateUpdate, addr 0x4b482d0, size 0x88, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::Zenject::TickableManager* New_ctor();

  /// @brief Method Remove, addr 0x4b4e5a4, size 0x58, virtual false, abstract: false, final false
  inline void Remove(::Zenject::ITickable* tickable);

  /// @brief Method RemoveFixed, addr 0x4b4e654, size 0x58, virtual false, abstract: false, final false
  inline void RemoveFixed(::Zenject::IFixedTickable* tickable);

  /// @brief Method RemoveLate, addr 0x4b4e5fc, size 0x58, virtual false, abstract: false, final false
  inline void RemoveLate(::Zenject::ILateTickable* tickable);

  /// @brief Method Update, addr 0x4b48230, size 0x88, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* const& __cordl_internal_get__fixedPriorities() const;

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __cordl_internal_get__fixedPriorities();

  constexpr ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* const& __cordl_internal_get__fixedTickables() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>*& __cordl_internal_get__fixedTickables();

  constexpr ::Zenject::FixedTickablesTaskUpdater* const& __cordl_internal_get__fixedUpdater() const;

  constexpr ::Zenject::FixedTickablesTaskUpdater*& __cordl_internal_get__fixedUpdater();

  constexpr bool const& __cordl_internal_get__isPaused() const;

  constexpr bool& __cordl_internal_get__isPaused();

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* const& __cordl_internal_get__latePriorities() const;

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __cordl_internal_get__latePriorities();

  constexpr ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* const& __cordl_internal_get__lateTickables() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>*& __cordl_internal_get__lateTickables();

  constexpr ::Zenject::LateTickablesTaskUpdater* const& __cordl_internal_get__lateUpdater() const;

  constexpr ::Zenject::LateTickablesTaskUpdater*& __cordl_internal_get__lateUpdater();

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* const& __cordl_internal_get__priorities() const;

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __cordl_internal_get__priorities();

  constexpr ::System::Collections::Generic::List_1<::Zenject::ITickable*>* const& __cordl_internal_get__tickables() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::ITickable*>*& __cordl_internal_get__tickables();

  constexpr ::Zenject::TickablesTaskUpdater* const& __cordl_internal_get__updater() const;

  constexpr ::Zenject::TickablesTaskUpdater*& __cordl_internal_get__updater();

  constexpr void __cordl_internal_set__fixedPriorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  constexpr void __cordl_internal_set__fixedTickables(::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* value);

  constexpr void __cordl_internal_set__fixedUpdater(::Zenject::FixedTickablesTaskUpdater* value);

  constexpr void __cordl_internal_set__isPaused(bool value);

  constexpr void __cordl_internal_set__latePriorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  constexpr void __cordl_internal_set__lateTickables(::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* value);

  constexpr void __cordl_internal_set__lateUpdater(::Zenject::LateTickablesTaskUpdater* value);

  constexpr void __cordl_internal_set__priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  constexpr void __cordl_internal_set__tickables(::System::Collections::Generic::List_1<::Zenject::ITickable*>* value);

  constexpr void __cordl_internal_set__updater(::Zenject::TickablesTaskUpdater* value);

  /// @brief Method __zenCreate, addr 0x4b4e6ac, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4eeb4, size 0x810, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenFieldSetter0, addr 0x4b4e6fc, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1, addr 0x4b4e830, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2, addr 0x4b4e964, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter3, addr 0x4b4ea98, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter3(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter4, addr 0x4b4ebcc, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter4(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter5, addr 0x4b4ed00, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter5(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenInjectMethod0, addr 0x4b4ee34, size 0x80, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x4b4cc3c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsPaused, addr 0x4b4ccf8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPaused();

  /// @brief Method get_Tickables, addr 0x4b4ccf0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* get_Tickables();

  /// @brief Method set_IsPaused, addr 0x4b4cd00, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPaused(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TickableManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TickableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TickableManager(TickableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TickableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TickableManager(TickableManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12682 };

  /// @brief Field _tickables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::ITickable*>* ____tickables;

  /// @brief Field _fixedTickables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* ____fixedTickables;

  /// @brief Field _lateTickables, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* ____lateTickables;

  /// @brief Field _priorities, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* ____priorities;

  /// @brief Field _fixedPriorities, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* ____fixedPriorities;

  /// @brief Field _latePriorities, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* ____latePriorities;

  /// @brief Field _updater, offset: 0x40, size: 0x8, def value: None
  ::Zenject::TickablesTaskUpdater* ____updater;

  /// @brief Field _fixedUpdater, offset: 0x48, size: 0x8, def value: None
  ::Zenject::FixedTickablesTaskUpdater* ____fixedUpdater;

  /// @brief Field _lateUpdater, offset: 0x50, size: 0x8, def value: None
  ::Zenject::LateTickablesTaskUpdater* ____lateUpdater;

  /// @brief Field _isPaused, offset: 0x58, size: 0x1, def value: None
  bool ____isPaused;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::TickableManager, ____tickables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____fixedTickables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____lateTickables) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____priorities) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____fixedPriorities) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____latePriorities) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____updater) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____fixedUpdater) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____lateUpdater) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Zenject::TickableManager, ____isPaused) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::TickableManager, 0x60>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::TickableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickableManager*, "Zenject", "TickableManager");
NEED_NO_BOX(::Zenject::TickableManager___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickableManager___c*, "Zenject", "TickableManager/<>c");
NEED_NO_BOX(::Zenject::TickableManager___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickableManager___c__DisplayClass17_0*, "Zenject", "TickableManager/<>c__DisplayClass17_0");
NEED_NO_BOX(::Zenject::TickableManager___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickableManager___c__DisplayClass18_0*, "Zenject", "TickableManager/<>c__DisplayClass18_0");
NEED_NO_BOX(::Zenject::TickableManager___c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickableManager___c__DisplayClass19_0*, "Zenject", "TickableManager/<>c__DisplayClass19_0");
