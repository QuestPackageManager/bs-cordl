#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class TickablesTaskUpdater;
}
namespace Zenject {
class __TickableManager____c;
}
namespace Zenject {
class __TickableManager____c__DisplayClass17_0;
}
namespace Zenject {
class __TickableManager____c__DisplayClass18_0;
}
namespace Zenject {
class __TickableManager____c__DisplayClass19_0;
}
// Forward declare root types
namespace Zenject {
class TickableManager;
}
namespace Zenject {
class __TickableManager____c;
}
namespace Zenject {
class __TickableManager____c__DisplayClass17_0;
}
namespace Zenject {
class __TickableManager____c__DisplayClass18_0;
}
namespace Zenject {
class __TickableManager____c__DisplayClass19_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::TickableManager);
MARK_REF_PTR_T(::Zenject::__TickableManager____c);
MARK_REF_PTR_T(::Zenject::__TickableManager____c__DisplayClass17_0);
MARK_REF_PTR_T(::Zenject::__TickableManager____c__DisplayClass18_0);
MARK_REF_PTR_T(::Zenject::__TickableManager____c__DisplayClass19_0);
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::TickableManager::<>c__DisplayClass17_0*
class CORDL_TYPE __TickableManager____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tickable, put = __cordl_internal_set_tickable))::Zenject::IFixedTickable* tickable;

  static inline ::Zenject::__TickableManager____c__DisplayClass17_0* New_ctor();

  /// @brief Method <InitFixedTickables>b__1, addr 0x346b158, size 0x80, virtual false, abstract: false, final false
  inline bool _InitFixedTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  constexpr ::Zenject::IFixedTickable*& __cordl_internal_get_tickable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IFixedTickable*> const& __cordl_internal_get_tickable() const;

  constexpr void __cordl_internal_set_tickable(::Zenject::IFixedTickable* value);

  /// @brief Method __zenCreate, addr 0x346b1d8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x346b234, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3469e44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TickableManager____c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TickableManager____c__DisplayClass17_0(__TickableManager____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TickableManager____c__DisplayClass17_0(__TickableManager____c__DisplayClass17_0 const&) = delete;

  /// @brief Field tickable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IFixedTickable* ___tickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__TickableManager____c__DisplayClass17_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__TickableManager____c__DisplayClass17_0, ___tickable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::TickableManager::<>c*
