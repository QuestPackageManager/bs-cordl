#pragma once
// IWYU pragma private; include "Zenject/DisposableManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisposableManager)
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
class IDisposable;
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
struct DisposableManager_DisposableInfo;
}
namespace Zenject {
class DisposableManager_LateDisposableInfo;
}
namespace Zenject {
class DisposableManager___c;
}
namespace Zenject {
class DisposableManager___c__DisplayClass4_0;
}
namespace Zenject {
class DisposableManager___c__DisplayClass4_1;
}
namespace Zenject {
class DisposableManager___c__DisplayClass9_0;
}
namespace Zenject {
class ILateDisposable;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class DisposableManager;
}
namespace Zenject {
class DisposableManager_LateDisposableInfo;
}
namespace Zenject {
class DisposableManager___c;
}
namespace Zenject {
class DisposableManager___c__DisplayClass4_0;
}
namespace Zenject {
class DisposableManager___c__DisplayClass4_1;
}
namespace Zenject {
class DisposableManager___c__DisplayClass9_0;
}
namespace Zenject {
struct DisposableManager_DisposableInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DisposableManager);
MARK_REF_PTR_T(::Zenject::DisposableManager_LateDisposableInfo);
MARK_REF_PTR_T(::Zenject::DisposableManager___c);
MARK_REF_PTR_T(::Zenject::DisposableManager___c__DisplayClass4_0);
MARK_REF_PTR_T(::Zenject::DisposableManager___c__DisplayClass4_1);
MARK_REF_PTR_T(::Zenject::DisposableManager___c__DisplayClass9_0);
MARK_VAL_T(::Zenject::DisposableManager_DisposableInfo);
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.DisposableManager/DisposableInfo
struct CORDL_TYPE DisposableManager_DisposableInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4b457c0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IDisposable* disposable, int32_t priority);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManager_DisposableInfo();

  // Ctor Parameters [CppParam { name: "Disposable", ty: "::System::IDisposable*", modifiers: "", def_value: None }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DisposableManager_DisposableInfo(::System::IDisposable* Disposable, int32_t Priority) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12647 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Disposable, offset: 0x0, size: 0x8, def value: None
  ::System::IDisposable* Disposable;

  /// @brief Field Priority, offset: 0x8, size: 0x4, def value: None
  int32_t Priority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DisposableManager_DisposableInfo, Disposable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposableManager_DisposableInfo, Priority) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager_DisposableInfo, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DisposableManager/LateDisposableInfo
class CORDL_TYPE DisposableManager_LateDisposableInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field LateDisposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_LateDisposable, put = __cordl_internal_set_LateDisposable)) ::Zenject::ILateDisposable* LateDisposable;

  /// @brief Field Priority, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Priority, put = __cordl_internal_set_Priority)) int32_t Priority;

  static inline ::Zenject::DisposableManager_LateDisposableInfo* New_ctor(::Zenject::ILateDisposable* lateDisposable, int32_t priority);

  constexpr ::Zenject::ILateDisposable* const& __cordl_internal_get_LateDisposable() const;

  constexpr ::Zenject::ILateDisposable*& __cordl_internal_get_LateDisposable();

  constexpr int32_t const& __cordl_internal_get_Priority() const;

  constexpr int32_t& __cordl_internal_get_Priority();

  constexpr void __cordl_internal_set_LateDisposable(::Zenject::ILateDisposable* value);

  constexpr void __cordl_internal_set_Priority(int32_t value);

  /// @brief Method __zenCreate, addr 0x4b46924, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b46a30, size 0x2f8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b457d4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ILateDisposable* lateDisposable, int32_t priority);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManager_LateDisposableInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager_LateDisposableInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableManager_LateDisposableInfo(DisposableManager_LateDisposableInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager_LateDisposableInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableManager_LateDisposableInfo(DisposableManager_LateDisposableInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12648 };

  /// @brief Field LateDisposable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ILateDisposable* ___LateDisposable;

  /// @brief Field Priority, offset: 0x18, size: 0x4, def value: None
  int32_t ___Priority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DisposableManager_LateDisposableInfo, ___LateDisposable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposableManager_LateDisposableInfo, ___Priority) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager_LateDisposableInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DisposableManager/<>c
