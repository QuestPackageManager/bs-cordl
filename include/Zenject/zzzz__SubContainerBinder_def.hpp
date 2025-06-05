#pragma once
// IWYU pragma private; include "Zenject/SubContainerBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubContainerBinder)
namespace System {
template <typename T> class Action_1;
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
namespace UnityEngine {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass10_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass11_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass12_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass13_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass15_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass17_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass18_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass20_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass22_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass24_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass7_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass8_0;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class SubContainerBinder;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass10_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass11_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass12_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass13_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass15_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass17_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass18_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass20_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass22_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass24_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass7_0;
}
namespace Zenject {
class SubContainerBinder___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerBinder);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass10_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass11_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass12_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass13_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass15_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass17_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass18_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass20_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass22_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass24_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass7_0);
MARK_REF_PTR_T(::Zenject::SubContainerBinder___c__DisplayClass8_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass10_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field installerType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType)) ::System::Type* installerType;

  /// @brief Field subContainerBindInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subContainerBindInfo, put = __cordl_internal_set_subContainerBindInfo)) ::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass10_0* New_ctor();

  /// @brief Method <ByInstaller>b__0, addr 0x4b143a8, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByInstaller_b__0(::Zenject::DiContainer* container);

  constexpr ::System::Type* const& __cordl_internal_get_installerType() const;

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::Zenject::SubContainerCreatorBindInfo* const& __cordl_internal_get_subContainerBindInfo() const;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __cordl_internal_get_subContainerBindInfo();

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

  constexpr void __cordl_internal_set_subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  /// @brief Method __zenCreate, addr 0x4b1441c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b14470, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b13378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass10_0(SubContainerBinder___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass10_0(SubContainerBinder___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12269 };

  /// @brief Field subContainerBindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ___subContainerBindInfo;

  /// @brief Field installerType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___installerType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass10_0, ___subContainerBindInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass10_0, ___installerType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass10_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass11_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field installerMethod, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod, put = __cordl_internal_set_installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  /// @brief Field subContainerBindInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subContainerBindInfo, put = __cordl_internal_set_subContainerBindInfo)) ::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass11_0* New_ctor();

  /// @brief Method <ByMethod>b__0, addr 0x4b14628, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_installerMethod();

  constexpr ::Zenject::SubContainerCreatorBindInfo* const& __cordl_internal_get_subContainerBindInfo() const;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __cordl_internal_get_subContainerBindInfo();

  constexpr void __cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  /// @brief Method __zenCreate, addr 0x4b1469c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b146f0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b134fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass11_0(SubContainerBinder___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass11_0(SubContainerBinder___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12270 };

  /// @brief Field subContainerBindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ___subContainerBindInfo;

  /// @brief Field installerMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass11_0, ___subContainerBindInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass11_0, ___installerMethod) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass11_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass12_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod, put = __cordl_internal_set_installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass12_0* New_ctor();

  /// @brief Method <ByNewGameObjectMethod>b__0, addr 0x4b148a8, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_installerMethod();

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  /// @brief Method __zenCreate, addr 0x4b1491c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b14970, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b13678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass12_0(SubContainerBinder___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass12_0(SubContainerBinder___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12271 };

  /// @brief Field gameObjectInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass12_0, ___gameObjectInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass12_0, ___installerMethod) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass12_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass13_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod, put = __cordl_internal_set_installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  /// @brief Field prefab, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass13_0* New_ctor();

  /// @brief Method <ByNewPrefabMethod>b__0, addr 0x4b14b28, size 0xa8, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_installerMethod();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value);

  /// @brief Method __zenCreate, addr 0x4b14bd0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b14c24, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b13858, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass13_0(SubContainerBinder___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass13_0(SubContainerBinder___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12272 };

  /// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass13_0, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass13_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass13_0, ___installerMethod) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass13_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass15_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerBinder* __4__this;

  /// @brief Field gameObjectInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType)) ::System::Type* installerType;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass15_0* New_ctor();

  /// @brief Method <ByNewGameObjectInstaller>b__0, addr 0x4b14ddc, size 0x90, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByNewGameObjectInstaller_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::SubContainerBinder* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerBinder*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Type* const& __cordl_internal_get_installerType() const;

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerBinder* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4b14e6c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b14ec0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b13a9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass15_0(SubContainerBinder___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass15_0(SubContainerBinder___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12273 };

  /// @brief Field gameObjectInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___installerType;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Zenject::SubContainerBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass15_0, ___gameObjectInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass15_0, ___installerType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass15_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass15_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass17_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerBinder* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType)) ::System::Type* installerType;

  /// @brief Field prefab, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass17_0* New_ctor();

  /// @brief Method <ByNewPrefabInstaller>b__0, addr 0x4b15078, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabInstaller_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::SubContainerBinder* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerBinder*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Type* const& __cordl_internal_get_installerType() const;

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerBinder* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

  constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value);

  /// @brief Method __zenCreate, addr 0x4b15144, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b15198, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b13c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass17_0(SubContainerBinder___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass17_0(SubContainerBinder___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12274 };

  /// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___installerType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::SubContainerBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass17_0, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass17_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass17_0, ___installerType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass17_0, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass17_0, 0x30>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass18_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod, put = __cordl_internal_set_installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass18_0* New_ctor();

  /// @brief Method <ByNewPrefabResourceMethod>b__0, addr 0x4b15350, size 0xa8, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_installerMethod();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x4b153f8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1544c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b13e20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass18_0(SubContainerBinder___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass18_0(SubContainerBinder___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12275 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass18_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass18_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass18_0, ___installerMethod) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass18_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass20_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerBinder* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType)) ::System::Type* installerType;

  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass20_0* New_ctor();

  /// @brief Method <ByNewPrefabResourceInstaller>b__0, addr 0x4b15604, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::SubContainerBinder* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerBinder*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Type* const& __cordl_internal_get_installerType() const;

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerBinder* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x4b156d0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b15724, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b14080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass20_0(SubContainerBinder___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass20_0(SubContainerBinder___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12276 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___installerType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::SubContainerBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass20_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass20_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass20_0, ___installerType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass20_0, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass20_0, 0x30>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass22_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field prefab, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass22_0* New_ctor();

  /// @brief Method <ByNewContextPrefab>b__0, addr 0x4b158dc, size 0xa4, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByNewContextPrefab_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value);

  /// @brief Method __zenCreate, addr 0x4b15980, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b159d4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b14210, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass22_0(SubContainerBinder___c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass22_0(SubContainerBinder___c__DisplayClass22_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12277 };

  /// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass22_0, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass22_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass22_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass24_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass24_0* New_ctor();

  /// @brief Method <ByNewContextPrefabResource>b__0, addr 0x4b15b8c, size 0xa4, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByNewContextPrefabResource_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x4b15c30, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b15c84, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b143a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass24_0(SubContainerBinder___c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass24_0(SubContainerBinder___c__DisplayClass24_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12278 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass24_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass24_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass24_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass7_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subContainer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subContainer, put = __cordl_internal_set_subContainer)) ::Zenject::DiContainer* subContainer;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass7_0* New_ctor();

  /// @brief Method <ByInstance>b__0, addr 0x4b15e3c, size 0x60, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByInstance_b__0(::Zenject::DiContainer* _);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_subContainer() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_subContainer();

  constexpr void __cordl_internal_set_subContainer(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b15e9c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b15ef0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b13004, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass7_0(SubContainerBinder___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass7_0(SubContainerBinder___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12279 };

  /// @brief Field subContainer, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ___subContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass7_0, ___subContainer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder/<>c__DisplayClass8_0
class CORDL_TYPE SubContainerBinder___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subContainerGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subContainerGetter,
                      put = __cordl_internal_set_subContainerGetter)) ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subContainerGetter;

  static inline ::Zenject::SubContainerBinder___c__DisplayClass8_0* New_ctor();

  /// @brief Method <ByInstanceGetter>b__0, addr 0x4b160a8, size 0x60, virtual false, abstract: false, final false
  inline ::Zenject::ISubContainerCreator* _ByInstanceGetter_b__0(::Zenject::DiContainer* _);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* const& __cordl_internal_get_subContainerGetter() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*& __cordl_internal_get_subContainerGetter();

  constexpr void __cordl_internal_set_subContainerGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* value);

  /// @brief Method __zenCreate, addr 0x4b16108, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1615c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b13190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder___c__DisplayClass8_0(SubContainerBinder___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder___c__DisplayClass8_0(SubContainerBinder___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12280 };

  /// @brief Field subContainerGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* ___subContainerGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder___c__DisplayClass8_0, ___subContainerGetter) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerBinder
class CORDL_TYPE SubContainerBinder : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::Zenject::SubContainerBinder___c__DisplayClass10_0;

  using __c__DisplayClass11_0 = ::Zenject::SubContainerBinder___c__DisplayClass11_0;

  using __c__DisplayClass12_0 = ::Zenject::SubContainerBinder___c__DisplayClass12_0;

  using __c__DisplayClass13_0 = ::Zenject::SubContainerBinder___c__DisplayClass13_0;

  using __c__DisplayClass15_0 = ::Zenject::SubContainerBinder___c__DisplayClass15_0;

  using __c__DisplayClass17_0 = ::Zenject::SubContainerBinder___c__DisplayClass17_0;

  using __c__DisplayClass18_0 = ::Zenject::SubContainerBinder___c__DisplayClass18_0;

  using __c__DisplayClass20_0 = ::Zenject::SubContainerBinder___c__DisplayClass20_0;

  using __c__DisplayClass22_0 = ::Zenject::SubContainerBinder___c__DisplayClass22_0;

  using __c__DisplayClass24_0 = ::Zenject::SubContainerBinder___c__DisplayClass24_0;

  using __c__DisplayClass7_0 = ::Zenject::SubContainerBinder___c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::Zenject::SubContainerBinder___c__DisplayClass8_0;

  __declspec(property(put = set_SubFinalizer)) ::Zenject::IBindingFinalizer* SubFinalizer;

  /// @brief Field _bindInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bindInfo, put = __cordl_internal_set__bindInfo)) ::Zenject::BindInfo* _bindInfo;

  /// @brief Field _bindStatement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bindStatement, put = __cordl_internal_set__bindStatement)) ::Zenject::BindStatement* _bindStatement;

  /// @brief Field _resolveAll, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__resolveAll, put = __cordl_internal_set__resolveAll)) bool _resolveAll;

  /// @brief Field _subIdentifier, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__subIdentifier, put = __cordl_internal_set__subIdentifier)) ::System::Object* _subIdentifier;

  /// @brief Method ByInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller();

  /// @brief Method ByInstaller, addr 0x4b13198, size 0x1e0, virtual false, abstract: false, final false
  inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller(::System::Type* installerType);

  /// @brief Method ByInstance, addr 0x4b12ec4, size 0x140, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstance(::Zenject::DiContainer* subContainer);

  /// @brief Method ByInstanceGetter, addr 0x4b13050, size 0x140, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstanceGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subContainerGetter);

  /// @brief Method ByMethod, addr 0x4b13388, size 0x174, virtual false, abstract: false, final false
  inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewContextPrefab, addr 0x4b1408c, size 0x184, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewContextPrefabResource, addr 0x4b1421c, size 0x184, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewGameObjectInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller();

  /// @brief Method ByNewGameObjectInstaller, addr 0x4b138bc, size 0x1e0, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller(::System::Type* installerType);

  /// @brief Method ByNewGameObjectMethod, addr 0x4b13504, size 0x174, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefab, addr 0x4b14088, size 0x4, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabInstaller, addr 0x4b13aa4, size 0x1e8, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object* prefab, ::System::Type* installerType);

  /// @brief Method ByNewPrefabMethod, addr 0x4b136cc, size 0x18c, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(::UnityEngine::Object* prefab, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefabResource, addr 0x4b14218, size 0x4, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewPrefabResourceInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath);

  /// @brief Method ByNewPrefabResourceInstaller, addr 0x4b13e84, size 0x1fc, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath, ::System::Type* installerType);

  /// @brief Method ByNewPrefabResourceMethod, addr 0x4b13c94, size 0x18c, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  static inline ::Zenject::SubContainerBinder* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement, ::System::Object* subIdentifier, bool resolveAll);

  constexpr ::Zenject::BindInfo* const& __cordl_internal_get__bindInfo() const;

  constexpr ::Zenject::BindInfo*& __cordl_internal_get__bindInfo();

  constexpr ::Zenject::BindStatement* const& __cordl_internal_get__bindStatement() const;

  constexpr ::Zenject::BindStatement*& __cordl_internal_get__bindStatement();

  constexpr bool const& __cordl_internal_get__resolveAll() const;

  constexpr bool& __cordl_internal_get__resolveAll();

  constexpr ::System::Object* const& __cordl_internal_get__subIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get__subIdentifier();

  constexpr void __cordl_internal_set__bindInfo(::Zenject::BindInfo* value);

  constexpr void __cordl_internal_set__bindStatement(::Zenject::BindStatement* value);

  constexpr void __cordl_internal_set__resolveAll(bool value);

  constexpr void __cordl_internal_set__subIdentifier(::System::Object* value);

  /// @brief Method .ctor, addr 0x4b12e58, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement, ::System::Object* subIdentifier, bool resolveAll);

  /// @brief Method set_SubFinalizer, addr 0x4b12ea8, size 0x1c, virtual false, abstract: false, final false
  inline void set_SubFinalizer(::Zenject::IBindingFinalizer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder(SubContainerBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder(SubContainerBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12281 };

  /// @brief Field _bindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::BindInfo* ____bindInfo;

  /// @brief Field _bindStatement, offset: 0x18, size: 0x8, def value: None
  ::Zenject::BindStatement* ____bindStatement;

  /// @brief Field _subIdentifier, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____subIdentifier;

  /// @brief Field _resolveAll, offset: 0x28, size: 0x1, def value: None
  bool ____resolveAll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerBinder, ____bindInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder, ____bindStatement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder, ____subIdentifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder, ____resolveAll) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder*, "Zenject", "SubContainerBinder");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass10_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass10_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass11_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass11_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass12_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass12_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass13_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass13_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass15_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass15_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass17_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass17_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass18_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass18_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass20_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass20_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass22_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass22_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass24_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass24_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass7_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass7_0");
NEED_NO_BOX(::Zenject::SubContainerBinder___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder___c__DisplayClass8_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass8_0");
