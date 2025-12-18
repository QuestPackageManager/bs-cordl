#pragma once
// IWYU pragma private; include "Zenject/InitializableManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitializableManager)
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
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class IInitializable;
}
namespace Zenject {
class InitializableManager_InitializableInfo;
}
namespace Zenject {
class InitializableManager___c;
}
namespace Zenject {
class InitializableManager___c__DisplayClass2_0;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class InitializableManager;
}
namespace Zenject {
class InitializableManager_InitializableInfo;
}
namespace Zenject {
class InitializableManager___c;
}
namespace Zenject {
class InitializableManager___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InitializableManager);
MARK_REF_PTR_T(::Zenject::InitializableManager_InitializableInfo);
MARK_REF_PTR_T(::Zenject::InitializableManager___c);
MARK_REF_PTR_T(::Zenject::InitializableManager___c__DisplayClass2_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InitializableManager/InitializableInfo
class CORDL_TYPE InitializableManager_InitializableInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Initializable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Initializable, put = __cordl_internal_set_Initializable)) ::Zenject::IInitializable* Initializable;

  /// @brief Field Priority, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Priority, put = __cordl_internal_set_Priority)) int32_t Priority;

  static inline ::Zenject::InitializableManager_InitializableInfo* New_ctor(::Zenject::IInitializable* initializable, int32_t priority);

  constexpr ::Zenject::IInitializable* const& __cordl_internal_get_Initializable() const;

  constexpr ::Zenject::IInitializable*& __cordl_internal_get_Initializable();

  constexpr int32_t const& __cordl_internal_get_Priority() const;

  constexpr int32_t& __cordl_internal_get_Priority();

  constexpr void __cordl_internal_set_Initializable(::Zenject::IInitializable* value);

  constexpr void __cordl_internal_set_Priority(int32_t value);

  /// @brief Method __zenCreate, addr 0x6cc6584, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6cc6678, size 0x2c8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6cc5c90, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IInitializable* initializable, int32_t priority);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializableManager_InitializableInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializableManager_InitializableInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializableManager_InitializableInfo(InitializableManager_InitializableInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializableManager_InitializableInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializableManager_InitializableInfo(InitializableManager_InitializableInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14644 };

  /// @brief Field Initializable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IInitializable* ___Initializable;

  /// @brief Field Priority, offset: 0x18, size: 0x4, def value: None
  int32_t ___Priority;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InitializableManager_InitializableInfo, ___Initializable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InitializableManager_InitializableInfo, ___Priority) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InitializableManager_InitializableInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InitializableManager/<>c
