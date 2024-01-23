#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FromBinder)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
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
template <typename TValue> class IFactory_1;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct InjectSources;
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
class SubContainerBinder;
}
namespace Zenject {
class __FromBinder____c;
}
namespace Zenject {
class __FromBinder____c__DisplayClass22_0;
}
namespace Zenject {
template <typename TContract> class __FromBinder____c__DisplayClass28_0_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass29_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass30_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass31_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass32_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass35_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass36_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass53_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass56_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass57_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass58_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass59_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass59_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass60_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass60_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass60_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass61_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass61_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass61_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass62_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass62_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass62_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass63_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass64_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass64_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass65_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass65_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass65_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass66_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass66_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass66_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass67_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass68_0;
}
namespace Zenject {
template <typename TConcrete> class __FromBinder____c__DisplayClass69_0_1;
}
namespace Zenject {
template <typename TConcrete> class __FromBinder____c__DisplayClass70_0_1;
}
namespace Zenject {
template <typename TObj, typename TResult> class __FromBinder____c__DisplayClass71_0_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass72_0;
}
// Forward declare root types
namespace Zenject {
class FromBinder;
}
namespace Zenject {
class __FromBinder____c;
}
namespace Zenject {
class __FromBinder____c__DisplayClass22_0;
}
namespace Zenject {
template <typename TContract> class __FromBinder____c__DisplayClass28_0_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass29_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass30_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass31_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass32_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass35_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass36_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass53_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass56_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass57_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass58_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass59_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass59_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass60_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass60_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass60_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass61_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass61_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass61_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass62_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass62_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass62_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass63_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass64_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass64_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass65_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass65_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass65_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass66_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass66_1;
}
namespace Zenject {
class __FromBinder____c__DisplayClass66_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass67_0;
}
namespace Zenject {
class __FromBinder____c__DisplayClass68_0;
}
namespace Zenject {
template <typename TConcrete> class __FromBinder____c__DisplayClass69_0_1;
}
namespace Zenject {
template <typename TConcrete> class __FromBinder____c__DisplayClass70_0_1;
}
namespace Zenject {
template <typename TObj, typename TResult> class __FromBinder____c__DisplayClass71_0_2;
}
namespace Zenject {
class __FromBinder____c__DisplayClass72_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FromBinder);
MARK_REF_PTR_T(::Zenject::__FromBinder____c);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass22_0);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass28_0_1);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass29_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass30_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass31_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass32_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass35_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass36_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass53_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass56_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass57_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass58_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass59_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass59_1);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass60_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass60_1);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass60_2);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass61_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass61_1);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass61_2);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass62_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass62_1);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass62_2);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass63_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass64_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass64_1);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass65_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass65_1);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass65_2);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass66_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass66_1);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass66_2);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass67_0);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass68_0);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass69_0_1);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass70_0_1);
MARK_GEN_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass71_0_2);
MARK_REF_PTR_T(::Zenject::__FromBinder____c__DisplayClass72_0);
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15712))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10870))
// CS Name: ::FromBinder::<>c__DisplayClass22_0*
class CORDL_TYPE __FromBinder____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subIdentifier, put = __cordl_internal_set_subIdentifier))::System::Object* subIdentifier;

  /// @brief Field source, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source))::Zenject::InjectSources source;

  /// @brief Field matchAll, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_matchAll, put = __cordl_internal_set_matchAll)) bool matchAll;

  constexpr ::System::Object*& __cordl_internal_get_subIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_subIdentifier() const;

  constexpr void __cordl_internal_set_subIdentifier(::System::Object* value);

  constexpr ::Zenject::InjectSources& __cordl_internal_get_source();

  constexpr ::Zenject::InjectSources const& __cordl_internal_get_source() const;

  constexpr void __cordl_internal_set_source(::Zenject::InjectSources value);

  constexpr bool& __cordl_internal_get_matchAll();

  constexpr bool const& __cordl_internal_get_matchAll() const;

  constexpr void __cordl_internal_set_matchAll(bool value);

  static inline ::Zenject::__FromBinder____c__DisplayClass22_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ecfe9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromResolveInternal>b__0, addr 0x2ed2b4c, size 0xa0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResolveInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed2bec, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed2c48, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass22_0(__FromBinder____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass22_0(__FromBinder____c__DisplayClass22_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass22_0();

public:
  /// @brief Field subIdentifier, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___subIdentifier;

  /// @brief Field source, offset: 0x18, size: 0x4, def value: None
  ::Zenject::InjectSources ___source;

  /// @brief Field matchAll, offset: 0x1c, size: 0x1, def value: None
  bool ___matchAll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass22_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass22_0, ___subIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass22_0, ___source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass22_0, ___matchAll) == 0x1c, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass28_0`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10871))
// CS Name: ::FromBinder::<>c__DisplayClass28_0`1<TContract>*
class CORDL_TYPE __FromBinder____c__DisplayClass28_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field factoryId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_factoryId, put = __cordl_internal_set_factoryId))::System::Guid factoryId;

  constexpr ::System::Guid& __cordl_internal_get_factoryId();

  constexpr ::System::Guid const& __cordl_internal_get_factoryId() const;

  constexpr void __cordl_internal_set_factoryId(::System::Guid value);

  static inline ::Zenject::__FromBinder____c__DisplayClass28_0_1<TContract>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromIFactoryBase>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromIFactoryBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass28_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass28_0_1(__FromBinder____c__DisplayClass28_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass28_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass28_0_1(__FromBinder____c__DisplayClass28_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass28_0_1();

public:
  /// @brief Field factoryId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___factoryId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10872))
// CS Name: ::FromBinder::<>c__DisplayClass29_0*
class CORDL_TYPE __FromBinder____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject))::UnityW<::UnityEngine::GameObject> gameObject;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  static inline ::Zenject::__FromBinder____c__DisplayClass29_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed00cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsOn>b__0, addr 0x2ed2e08, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed2e84, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed2ee0, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass29_0(__FromBinder____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass29_0(__FromBinder____c__DisplayClass29_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass29_0();

public:
  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass29_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass29_0, ___gameObject) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass30_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10873))
// CS Name: ::FromBinder::<>c__DisplayClass30_0*
class CORDL_TYPE __FromBinder____c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject))::UnityW<::UnityEngine::GameObject> gameObject;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  static inline ::Zenject::__FromBinder____c__DisplayClass30_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed023c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentOn>b__0, addr 0x2ed30a0, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed311c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed3178, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass30_0(__FromBinder____c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass30_0(__FromBinder____c__DisplayClass30_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass30_0();

public:
  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass30_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass30_0, ___gameObject) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass31_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10874))
