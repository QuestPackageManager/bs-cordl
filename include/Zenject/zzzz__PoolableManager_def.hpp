#pragma once
// IWYU pragma private; include "Zenject/PoolableManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __PoolableManager__PoolableInfo;
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// CS Name: ::PoolableManager::PoolableInfo
struct CORDL_TYPE __PoolableManager__PoolableInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4ad18e4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IPoolable* poolable, int32_t priority);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolableManager__PoolableInfo();

  // Ctor Parameters [CppParam { name: "Poolable", ty: "::Zenject::IPoolable*", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PoolableManager__PoolableInfo(::Zenject::IPoolable* Poolable, int32_t Priority) noexcept;

  /// @brief Field Poolable, offset: 0x0, size: 0x8, def value: None
  ::Zenject::IPoolable* Poolable;

  /// @brief Field Priority, offset: 0x8, size: 0x4, def value: None
  int32_t Priority;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12626 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager__PoolableInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager__PoolableInfo, Poolable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager__PoolableInfo, Priority) == 0x8, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::PoolableManager::<>c*
class CORDL_TYPE __PoolableManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__PoolableManager____c* __9;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1)) ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, int32_t>* __9__2_1;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_2, put = setStaticF___9__2_2)) ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, ::Zenject::IPoolable*>* __9__2_2;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF___9__3_1, put = setStaticF___9__3_1)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* __9__3_1;

  static inline ::Zenject::__PoolableManager____c* New_ctor();

  /// @brief Method <CreatePoolableInfo>b__3_1, addr 0x4ad1f9c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> _CreatePoolableInfo_b__3_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <.ctor>b__2_1, addr 0x4ad1f8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t __ctor_b__2_1(::Zenject::__PoolableManager__PoolableInfo x);

  /// @brief Method <.ctor>b__2_2, addr 0x4ad1f94, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::IPoolable* __ctor_b__2_2(::Zenject::__PoolableManager__PoolableInfo x);

  /// @brief Method __zenCreate, addr 0x4ad1ffc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ad2050, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ad1f84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::__PoolableManager____c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, int32_t>* getStaticF___9__2_1();

  static inline ::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, ::Zenject::IPoolable*>* getStaticF___9__2_2();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* getStaticF___9__3_1();

  static inline void setStaticF___9(::Zenject::__PoolableManager____c* value);

  static inline void setStaticF___9__2_1(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, int32_t>* value);

  static inline void setStaticF___9__2_2(::System::Func_2<::Zenject::__PoolableManager__PoolableInfo, ::Zenject::IPoolable*>* value);

  static inline void setStaticF___9__3_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolableManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PoolableManager____c(__PoolableManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PoolableManager____c(__PoolableManager____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12627 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::PoolableManager::<>c__DisplayClass2_0*
class CORDL_TYPE __PoolableManager____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::PoolableManager* __4__this;

  /// @brief Field priorities, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_priorities,
                      put = __cordl_internal_set_priorities)) ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities;

  static inline ::Zenject::__PoolableManager____c__DisplayClass2_0* New_ctor();

  constexpr ::Zenject::PoolableManager*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PoolableManager*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*& __cordl_internal_get_priorities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>*> const& __cordl_internal_get_priorities() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::PoolableManager* value);

  constexpr void __cordl_internal_set_priorities(::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* value);

  /// @brief Method <.ctor>b__0, addr 0x4ad2208, size 0x1c, virtual false, abstract: false, final false
  inline ::Zenject::__PoolableManager__PoolableInfo __ctor_b__0(::Zenject::IPoolable* x);

  /// @brief Method __zenCreate, addr 0x4ad2224, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ad2278, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ad16bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolableManager____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PoolableManager____c__DisplayClass2_0(__PoolableManager____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PoolableManager____c__DisplayClass2_0(__PoolableManager____c__DisplayClass2_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PoolableManager* _____4__this;

  /// @brief Field priorities, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* ___priorities;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12628 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c__DisplayClass2_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager____c__DisplayClass2_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager____c__DisplayClass2_0, ___priorities) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::PoolableManager::<>c__DisplayClass3_0*
class CORDL_TYPE __PoolableManager____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field poolable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_poolable, put = __cordl_internal_set_poolable)) ::Zenject::IPoolable* poolable;

  static inline ::Zenject::__PoolableManager____c__DisplayClass3_0* New_ctor();

  /// @brief Method <CreatePoolableInfo>b__0, addr 0x4ad2430, size 0x80, virtual false, abstract: false, final false
  inline bool _CreatePoolableInfo_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  constexpr ::Zenject::IPoolable*& __cordl_internal_get_poolable();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPoolable*> const& __cordl_internal_get_poolable() const;

  constexpr void __cordl_internal_set_poolable(::Zenject::IPoolable* value);

  /// @brief Method __zenCreate, addr 0x4ad24b0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ad2504, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ad18dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolableManager____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PoolableManager____c__DisplayClass3_0(__PoolableManager____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PoolableManager____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PoolableManager____c__DisplayClass3_0(__PoolableManager____c__DisplayClass3_0 const&) = delete;

  /// @brief Field poolable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IPoolable* ___poolable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolableManager____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PoolableManager____c__DisplayClass3_0, ___poolable) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::PoolableManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::PoolableManager*
class CORDL_TYPE PoolableManager : public ::System::Object {
public:
  // Declarations
  using PoolableInfo = ::Zenject::__PoolableManager__PoolableInfo;

  using __c = ::Zenject::__PoolableManager____c;

  using __c__DisplayClass2_0 = ::Zenject::__PoolableManager____c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::Zenject::__PoolableManager____c__DisplayClass3_0;

  /// @brief Field _isSpawned, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isSpawned, put = __cordl_internal_set__isSpawned)) bool _isSpawned;

  /// @brief Field _poolables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__poolables, put = __cordl_internal_set__poolables)) ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* _poolables;

  /// @brief Method CreatePoolableInfo, addr 0x4ad16c4, size 0x218, virtual false, abstract: false, final false
  inline ::Zenject::__PoolableManager__PoolableInfo CreatePoolableInfo(::Zenject::IPoolable* poolable,
                                                                       ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  static inline ::Zenject::PoolableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* poolables,
                                                     ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  /// @brief Method TriggerOnDespawned, addr 0x4ad1a0c, size 0x10c, virtual false, abstract: false, final false
  inline void TriggerOnDespawned();

  /// @brief Method TriggerOnSpawned, addr 0x4ad18f0, size 0x11c, virtual false, abstract: false, final false
  inline void TriggerOnSpawned();

  constexpr bool const& __cordl_internal_get__isSpawned() const;

  constexpr bool& __cordl_internal_get__isSpawned();

  constexpr ::System::Collections::Generic::List_1<::Zenject::IPoolable*>*& __cordl_internal_get__poolables();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IPoolable*>*> const& __cordl_internal_get__poolables() const;

  constexpr void __cordl_internal_set__isSpawned(bool value);

  constexpr void __cordl_internal_set__poolables(::System::Collections::Generic::List_1<::Zenject::IPoolable*>* value);

  /// @brief Method __zenCreate, addr 0x4ad1b18, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ad1c30, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ad141c, size 0x2a0, virtual false, abstract: false, final false
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

  /// @brief Field _poolables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IPoolable*>* ____poolables;

  /// @brief Field _isSpawned, offset: 0x18, size: 0x1, def value: None
  bool ____isSpawned;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12630 };

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
