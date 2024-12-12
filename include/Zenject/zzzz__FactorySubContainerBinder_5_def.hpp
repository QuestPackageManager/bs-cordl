#pragma once
// IWYU pragma private; include "Zenject/FactorySubContainerBinder_5.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderWithParams_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FactorySubContainerBinder_5)
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5___c__DisplayClass1_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5___c__DisplayClass2_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5___c__DisplayClass3_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5___c__DisplayClass4_0;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IProvider;
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
class SubContainerCreatorBindInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5___c__DisplayClass1_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5___c__DisplayClass2_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5___c__DisplayClass3_0;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract> class FactorySubContainerBinder_5___c__DisplayClass4_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_5);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_5___c__DisplayClass1_0);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_5___c__DisplayClass2_0);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_5___c__DisplayClass3_0);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_5___c__DisplayClass4_0);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`5/<>c__DisplayClass1_0<TParam1,TParam2,TParam3,TParam4,TContract>
class CORDL_TYPE FactorySubContainerBinder_5___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* __4__this;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod,
                      put = __cordl_internal_set_installerMethod)) ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod;

  /// @brief Field subcontainerBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subcontainerBindInfo, put = __cordl_internal_set_subcontainerBindInfo)) ::Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;

  static inline ::Zenject::FactorySubContainerBinder_5___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method <ByMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*& __cordl_internal_get___4__this();

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*& __cordl_internal_get_installerMethod();

  constexpr ::Zenject::SubContainerCreatorBindInfo* const& __cordl_internal_get_subcontainerBindInfo() const;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __cordl_internal_get_subcontainerBindInfo();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* value);

  constexpr void __cordl_internal_set_subcontainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_5___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_5___c__DisplayClass1_0(FactorySubContainerBinder_5___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_5___c__DisplayClass1_0(FactorySubContainerBinder_5___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12145 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* _____4__this;

  /// @brief Field subcontainerBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ___subcontainerBindInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`5/<>c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TContract>
class CORDL_TYPE FactorySubContainerBinder_5___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod,
                      put = __cordl_internal_set_installerMethod)) ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod;

  static inline ::Zenject::FactorySubContainerBinder_5___c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method <ByNewGameObjectMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*& __cordl_internal_get_installerMethod();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_5___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_5___c__DisplayClass2_0(FactorySubContainerBinder_5___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_5___c__DisplayClass2_0(FactorySubContainerBinder_5___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12146 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`5/<>c__DisplayClass3_0<TParam1,TParam2,TParam3,TParam4,TContract>
class CORDL_TYPE FactorySubContainerBinder_5___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod,
                      put = __cordl_internal_set_installerMethod)) ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod;

  /// @brief Field prefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::FactorySubContainerBinder_5___c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method <ByNewPrefabMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewPrefabMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*& __cordl_internal_get_installerMethod();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* value);

  constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_5___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_5___c__DisplayClass3_0(FactorySubContainerBinder_5___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_5___c__DisplayClass3_0(FactorySubContainerBinder_5___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12147 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* _____4__this;

  /// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`5/<>c__DisplayClass4_0<TParam1,TParam2,TParam3,TParam4,TContract>
class CORDL_TYPE FactorySubContainerBinder_5___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod,
                      put = __cordl_internal_set_installerMethod)) ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod;

  /// @brief Field resourcePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FactorySubContainerBinder_5___c__DisplayClass4_0<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor();

  /// @brief Method <ByNewPrefabResourceMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>*& __cordl_internal_get_installerMethod();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_5___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_5___c__DisplayClass4_0(FactorySubContainerBinder_5___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_5___c__DisplayClass4_0(FactorySubContainerBinder_5___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12148 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* _____4__this;

  /// @brief Field resourcePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies Zenject.FactorySubContainerBinderWithParams`1<TContract>
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`5<TParam1,TParam2,TParam3,TParam4,TContract>
class CORDL_TYPE FactorySubContainerBinder_5 : public ::Zenject::FactorySubContainerBinderWithParams_1<TContract> {
public:
  // Declarations
  using __c__DisplayClass1_0 = ::Zenject::FactorySubContainerBinder_5___c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  using __c__DisplayClass2_0 = ::Zenject::FactorySubContainerBinder_5___c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  using __c__DisplayClass3_0 = ::Zenject::FactorySubContainerBinder_5___c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  using __c__DisplayClass4_0 = ::Zenject::FactorySubContainerBinder_5___c__DisplayClass4_0<TParam1, TParam2, TParam3, TParam4, TContract>;

  /// @brief Method ByMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod);

  /// @brief Method ByNewGameObjectMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod);

  /// @brief Method ByNewPrefabMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(::UnityEngine::Object* prefab,
                                                                                                 ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod);

  /// @brief Method ByNewPrefabResourceMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*
  ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_5<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4>* installerMethod);

  static inline ::Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_5();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_5(FactorySubContainerBinder_5&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_5", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_5(FactorySubContainerBinder_5 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12149 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_5, "Zenject", "FactorySubContainerBinder`5");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_5___c__DisplayClass1_0, "Zenject", "FactorySubContainerBinder`5/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_5___c__DisplayClass2_0, "Zenject", "FactorySubContainerBinder`5/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_5___c__DisplayClass3_0, "Zenject", "FactorySubContainerBinder`5/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_5___c__DisplayClass4_0, "Zenject", "FactorySubContainerBinder`5/<>c__DisplayClass4_0");