class CORDL_TYPE DisposableManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::DisposableManager___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::Zenject::DisposableManager_LateDisposableInfo*, int32_t>* __9__10_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::Zenject::DisposableManager_DisposableInfo, int32_t>* __9__11_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* __9__4_1;

  /// @brief Field <>9__4_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_3, put = setStaticF___9__4_3)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* __9__4_3;

  static inline ::Zenject::DisposableManager___c* New_ctor();

  /// @brief Method <Dispose>b__11_0, addr 0x4b46e64, size 0x8, virtual false, abstract: false, final false
  inline int32_t _Dispose_b__11_0(::Zenject::DisposableManager_DisposableInfo x);

  /// @brief Method <LateDispose>b__10_0, addr 0x4b46e4c, size 0x18, virtual false, abstract: false, final false
  inline int32_t _LateDispose_b__10_0(::Zenject::DisposableManager_LateDisposableInfo* x);

  /// @brief Method <.ctor>b__4_1, addr 0x4b46d8c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> __ctor_b__4_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method <.ctor>b__4_3, addr 0x4b46dec, size 0x60, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> __ctor_b__4_3(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4b46e6c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b46ec0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b46d84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::DisposableManager___c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::DisposableManager_LateDisposableInfo*, int32_t>* getStaticF___9__10_0();

  static inline ::System::Func_2<::Zenject::DisposableManager_DisposableInfo, int32_t>* getStaticF___9__11_0();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* getStaticF___9__4_1();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* getStaticF___9__4_3();

  static inline void setStaticF___9(::Zenject::DisposableManager___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::Zenject::DisposableManager_LateDisposableInfo*, int32_t>* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::Zenject::DisposableManager_DisposableInfo, int32_t>* value);

  static inline void setStaticF___9__4_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value);

  static inline void setStaticF___9__4_3(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, ::System::Nullable_1<int32_t>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableManager___c(DisposableManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableManager___c(DisposableManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DisposableManager/<>c__DisplayClass4_0
class CORDL_TYPE DisposableManager___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_disposable, put = __cordl_internal_set_disposable)) ::System::IDisposable* disposable;

  static inline ::Zenject::DisposableManager___c__DisplayClass4_0* New_ctor();

  constexpr ::System::IDisposable* const& __cordl_internal_get_disposable() const;

  constexpr ::System::IDisposable*& __cordl_internal_get_disposable();

  constexpr void __cordl_internal_set_disposable(::System::IDisposable* value);

  /// @brief Method <.ctor>b__0, addr 0x4b47078, size 0x80, virtual false, abstract: false, final false
  inline bool __ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4b470f8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4714c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b457b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManager___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableManager___c__DisplayClass4_0(DisposableManager___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableManager___c__DisplayClass4_0(DisposableManager___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12650 };

  /// @brief Field disposable, offset: 0x10, size: 0x8, def value: None
  ::System::IDisposable* ___disposable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DisposableManager___c__DisplayClass4_0, ___disposable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DisposableManager/<>c__DisplayClass4_1
class CORDL_TYPE DisposableManager___c__DisplayClass4_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field lateDisposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lateDisposable, put = __cordl_internal_set_lateDisposable)) ::Zenject::ILateDisposable* lateDisposable;

  static inline ::Zenject::DisposableManager___c__DisplayClass4_1* New_ctor();

  constexpr ::Zenject::ILateDisposable* const& __cordl_internal_get_lateDisposable() const;

  constexpr ::Zenject::ILateDisposable*& __cordl_internal_get_lateDisposable();

  constexpr void __cordl_internal_set_lateDisposable(::Zenject::ILateDisposable* value);

  /// @brief Method <.ctor>b__2, addr 0x4b47304, size 0x80, virtual false, abstract: false, final false
  inline bool __ctor_b__2(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x4b47384, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b473d8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b457cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManager___c__DisplayClass4_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager___c__DisplayClass4_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableManager___c__DisplayClass4_1(DisposableManager___c__DisplayClass4_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager___c__DisplayClass4_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableManager___c__DisplayClass4_1(DisposableManager___c__DisplayClass4_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12651 };

  /// @brief Field lateDisposable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ILateDisposable* ___lateDisposable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DisposableManager___c__DisplayClass4_1, ___lateDisposable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager___c__DisplayClass4_1, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DisposableManager/<>c__DisplayClass9_0
class CORDL_TYPE DisposableManager___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field disposable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_disposable, put = __cordl_internal_set_disposable)) ::System::IDisposable* disposable;

  static inline ::Zenject::DisposableManager___c__DisplayClass9_0* New_ctor();

  /// @brief Method <Remove>b__0, addr 0x4b47590, size 0x10, virtual false, abstract: false, final false
  inline bool _Remove_b__0(::Zenject::DisposableManager_DisposableInfo x);

  constexpr ::System::IDisposable* const& __cordl_internal_get_disposable() const;

  constexpr ::System::IDisposable*& __cordl_internal_get_disposable();

  constexpr void __cordl_internal_set_disposable(::System::IDisposable* value);

  /// @brief Method __zenCreate, addr 0x4b475a0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b475f4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b45adc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManager___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableManager___c__DisplayClass9_0(DisposableManager___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableManager___c__DisplayClass9_0(DisposableManager___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12652 };

  /// @brief Field disposable, offset: 0x10, size: 0x8, def value: None
  ::System::IDisposable* ___disposable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DisposableManager___c__DisplayClass9_0, ___disposable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.IDisposable, System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.DisposableManager
class CORDL_TYPE DisposableManager : public ::System::Object {
public:
  // Declarations
  using DisposableInfo = ::Zenject::DisposableManager_DisposableInfo;

  using LateDisposableInfo = ::Zenject::DisposableManager_LateDisposableInfo;

