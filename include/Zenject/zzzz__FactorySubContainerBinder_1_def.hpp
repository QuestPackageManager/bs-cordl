#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass1_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass2_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass3_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass6_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass8_0;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactorySubContainerBinder_1;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass1_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass2_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass3_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass6_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinder_1____c__DisplayClass8_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinder_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass1_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10781))
// CS Name: ::FactorySubContainerBinder`1::<>c__DisplayClass1_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinder_1____c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field subcontainerBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_subcontainerBindInfo, put = __set_subcontainerBindInfo))::Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __get_subcontainerBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& __get_subcontainerBindInfo() const;

  constexpr void __set_subcontainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ByMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_1____c__DisplayClass1_0(__FactorySubContainerBinder_1____c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_1____c__DisplayClass1_0(__FactorySubContainerBinder_1____c__DisplayClass1_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_1____c__DisplayClass1_0();

public:
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
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10782))
// CS Name: ::FactorySubContainerBinder`1::<>c__DisplayClass2_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinder_1____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ByNewGameObjectMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_1____c__DisplayClass2_0(__FactorySubContainerBinder_1____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_1____c__DisplayClass2_0(__FactorySubContainerBinder_1____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_1____c__DisplayClass2_0();

public:
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
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10783))
// CS Name: ::FactorySubContainerBinder`1::<>c__DisplayClass3_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinder_1____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field prefab, offset 0x18, size 0x8
  __declspec(property(get = __get_prefab, put = __set_prefab))::UnityEngine::Object* prefab;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr ::UnityEngine::Object*& __get_prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_prefab() const;

  constexpr void __set_prefab(::UnityEngine::Object* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewPrefabMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_1____c__DisplayClass3_0(__FactorySubContainerBinder_1____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_1____c__DisplayClass3_0(__FactorySubContainerBinder_1____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_1____c__DisplayClass3_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_1<TContract>* _____4__this;

  /// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Object* ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10784))
// CS Name: ::FactorySubContainerBinder`1::<>c__DisplayClass4_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinder_1____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field resourcePath, offset 0x18, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabResourceMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_1____c__DisplayClass4_0(__FactorySubContainerBinder_1____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_1____c__DisplayClass4_0(__FactorySubContainerBinder_1____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_1____c__DisplayClass4_0();

public:
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
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10785))
// CS Name: ::FactorySubContainerBinder`1::<>c__DisplayClass6_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinder_1____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field prefab, offset 0x18, size 0x8
  __declspec(property(get = __get_prefab, put = __set_prefab))::UnityEngine::Object* prefab;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr ::UnityEngine::Object*& __get_prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_prefab() const;

  constexpr void __set_prefab(::UnityEngine::Object* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ByNewContextPrefab>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewContextPrefab_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_1____c__DisplayClass6_0(__FactorySubContainerBinder_1____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_1____c__DisplayClass6_0(__FactorySubContainerBinder_1____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_1____c__DisplayClass6_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinder_1<TContract>* _____4__this;

  /// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Object* ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10786))
// CS Name: ::FactorySubContainerBinder`1::<>c__DisplayClass8_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinder_1____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::FactorySubContainerBinder_1<TContract>* __4__this;

  /// @brief Field resourcePath, offset 0x18, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  constexpr ::Zenject::FactorySubContainerBinder_1<TContract>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinder_1<TContract>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::FactorySubContainerBinder_1<TContract>* value);

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ByNewContextPrefabResource>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewContextPrefabResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinder_1____c__DisplayClass8_0(__FactorySubContainerBinder_1____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinder_1____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinder_1____c__DisplayClass8_0(__FactorySubContainerBinder_1____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinder_1____c__DisplayClass8_0();

public:
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
// Type: Zenject::FactorySubContainerBinder`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10827)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10827), inst: 1850 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10787))
// CS Name: ::Zenject::FactorySubContainerBinder`1<TContract>*
class CORDL_TYPE FactorySubContainerBinder_1 : public ::Zenject::FactorySubContainerBinderBase_1<TContract> {
public:
  // Declarations
  using __c__DisplayClass8_0 = ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0<TContract>;

  using __c__DisplayClass6_0 = ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0<TContract>;

  using __c__DisplayClass4_0 = ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0<TContract>;

  using __c__DisplayClass3_0 = ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0<TContract>;

  using __c__DisplayClass2_0 = ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0<TContract>;

  using __c__DisplayClass1_0 = ::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0<TContract>;

  static inline ::Zenject::FactorySubContainerBinder_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                            ::System::Object* subIdentifier);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier);

  /// @brief Method ByMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewGameObjectMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefabMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(::UnityEngine::Object* prefab, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefabResourceMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewContextPrefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewContextPrefabResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::StringW resourcePath);

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinder_1(FactorySubContainerBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinder_1(FactorySubContainerBinder_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinder_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinder_1, "Zenject", "FactorySubContainerBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass1_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass1_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass2_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass3_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass3_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass4_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass6_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinder_1____c__DisplayClass8_0, "Zenject", "FactorySubContainerBinder`1/<>c__DisplayClass8_0");