class CORDL_TYPE InitializableManager___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::InitializableManager___c* __9;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_1, put = setStaticF___9__2_1)) ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* __9__2_1;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::Zenject::InitializableManager_InitializableInfo*, int32_t>* __9__5_0;

  static inline ::Zenject::InitializableManager___c* New_ctor();

  /// @brief Method <Initialize>b__5_0, addr 0x6cc69ac, size 0x14, virtual false, abstract: false, final false
  inline int32_t _Initialize_b__5_0(::Zenject::InitializableManager_InitializableInfo* x);

  /// @brief Method <.ctor>b__2_1, addr 0x6cc6998, size 0x14, virtual false, abstract: false, final false
  inline int32_t __ctor_b__2_1(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x6cc69c0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6cc6a04, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6cc6994, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::InitializableManager___c* getStaticF___9();

  static inline ::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* getStaticF___9__2_1();

  static inline ::System::Func_2<::Zenject::InitializableManager_InitializableInfo*, int32_t>* getStaticF___9__5_0();

  static inline void setStaticF___9(::Zenject::InitializableManager___c* value);

  static inline void setStaticF___9__2_1(::System::Func_2<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*, int32_t>* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::Zenject::InitializableManager_InitializableInfo*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializableManager___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializableManager___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializableManager___c(InitializableManager___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializableManager___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializableManager___c(InitializableManager___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InitializableManager___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InitializableManager/<>c__DisplayClass2_0
class CORDL_TYPE InitializableManager___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field initializable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_initializable, put = __cordl_internal_set_initializable)) ::Zenject::IInitializable* initializable;

  static inline ::Zenject::InitializableManager___c__DisplayClass2_0* New_ctor();

  constexpr ::Zenject::IInitializable* const& __cordl_internal_get_initializable() const;

  constexpr ::Zenject::IInitializable*& __cordl_internal_get_initializable();

  constexpr void __cordl_internal_set_initializable(::Zenject::IInitializable* value);

  /// @brief Method <.ctor>b__0, addr 0x6cc6b98, size 0x90, virtual false, abstract: false, final false
  inline bool __ctor_b__0(::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>* x);

  /// @brief Method __zenCreate, addr 0x6cc6c28, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6cc6c6c, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6cc5c8c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializableManager___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializableManager___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializableManager___c__DisplayClass2_0(InitializableManager___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializableManager___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializableManager___c__DisplayClass2_0(InitializableManager___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14646 };

  /// @brief Field initializable, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IInitializable* ___initializable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InitializableManager___c__DisplayClass2_0, ___initializable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InitializableManager___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InitializableManager
class CORDL_TYPE InitializableManager : public ::System::Object {
public:
  // Declarations
  using InitializableInfo = ::Zenject::InitializableManager_InitializableInfo;

  using __c = ::Zenject::InitializableManager___c;

  using __c__DisplayClass2_0 = ::Zenject::InitializableManager___c__DisplayClass2_0;

  /// @brief Field _hasInitialized, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInitialized, put = __cordl_internal_set__hasInitialized)) bool _hasInitialized;

  /// @brief Field _initializables, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__initializables,
                      put = __cordl_internal_set__initializables)) ::System::Collections::Generic::List_1<::Zenject::InitializableManager_InitializableInfo*>* _initializables;

  /// @brief Method Add, addr 0x6cc5c9c, size 0x8, virtual false, abstract: false, final false
  inline void Add(::Zenject::IInitializable* initializable);

  /// @brief Method Add, addr 0x6cc5ca4, size 0xf8, virtual false, abstract: false, final false
  inline void Add(::Zenject::IInitializable* initializable, int32_t priority);

  /// @brief Method Initialize, addr 0x6cc5d9c, size 0x3e4, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::Zenject::InitializableManager* New_ctor(::System::Collections::Generic::List_1<::Zenject::IInitializable*>* initializables,
                                                          ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

  constexpr bool const& __cordl_internal_get__hasInitialized() const;

  constexpr bool& __cordl_internal_get__hasInitialized();

  constexpr ::System::Collections::Generic::List_1<::Zenject::InitializableManager_InitializableInfo*>* const& __cordl_internal_get__initializables() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::InitializableManager_InitializableInfo*>*& __cordl_internal_get__initializables();

  constexpr void __cordl_internal_set__hasInitialized(bool value);

  constexpr void __cordl_internal_set__initializables(::System::Collections::Generic::List_1<::Zenject::InitializableManager_InitializableInfo*>* value);

  /// @brief Method __zenCreate, addr 0x6cc6180, size 0x124, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6cc62a4, size 0x2e0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6cc5888, size 0x404, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IInitializable*>* initializables,
                    ::System::Collections::Generic::List_1<::ModestTree::Util::ValuePair_2<::System::Type*, int32_t>*>* priorities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializableManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializableManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializableManager(InitializableManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializableManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializableManager(InitializableManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14647 };

  /// @brief Field _initializables, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::InitializableManager_InitializableInfo*>* ____initializables;

  /// @brief Field _hasInitialized, offset: 0x18, size: 0x1, def value: None
  bool ____hasInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InitializableManager, ____initializables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InitializableManager, ____hasInitialized) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InitializableManager, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InitializableManager);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager*, "Zenject", "InitializableManager");
NEED_NO_BOX(::Zenject::InitializableManager_InitializableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager_InitializableInfo*, "Zenject", "InitializableManager/InitializableInfo");
NEED_NO_BOX(::Zenject::InitializableManager___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager___c*, "Zenject", "InitializableManager/<>c");
NEED_NO_BOX(::Zenject::InitializableManager___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InitializableManager___c__DisplayClass2_0*, "Zenject", "InitializableManager/<>c__DisplayClass2_0");