// CS Name: ::FromBinder::<>c__DisplayClass31_0*
class CORDL_TYPE __FromBinder____c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectGetter,
                      put = __cordl_internal_set_gameObjectGetter))::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjectGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_gameObjectGetter() const;

  constexpr void __cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass31_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed039c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsOn>b__0, addr 0x2ed3338, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed33b4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed3410, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass31_0(__FromBinder____c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass31_0(__FromBinder____c__DisplayClass31_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass31_0();

public:
  /// @brief Field gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ___gameObjectGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass31_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass31_0, ___gameObjectGetter) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10875))
// CS Name: ::FromBinder::<>c__DisplayClass32_0*
class CORDL_TYPE __FromBinder____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectGetter,
                      put = __cordl_internal_set_gameObjectGetter))::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjectGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_gameObjectGetter() const;

  constexpr void __cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass32_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed04fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentOn>b__0, addr 0x2ed35d0, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed364c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed36a8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass32_0(__FromBinder____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass32_0(__FromBinder____c__DisplayClass32_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass32_0();

public:
  /// @brief Field gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ___gameObjectGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass32_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass32_0, ___gameObjectGetter) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10876))
// CS Name: ::FromBinder::<>c*
class CORDL_TYPE __FromBinder____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__FromBinder____c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0))::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* __9__33_0;

  /// @brief Field <>9__34_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__34_0, put = setStaticF___9__34_0))::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* __9__34_0;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0))::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* __9__38_0;

  /// @brief Field <>9__40_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__40_0, put = setStaticF___9__40_0))::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__40_0;

  /// @brief Field <>9__42_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__42_0, put = setStaticF___9__42_0))::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__42_0;

  /// @brief Field <>9__44_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__44_0, put = setStaticF___9__44_0))::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__44_0;

  /// @brief Field <>9__46_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__46_0, put = setStaticF___9__46_0))::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__46_0;

  /// @brief Field <>9__48_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__48_0, put = setStaticF___9__48_0))::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__48_0;

  /// @brief Field <>9__50_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__50_0, put = setStaticF___9__50_0))::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__50_0;

  /// @brief Field <>9__63_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__63_0, put = setStaticF___9__63_0))::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* __9__63_0;

  /// @brief Field <>9__64_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__64_0, put = setStaticF___9__64_0))::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* __9__64_0;

  static inline void setStaticF___9(::Zenject::__FromBinder____c* value);

  static inline ::Zenject::__FromBinder____c* getStaticF___9();

  static inline void setStaticF___9__33_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* getStaticF___9__33_0();

  static inline void setStaticF___9__34_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* getStaticF___9__34_0();

  static inline void setStaticF___9__38_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* getStaticF___9__38_0();

  static inline void setStaticF___9__40_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__40_0();

  static inline void setStaticF___9__42_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__42_0();

  static inline void setStaticF___9__44_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__44_0();

  static inline void setStaticF___9__46_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__46_0();

  static inline void setStaticF___9__48_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__48_0();

  static inline void setStaticF___9__50_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__50_0();

  static inline void setStaticF___9__63_0(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* getStaticF___9__63_0();

  static inline void setStaticF___9__64_0(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value);

  static inline ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* getStaticF___9__64_0();

  static inline ::Zenject::__FromBinder____c* New_ctor();

  /// @brief Method .ctor, addr 0x2ed38cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsOnRoot>b__33_0, addr 0x2ed38d4, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _FromComponentsOnRoot_b__33_0(::Zenject::InjectContext* ctx);

  /// @brief Method <FromComponentOnRoot>b__34_0, addr 0x2ed3934, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _FromComponentOnRoot_b__34_0(::Zenject::InjectContext* ctx);

  /// @brief Method <FromNewComponentOnRoot>b__38_0, addr 0x2ed3994, size 0x60, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _FromNewComponentOnRoot_b__38_0(::Zenject::InjectContext* ctx);

  /// @brief Method <FromNewComponentOnNewPrefabResource>b__40_0, addr 0x2ed39f4, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewPrefabResource_b__40_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromNewComponentOnNewPrefab>b__42_0, addr 0x2ed3a68, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewPrefab_b__42_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentInNewPrefab>b__44_0, addr 0x2ed3adc, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInNewPrefab_b__44_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentsInNewPrefab>b__46_0, addr 0x2ed3b54, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInNewPrefab_b__46_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentInNewPrefabResource>b__48_0, addr 0x2ed3bcc, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInNewPrefabResource_b__48_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentsInNewPrefabResource>b__50_0, addr 0x2ed3c44, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInNewPrefabResource_b__50_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentSibling>b__63_0, addr 0x2ed3cbc, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentSibling_b__63_0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method <FromComponentsSibling>b__64_0, addr 0x2ed3db0, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsSibling_b__64_0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method __zenCreate, addr 0x2ed3ea4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed3f00, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c(__FromBinder____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c(__FromBinder____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10877))
// CS Name: ::FromBinder::<>c__DisplayClass35_0*
class CORDL_TYPE __FromBinder____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject))::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FromBinder* __4__this;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FromBinder*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass35_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed0834, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromNewComponentOn>b__0, addr 0x2ed40c0, size 0xac, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed416c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed41c8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass35_0(__FromBinder____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass35_0(__FromBinder____c__DisplayClass35_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass35_0();

public:
  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass35_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass35_0, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass35_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass36_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10878))
// CS Name: ::FromBinder::<>c__DisplayClass36_0*
class CORDL_TYPE __FromBinder____c__DisplayClass36_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectGetter,
                      put = __cordl_internal_set_gameObjectGetter))::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FromBinder* __4__this;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjectGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_gameObjectGetter() const;

  constexpr void __cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FromBinder*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass36_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed0998, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromNewComponentOn>b__0, addr 0x2ed4388, size 0xac, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed4434, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed4490, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass36_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass36_0(__FromBinder____c__DisplayClass36_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass36_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass36_0(__FromBinder____c__DisplayClass36_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass36_0();

public:
  /// @brief Field gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ___gameObjectGetter;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass36_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass36_0, ___gameObjectGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass36_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass53_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10879))
// CS Name: ::FromBinder::<>c__DisplayClass53_0*
class CORDL_TYPE __FromBinder____c__DisplayClass53_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resource, put = __cordl_internal_set_resource))::UnityW<::UnityEngine::ScriptableObject> resource;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FromBinder* __4__this;

  /// @brief Field createNew, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_createNew, put = __cordl_internal_set_createNew)) bool createNew;

  constexpr ::UnityW<::UnityEngine::ScriptableObject>& __cordl_internal_get_resource();

  constexpr ::UnityW<::UnityEngine::ScriptableObject> const& __cordl_internal_get_resource() const;

  constexpr void __cordl_internal_set_resource(::UnityW<::UnityEngine::ScriptableObject> value);

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FromBinder*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  constexpr bool& __cordl_internal_get_createNew();

  constexpr bool const& __cordl_internal_get_createNew() const;

  constexpr void __cordl_internal_set_createNew(bool value);

  static inline ::Zenject::__FromBinder____c__DisplayClass53_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed197c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromScriptableObjectInternal>b__0, addr 0x2ed4650, size 0xc8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromScriptableObjectInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed4718, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed4774, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass53_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass53_0(__FromBinder____c__DisplayClass53_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass53_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass53_0(__FromBinder____c__DisplayClass53_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass53_0();

public:
  /// @brief Field resource, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ScriptableObject> ___resource;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  /// @brief Field createNew, offset: 0x20, size: 0x1, def value: None
  bool ___createNew;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass53_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass53_0, ___resource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass53_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass53_0, ___createNew) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass56_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10880))
// CS Name: ::FromBinder::<>c__DisplayClass56_0*
class CORDL_TYPE __FromBinder____c__DisplayClass56_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath))::StringW resourcePath;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Zenject::FromBinder* __4__this;

  /// @brief Field createNew, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_createNew, put = __cordl_internal_set_createNew)) bool createNew;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::FromBinder*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  constexpr bool& __cordl_internal_get_createNew();

  constexpr bool const& __cordl_internal_get_createNew() const;

  constexpr void __cordl_internal_set_createNew(bool value);

  static inline ::Zenject::__FromBinder____c__DisplayClass56_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed1af8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromScriptableObjectResourceInternal>b__0, addr 0x2ed4934, size 0xc8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromScriptableObjectResourceInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed49fc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed4a58, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass56_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass56_0(__FromBinder____c__DisplayClass56_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass56_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass56_0(__FromBinder____c__DisplayClass56_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass56_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  /// @brief Field createNew, offset: 0x20, size: 0x1, def value: None
  bool ___createNew;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass56_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass56_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass56_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass56_0, ___createNew) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass57_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10881))
