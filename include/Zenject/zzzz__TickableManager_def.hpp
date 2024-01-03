#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TickableManager)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class __TickableManager____c;
}
namespace Zenject {
class TickablesTaskUpdater;
}
namespace Zenject {
class ILateTickable;
}
namespace Zenject {
class FixedTickablesTaskUpdater;
}
namespace System {
class Object;
}
namespace Zenject {
class __TickableManager____c__DisplayClass18_0;
}
namespace System {
class Type;
}
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace Zenject {
class ITickable;
}
namespace Zenject {
class IFixedTickable;
}
namespace Zenject {
class LateTickablesTaskUpdater;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class __TickableManager____c__DisplayClass19_0;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class __TickableManager____c__DisplayClass17_0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11341))
// CS Name: ::TickableManager::<>c__DisplayClass17_0*
class CORDL_TYPE __TickableManager____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __get_tickable, put = __set_tickable))::Zenject::IFixedTickable* tickable;

  constexpr ::Zenject::IFixedTickable*& __get_tickable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IFixedTickable*> const& __get_tickable() const;

  constexpr void __set_tickable(::Zenject::IFixedTickable* value);

  static inline ::Zenject::__TickableManager____c__DisplayClass17_0* New_ctor();

  /// @brief Method .ctor, addr 0x2f1af14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitFixedTickables>b__1, addr 0x2f1c228, size 0x80, virtual false, abstract: false, final false
  inline bool _InitFixedTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x2f1c2a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f1c304, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TickableManager____c__DisplayClass17_0(__TickableManager____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TickableManager____c__DisplayClass17_0(__TickableManager____c__DisplayClass17_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TickableManager____c__DisplayClass17_0();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11342))
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

  static inline void setStaticF___9(::Zenject::__TickableManager____c* value);

  static inline ::Zenject::__TickableManager____c* getStaticF___9();

  static inline void setStaticF___9__17_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__17_0();

  static inline void setStaticF___9__17_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__17_2();

  static inline void setStaticF___9__18_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__18_0();

  static inline void setStaticF___9__18_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__18_2();

  static inline void setStaticF___9__19_0(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Type*>* getStaticF___9__19_0();

  static inline void setStaticF___9__19_2(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__19_2();

  static inline ::Zenject::__TickableManager____c* New_ctor();

  /// @brief Method .ctor, addr 0x2f1c528, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitFixedTickables>b__17_0, addr 0x2f1c530, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitFixedTickables_b__17_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitFixedTickables>b__17_2, addr 0x2f1c548, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitFixedTickables_b__17_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitTickables>b__18_0, addr 0x2f1c560, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitTickables_b__18_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitTickables>b__18_2, addr 0x2f1c578, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitTickables_b__18_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitLateTickables>b__19_0, addr 0x2f1c590, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _InitLateTickables_b__19_0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <InitLateTickables>b__19_2, addr 0x2f1c5a8, size 0x18, virtual false, abstract: false, final false
  inline int32_t _InitLateTickables_b__19_2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x2f1c5c0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f1c61c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TickableManager____c(__TickableManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TickableManager____c(__TickableManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TickableManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__TickableManager____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11343))
// CS Name: ::TickableManager::<>c__DisplayClass18_0*
class CORDL_TYPE __TickableManager____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __get_tickable, put = __set_tickable))::Zenject::ITickable* tickable;

  constexpr ::Zenject::ITickable*& __get_tickable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ITickable*> const& __get_tickable() const;

  constexpr void __set_tickable(::Zenject::ITickable* value);

  static inline ::Zenject::__TickableManager____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor, addr 0x2f1af1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitTickables>b__1, addr 0x2f1c7dc, size 0x80, virtual false, abstract: false, final false
  inline bool _InitTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x2f1c85c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f1c8b8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TickableManager____c__DisplayClass18_0(__TickableManager____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TickableManager____c__DisplayClass18_0(__TickableManager____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TickableManager____c__DisplayClass18_0();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11344))
