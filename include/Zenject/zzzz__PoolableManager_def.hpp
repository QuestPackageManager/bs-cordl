#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoolableManager)
namespace Zenject {
class IPoolable;
}
namespace Zenject {
class __PoolableManager____c;
}
namespace Zenject {
struct __PoolableManager__PoolableInfo;
}
namespace Zenject {
class __PoolableManager____c__DisplayClass3_0;
}
namespace Zenject {
class __PoolableManager____c__DisplayClass2_0;
}
namespace System {
class Type;
}
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Zenject {
class PoolableManager;
}
namespace Zenject {
class __PoolableManager____c;
}
namespace Zenject {
class __PoolableManager____c__DisplayClass2_0;
}
namespace Zenject {
class __PoolableManager____c__DisplayClass3_0;
}
namespace Zenject {
struct __PoolableManager__PoolableInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PoolableManager);
MARK_REF_PTR_T(::Zenject::__PoolableManager____c);
MARK_REF_PTR_T(::Zenject::__PoolableManager____c__DisplayClass2_0);
MARK_REF_PTR_T(::Zenject::__PoolableManager____c__DisplayClass3_0);
MARK_VAL_T(::Zenject::__PoolableManager__PoolableInfo);
// Type: ::PoolableInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11327))
// CS Name: ::PoolableManager::PoolableInfo
struct CORDL_TYPE __PoolableManager__PoolableInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2f17358, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IPoolable* poolable, int32_t priority);

  // Ctor Parameters [CppParam { name: "Poolable", ty: "::Zenject::IPoolable*", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PoolableManager__PoolableInfo(::Zenject::IPoolable* Poolable, int32_t Priority) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolableManager__PoolableInfo();

  /// @brief Field Poolable, offset: 0x0, size: 0x8, def value: None
  ::Zenject::IPoolable* Poolable;

  /// @brief Field Priority, offset: 0x8, size: 0x4, def value: None
  int32_t Priority;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager__PoolableInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager__PoolableInfo, Poolable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager__PoolableInfo, Priority) == 0x8, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11328))
// CS Name: ::PoolableManager::<>c__DisplayClass2_0*
class CORDL_TYPE __PoolableManager____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::PoolableManager* __4__this;

  /// @brief Field priorities, offset 0x18, size 0x8
  __declspec(property(get = __get_priorities, put = __set_priorities))::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities;

  constexpr ::Zenject::PoolableManager*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PoolableManager*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::PoolableManager* value);

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __get_priorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*> const& __get_priorities() const;

  constexpr void __set_priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  static inline ::Zenject::__PoolableManager____c__DisplayClass2_0* New_ctor();

  /// @brief Method .ctor, addr 0x2f17130, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.ctor>b__0, addr 0x2f179ac, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::__PoolableManager__PoolableInfo __ctor_b__0(::Zenject::IPoolable* x);

  /// @brief Method __zenCreate, addr 0x2f179c8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f17a24, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PoolableManager____c__DisplayClass2_0(__PoolableManager____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PoolableManager____c__DisplayClass2_0(__PoolableManager____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolableManager____c__DisplayClass2_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PoolableManager* _____4__this;

  /// @brief Field priorities, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* ___priorities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c__DisplayClass2_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager____c__DisplayClass2_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager____c__DisplayClass2_0, ___priorities) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11329))
// CS Name: ::PoolableManager::<>c*
class CORDL_TYPE __PoolableManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__PoolableManager____c* __9;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1))::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, int32_t>* __9__2_1;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_2, put = setStaticF___9__2_2))::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, ::Zenject::IPoolable*>* __9__2_2;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_1,
                             put = setStaticF___9__3_1))::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* __9__3_1;

  static inline void setStaticF___9(::Zenject::__PoolableManager____c* value);

  static inline ::Zenject::__PoolableManager____c* getStaticF___9();

  static inline void setStaticF___9__2_1(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, int32_t>* value);

  static inline ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, int32_t>* getStaticF___9__2_1();

  static inline void setStaticF___9__2_2(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, ::Zenject::IPoolable*>* value);

  static inline ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, ::Zenject::IPoolable*>* getStaticF___9__2_2();

  static inline void setStaticF___9__3_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value);

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* getStaticF___9__3_1();

  static inline ::Zenject::__PoolableManager____c* New_ctor();

  /// @brief Method .ctor, addr 0x2f17c48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <.ctor>b__2_1, addr 0x2f17c50, size 0x8, virtual false, abstract: false, final false
  inline int32_t __ctor_b__2_1(::Zenject::__PoolableManager__PoolableInfo x);

  /// @brief Method <.ctor>b__2_2, addr 0x2f17c58, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::IPoolable* __ctor_b__2_2(::Zenject::__PoolableManager__PoolableInfo x);

  /// @brief Method <CreatePoolableInfo>b__3_1, addr 0x2f17c60, size 0x60, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> _CreatePoolableInfo_b__3_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x2f17cc0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f17d1c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PoolableManager____c(__PoolableManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PoolableManager____c(__PoolableManager____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolableManager____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11330))