// CS Name: ::FromBinder::<>c__DisplayClass57_0*
class CORDL_TYPE __FromBinder____c__DisplayClass57_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath))::StringW resourcePath;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  static inline ::Zenject::__FromBinder____c__DisplayClass57_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed1c48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromResource>b__0, addr 0x2ed4c18, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResource_b__0(::Zenject::DiContainer* _, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed4c94, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed4cf0, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass57_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass57_0(__FromBinder____c__DisplayClass57_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass57_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass57_0(__FromBinder____c__DisplayClass57_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass57_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass57_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass57_0, ___resourcePath) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass58_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10882))
// CS Name: ::FromBinder::<>c__DisplayClass58_0*
class CORDL_TYPE __FromBinder____c__DisplayClass58_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath))::StringW resourcePath;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  static inline ::Zenject::__FromBinder____c__DisplayClass58_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed1d98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromResources>b__0, addr 0x2ed4eb0, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResources_b__0(::Zenject::DiContainer* _, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed4f2c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed4f88, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass58_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass58_0(__FromBinder____c__DisplayClass58_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass58_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass58_0(__FromBinder____c__DisplayClass58_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass58_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass58_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass58_0, ___resourcePath) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass59_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10883))
// CS Name: ::FromBinder::<>c__DisplayClass59_0*
class CORDL_TYPE __FromBinder____c__DisplayClass59_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr void __cordl_internal_set_includeInactive(bool value);

  static inline ::Zenject::__FromBinder____c__DisplayClass59_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed1ebc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInChildren>b__0, addr 0x2ed5148, size 0xf0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInChildren_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method __zenCreate, addr 0x2ed5240, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed529c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass59_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass59_0(__FromBinder____c__DisplayClass59_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass59_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass59_0(__FromBinder____c__DisplayClass59_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass59_0();

public:
  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass59_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass59_0, ___includeInactive) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass59_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10884))
// CS Name: ::FromBinder::<>c__DisplayClass59_1*
class CORDL_TYPE __FromBinder____c__DisplayClass59_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Zenject::__FromBinder____c__DisplayClass59_0* CS$__8__locals1;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr ::Zenject::__FromBinder____c__DisplayClass59_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__FromBinder____c__DisplayClass59_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__FromBinder____c__DisplayClass59_0* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass59_1* New_ctor();

  /// @brief Method .ctor, addr 0x2ed5238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInChildren>b__1, addr 0x2ed545c, size 0x238, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentInChildren_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method __zenCreate, addr 0x2ed5694, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed56f0, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass59_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass59_1(__FromBinder____c__DisplayClass59_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass59_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass59_1(__FromBinder____c__DisplayClass59_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass59_1();

public:
  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__FromBinder____c__DisplayClass59_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass59_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass59_1, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass59_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass60_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10885))
// CS Name: ::FromBinder::<>c__DisplayClass60_0*
class CORDL_TYPE __FromBinder____c__DisplayClass60_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  /// @brief Field excludeSelf, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_excludeSelf, put = __cordl_internal_set_excludeSelf)) bool excludeSelf;

  /// @brief Field predicate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate))::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr void __cordl_internal_set_includeInactive(bool value);

  constexpr bool& __cordl_internal_get_excludeSelf();

  constexpr bool const& __cordl_internal_get_excludeSelf() const;

  constexpr void __cordl_internal_set_excludeSelf(bool value);

  constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*& __cordl_internal_get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*> const& __cordl_internal_get_predicate() const;

  constexpr void __cordl_internal_set_predicate(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass60_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed1ffc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInChildrenBase>b__0, addr 0x2ed58b0, size 0xf0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInChildrenBase_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method __zenCreate, addr 0x2ed59a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed5a04, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass60_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass60_0(__FromBinder____c__DisplayClass60_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass60_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass60_0(__FromBinder____c__DisplayClass60_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass60_0();

public:
  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field excludeSelf, offset: 0x11, size: 0x1, def value: None
  bool ___excludeSelf;

  /// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass60_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass60_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass60_0, ___excludeSelf) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass60_0, ___predicate) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass60_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10886))
// CS Name: ::FromBinder::<>c__DisplayClass60_1*
class CORDL_TYPE __FromBinder____c__DisplayClass60_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Zenject::__FromBinder____c__DisplayClass60_0* CS$__8__locals1;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr ::Zenject::__FromBinder____c__DisplayClass60_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__FromBinder____c__DisplayClass60_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__FromBinder____c__DisplayClass60_0* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass60_1* New_ctor();

  /// @brief Method .ctor, addr 0x2ed59a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInChildrenBase>b__1, addr 0x2ed5bc4, size 0x2a0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentsInChildrenBase_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method __zenCreate, addr 0x2ed5e6c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed5ec8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass60_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass60_1(__FromBinder____c__DisplayClass60_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass60_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass60_1(__FromBinder____c__DisplayClass60_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass60_1();

public:
  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__FromBinder____c__DisplayClass60_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass60_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass60_1, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass60_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass60_2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10887))
// CS Name: ::FromBinder::<>c__DisplayClass60_2*
class CORDL_TYPE __FromBinder____c__DisplayClass60_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx))::Zenject::InjectContext* ctx;

  /// @brief Field monoBehaviour, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_monoBehaviour, put = __cordl_internal_set_monoBehaviour))::UnityW<::UnityEngine::MonoBehaviour> monoBehaviour;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __cordl_internal_get_ctx() const;

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_monoBehaviour();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_monoBehaviour() const;

  constexpr void __cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value);

  static inline ::Zenject::__FromBinder____c__DisplayClass60_2* New_ctor();

  /// @brief Method .ctor, addr 0x2ed5e64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInChildrenBase>b__2, addr 0x2ed6088, size 0x24, virtual false, abstract: false, final false
  inline bool _FromComponentsInChildrenBase_b__2(::UnityEngine::Component* x);

  /// @brief Method <FromComponentsInChildrenBase>b__3, addr 0x2ed60ac, size 0x94, virtual false, abstract: false, final false
  inline bool _FromComponentsInChildrenBase_b__3(::UnityEngine::Component* x);

  /// @brief Method __zenCreate, addr 0x2ed6140, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed619c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass60_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass60_2(__FromBinder____c__DisplayClass60_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass60_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass60_2(__FromBinder____c__DisplayClass60_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass60_2();

public:
  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  /// @brief Field monoBehaviour, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___monoBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass60_2, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass60_2, ___ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass60_2, ___monoBehaviour) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass61_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10888))
// CS Name: ::FromBinder::<>c__DisplayClass61_0*
class CORDL_TYPE __FromBinder____c__DisplayClass61_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  /// @brief Field excludeSelf, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_excludeSelf, put = __cordl_internal_set_excludeSelf)) bool excludeSelf;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr void __cordl_internal_set_includeInactive(bool value);

  constexpr bool& __cordl_internal_get_excludeSelf();

  constexpr bool const& __cordl_internal_get_excludeSelf() const;

  constexpr void __cordl_internal_set_excludeSelf(bool value);

  static inline ::Zenject::__FromBinder____c__DisplayClass61_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed212c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInParents>b__0, addr 0x2ed635c, size 0xf0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInParents_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method __zenCreate, addr 0x2ed6454, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed64b0, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass61_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass61_0(__FromBinder____c__DisplayClass61_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass61_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass61_0(__FromBinder____c__DisplayClass61_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass61_0();

public:
  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field excludeSelf, offset: 0x11, size: 0x1, def value: None
  bool ___excludeSelf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass61_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass61_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass61_0, ___excludeSelf) == 0x11, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass61_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10889))