class CORDL_TYPE __TickableManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__TickableManager____c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* __9__17_0;

  /// @brief Field <>9__17_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_2, put = setStaticF___9__17_2))::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__17_2;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0))::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* __9__18_0;

  /// @brief Field <>9__18_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_2, put = setStaticF___9__18_2))::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__18_2;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0))::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* __9__19_0;

  /// @brief Field <>9__19_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_2, put = setStaticF___9__19_2))::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__19_2;

  static inline ::Zenject::__TickableManager____c* New_ctor();

  /// @brief Method <InitFixedTickables>b__17_0, addr 0x346b460, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitFixedTickables_b__17_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitFixedTickables>b__17_2, addr 0x346b478, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitFixedTickables_b__17_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitLateTickables>b__19_0, addr 0x346b4c0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitLateTickables_b__19_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitLateTickables>b__19_2, addr 0x346b4d8, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitLateTickables_b__19_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitTickables>b__18_0, addr 0x346b490, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitTickables_b__18_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitTickables>b__18_2, addr 0x346b4a8, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitTickables_b__18_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x346b4f0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x346b54c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x346b458, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__TickableManager____c* getStaticF___9();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__17_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__17_2();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__18_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__18_2();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__19_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__19_2();

  static inline void setStaticF___9(::Zenject::__TickableManager____c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline void setStaticF___9__17_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

  static inline void setStaticF___9__18_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline void setStaticF___9__18_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

  static inline void setStaticF___9__19_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline void setStaticF___9__19_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TickableManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TickableManager____c(__TickableManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TickableManager____c(__TickableManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__TickableManager____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::TickableManager::<>c__DisplayClass18_0*
class CORDL_TYPE __TickableManager____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tickable, put = __cordl_internal_set_tickable))::Zenject::ITickable* tickable;

  static inline ::Zenject::__TickableManager____c__DisplayClass18_0* New_ctor();

  /// @brief Method <InitTickables>b__1, addr 0x346b70c, size 0x80, virtual false, abstract: false, final false
  inline bool _InitTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  constexpr ::Zenject::ITickable*& __cordl_internal_get_tickable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ITickable*> const& __cordl_internal_get_tickable() const;

  constexpr void __cordl_internal_set_tickable(::Zenject::ITickable* value);

  /// @brief Method __zenCreate, addr 0x346b78c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x346b7e8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3469e4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TickableManager____c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TickableManager____c__DisplayClass18_0(__TickableManager____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TickableManager____c__DisplayClass18_0(__TickableManager____c__DisplayClass18_0 const&) = delete;

  /// @brief Field tickable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ITickable* ___tickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__TickableManager____c__DisplayClass18_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__TickableManager____c__DisplayClass18_0, ___tickable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::TickableManager::<>c__DisplayClass19_0*
class CORDL_TYPE __TickableManager____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tickable, put = __cordl_internal_set_tickable))::Zenject::ILateTickable* tickable;

  static inline ::Zenject::__TickableManager____c__DisplayClass19_0* New_ctor();

  /// @brief Method <InitLateTickables>b__1, addr 0x346b9a8, size 0x80, virtual false, abstract: false, final false
  inline bool _InitLateTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  constexpr ::Zenject::ILateTickable*& __cordl_internal_get_tickable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ILateTickable*> const& __cordl_internal_get_tickable() const;

  constexpr void __cordl_internal_set_tickable(::Zenject::ILateTickable* value);

  /// @brief Method __zenCreate, addr 0x346ba28, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x346ba84, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3469e54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TickableManager____c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TickableManager____c__DisplayClass19_0(__TickableManager____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TickableManager____c__DisplayClass19_0(__TickableManager____c__DisplayClass19_0 const&) = delete;

  /// @brief Field tickable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ILateTickable* ___tickable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__TickableManager____c__DisplayClass19_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__TickableManager____c__DisplayClass19_0, ___tickable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::TickableManager
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::TickableManager*
class CORDL_TYPE TickableManager : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__TickableManager____c;

  using __c__DisplayClass17_0 = ::Zenject::__TickableManager____c__DisplayClass17_0;

  using __c__DisplayClass18_0 = ::Zenject::__TickableManager____c__DisplayClass18_0;

  using __c__DisplayClass19_0 = ::Zenject::__TickableManager____c__DisplayClass19_0;

  __declspec(property(get = get_IsPaused, put = set_IsPaused)) bool IsPaused;

  __declspec(property(get = get_Tickables))::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* Tickables;

  /// @brief Field _fixedPriorities, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__fixedPriorities,
                      put = __cordl_internal_set__fixedPriorities))::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _fixedPriorities;

  /// @brief Field _fixedTickables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fixedTickables, put = __cordl_internal_set__fixedTickables))::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* _fixedTickables;

  /// @brief Field _fixedUpdater, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__fixedUpdater, put = __cordl_internal_set__fixedUpdater))::Zenject::FixedTickablesTaskUpdater* _fixedUpdater;

  /// @brief Field _isPaused, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isPaused, put = __cordl_internal_set__isPaused)) bool _isPaused;

  /// @brief Field _latePriorities, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__latePriorities,
                      put = __cordl_internal_set__latePriorities))::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _latePriorities;

  /// @brief Field _lateTickables, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lateTickables, put = __cordl_internal_set__lateTickables))::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* _lateTickables;

  /// @brief Field _lateUpdater, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lateUpdater, put = __cordl_internal_set__lateUpdater))::Zenject::LateTickablesTaskUpdater* _lateUpdater;

  /// @brief Field _priorities, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__priorities,
                      put = __cordl_internal_set__priorities))::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _priorities;

  /// @brief Field _tickables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tickables, put = __cordl_internal_set__tickables))::System::Collections::Generic::List_1<::Zenject::ITickable*>* _tickables;

  /// @brief Field _updater, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__updater, put = __cordl_internal_set__updater))::Zenject::TickablesTaskUpdater* _updater;

  /// @brief Method Add, addr 0x3469ec4, size 0x8, virtual false, abstract: false, final false
  inline void Add(::Zenject::ITickable* tickable);

  /// @brief Method Add, addr 0x3469e5c, size 0x68, virtual false, abstract: false, final false
  inline void Add(::Zenject::ITickable* tickable, int32_t priority);

  /// @brief Method AddFixed, addr 0x3469fa4, size 0x5c, virtual false, abstract: false, final false
  inline void AddFixed(::Zenject::IFixedTickable* tickable);

  /// @brief Method AddFixed, addr 0x3469f3c, size 0x68, virtual false, abstract: false, final false
  inline void AddFixed(::Zenject::IFixedTickable* tickable, int32_t priority);

  /// @brief Method AddLate, addr 0x3469f34, size 0x8, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateTickable* tickable);

  /// @brief Method AddLate, addr 0x3469ecc, size 0x68, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateTickable* tickable, int32_t priority);

  /// @brief Method FixedUpdate, addr 0x3463c6c, size 0x88, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method InitFixedTickables, addr 0x3468eec, size 0x7ac, virtual false, abstract: false, final false
  inline void InitFixedTickables();

  /// @brief Method InitLateTickables, addr 0x3469698, size 0x7ac, virtual false, abstract: false, final false
  inline void InitLateTickables();

  /// @brief Method InitTickables, addr 0x3468740, size 0x7ac, virtual false, abstract: false, final false
  inline void InitTickables();

  /// @brief Method Initialize, addr 0x3468720, size 0x20, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method LateUpdate, addr 0x3463bcc, size 0x88, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::Zenject::TickableManager* New_ctor();

  /// @brief Method Remove, addr 0x346a000, size 0x58, virtual false, abstract: false, final false
  inline void Remove(::Zenject::ITickable* tickable);

  /// @brief Method RemoveFixed, addr 0x346a0b0, size 0x58, virtual false, abstract: false, final false
  inline void RemoveFixed(::Zenject::IFixedTickable* tickable);

  /// @brief Method RemoveLate, addr 0x346a058, size 0x58, virtual false, abstract: false, final false
  inline void RemoveLate(::Zenject::ILateTickable* tickable);

  /// @brief Method Update, addr 0x3463b2c, size 0x88, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __cordl_internal_get__fixedPriorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*> const&
  __cordl_internal_get__fixedPriorities() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>*& __cordl_internal_get__fixedTickables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>*> const& __cordl_internal_get__fixedTickables() const;

  constexpr ::Zenject::FixedTickablesTaskUpdater*& __cordl_internal_get__fixedUpdater();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FixedTickablesTaskUpdater*> const& __cordl_internal_get__fixedUpdater() const;

  constexpr bool const& __cordl_internal_get__isPaused() const;

  constexpr bool& __cordl_internal_get__isPaused();

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __cordl_internal_get__latePriorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*> const&
  __cordl_internal_get__latePriorities() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>*& __cordl_internal_get__lateTickables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ILateTickable*>*> const& __cordl_internal_get__lateTickables() const;

  constexpr ::Zenject::LateTickablesTaskUpdater*& __cordl_internal_get__lateUpdater();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::LateTickablesTaskUpdater*> const& __cordl_internal_get__lateUpdater() const;

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __cordl_internal_get__priorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*> const& __cordl_internal_get__priorities() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::ITickable*>*& __cordl_internal_get__tickables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ITickable*>*> const& __cordl_internal_get__tickables() const;

  constexpr ::Zenject::TickablesTaskUpdater*& __cordl_internal_get__updater();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::TickablesTaskUpdater*> const& __cordl_internal_get__updater() const;

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

  /// @brief Method __zenCreate, addr 0x346a108, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x346a918, size 0x840, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenFieldSetter0, addr 0x346a160, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1, addr 0x346a294, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2, addr 0x346a3c8, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter3, addr 0x346a4fc, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter3(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter4, addr 0x346a630, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter4(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter5, addr 0x346a764, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter5(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenInjectMethod0, addr 0x346a898, size 0x80, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x3468648, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsPaused, addr 0x346870c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPaused();

  /// @brief Method get_Tickables, addr 0x3468704, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* get_Tickables();

  /// @brief Method set_IsPaused, addr 0x3468714, size 0xc, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Zenject::TickableManager, 0x60>, "Size mismatch!");

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

} // namespace Zenject
NEED_NO_BOX(::Zenject::TickableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TickableManager*, "Zenject", "TickableManager");
NEED_NO_BOX(::Zenject::__TickableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__TickableManager____c*, "Zenject", "TickableManager/<>c");
NEED_NO_BOX(::Zenject::__TickableManager____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__TickableManager____c__DisplayClass17_0*, "Zenject", "TickableManager/<>c__DisplayClass17_0");
NEED_NO_BOX(::Zenject::__TickableManager____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__TickableManager____c__DisplayClass18_0*, "Zenject", "TickableManager/<>c__DisplayClass18_0");
NEED_NO_BOX(::Zenject::__TickableManager____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__TickableManager____c__DisplayClass19_0*, "Zenject", "TickableManager/<>c__DisplayClass19_0");