// CS Name: ::PoolableManager::<>c__DisplayClass3_0*
class CORDL_TYPE __PoolableManager____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field poolable, offset 0x10, size 0x8
  __declspec(property(get = __get_poolable, put = __set_poolable))::Zenject::IPoolable* poolable;

  constexpr ::Zenject::IPoolable*& __get_poolable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPoolable*> const& __get_poolable() const;

  constexpr void __set_poolable(::Zenject::IPoolable* value);

  static inline ::Zenject::__PoolableManager____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor, addr 0x2f17350, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CreatePoolableInfo>b__0, addr 0x2f17edc, size 0x80, virtual false, abstract: false, final false
  inline bool _CreatePoolableInfo_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x2f17f5c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f17fb8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PoolableManager____c__DisplayClass3_0(__PoolableManager____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PoolableManager____c__DisplayClass3_0(__PoolableManager____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolableManager____c__DisplayClass3_0();

public:
  /// @brief Field poolable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IPoolable* ___poolable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager____c__DisplayClass3_0, ___poolable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::PoolableManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11331))
// CS Name: ::Zenject::PoolableManager*
class CORDL_TYPE PoolableManager : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::Zenject::__PoolableManager____c__DisplayClass3_0;

  using __c = ::Zenject::__PoolableManager____c;

  using __c__DisplayClass2_0 = ::Zenject::__PoolableManager____c__DisplayClass2_0;

  using PoolableInfo = ::Zenject::__PoolableManager__PoolableInfo;

  /// @brief Field _poolables, offset 0x10, size 0x8
  __declspec(property(get = __get__poolables, put = __set__poolables))::System::Collections::Generic::List_1<::Zenject::IPoolable*>* _poolables;

  /// @brief Field _isSpawned, offset 0x18, size 0x1
  __declspec(property(get = __get__isSpawned, put = __set__isSpawned)) bool _isSpawned;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IPoolable*>*& __get__poolables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*> const& __get__poolables() const;

  constexpr void __set__poolables(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* value);

  constexpr bool& __get__isSpawned();

  constexpr bool const& __get__isSpawned() const;

  constexpr void __set__isSpawned(bool value);

  static inline ::Zenject::PoolableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables,
                                                     ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  /// @brief Method .ctor, addr 0x2f16e8c, size 0x2a4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  /// @brief Method CreatePoolableInfo, addr 0x2f17138, size 0x218, virtual false, abstract: false, final false
  inline ::Zenject::__PoolableManager__PoolableInfo CreatePoolableInfo(::Zenject::IPoolable* poolable,
                                                                       ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  /// @brief Method TriggerOnSpawned, addr 0x2f17364, size 0x11c, virtual false, abstract: false, final false
  inline void TriggerOnSpawned();

  /// @brief Method TriggerOnDespawned, addr 0x2f17480, size 0x10c, virtual false, abstract: false, final false
  inline void TriggerOnDespawned();

  /// @brief Method __zenCreate, addr 0x2f1758c, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f176a8, size 0x304, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableManager(PoolableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableManager(PoolableManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableManager();

public:
  /// @brief Field _poolables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* ____poolables;

  /// @brief Field _isSpawned, offset: 0x18, size: 0x1, def value: None
  bool ____isSpawned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PoolableManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::PoolableManager, ____poolables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PoolableManager, ____isSpawned) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PoolableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolableManager*, "Zenject", "PoolableManager");
NEED_NO_BOX(::Zenject::__PoolableManager____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolableManager____c*, "Zenject", "PoolableManager/<>c");
NEED_NO_BOX(::Zenject::__PoolableManager____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolableManager____c__DisplayClass2_0*, "Zenject", "PoolableManager/<>c__DisplayClass2_0");
NEED_NO_BOX(::Zenject::__PoolableManager____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolableManager____c__DisplayClass3_0*, "Zenject", "PoolableManager/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolableManager__PoolableInfo, "Zenject", "PoolableManager/PoolableInfo");