// CS Name: ::FromBinder::<>c__DisplayClass61_1*
class CORDL_TYPE __FromBinder____c__DisplayClass61_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Zenject::__FromBinder____c__DisplayClass61_0* CS$__8__locals1;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr ::Zenject::__FromBinder____c__DisplayClass61_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__FromBinder____c__DisplayClass61_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__FromBinder____c__DisplayClass61_0* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass61_1* New_ctor();

  /// @brief Method .ctor, addr 0x2ed644c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInParents>b__1, addr 0x2ed6670, size 0x3a8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentInParents_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method __zenCreate, addr 0x2ed6a20, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed6a7c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass61_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass61_1(__FromBinder____c__DisplayClass61_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass61_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass61_1(__FromBinder____c__DisplayClass61_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass61_1();

public:
  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__FromBinder____c__DisplayClass61_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass61_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass61_1, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass61_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass61_2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10890))
// CS Name: ::FromBinder::<>c__DisplayClass61_2*
class CORDL_TYPE __FromBinder____c__DisplayClass61_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx))::Zenject::InjectContext* ctx;

  /// @brief Field monoBehaviour, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_monoBehaviour, put = __cordl_internal_set_monoBehaviour))::UnityW<::UnityEngine::MonoBehaviour> monoBehaviour;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __cordl_internal_get_ctx() const;

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_monoBehaviour();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_monoBehaviour() const;

  constexpr void __cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value);

  static inline ::Zenject::__FromBinder____c__DisplayClass61_2* New_ctor();

  /// @brief Method .ctor, addr 0x2ed6a18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInParents>b__2, addr 0x2ed6c3c, size 0x24, virtual false, abstract: false, final false
  inline bool _FromComponentInParents_b__2(::UnityEngine::Component* x);

  /// @brief Method <FromComponentInParents>b__3, addr 0x2ed6c60, size 0x94, virtual false, abstract: false, final false
  inline bool _FromComponentInParents_b__3(::UnityEngine::Component* x);

  /// @brief Method __zenCreate, addr 0x2ed6cf4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed6d50, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass61_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass61_2(__FromBinder____c__DisplayClass61_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass61_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass61_2(__FromBinder____c__DisplayClass61_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass61_2();

public:
  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  /// @brief Field monoBehaviour, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___monoBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass61_2, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass61_2, ___ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass61_2, ___monoBehaviour) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass62_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10891))
// CS Name: ::FromBinder::<>c__DisplayClass62_0*
class CORDL_TYPE __FromBinder____c__DisplayClass62_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  /// @brief Field excludeSelf, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_excludeSelf, put = __cordl_internal_set_excludeSelf)) bool excludeSelf;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr void __cordl_internal_set_includeInactive(bool value);

  constexpr bool& __cordl_internal_get_excludeSelf();

  constexpr bool const& __cordl_internal_get_excludeSelf() const;

  constexpr void __cordl_internal_set_excludeSelf(bool value);

  static inline ::Zenject::__FromBinder____c__DisplayClass62_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed225c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInParents>b__0, addr 0x2ed6f10, size 0xf0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInParents_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method __zenCreate, addr 0x2ed7008, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed7064, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass62_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass62_0(__FromBinder____c__DisplayClass62_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass62_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass62_0(__FromBinder____c__DisplayClass62_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass62_0();

public:
  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field excludeSelf, offset: 0x11, size: 0x1, def value: None
  bool ___excludeSelf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass62_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass62_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass62_0, ___excludeSelf) == 0x11, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass62_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10892))
// CS Name: ::FromBinder::<>c__DisplayClass62_1*
class CORDL_TYPE __FromBinder____c__DisplayClass62_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Zenject::__FromBinder____c__DisplayClass62_0* CS$__8__locals1;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr ::Zenject::__FromBinder____c__DisplayClass62_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__FromBinder____c__DisplayClass62_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__FromBinder____c__DisplayClass62_0* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass62_1* New_ctor();

  /// @brief Method .ctor, addr 0x2ed7000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInParents>b__1, addr 0x2ed7224, size 0x280, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentsInParents_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method __zenCreate, addr 0x2ed74ac, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed7508, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass62_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass62_1(__FromBinder____c__DisplayClass62_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass62_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass62_1(__FromBinder____c__DisplayClass62_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass62_1();

public:
  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::__FromBinder____c__DisplayClass62_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass62_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass62_1, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass62_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass62_2
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10893))
// CS Name: ::FromBinder::<>c__DisplayClass62_2*
class CORDL_TYPE __FromBinder____c__DisplayClass62_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx))::Zenject::InjectContext* ctx;

  /// @brief Field monoBehaviour, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_monoBehaviour, put = __cordl_internal_set_monoBehaviour))::UnityW<::UnityEngine::MonoBehaviour> monoBehaviour;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __cordl_internal_get_ctx() const;

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_monoBehaviour();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_monoBehaviour() const;

  constexpr void __cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value);

  static inline ::Zenject::__FromBinder____c__DisplayClass62_2* New_ctor();

  /// @brief Method .ctor, addr 0x2ed74a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInParents>b__2, addr 0x2ed76c8, size 0x24, virtual false, abstract: false, final false
  inline bool _FromComponentsInParents_b__2(::UnityEngine::Component* x);

  /// @brief Method <FromComponentsInParents>b__3, addr 0x2ed76ec, size 0x94, virtual false, abstract: false, final false
  inline bool _FromComponentsInParents_b__3(::UnityEngine::Component* x);

  /// @brief Method __zenCreate, addr 0x2ed7780, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed77dc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass62_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass62_2(__FromBinder____c__DisplayClass62_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass62_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass62_2(__FromBinder____c__DisplayClass62_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass62_2();

public:
  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  /// @brief Field monoBehaviour, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___monoBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass62_2, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass62_2, ___ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass62_2, ___monoBehaviour) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass63_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10894))
// CS Name: ::FromBinder::<>c__DisplayClass63_0*
class CORDL_TYPE __FromBinder____c__DisplayClass63_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass63_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed3da8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentSibling>b__1, addr 0x2ed799c, size 0x224, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentSibling_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method __zenCreate, addr 0x2ed7bc0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed7c1c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass63_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass63_0(__FromBinder____c__DisplayClass63_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass63_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass63_0(__FromBinder____c__DisplayClass63_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass63_0();

public:
  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass63_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass63_0, ___concreteType) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass64_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10895))
// CS Name: ::FromBinder::<>c__DisplayClass64_0*
class CORDL_TYPE __FromBinder____c__DisplayClass64_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass64_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed3e9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsSibling>b__1, addr 0x2ed7ddc, size 0x200, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentsSibling_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method __zenCreate, addr 0x2ed7fe4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed8040, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass64_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass64_0(__FromBinder____c__DisplayClass64_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass64_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass64_0(__FromBinder____c__DisplayClass64_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass64_0();

public:
  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass64_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass64_0, ___concreteType) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass64_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10896))
