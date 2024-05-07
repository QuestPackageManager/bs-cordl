#pragma once
// IWYU pragma private; include "Zenject/FactorySubContainerBinderBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FactorySubContainerBinderBase_1)
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
template <typename TContract> class __FactorySubContainerBinderBase_1____c__DisplayClass23_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderBase_1____c__DisplayClass25_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderBase_1____c__DisplayClass27_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderBase_1____c__DisplayClass29_0;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class FactorySubContainerBinderBase_1;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderBase_1____c__DisplayClass23_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderBase_1____c__DisplayClass25_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderBase_1____c__DisplayClass27_0;
}
namespace Zenject {
template <typename TContract> class __FactorySubContainerBinderBase_1____c__DisplayClass29_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinderBase_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0);
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::FactorySubContainerBinderBase`1::<>c__DisplayClass23_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderBase_1____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FactorySubContainerBinderBase_1<TContract>* __4__this;

  /// @brief Field installerType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType))::System::Type* installerType;

  /// @brief Field subcontainerBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subcontainerBindInfo, put = __cordl_internal_set_subcontainerBindInfo))::Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;

  static inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>* New_ctor();

  /// @brief Method <ByInstaller>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByInstaller_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_installerType() const;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __cordl_internal_get_subcontainerBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& __cordl_internal_get_subcontainerBindInfo() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value);

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

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
  constexpr __FactorySubContainerBinderBase_1____c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinderBase_1____c__DisplayClass23_0(__FactorySubContainerBinderBase_1____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinderBase_1____c__DisplayClass23_0(__FactorySubContainerBinderBase_1____c__DisplayClass23_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinderBase_1<TContract>* _____4__this;

  /// @brief Field subcontainerBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ___subcontainerBindInfo;

  /// @brief Field installerType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___installerType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::FactorySubContainerBinderBase`1::<>c__DisplayClass25_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderBase_1____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FactorySubContainerBinderBase_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType))::System::Type* installerType;

  static inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>* New_ctor();

  /// @brief Method <ByNewGameObjectInstaller>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewGameObjectInstaller_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_installerType() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FactorySubContainerBinderBase_1____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinderBase_1____c__DisplayClass25_0(__FactorySubContainerBinderBase_1____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinderBase_1____c__DisplayClass25_0(__FactorySubContainerBinderBase_1____c__DisplayClass25_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinderBase_1<TContract>* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___installerType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass27_0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::FactorySubContainerBinderBase`1::<>c__DisplayClass27_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderBase_1____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FactorySubContainerBinderBase_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType))::System::Type* installerType;

  /// @brief Field prefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab))::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>* New_ctor();

  /// @brief Method <ByNewPrefabInstaller>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewPrefabInstaller_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_installerType() const;

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

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
  constexpr __FactorySubContainerBinderBase_1____c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinderBase_1____c__DisplayClass27_0(__FactorySubContainerBinderBase_1____c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinderBase_1____c__DisplayClass27_0(__FactorySubContainerBinderBase_1____c__DisplayClass27_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinderBase_1<TContract>* _____4__this;

  /// @brief Field prefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___installerType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::FactorySubContainerBinderBase`1::<>c__DisplayClass29_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderBase_1____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FactorySubContainerBinderBase_1<TContract>* __4__this;

  /// @brief Field gameObjectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_installerType, put = __cordl_internal_set_installerType))::System::Type* installerType;

  /// @brief Field resourcePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath))::StringW resourcePath;

  static inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>* New_ctor();

  /// @brief Method <ByNewPrefabResourceInstaller>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::System::Type*& __cordl_internal_get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_installerType() const;

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_installerType(::System::Type* value);

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
  constexpr __FactorySubContainerBinderBase_1____c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FactorySubContainerBinderBase_1____c__DisplayClass29_0(__FactorySubContainerBinderBase_1____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FactorySubContainerBinderBase_1____c__DisplayClass29_0(__FactorySubContainerBinderBase_1____c__DisplayClass29_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactorySubContainerBinderBase_1<TContract>* _____4__this;

  /// @brief Field resourcePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___installerType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::FactorySubContainerBinderBase`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: ::Zenject::FactorySubContainerBinderBase`1<TContract>*
class CORDL_TYPE FactorySubContainerBinderBase_1 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass23_0 = ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>;

  using __c__DisplayClass25_0 = ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>;

  using __c__DisplayClass27_0 = ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>;

  using __c__DisplayClass29_0 = ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>;

  __declspec(property(get = get_BindContainer, put = set_BindContainer))::Zenject::DiContainer* BindContainer;

  __declspec(property(get = get_BindInfo, put = set_BindInfo))::Zenject::BindInfo* BindInfo;

  __declspec(property(get = get_ContractType))::System::Type* ContractType;

  __declspec(property(get = get_FactoryBindInfo, put = set_FactoryBindInfo))::Zenject::FactoryBindInfo* FactoryBindInfo;

  __declspec(property(get = get_ProviderFunc, put = set_ProviderFunc))::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* ProviderFunc;

  __declspec(property(get = get_SubIdentifier, put = set_SubIdentifier))::System::Object* SubIdentifier;

  /// @brief Field <BindContainer>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__BindContainer_k__BackingField, put = __cordl_internal_set__BindContainer_k__BackingField))::Zenject::DiContainer* _BindContainer_k__BackingField;

  /// @brief Field <BindInfo>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BindInfo_k__BackingField, put = __cordl_internal_set__BindInfo_k__BackingField))::Zenject::BindInfo* _BindInfo_k__BackingField;

  /// @brief Field <FactoryBindInfo>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__FactoryBindInfo_k__BackingField,
                      put = __cordl_internal_set__FactoryBindInfo_k__BackingField))::Zenject::FactoryBindInfo* _FactoryBindInfo_k__BackingField;

  /// @brief Field <SubIdentifier>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__SubIdentifier_k__BackingField, put = __cordl_internal_set__SubIdentifier_k__BackingField))::System::Object* _SubIdentifier_k__BackingField;

  /// @brief Method ByInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller();

  /// @brief Method ByInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller(::System::Type* installerType);

  /// @brief Method ByNewGameObjectInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller();

  /// @brief Method ByNewGameObjectInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller(::System::Type* installerType);

  /// @brief Method ByNewPrefabInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object* prefab, ::System::Type* installerType);

  /// @brief Method ByNewPrefabResourceInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath);

  /// @brief Method ByNewPrefabResourceInstaller, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath, ::System::Type* installerType);

  static inline ::Zenject::FactorySubContainerBinderBase_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                ::System::Object* subIdentifier);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__BindContainer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__BindContainer_k__BackingField() const;

  constexpr ::Zenject::BindInfo*& __cordl_internal_get__BindInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& __cordl_internal_get__BindInfo_k__BackingField() const;

  constexpr ::Zenject::FactoryBindInfo*& __cordl_internal_get__FactoryBindInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> const& __cordl_internal_get__FactoryBindInfo_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__SubIdentifier_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__SubIdentifier_k__BackingField() const;

  constexpr void __cordl_internal_set__BindContainer_k__BackingField(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__BindInfo_k__BackingField(::Zenject::BindInfo* value);

  constexpr void __cordl_internal_set__FactoryBindInfo_k__BackingField(::Zenject::FactoryBindInfo* value);

  constexpr void __cordl_internal_set__SubIdentifier_k__BackingField(::System::Object* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo, ::System::Object* subIdentifier);

  /// @brief Method get_BindContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_BindContainer();

  /// @brief Method get_BindInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::BindInfo* get_BindInfo();

  /// @brief Method get_ContractType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Type* get_ContractType();

  /// @brief Method get_FactoryBindInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FactoryBindInfo* get_FactoryBindInfo();

  /// @brief Method get_ProviderFunc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* get_ProviderFunc();

  /// @brief Method get_SubIdentifier, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* get_SubIdentifier();

  /// @brief Method set_BindContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_BindContainer(::Zenject::DiContainer* value);

  /// @brief Method set_BindInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_BindInfo(::Zenject::BindInfo* value);

  /// @brief Method set_FactoryBindInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_FactoryBindInfo(::Zenject::FactoryBindInfo* value);

  /// @brief Method set_ProviderFunc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value);

  /// @brief Method set_SubIdentifier, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_SubIdentifier(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactorySubContainerBinderBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactorySubContainerBinderBase_1(FactorySubContainerBinderBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactorySubContainerBinderBase_1(FactorySubContainerBinderBase_1 const&) = delete;

  /// @brief Field <BindContainer>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____BindContainer_k__BackingField;

  /// @brief Field <FactoryBindInfo>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryBindInfo* ____FactoryBindInfo_k__BackingField;

  /// @brief Field <BindInfo>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::BindInfo* ____BindInfo_k__BackingField;

  /// @brief Field <SubIdentifier>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____SubIdentifier_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinderBase_1, "Zenject", "FactorySubContainerBinderBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass23_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass25_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass27_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass29_0");