  using __c = ::Zenject::DisposableManager___c;

  using __c__DisplayClass4_0 = ::Zenject::DisposableManager___c__DisplayClass4_0;

  using __c__DisplayClass4_1 = ::Zenject::DisposableManager___c__DisplayClass4_1;

  using __c__DisplayClass9_0 = ::Zenject::DisposableManager___c__DisplayClass9_0;

  /// @brief Field _disposables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__disposables,
                      put = __cordl_internal_set__disposables)) ::System::Collections::Generic::List_1<::Zenject::DisposableManager_DisposableInfo>* _disposables;

  /// @brief Field _disposed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _lateDisposables, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lateDisposables,
                      put = __cordl_internal_set__lateDisposables)) ::System::Collections::Generic::List_1<::Zenject::DisposableManager_LateDisposableInfo*>* _lateDisposables;

  /// @brief Field _lateDisposed, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__lateDisposed, put = __cordl_internal_set__lateDisposed)) bool _lateDisposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Add, addr 0x4b45804, size 0x8, virtual false, abstract: false, final false
  inline void Add(::System::IDisposable* disposable);

  /// @brief Method Add, addr 0x4b4580c, size 0xb8, virtual false, abstract: false, final false
  inline void Add(::System::IDisposable* disposable, int32_t priority);

  /// @brief Method AddLate, addr 0x4b458c4, size 0x8, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateDisposable* disposable);

  /// @brief Method AddLate, addr 0x4b458cc, size 0xe8, virtual false, abstract: false, final false
  inline void AddLate(::Zenject::ILateDisposable* disposable, int32_t priority);

  /// @brief Method Dispose, addr 0x4b45f28, size 0x424, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method LateDispose, addr 0x4b45ae4, size 0x444, virtual false, abstract: false, final false
  inline void LateDispose();

  static inline ::Zenject::DisposableManager* New_ctor(::System::Collections::Generic::List_1<::System::IDisposable*>* disposables,
                                                       ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities,
                                                       ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>* lateDisposables,
                                                       ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* latePriorities);

  /// @brief Method Remove, addr 0x4b459b4, size 0x128, virtual false, abstract: false, final false
  inline void Remove(::System::IDisposable* disposable);

  constexpr ::System::Collections::Generic::List_1<::Zenject::DisposableManager_DisposableInfo>* const& __cordl_internal_get__disposables() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::DisposableManager_DisposableInfo>*& __cordl_internal_get__disposables();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr ::System::Collections::Generic::List_1<::Zenject::DisposableManager_LateDisposableInfo*>* const& __cordl_internal_get__lateDisposables() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::DisposableManager_LateDisposableInfo*>*& __cordl_internal_get__lateDisposables();

  constexpr bool const& __cordl_internal_get__lateDisposed() const;

  constexpr bool& __cordl_internal_get__lateDisposed();

  constexpr void __cordl_internal_set__disposables(::System::Collections::Generic::List_1<::Zenject::DisposableManager_DisposableInfo>* value);

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__lateDisposables(::System::Collections::Generic::List_1<::Zenject::DisposableManager_LateDisposableInfo*>* value);

  constexpr void __cordl_internal_set__lateDisposed(bool value);

  /// @brief Method __zenCreate, addr 0x4b4634c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b4650c, size 0x418, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b44fe8, size 0x7d0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::System::IDisposable*>* disposables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities,
                    ::System::Collections::Generic::List_1<::Zenject::ILateDisposable*>* lateDisposables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* latePriorities);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposableManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposableManager(DisposableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposableManager(DisposableManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12653 };

  /// @brief Field _disposables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::DisposableManager_DisposableInfo>* ____disposables;

  /// @brief Field _lateDisposables, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::DisposableManager_LateDisposableInfo*>* ____lateDisposables;

  /// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field _lateDisposed, offset: 0x21, size: 0x1, def value: None
  bool ____lateDisposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::DisposableManager, ____disposables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposableManager, ____lateDisposables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposableManager, ____disposed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::DisposableManager, ____lateDisposed) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::DisposableManager, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::DisposableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager*, "Zenject", "DisposableManager");
NEED_NO_BOX(::Zenject::DisposableManager_LateDisposableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager_LateDisposableInfo*, "Zenject", "DisposableManager/LateDisposableInfo");
NEED_NO_BOX(::Zenject::DisposableManager___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager___c*, "Zenject", "DisposableManager/<>c");
NEED_NO_BOX(::Zenject::DisposableManager___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager___c__DisplayClass4_0*, "Zenject", "DisposableManager/<>c__DisplayClass4_0");
NEED_NO_BOX(::Zenject::DisposableManager___c__DisplayClass4_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager___c__DisplayClass4_1*, "Zenject", "DisposableManager/<>c__DisplayClass4_1");
NEED_NO_BOX(::Zenject::DisposableManager___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager___c__DisplayClass9_0*, "Zenject", "DisposableManager/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DisposableManager_DisposableInfo, "Zenject", "DisposableManager/DisposableInfo");