// CS Name: ::TickableManager::<>c__DisplayClass19_0*
class CORDL_TYPE __TickableManager____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field tickable, offset 0x10, size 0x8
  __declspec(property(get = __get_tickable, put = __set_tickable))::Zenject::ILateTickable* tickable;

  constexpr ::Zenject::ILateTickable*& __get_tickable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ILateTickable*> const& __get_tickable() const;

  constexpr void __set_tickable(::Zenject::ILateTickable* value);

  static inline ::Zenject::__TickableManager____c__DisplayClass19_0* New_ctor();

  /// @brief Method .ctor, addr 0x2f1af24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitLateTickables>b__1, addr 0x2f1ca78, size 0x80, virtual false, abstract: false, final false
  inline bool _InitLateTickables_b__1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x2f1caf8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f1cb54, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TickableManager____c__DisplayClass19_0(__TickableManager____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TickableManager____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TickableManager____c__DisplayClass19_0(__TickableManager____c__DisplayClass19_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TickableManager____c__DisplayClass19_0();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11345))
// CS Name: ::Zenject::TickableManager*
class CORDL_TYPE TickableManager : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass19_0 = ::Zenject::__TickableManager____c__DisplayClass19_0;

  using __c__DisplayClass18_0 = ::Zenject::__TickableManager____c__DisplayClass18_0;

  using __c = ::Zenject::__TickableManager____c;

  using __c__DisplayClass17_0 = ::Zenject::__TickableManager____c__DisplayClass17_0;

  /// @brief Field _tickables, offset 0x10, size 0x8
  __declspec(property(get = __get__tickables, put = __set__tickables))::System::Collections::Generic::List_1<::Zenject::ITickable*>* _tickables;

  /// @brief Field _fixedTickables, offset 0x18, size 0x8
  __declspec(property(get = __get__fixedTickables, put = __set__fixedTickables))::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* _fixedTickables;

  /// @brief Field _lateTickables, offset 0x20, size 0x8
  __declspec(property(get = __get__lateTickables, put = __set__lateTickables))::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* _lateTickables;

  /// @brief Field _priorities, offset 0x28, size 0x8
  __declspec(property(get = __get__priorities, put = __set__priorities))::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _priorities;

  /// @brief Field _fixedPriorities, offset 0x30, size 0x8
  __declspec(property(get = __get__fixedPriorities, put = __set__fixedPriorities))::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _fixedPriorities;

  /// @brief Field _latePriorities, offset 0x38, size 0x8
  __declspec(property(get = __get__latePriorities, put = __set__latePriorities))::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* _latePriorities;

  /// @brief Field _updater, offset 0x40, size 0x8
  __declspec(property(get = __get__updater, put = __set__updater))::Zenject::TickablesTaskUpdater* _updater;

  /// @brief Field _fixedUpdater, offset 0x48, size 0x8
  __declspec(property(get = __get__fixedUpdater, put = __set__fixedUpdater))::Zenject::FixedTickablesTaskUpdater* _fixedUpdater;

  /// @brief Field _lateUpdater, offset 0x50, size 0x8
  __declspec(property(get = __get__lateUpdater, put = __set__lateUpdater))::Zenject::LateTickablesTaskUpdater* _lateUpdater;

  /// @brief Field _isPaused, offset 0x58, size 0x1
  __declspec(property(get = __get__isPaused, put = __set__isPaused)) bool _isPaused;

  __declspec(property(get = get_Tickables))::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* Tickables;

  __declspec(property(get = get_IsPaused, put = set_IsPaused)) bool IsPaused;

  constexpr ::System::Collections::Generic::List_1<::Zenject::ITickable*>*& __get__tickables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ITickable*>*> const& __get__tickables() const;

  constexpr void __set__tickables(::System::Collections::Generic::List_1<::Zenject::ITickable*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>*& __get__fixedTickables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>*> const& __get__fixedTickables() const;

  constexpr void __set__fixedTickables(::System::Collections::Generic::List_1<::Zenject::IFixedTickable*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::ILateTickable*>*& __get__lateTickables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ILateTickable*>*> const& __get__lateTickables() const;

  constexpr void __set__lateTickables(::System::Collections::Generic::List_1<::Zenject::ILateTickable*>* value);

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __get__priorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*> const& __get__priorities() const;

  constexpr void __set__priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __get__fixedPriorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*> const& __get__fixedPriorities() const;

  constexpr void __set__fixedPriorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __get__latePriorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*> const& __get__latePriorities() const;

  constexpr void __set__latePriorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  constexpr ::Zenject::TickablesTaskUpdater*& __get__updater();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::TickablesTaskUpdater*> const& __get__updater() const;

  constexpr void __set__updater(::Zenject::TickablesTaskUpdater* value);

  constexpr ::Zenject::FixedTickablesTaskUpdater*& __get__fixedUpdater();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FixedTickablesTaskUpdater*> const& __get__fixedUpdater() const;

  constexpr void __set__fixedUpdater(::Zenject::FixedTickablesTaskUpdater* value);

  constexpr ::Zenject::LateTickablesTaskUpdater*& __get__lateUpdater();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::LateTickablesTaskUpdater*> const& __get__lateUpdater() const;

  constexpr void __set__lateUpdater(::Zenject::LateTickablesTaskUpdater* value);

  constexpr bool& __get__isPaused();

  constexpr bool const& __get__isPaused() const;

  constexpr void __set__isPaused(bool value);

  static inline ::Zenject::TickableManager* New_ctor();

  /// @brief Method .ctor, addr 0x2f19718, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Tickables, addr 0x2f197d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::ITickable*>* get_Tickables();

  /// @brief Method get_IsPaused, addr 0x2f197dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPaused();

  /// @brief Method set_IsPaused, addr 0x2f197e4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPaused(bool value);

  /// @brief Method Initialize, addr 0x2f197f0, size 0x20, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitFixedTickables, addr 0x2f19fbc, size 0x7ac, virtual false, abstract: false, final false
  inline void InitFixedTickables();

  /// @brief Method InitTickables, addr 0x2f19810, size 0x7ac, virtual false, abstract: false, final false
  inline void InitTickables();

  /// @brief Method InitLateTickables, addr 0x2f1a768, size 0x7ac, virtual false, abstract: false, final false
  inline void InitLateTickables();

  /// @brief Method Add, addr 0x2f1af2c, size 0x68, virtual false, abstract: false, final false
  inline void Add(::Zenject::ITickable* tickable, int32_t priority);

  /// @brief Method Add, addr 0x2f1af94, size 0x8, virtual false, abstract: false, final false
  inline void Add(::Zenject::ITickable* tickable);

  /// @brief Method AddLate, addr 0x2f1af9c, size 0x68, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateTickable* tickable, int32_t priority);

  /// @brief Method AddLate, addr 0x2f1b004, size 0x8, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateTickable* tickable);

  /// @brief Method AddFixed, addr 0x2f1b00c, size 0x68, virtual false, abstract: false, final false
  inline void AddFixed(::Zenject::IFixedTickable* tickable, int32_t priority);

  /// @brief Method AddFixed, addr 0x2f1b074, size 0x5c, virtual false, abstract: false, final false
  inline void AddFixed(::Zenject::IFixedTickable* tickable);

  /// @brief Method Remove, addr 0x2f1b0d0, size 0x58, virtual false, abstract: false, final false
  inline void Remove(::Zenject::ITickable* tickable);

  /// @brief Method RemoveLate, addr 0x2f1b128, size 0x58, virtual false, abstract: false, final false
  inline void RemoveLate(::Zenject::ILateTickable* tickable);

  /// @brief Method RemoveFixed, addr 0x2f1b180, size 0x58, virtual false, abstract: false, final false
  inline void RemoveFixed(::Zenject::IFixedTickable* tickable);

  /// @brief Method Update, addr 0x2f14bfc, size 0x88, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method FixedUpdate, addr 0x2f14d3c, size 0x88, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x2f14c9c, size 0x88, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method __zenCreate, addr 0x2f1b1d8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenFieldSetter0, addr 0x2f1b230, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1, addr 0x2f1b364, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter2, addr 0x2f1b498, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter2(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter3, addr 0x2f1b5cc, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter3(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter4, addr 0x2f1b700, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter4(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter5, addr 0x2f1b834, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter5(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenInjectMethod0, addr 0x2f1b968, size 0x80, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f1b9e8, size 0x840, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "TickableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TickableManager(TickableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TickableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TickableManager(TickableManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TickableManager();

public:
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
