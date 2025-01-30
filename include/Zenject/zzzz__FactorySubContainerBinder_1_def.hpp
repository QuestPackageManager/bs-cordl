#pragma once
// IWYU pragma private; include "Zenject/FactorySubContainerBinder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FactorySubContainerBinder_1)
namespace System {
template <typename T> class Action_1;
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
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass1_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass2_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass3_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass6_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass8_0;
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
template <typename TContract> class FactorySubContainerBinder_1;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass1_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass2_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass3_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass6_0;
}
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1___c__DisplayClass8_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_1);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_1___c__DisplayClass1_0);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_1___c__DisplayClass2_0);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_1___c__DisplayClass3_0);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_1___c__DisplayClass4_0);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_1___c__DisplayClass6_0);
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_1___c__DisplayClass8_0);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`1/<>c__DisplayClass1_0<TContract>
class CORDL_TYPE FactorySubContainerBinder_1___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod, put = __cordl_internal_set_installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  /// @brief Field subcontainerBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subcontainerBindInfo, put = __cordl_internal_set_subcontainerBindInfo)) ::Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;

  static inline ::Zenject::FactorySubContainerBinder_1___c__DisplayClass1_0<TContract>* New_ctor();

  /// @brief Method <ByMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_installerMethod();

  constexpr ::Zenject::SubContainerCreatorBindInfo* const& __cordl_internal_get_subcontainerBindInfo() const;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __cordl_internal_get_subcontainerBindInfo();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

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
  constexpr FactorySubContainerBinder_1___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_1___c__DisplayClass1_0(FactorySubContainerBinder_1___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_1___c__DisplayClass1_0(FactorySubContainerBinder_1___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12121 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_1<TContract>* _____4__this;

  /// @brief Field subcontainerBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ___subcontainerBindInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`1/<>c__DisplayClass2_0<TContract>
class CORDL_TYPE FactorySubContainerBinder_1___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod, put = __cordl_internal_set_installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  static inline ::Zenject::FactorySubContainerBinder_1___c__DisplayClass2_0<TContract>* New_ctor();

  /// @brief Method <ByNewGameObjectMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_installerMethod();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_1___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_1___c__DisplayClass2_0(FactorySubContainerBinder_1___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_1___c__DisplayClass2_0(FactorySubContainerBinder_1___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12122 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_1<TContract>* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`1/<>c__DisplayClass3_0<TContract>
class CORDL_TYPE FactorySubContainerBinder_1___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod, put = __cordl_internal_set_installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  /// @brief Field prefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::FactorySubContainerBinder_1___c__DisplayClass3_0<TContract>* New_ctor();

  /// @brief Method <ByNewPrefabMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewPrefabMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_installerMethod();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

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
  constexpr FactorySubContainerBinder_1___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_1___c__DisplayClass3_0(FactorySubContainerBinder_1___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_1___c__DisplayClass3_0(FactorySubContainerBinder_1___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12123 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_1<TContract>* _____4__this;

  /// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`1/<>c__DisplayClass4_0<TContract>
class CORDL_TYPE FactorySubContainerBinder_1___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_installerMethod, put = __cordl_internal_set_installerMethod)) ::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  /// @brief Field resourcePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FactorySubContainerBinder_1___c__DisplayClass4_0<TContract>* New_ctor();

  /// @brief Method <ByNewPrefabResourceMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_installerMethod() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_installerMethod();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

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
  constexpr FactorySubContainerBinder_1___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_1___c__DisplayClass4_0(FactorySubContainerBinder_1___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_1___c__DisplayClass4_0(FactorySubContainerBinder_1___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12124 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_1<TContract>* _____4__this;

  /// @brief Field resourcePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`1/<>c__DisplayClass6_0<TContract>
class CORDL_TYPE FactorySubContainerBinder_1___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field prefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::FactorySubContainerBinder_1___c__DisplayClass6_0<TContract>* New_ctor();

  /// @brief Method <ByNewContextPrefab>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewContextPrefab_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

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
  constexpr FactorySubContainerBinder_1___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_1___c__DisplayClass6_0(FactorySubContainerBinder_1___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_1___c__DisplayClass6_0(FactorySubContainerBinder_1___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12125 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_1<TContract>* _____4__this;

  /// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`1/<>c__DisplayClass8_0<TContract>
class CORDL_TYPE FactorySubContainerBinder_1___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field resourcePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FactorySubContainerBinder_1___c__DisplayClass8_0<TContract>* New_ctor();

  /// @brief Method <ByNewContextPrefabResource>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewContextPrefabResource_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

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
  constexpr FactorySubContainerBinder_1___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_1___c__DisplayClass8_0(FactorySubContainerBinder_1___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_1___c__DisplayClass8_0(FactorySubContainerBinder_1___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12126 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_1<TContract>* _____4__this;

  /// @brief Field resourcePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies Zenject.FactorySubContainerBinderBase`1<TContract>
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FactorySubContainerBinder`1<TContract>
class CORDL_TYPE FactorySubContainerBinder_1 : public ::Zenject::FactorySubContainerBinderBase_1<TContract> {
public:
  // Declarations
  using __c__DisplayClass1_0 = ::Zenject::FactorySubContainerBinder_1___c__DisplayClass1_0<TContract>;

  using __c__DisplayClass2_0 = ::Zenject::FactorySubContainerBinder_1___c__DisplayClass2_0<TContract>;

  using __c__DisplayClass3_0 = ::Zenject::FactorySubContainerBinder_1___c__DisplayClass3_0<TContract>;

  using __c__DisplayClass4_0 = ::Zenject::FactorySubContainerBinder_1___c__DisplayClass4_0<TContract>;

  using __c__DisplayClass6_0 = ::Zenject::FactorySubContainerBinder_1___c__DisplayClass6_0<TContract>;

  using __c__DisplayClass8_0 = ::Zenject::FactorySubContainerBinder_1___c__DisplayClass8_0<TContract>;

  /// @brief Method ByMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewContextPrefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewContextPrefabResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewGameObjectMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(::UnityEngine::Object* prefab, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefabResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewPrefabResourceMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  static inline ::Zenject::FactorySubContainerBinder_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                            ::System::Object* subIdentifier);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_1(FactorySubContainerBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_1(FactorySubContainerBinder_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12127 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_1, "Zenject", "FactorySubContainerBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_1___c__DisplayClass1_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_1___c__DisplayClass2_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_1___c__DisplayClass3_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_1___c__DisplayClass4_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_1___c__DisplayClass6_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_1___c__DisplayClass8_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass8_0");