// CS Name: ::FromBinder::<>c__DisplayClass64_1*
class CORDL_TYPE __FromBinder____c__DisplayClass64_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field monoBehaviour, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_monoBehaviour, put = __cordl_internal_set_monoBehaviour))::UnityW<::UnityEngine::MonoBehaviour> monoBehaviour;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_monoBehaviour();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_monoBehaviour() const;

  constexpr void __cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value);

  static inline ::Zenject::__FromBinder____c__DisplayClass64_1* New_ctor();

  /// @brief Method .ctor, addr 0x2ed7fdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsSibling>b__2, addr 0x2ed8200, size 0x10, virtual false, abstract: false, final false
  inline bool _FromComponentsSibling_b__2(::UnityEngine::Component* x);

  /// @brief Method __zenCreate, addr 0x2ed8210, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed826c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass64_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass64_1(__FromBinder____c__DisplayClass64_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass64_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass64_1(__FromBinder____c__DisplayClass64_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass64_1();

public:
  /// @brief Field monoBehaviour, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___monoBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass64_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass64_1, ___monoBehaviour) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass65_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10897))
// CS Name: ::FromBinder::<>c__DisplayClass65_0*
class CORDL_TYPE __FromBinder____c__DisplayClass65_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr void __cordl_internal_set_includeInactive(bool value);

  static inline ::Zenject::__FromBinder____c__DisplayClass65_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed25fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInHierarchy>b__0, addr 0x2ed842c, size 0xf8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInHierarchy_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method __zenCreate, addr 0x2ed852c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed8588, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass65_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass65_0(__FromBinder____c__DisplayClass65_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass65_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass65_0(__FromBinder____c__DisplayClass65_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass65_0();

public:
  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass65_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass65_0, ___includeInactive) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass65_1
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10898))
// CS Name: ::FromBinder::<>c__DisplayClass65_1*
class CORDL_TYPE __FromBinder____c__DisplayClass65_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::Zenject::DiContainer* container;

  /// @brief Field concreteType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  /// @brief Field CS$<>8__locals1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Zenject::__FromBinder____c__DisplayClass65_0* CS$__8__locals1;

  /// @brief Field <>9__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* __9__2;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get_container() const;

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr ::Zenject::__FromBinder____c__DisplayClass65_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__FromBinder____c__DisplayClass65_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__FromBinder____c__DisplayClass65_0* value);

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>*> const& __cordl_internal_get___9__2() const;

  constexpr void __cordl_internal_set___9__2(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass65_1* New_ctor();

  /// @brief Method .ctor, addr 0x2ed8524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInHierarchy>b__1, addr 0x2ed8748, size 0x2d8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentInHierarchy_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method <FromComponentInHierarchy>b__2, addr 0x2ed8a28, size 0x30, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> _FromComponentInHierarchy_b__2(::UnityEngine::GameObject* x);

  /// @brief Method __zenCreate, addr 0x2ed8a58, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed8ab4, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass65_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass65_1(__FromBinder____c__DisplayClass65_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass65_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass65_1(__FromBinder____c__DisplayClass65_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass65_1();

public:
  /// @brief Field container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief Field concreteType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
  ::Zenject::__FromBinder____c__DisplayClass65_0* ___CS$__8__locals1;

  /// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass65_1, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass65_1, ___container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass65_1, ___concreteType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass65_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass65_1, _____9__2) == 0x28, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass65_2
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10899))
// CS Name: ::FromBinder::<>c__DisplayClass65_2*
class CORDL_TYPE __FromBinder____c__DisplayClass65_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx))::Zenject::InjectContext* ctx;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __cordl_internal_get_ctx() const;

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass65_2* New_ctor();

  /// @brief Method .ctor, addr 0x2ed8a20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentInHierarchy>b__3, addr 0x2ed8c74, size 0x90, virtual false, abstract: false, final false
  inline bool _FromComponentInHierarchy_b__3(::UnityEngine::Component* x);

  /// @brief Method __zenCreate, addr 0x2ed8d04, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed8d60, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass65_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass65_2(__FromBinder____c__DisplayClass65_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass65_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass65_2(__FromBinder____c__DisplayClass65_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass65_2();

public:
  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass65_2, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass65_2, ___ctx) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass66_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10900))
// CS Name: ::FromBinder::<>c__DisplayClass66_0*
class CORDL_TYPE __FromBinder____c__DisplayClass66_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  /// @brief Field predicate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate))::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr void __cordl_internal_set_includeInactive(bool value);

  constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*& __cordl_internal_get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*> const& __cordl_internal_get_predicate() const;

  constexpr void __cordl_internal_set_predicate(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass66_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed272c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInHierarchyBase>b__0, addr 0x2ed8f20, size 0xf8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInHierarchyBase_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method __zenCreate, addr 0x2ed9020, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed907c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass66_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass66_0(__FromBinder____c__DisplayClass66_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass66_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass66_0(__FromBinder____c__DisplayClass66_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass66_0();

public:
  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass66_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass66_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass66_0, ___predicate) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass66_1
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10901))
// CS Name: ::FromBinder::<>c__DisplayClass66_1*
class CORDL_TYPE __FromBinder____c__DisplayClass66_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::Zenject::DiContainer* container;

  /// @brief Field concreteType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType))::System::Type* concreteType;

  /// @brief Field CS$<>8__locals1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::Zenject::__FromBinder____c__DisplayClass66_0* CS$__8__locals1;

  /// @brief Field <>9__2, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get___9__2,
               put = __cordl_internal_set___9__2))::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* __9__2;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get_container() const;

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_concreteType() const;

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr ::Zenject::__FromBinder____c__DisplayClass66_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__FromBinder____c__DisplayClass66_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::__FromBinder____c__DisplayClass66_0* value);

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>*> const&
  __cordl_internal_get___9__2() const;

  constexpr void __cordl_internal_set___9__2(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass66_1* New_ctor();

  /// @brief Method .ctor, addr 0x2ed9018, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInHierarchyBase>b__1, addr 0x2ed923c, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentsInHierarchyBase_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method <FromComponentsInHierarchyBase>b__2, addr 0x2ed9404, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* _FromComponentsInHierarchyBase_b__2(::UnityEngine::GameObject* x);

  /// @brief Method __zenCreate, addr 0x2ed9434, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed9490, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass66_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass66_1(__FromBinder____c__DisplayClass66_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass66_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass66_1(__FromBinder____c__DisplayClass66_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass66_1();

public:
  /// @brief Field container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief Field concreteType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
  ::Zenject::__FromBinder____c__DisplayClass66_0* ___CS$__8__locals1;

  /// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass66_1, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass66_1, ___container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass66_1, ___concreteType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass66_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass66_1, _____9__2) == 0x28, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass66_2
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10902))
// CS Name: ::FromBinder::<>c__DisplayClass66_2*
class CORDL_TYPE __FromBinder____c__DisplayClass66_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx))::Zenject::InjectContext* ctx;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __cordl_internal_get_ctx() const;

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass66_2* New_ctor();

  /// @brief Method .ctor, addr 0x2ed93fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromComponentsInHierarchyBase>b__3, addr 0x2ed9650, size 0x24, virtual false, abstract: false, final false
  inline bool _FromComponentsInHierarchyBase_b__3(::UnityEngine::Component* x);

  /// @brief Method __zenCreate, addr 0x2ed9674, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed96d0, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass66_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass66_2(__FromBinder____c__DisplayClass66_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass66_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass66_2(__FromBinder____c__DisplayClass66_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass66_2();

public:
  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass66_2, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass66_2, ___ctx) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass67_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10903))
// CS Name: ::FromBinder::<>c__DisplayClass67_0*
class CORDL_TYPE __FromBinder____c__DisplayClass67_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method))::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* method;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*> const& __cordl_internal_get_method() const;

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass67_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed283c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromMethodUntyped>b__0, addr 0x2ed9890, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethodUntyped_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed9908, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed9964, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass67_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass67_0(__FromBinder____c__DisplayClass67_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass67_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass67_0(__FromBinder____c__DisplayClass67_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass67_0();

public:
  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass67_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass67_0, ___method) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass68_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10904))
