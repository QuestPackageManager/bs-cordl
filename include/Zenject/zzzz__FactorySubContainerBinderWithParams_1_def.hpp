#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactorySubContainerBinderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FactorySubContainerBinderWithParams_1)
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
template <typename TContract> class __FactorySubContainerBinderWithParams_1____c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderWithParams_1____c__DisplayClass8_0;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactorySubContainerBinderWithParams_1;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderWithParams_1____c__DisplayClass4_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderWithParams_1____c__DisplayClass8_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinderWithParams_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10828))
// CS Name: ::FactorySubContainerBinderWithParams`1::<>c__DisplayClass4_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderWithParams_1____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FactorySubContainerBinderWithParams_1<TContract>* __4__this;

  /// @brief Field installerType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType))::System::Type* installerType;

  /// @brief Field prefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab))::UnityW<::UnityEngine::Object> prefab;

  /// @brief Field gameObjectInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  constexpr ::Zenject::FactorySubContainerBinderWithParams_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderWithParams_1<TContract>*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderWithParams_1<TContract>* value);

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_installerType() const;

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value);

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get_gameObjectInfo() const;

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ByNewContextPrefab>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewContextPrefab_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinderWithParams_1____c__DisplayClass4_0(__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinderWithParams_1____c__DisplayClass4_0(__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinderWithParams_1____c__DisplayClass4_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinderWithParams_1<TContract>* _____4__this;

  /// @brief Field installerType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___installerType;

  /// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x28, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10829))
// CS Name: ::FactorySubContainerBinderWithParams`1::<>c__DisplayClass8_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderWithParams_1____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FactorySubContainerBinderWithParams_1<TContract>* __4__this;

  /// @brief Field installerType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType))::System::Type* installerType;

  /// @brief Field resourcePath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath))::StringW resourcePath;

  /// @brief Field gameObjectInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  constexpr ::Zenject::FactorySubContainerBinderWithParams_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderWithParams_1<TContract>*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderWithParams_1<TContract>* value);

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_installerType() const;

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get_gameObjectInfo() const;

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ByNewContextPrefabResource>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewContextPrefabResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinderWithParams_1____c__DisplayClass8_0(__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinderWithParams_1____c__DisplayClass8_0(__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinderWithParams_1____c__DisplayClass8_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinderWithParams_1<TContract>* _____4__this;

  /// @brief Field installerType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___installerType;

  /// @brief Field resourcePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x28, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactorySubContainerBinderWithParams`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10827)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10827), inst: 1849 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10830))
// CS Name: ::Zenject::FactorySubContainerBinderWithParams`1<TContract>*
class CORDL_TYPE FactorySubContainerBinderWithParams_1 : public ::Zenject::FactorySubContainerBinderBase_1<TContract> {
public:
  // Declarations
  using __c__DisplayClass8_0 = ::Zenject::__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0<TContract>;

  using __c__DisplayClass4_0 = ::Zenject::__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0<TContract>;

  static inline ::Zenject::FactorySubContainerBinderWithParams_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                      ::System::Object* subIdentifier);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier);

  /// @brief Method ByNewPrefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(::System::Type* installerType, ::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewContextPrefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewContextPrefab, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(::System::Type* installerType, ::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewPrefabResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::System::Type* installerType, ::StringW resourcePath);

  /// @brief Method ByNewContextPrefabResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewContextPrefabResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::System::Type* installerType, ::StringW resourcePath);

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderWithParams_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinderWithParams_1(FactorySubContainerBinderWithParams_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderWithParams_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinderWithParams_1(FactorySubContainerBinderWithParams_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinderWithParams_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinderWithParams_1, "Zenject", "FactorySubContainerBinderWithParams`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderWithParams_1____c__DisplayClass4_0, "Zenject", "FactorySubContainerBinderWithParams`1/<>c__DisplayClass4_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderWithParams_1____c__DisplayClass8_0, "Zenject", "FactorySubContainerBinderWithParams`1/<>c__DisplayClass8_0");