// CS Name: ::FromBinder::<>c__DisplayClass68_0*
class CORDL_TYPE __FromBinder____c__DisplayClass68_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method,
                      put = __cordl_internal_set_method))::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __cordl_internal_get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*> const&
  __cordl_internal_get_method() const;

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass68_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed294c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromMethodMultipleUntyped>b__0, addr 0x2ed9b24, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethodMultipleUntyped_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed9b9c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed9bf8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass68_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass68_0(__FromBinder____c__DisplayClass68_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass68_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass68_0(__FromBinder____c__DisplayClass68_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass68_0();

public:
  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass68_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass68_0, ___method) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass69_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TConcrete>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10905))
// CS Name: ::FromBinder::<>c__DisplayClass69_0`1<TConcrete>*
class CORDL_TYPE __FromBinder____c__DisplayClass69_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method))::System::Func_2<::Zenject::InjectContext*, TConcrete>* method;

  constexpr ::System::Func_2<::Zenject::InjectContext*, TConcrete>*& __cordl_internal_get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, TConcrete>*> const& __cordl_internal_get_method() const;

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, TConcrete>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass69_0_1<TConcrete>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromMethodBase>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethodBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass69_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass69_0_1(__FromBinder____c__DisplayClass69_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass69_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass69_0_1(__FromBinder____c__DisplayClass69_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass69_0_1();

public:
  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, TConcrete>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass70_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TConcrete>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10906))
// CS Name: ::FromBinder::<>c__DisplayClass70_0`1<TConcrete>*
class CORDL_TYPE __FromBinder____c__DisplayClass70_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method,
                      put = __cordl_internal_set_method))::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* method;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>*& __cordl_internal_get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>*> const& __cordl_internal_get_method() const;

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass70_0_1<TConcrete>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromMethodMultipleBase>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethodMultipleBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass70_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass70_0_1(__FromBinder____c__DisplayClass70_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass70_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass70_0_1(__FromBinder____c__DisplayClass70_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass70_0_1();

public:
  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass71_0`2
// SizeInfo { instance_size: 40, native_size: 37, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TObj, typename TResult>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15712))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10907))
// CS Name: ::FromBinder::<>c__DisplayClass71_0`2<TObj,TResult>*
class CORDL_TYPE __FromBinder____c__DisplayClass71_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field identifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_identifier, put = __cordl_internal_set_identifier))::System::Object* identifier;

  /// @brief Field method, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method))::System::Func_2<TObj, TResult>* method;

  /// @brief Field source, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source))::Zenject::InjectSources source;

  /// @brief Field matchMultiple, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_matchMultiple, put = __cordl_internal_set_matchMultiple)) bool matchMultiple;

  constexpr ::System::Object*& __cordl_internal_get_identifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_identifier() const;

  constexpr void __cordl_internal_set_identifier(::System::Object* value);

  constexpr ::System::Func_2<TObj, TResult>*& __cordl_internal_get_method();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObj, TResult>*> const& __cordl_internal_get_method() const;

  constexpr void __cordl_internal_set_method(::System::Func_2<TObj, TResult>* value);

  constexpr ::Zenject::InjectSources& __cordl_internal_get_source();

  constexpr ::Zenject::InjectSources const& __cordl_internal_get_source() const;

  constexpr void __cordl_internal_set_source(::Zenject::InjectSources value);

  constexpr bool& __cordl_internal_get_matchMultiple();

  constexpr bool const& __cordl_internal_get_matchMultiple() const;

  constexpr void __cordl_internal_set_matchMultiple(bool value);

  static inline ::Zenject::__FromBinder____c__DisplayClass71_0_2<TObj, TResult>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromResolveGetterBase>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResolveGetterBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass71_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass71_0_2(__FromBinder____c__DisplayClass71_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass71_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass71_0_2(__FromBinder____c__DisplayClass71_0_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass71_0_2();

public:
  /// @brief Field identifier, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___identifier;

  /// @brief Field method, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TObj, TResult>* ___method;

  /// @brief Field source, offset: 0x20, size: 0x4, def value: None
  ::Zenject::InjectSources ___source;

  /// @brief Field matchMultiple, offset: 0x24, size: 0x1, def value: None
  bool ___matchMultiple;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass72_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10908))
// CS Name: ::FromBinder::<>c__DisplayClass72_0*
class CORDL_TYPE __FromBinder____c__DisplayClass72_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance))::System::Object* instance;

  constexpr ::System::Object*& __cordl_internal_get_instance();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_instance() const;

  constexpr void __cordl_internal_set_instance(::System::Object* value);

  static inline ::Zenject::__FromBinder____c__DisplayClass72_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ed2aa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromInstanceBase>b__0, addr 0x2ed9db8, size 0x80, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromInstanceBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ed9e38, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ed9e94, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass72_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FromBinder____c__DisplayClass72_0(__FromBinder____c__DisplayClass72_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FromBinder____c__DisplayClass72_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FromBinder____c__DisplayClass72_0(__FromBinder____c__DisplayClass72_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FromBinder____c__DisplayClass72_0();

public:
  /// @brief Field instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__FromBinder____c__DisplayClass72_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__FromBinder____c__DisplayClass72_0, ___instance) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::FromBinder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10926))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10909))
// CS Name: ::Zenject::FromBinder*
class CORDL_TYPE FromBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  using __c__DisplayClass72_0 = ::Zenject::__FromBinder____c__DisplayClass72_0;

  template <typename TObj, typename TResult> using __c__DisplayClass71_0_2 = ::Zenject::__FromBinder____c__DisplayClass71_0_2<TObj, TResult>;

  template <typename TConcrete> using __c__DisplayClass70_0_1 = ::Zenject::__FromBinder____c__DisplayClass70_0_1<TConcrete>;

  template <typename TConcrete> using __c__DisplayClass69_0_1 = ::Zenject::__FromBinder____c__DisplayClass69_0_1<TConcrete>;

  using __c__DisplayClass68_0 = ::Zenject::__FromBinder____c__DisplayClass68_0;

  using __c__DisplayClass67_0 = ::Zenject::__FromBinder____c__DisplayClass67_0;

  using __c__DisplayClass66_2 = ::Zenject::__FromBinder____c__DisplayClass66_2;

  using __c__DisplayClass66_1 = ::Zenject::__FromBinder____c__DisplayClass66_1;

  using __c__DisplayClass66_0 = ::Zenject::__FromBinder____c__DisplayClass66_0;

  using __c__DisplayClass65_2 = ::Zenject::__FromBinder____c__DisplayClass65_2;

  using __c__DisplayClass65_1 = ::Zenject::__FromBinder____c__DisplayClass65_1;

  using __c__DisplayClass65_0 = ::Zenject::__FromBinder____c__DisplayClass65_0;

  using __c__DisplayClass64_1 = ::Zenject::__FromBinder____c__DisplayClass64_1;

  using __c__DisplayClass64_0 = ::Zenject::__FromBinder____c__DisplayClass64_0;

  using __c__DisplayClass63_0 = ::Zenject::__FromBinder____c__DisplayClass63_0;

  using __c__DisplayClass62_2 = ::Zenject::__FromBinder____c__DisplayClass62_2;

  using __c__DisplayClass62_1 = ::Zenject::__FromBinder____c__DisplayClass62_1;

  using __c__DisplayClass62_0 = ::Zenject::__FromBinder____c__DisplayClass62_0;

  using __c__DisplayClass61_2 = ::Zenject::__FromBinder____c__DisplayClass61_2;

  using __c__DisplayClass61_1 = ::Zenject::__FromBinder____c__DisplayClass61_1;

  using __c__DisplayClass61_0 = ::Zenject::__FromBinder____c__DisplayClass61_0;

  using __c__DisplayClass60_2 = ::Zenject::__FromBinder____c__DisplayClass60_2;

  using __c__DisplayClass60_1 = ::Zenject::__FromBinder____c__DisplayClass60_1;

  using __c__DisplayClass60_0 = ::Zenject::__FromBinder____c__DisplayClass60_0;

  using __c__DisplayClass59_1 = ::Zenject::__FromBinder____c__DisplayClass59_1;

  using __c__DisplayClass59_0 = ::Zenject::__FromBinder____c__DisplayClass59_0;

  using __c__DisplayClass58_0 = ::Zenject::__FromBinder____c__DisplayClass58_0;

  using __c__DisplayClass57_0 = ::Zenject::__FromBinder____c__DisplayClass57_0;

  using __c__DisplayClass56_0 = ::Zenject::__FromBinder____c__DisplayClass56_0;

  using __c__DisplayClass53_0 = ::Zenject::__FromBinder____c__DisplayClass53_0;

  using __c__DisplayClass36_0 = ::Zenject::__FromBinder____c__DisplayClass36_0;

  using __c__DisplayClass35_0 = ::Zenject::__FromBinder____c__DisplayClass35_0;

  using __c = ::Zenject::__FromBinder____c;

  using __c__DisplayClass32_0 = ::Zenject::__FromBinder____c__DisplayClass32_0;

  using __c__DisplayClass31_0 = ::Zenject::__FromBinder____c__DisplayClass31_0;

  using __c__DisplayClass30_0 = ::Zenject::__FromBinder____c__DisplayClass30_0;

  using __c__DisplayClass29_0 = ::Zenject::__FromBinder____c__DisplayClass29_0;

  template <typename TContract> using __c__DisplayClass28_0_1 = ::Zenject::__FromBinder____c__DisplayClass28_0_1<TContract>;

  using __c__DisplayClass22_0 = ::Zenject::__FromBinder____c__DisplayClass22_0;

  /// @brief Field <BindContainer>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BindContainer_k__BackingField, put = __cordl_internal_set__BindContainer_k__BackingField))::Zenject::DiContainer* _BindContainer_k__BackingField;

  /// @brief Field <BindStatement>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__BindStatement_k__BackingField, put = __cordl_internal_set__BindStatement_k__BackingField))::Zenject::BindStatement* _BindStatement_k__BackingField;

  __declspec(property(get = get_BindContainer, put = set_BindContainer))::Zenject::DiContainer* BindContainer;

  __declspec(property(get = get_BindStatement, put = set_BindStatement))::Zenject::BindStatement* BindStatement;

  __declspec(property(put = set_SubFinalizer))::Zenject::IBindingFinalizer* SubFinalizer;

  __declspec(property(get = get_AllParentTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* AllParentTypes;

  __declspec(property(get = get_ConcreteTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* ConcreteTypes;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__BindContainer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__BindContainer_k__BackingField() const;

  constexpr void __cordl_internal_set__BindContainer_k__BackingField(::Zenject::DiContainer* value);

  constexpr ::Zenject::BindStatement*& __cordl_internal_get__BindStatement_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindStatement*> const& __cordl_internal_get__BindStatement_k__BackingField() const;

  constexpr void __cordl_internal_set__BindStatement_k__BackingField(::Zenject::BindStatement* value);

  static inline ::Zenject::FromBinder* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method .ctor, addr 0x2ecfb8c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method get_BindContainer, addr 0x2ecfbbc, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_BindContainer();

  /// @brief Method set_BindContainer, addr 0x2ecfbc4, size 0x8, virtual false, abstract: false, final false
  inline void set_BindContainer(::Zenject::DiContainer* value);

  /// @brief Method get_BindStatement, addr 0x2ecfbcc, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::BindStatement* get_BindStatement();

  /// @brief Method set_BindStatement, addr 0x2ecfbd4, size 0x8, virtual false, abstract: false, final false
  inline void set_BindStatement(::Zenject::BindStatement* value);

  /// @brief Method set_SubFinalizer, addr 0x2ec6df0, size 0x1c, virtual false, abstract: false, final false
  inline void set_SubFinalizer(::Zenject::IBindingFinalizer* value);

  /// @brief Method get_AllParentTypes, addr 0x2ecfbdc, size 0x58, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_AllParentTypes();

  /// @brief Method get_ConcreteTypes, addr 0x2ecfc34, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ConcreteTypes();

  /// @brief Method FromNew, addr 0x2ecfcc4, size 0x30, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNew();

  /// @brief Method FromResolve, addr 0x2ecfcf4, size 0x10, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve();

  /// @brief Method FromResolve, addr 0x2ecfd04, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve(::System::Object* subIdentifier);

  /// @brief Method FromResolve, addr 0x2ecfd10, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve(::System::Object* subIdentifier, ::Zenject::InjectSources source);

  /// @brief Method FromResolveAll, addr 0x2ecfe74, size 0x10, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll();

  /// @brief Method FromResolveAll, addr 0x2ecfe84, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll(::System::Object* subIdentifier);

  /// @brief Method FromResolveAll, addr 0x2ecfe90, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll(::System::Object* subIdentifier, ::Zenject::InjectSources source);

  /// @brief Method FromResolveInternal, addr 0x2ecfd1c, size 0x158, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveInternal(::System::Object* subIdentifier, bool matchAll, ::Zenject::InjectSources source);

  /// @brief Method FromSubContainerResolveAll, addr 0x2ecfea4, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolveAll();

  /// @brief Method FromSubContainerResolveAll, addr 0x2ecfeb0, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolveAll(::System::Object* subIdentifier);

  /// @brief Method FromSubContainerResolve, addr 0x2ecff50, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolve();

  /// @brief Method FromSubContainerResolve, addr 0x2ecff5c, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolve(::System::Object* subIdentifier);

  /// @brief Method FromSubContainerResolveInternal, addr 0x2ecfeb8, size 0x98, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolveInternal(::System::Object* subIdentifier, bool resolveAll);

  /// @brief Method FromIFactoryBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactoryBase(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator);

  /// @brief Method FromComponentsOn, addr 0x2ecff64, size 0x168, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromComponentOn, addr 0x2ed00d4, size 0x168, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromComponentsOn, addr 0x2ed0244, size 0x158, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter);

  /// @brief Method FromComponentOn, addr 0x2ed03a4, size 0x158, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter);

  /// @brief Method FromComponentsOnRoot, addr 0x2ed0504, size 0xe4, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOnRoot();

  /// @brief Method FromComponentOnRoot, addr 0x2ed05e8, size 0xe4, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOnRoot();

  /// @brief Method FromNewComponentOn, addr 0x2ed06cc, size 0x168, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromNewComponentOn, addr 0x2ed083c, size 0x15c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter);

  /// @brief Method FromNewComponentSibling, addr 0x2ed09a0, size 0x128, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentSibling();

  /// @brief Method FromNewComponentOnRoot, addr 0x2ed0ac8, size 0xe4, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnRoot();

  /// @brief Method FromNewComponentOnNewPrefabResource, addr 0x2ed0bac, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromNewComponentOnNewPrefabResource, addr 0x2ed0c20, size 0x1a8, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromNewComponentOnNewPrefab, addr 0x2ed0dc8, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromNewComponentOnNewPrefab, addr 0x2ed0e3c, size 0x1a8, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromComponentInNewPrefab, addr 0x2ed0fe4, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromComponentInNewPrefab, addr 0x2ed1058, size 0x198, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromComponentsInNewPrefab, addr 0x2ed11f0, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromComponentsInNewPrefab, addr 0x2ed1264, size 0x198, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromComponentInNewPrefabResource, addr 0x2ed13fc, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromComponentInNewPrefabResource, addr 0x2ed1470, size 0x198, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromComponentsInNewPrefabResource, addr 0x2ed1608, size 0x74, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromComponentsInNewPrefabResource, addr 0x2ed167c, size 0x198, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromNewScriptableObject, addr 0x2ed1814, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewScriptableObject(::UnityEngine::ScriptableObject* resource);

  /// @brief Method FromScriptableObject, addr 0x2ed1974, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObject(::UnityEngine::ScriptableObject* resource);

  /// @brief Method FromScriptableObjectInternal, addr 0x2ed181c, size 0x158, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectInternal(::UnityEngine::ScriptableObject* resource, bool createNew);

  /// @brief Method FromNewScriptableObjectResource, addr 0x2ed1984, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewScriptableObjectResource(::StringW resourcePath);

  /// @brief Method FromScriptableObjectResource, addr 0x2ed1af0, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectResource(::StringW resourcePath);

  /// @brief Method FromScriptableObjectResourceInternal, addr 0x2ed198c, size 0x164, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectResourceInternal(::StringW resourcePath, bool createNew);

  /// @brief Method FromResource, addr 0x2ed1b00, size 0x148, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResource(::StringW resourcePath);

  /// @brief Method FromResources, addr 0x2ed1c50, size 0x148, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResources(::StringW resourcePath);

  /// @brief Method FromComponentInChildren, addr 0x2ed1da0, size 0x11c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInChildren(bool includeInactive);

  /// @brief Method FromComponentsInChildrenBase, addr 0x2ed1ec4, size 0x138, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildrenBase(bool excludeSelf, ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate,
                                                                                               bool includeInactive);

  /// @brief Method FromComponentInParents, addr 0x2ed2004, size 0x128, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInParents(bool excludeSelf, bool includeInactive);

  /// @brief Method FromComponentsInParents, addr 0x2ed2134, size 0x128, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInParents(bool excludeSelf, bool includeInactive);

  /// @brief Method FromComponentSibling, addr 0x2ed2264, size 0x13c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentSibling();

  /// @brief Method FromComponentsSibling, addr 0x2ed23a0, size 0x13c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsSibling();

  /// @brief Method FromComponentInHierarchy, addr 0x2ed24dc, size 0x120, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInHierarchy(bool includeInactive);

  /// @brief Method FromComponentsInHierarchyBase, addr 0x2ed2604, size 0x128, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchyBase(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate, bool includeInactive);

  /// @brief Method FromMethodUntyped, addr 0x2ed2734, size 0x108, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodUntyped(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* method);

  /// @brief Method FromMethodMultipleUntyped, addr 0x2ed2844, size 0x108, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
  FromMethodMultipleUntyped(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method);

  /// @brief Method FromMethodBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodBase(::System::Func_2<::Zenject::InjectContext*, TConcrete>* method);

  /// @brief Method FromMethodMultipleBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
  FromMethodMultipleBase(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* method);

  /// @brief Method FromResolveGetterBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj, typename TResult>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetterBase(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method, ::Zenject::InjectSources source,
                                                                                        bool matchMultiple);

  /// @brief Method FromInstanceBase, addr 0x2ed2954, size 0x154, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstanceBase(::System::Object* instance);

  /// @brief Method <FromNewComponentSibling>b__37_0, addr 0x2ed2ab0, size 0x9c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentSibling_b__37_0(::Zenject::DiContainer* container, ::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder(FromBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder(FromBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder();

public:
  /// @brief Field <BindContainer>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____BindContainer_k__BackingField;

  /// @brief Field <BindStatement>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Zenject::BindStatement* ____BindStatement_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FromBinder, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::FromBinder, ____BindContainer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder, ____BindStatement_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FromBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FromBinder*, "Zenject", "FromBinder");
NEED_NO_BOX(::Zenject::__FromBinder____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c*, "Zenject", "FromBinder/<>c");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass22_0*, "Zenject", "FromBinder/<>c__DisplayClass22_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinder____c__DisplayClass28_0_1, "Zenject", "FromBinder/<>c__DisplayClass28_0`1");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass29_0*, "Zenject", "FromBinder/<>c__DisplayClass29_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass30_0*, "Zenject", "FromBinder/<>c__DisplayClass30_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass31_0*, "Zenject", "FromBinder/<>c__DisplayClass31_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass32_0*, "Zenject", "FromBinder/<>c__DisplayClass32_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass35_0*, "Zenject", "FromBinder/<>c__DisplayClass35_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass36_0*, "Zenject", "FromBinder/<>c__DisplayClass36_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass53_0*, "Zenject", "FromBinder/<>c__DisplayClass53_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass56_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass56_0*, "Zenject", "FromBinder/<>c__DisplayClass56_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass57_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass57_0*, "Zenject", "FromBinder/<>c__DisplayClass57_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass58_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass58_0*, "Zenject", "FromBinder/<>c__DisplayClass58_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass59_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass59_0*, "Zenject", "FromBinder/<>c__DisplayClass59_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass59_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass59_1*, "Zenject", "FromBinder/<>c__DisplayClass59_1");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass60_0*, "Zenject", "FromBinder/<>c__DisplayClass60_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass60_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass60_1*, "Zenject", "FromBinder/<>c__DisplayClass60_1");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass60_2);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass60_2*, "Zenject", "FromBinder/<>c__DisplayClass60_2");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass61_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass61_0*, "Zenject", "FromBinder/<>c__DisplayClass61_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass61_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass61_1*, "Zenject", "FromBinder/<>c__DisplayClass61_1");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass61_2);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass61_2*, "Zenject", "FromBinder/<>c__DisplayClass61_2");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass62_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass62_0*, "Zenject", "FromBinder/<>c__DisplayClass62_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass62_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass62_1*, "Zenject", "FromBinder/<>c__DisplayClass62_1");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass62_2);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass62_2*, "Zenject", "FromBinder/<>c__DisplayClass62_2");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass63_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass63_0*, "Zenject", "FromBinder/<>c__DisplayClass63_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass64_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass64_0*, "Zenject", "FromBinder/<>c__DisplayClass64_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass64_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass64_1*, "Zenject", "FromBinder/<>c__DisplayClass64_1");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass65_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass65_0*, "Zenject", "FromBinder/<>c__DisplayClass65_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass65_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass65_1*, "Zenject", "FromBinder/<>c__DisplayClass65_1");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass65_2);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass65_2*, "Zenject", "FromBinder/<>c__DisplayClass65_2");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass66_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass66_0*, "Zenject", "FromBinder/<>c__DisplayClass66_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass66_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass66_1*, "Zenject", "FromBinder/<>c__DisplayClass66_1");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass66_2);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass66_2*, "Zenject", "FromBinder/<>c__DisplayClass66_2");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass67_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass67_0*, "Zenject", "FromBinder/<>c__DisplayClass67_0");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass68_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass68_0*, "Zenject", "FromBinder/<>c__DisplayClass68_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinder____c__DisplayClass69_0_1, "Zenject", "FromBinder/<>c__DisplayClass69_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinder____c__DisplayClass70_0_1, "Zenject", "FromBinder/<>c__DisplayClass70_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FromBinder____c__DisplayClass71_0_2, "Zenject", "FromBinder/<>c__DisplayClass71_0`2");
NEED_NO_BOX(::Zenject::__FromBinder____c__DisplayClass72_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__FromBinder____c__DisplayClass72_0*, "Zenject", "FromBinder/<>c__DisplayClass72_0");
