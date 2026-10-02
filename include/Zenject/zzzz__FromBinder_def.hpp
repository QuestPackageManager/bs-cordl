#pragma once
// IWYU pragma private; include "Zenject/FromBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class FromBinder___c;
}
namespace Zenject {
class FromBinder___c__DisplayClass22_0;
}
namespace Zenject {
template <typename TContract> class FromBinder___c__DisplayClass28_0_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass29_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass30_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass31_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass32_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass35_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass36_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass40_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass55_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass58_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass59_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass60_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass61_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass61_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass62_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass62_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass62_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass63_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass63_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass63_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass64_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass64_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass64_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass65_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass66_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass66_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass67_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass67_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass67_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass68_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass68_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass68_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass69_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass70_0;
}
namespace Zenject {
template <typename TConcrete> class FromBinder___c__DisplayClass71_0_1;
}
namespace Zenject {
template <typename TConcrete> class FromBinder___c__DisplayClass72_0_1;
}
namespace Zenject {
template <typename TObj, typename TResult> class FromBinder___c__DisplayClass73_0_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass74_0;
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
// Forward declare root types
namespace Zenject {
class FromBinder;
}
namespace Zenject {
class FromBinder___c;
}
namespace Zenject {
class FromBinder___c__DisplayClass22_0;
}
namespace Zenject {
template <typename TContract> class FromBinder___c__DisplayClass28_0_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass29_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass30_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass31_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass32_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass35_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass36_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass40_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass55_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass58_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass59_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass60_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass61_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass61_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass62_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass62_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass62_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass63_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass63_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass63_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass64_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass64_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass64_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass65_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass66_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass66_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass67_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass67_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass67_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass68_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass68_1;
}
namespace Zenject {
class FromBinder___c__DisplayClass68_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass69_0;
}
namespace Zenject {
class FromBinder___c__DisplayClass70_0;
}
namespace Zenject {
template <typename TConcrete> class FromBinder___c__DisplayClass71_0_1;
}
namespace Zenject {
template <typename TConcrete> class FromBinder___c__DisplayClass72_0_1;
}
namespace Zenject {
template <typename TObj, typename TResult> class FromBinder___c__DisplayClass73_0_2;
}
namespace Zenject {
class FromBinder___c__DisplayClass74_0;
}
// Write type traits
MARK_REF_T(::Zenject::FromBinder*);
MARK_REF_T(::Zenject::FromBinder___c*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass22_0*);
MARK_GEN_REF_T_PTR(::Zenject::FromBinder___c__DisplayClass28_0_1);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass29_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass30_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass31_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass32_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass35_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass36_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass40_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass55_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass58_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass59_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass60_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass61_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass61_1*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass62_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass62_1*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass62_2*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass63_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass63_1*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass63_2*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass64_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass64_1*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass64_2*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass65_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass66_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass66_1*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass67_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass67_1*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass67_2*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass68_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass68_1*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass68_2*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass69_0*);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass70_0*);
MARK_GEN_REF_T_PTR(::Zenject::FromBinder___c__DisplayClass71_0_1);
MARK_GEN_REF_T_PTR(::Zenject::FromBinder___c__DisplayClass72_0_1);
MARK_GEN_REF_T_PTR(::Zenject::FromBinder___c__DisplayClass73_0_2);
MARK_REF_T(::Zenject::FromBinder___c__DisplayClass74_0*);
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder*, "Zenject", "FromBinder");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c*, "Zenject", "FromBinder/<>c");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass22_0*, "Zenject", "FromBinder/<>c__DisplayClass22_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Zenject::FromBinder___c__DisplayClass28_0_1, "Zenject", "FromBinder/<>c__DisplayClass28_0`1");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass29_0*, "Zenject", "FromBinder/<>c__DisplayClass29_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass30_0*, "Zenject", "FromBinder/<>c__DisplayClass30_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass31_0*, "Zenject", "FromBinder/<>c__DisplayClass31_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass32_0*, "Zenject", "FromBinder/<>c__DisplayClass32_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass35_0*, "Zenject", "FromBinder/<>c__DisplayClass35_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass36_0*, "Zenject", "FromBinder/<>c__DisplayClass36_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass40_0*, "Zenject", "FromBinder/<>c__DisplayClass40_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass55_0*, "Zenject", "FromBinder/<>c__DisplayClass55_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass58_0*, "Zenject", "FromBinder/<>c__DisplayClass58_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass59_0*, "Zenject", "FromBinder/<>c__DisplayClass59_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass60_0*, "Zenject", "FromBinder/<>c__DisplayClass60_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass61_0*, "Zenject", "FromBinder/<>c__DisplayClass61_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass61_1*, "Zenject", "FromBinder/<>c__DisplayClass61_1");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass62_0*, "Zenject", "FromBinder/<>c__DisplayClass62_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass62_1*, "Zenject", "FromBinder/<>c__DisplayClass62_1");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass62_2*, "Zenject", "FromBinder/<>c__DisplayClass62_2");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass63_0*, "Zenject", "FromBinder/<>c__DisplayClass63_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass63_1*, "Zenject", "FromBinder/<>c__DisplayClass63_1");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass63_2*, "Zenject", "FromBinder/<>c__DisplayClass63_2");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass64_0*, "Zenject", "FromBinder/<>c__DisplayClass64_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass64_1*, "Zenject", "FromBinder/<>c__DisplayClass64_1");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass64_2*, "Zenject", "FromBinder/<>c__DisplayClass64_2");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass65_0*, "Zenject", "FromBinder/<>c__DisplayClass65_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass66_0*, "Zenject", "FromBinder/<>c__DisplayClass66_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass66_1*, "Zenject", "FromBinder/<>c__DisplayClass66_1");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass67_0*, "Zenject", "FromBinder/<>c__DisplayClass67_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass67_1*, "Zenject", "FromBinder/<>c__DisplayClass67_1");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass67_2*, "Zenject", "FromBinder/<>c__DisplayClass67_2");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass68_0*, "Zenject", "FromBinder/<>c__DisplayClass68_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass68_1*, "Zenject", "FromBinder/<>c__DisplayClass68_1");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass68_2*, "Zenject", "FromBinder/<>c__DisplayClass68_2");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass69_0*, "Zenject", "FromBinder/<>c__DisplayClass69_0");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass70_0*, "Zenject", "FromBinder/<>c__DisplayClass70_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Zenject::FromBinder___c__DisplayClass71_0_1, "Zenject", "FromBinder/<>c__DisplayClass71_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Zenject::FromBinder___c__DisplayClass72_0_1, "Zenject", "FromBinder/<>c__DisplayClass72_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Zenject::FromBinder___c__DisplayClass73_0_2, "Zenject", "FromBinder/<>c__DisplayClass73_0`2");
DEFINE_IL2CPP_CLASS(::Zenject::FromBinder___c__DisplayClass74_0*, "Zenject", "FromBinder/<>c__DisplayClass74_0");
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c
class CORDL_TYPE FromBinder___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::FromBinder___c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_0, put = setStaticF___9__33_0)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* __9__33_0;

  /// @brief Field <>9__34_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__34_0, put = setStaticF___9__34_0)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* __9__34_0;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* __9__38_0;

  /// @brief Field <>9__42_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__42_0, put = setStaticF___9__42_0)) ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__42_0;

  /// @brief Field <>9__44_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__44_0, put = setStaticF___9__44_0)) ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__44_0;

  /// @brief Field <>9__46_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__46_0, put = setStaticF___9__46_0)) ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__46_0;

  /// @brief Field <>9__48_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__48_0, put = setStaticF___9__48_0)) ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__48_0;

  /// @brief Field <>9__50_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__50_0, put = setStaticF___9__50_0)) ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__50_0;

  /// @brief Field <>9__52_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__52_0, put = setStaticF___9__52_0)) ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* __9__52_0;

  /// @brief Field <>9__65_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__65_0, put = setStaticF___9__65_0)) ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* __9__65_0;

  /// @brief Field <>9__66_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__66_0, put = setStaticF___9__66_0)) ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* __9__66_0;

  static inline ::Zenject::FromBinder___c* New_ctor();

  /// @brief Method <FromComponentInNewPrefabResource>b__50_0, addr 0x72f2954, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInNewPrefabResource_b__50_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentInNewPrefab>b__46_0, addr 0x72f2890, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInNewPrefab_b__46_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentOnRoot>b__34_0, addr 0x72f2710, size 0x64, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _FromComponentOnRoot_b__34_0(::Zenject::InjectContext* ctx);

  /// @brief Method <FromComponentSibling>b__65_0, addr 0x72f2a18, size 0xd8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentSibling_b__65_0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method <FromComponentsInNewPrefabResource>b__52_0, addr 0x72f29b8, size 0x60, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInNewPrefabResource_b__52_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentsInNewPrefab>b__48_0, addr 0x72f28f4, size 0x60, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInNewPrefab_b__48_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromComponentsOnRoot>b__33_0, addr 0x72f26ac, size 0x64, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _FromComponentsOnRoot_b__33_0(::Zenject::InjectContext* ctx);

  /// @brief Method <FromComponentsSibling>b__66_0, addr 0x72f2af4, size 0xd8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsSibling_b__66_0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  /// @brief Method <FromNewComponentOnNewPrefabResource>b__42_0, addr 0x72f27d8, size 0x5c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewPrefabResource_b__42_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromNewComponentOnNewPrefab>b__44_0, addr 0x72f2834, size 0x5c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewPrefab_b__44_0(::System::Type* contractType, ::Zenject::IPrefabInstantiator* instantiator);

  /// @brief Method <FromNewComponentOnRoot>b__38_0, addr 0x72f2774, size 0x64, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _FromNewComponentOnRoot_b__38_0(::Zenject::InjectContext* ctx);

  /// @brief Method __zenCreate, addr 0x72f2bd0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f2c14, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f26a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::FromBinder___c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* getStaticF___9__33_0();

  static inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* getStaticF___9__34_0();

  static inline ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* getStaticF___9__38_0();

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__42_0();

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__44_0();

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__46_0();

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__48_0();

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__50_0();

  static inline ::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* getStaticF___9__52_0();

  static inline ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* getStaticF___9__65_0();

  static inline ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* getStaticF___9__66_0();

  static inline void setStaticF___9(::Zenject::FromBinder___c* value);

  static inline void setStaticF___9__33_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF___9__34_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF___9__38_0(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF___9__42_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline void setStaticF___9__44_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline void setStaticF___9__46_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline void setStaticF___9__48_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline void setStaticF___9__50_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline void setStaticF___9__52_0(::System::Func_3<::System::Type*, ::Zenject::IPrefabInstantiator*, ::Zenject::IProvider*>* value);

  static inline void setStaticF___9__65_0(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value);

  static inline void setStaticF___9__66_0(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c(FromBinder___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c(FromBinder___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::FromBinder___c) == 0x10, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object, Zenject.InjectSources
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass22_0
class CORDL_TYPE FromBinder___c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field matchAll, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_matchAll, put = __cordl_internal_set_matchAll)) bool matchAll;

  /// @brief Field source, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::Zenject::InjectSources source;

  /// @brief Field subIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subIdentifier, put = __cordl_internal_set_subIdentifier)) ::System::Object* subIdentifier;

  static inline ::Zenject::FromBinder___c__DisplayClass22_0* New_ctor();

  /// @brief Method <FromResolveInternal>b__0, addr 0x72f2da8, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResolveInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr bool const& __cordl_internal_get_matchAll() const;

  constexpr bool& __cordl_internal_get_matchAll();

  constexpr ::Zenject::InjectSources const& __cordl_internal_get_source() const;

  constexpr ::Zenject::InjectSources& __cordl_internal_get_source();

  constexpr ::System::Object* const& __cordl_internal_get_subIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get_subIdentifier();

  constexpr void __cordl_internal_set_matchAll(bool value);

  constexpr void __cordl_internal_set_source(::Zenject::InjectSources value);

  constexpr void __cordl_internal_set_subIdentifier(::System::Object* value);

  /// @brief Method __zenCreate, addr 0x72f2e24, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f2e68, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72efb04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass22_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass22_0(FromBinder___c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass22_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass22_0(FromBinder___c__DisplayClass22_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14473 };

  /// @brief Field subIdentifier, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___subIdentifier;

  /// @brief Field source, offset: 0x18, size: 0x4, def value: None
  ::Zenject::InjectSources ___source;

  /// @brief Field matchAll, offset: 0x1c, size: 0x1, def value: None
  bool ___matchAll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass22_0, ___subIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass22_0, ___source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass22_0, ___matchAll) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass22_0) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Guid, System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass28_0`1<TContract>
class CORDL_TYPE FromBinder___c__DisplayClass28_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field factoryId, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_factoryId, put = __cordl_internal_set_factoryId)) ::System::Guid factoryId;

  static inline ::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>* New_ctor();

  /// @brief Method <FromIFactoryBase>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromIFactoryBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Guid const& __cordl_internal_get_factoryId() const;

  constexpr ::System::Guid& __cordl_internal_get_factoryId();

  constexpr void __cordl_internal_set_factoryId(::System::Guid value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass28_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass28_0_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass28_0_1(FromBinder___c__DisplayClass28_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass28_0_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass28_0_1(FromBinder___c__DisplayClass28_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14474 };

  /// @brief Field factoryId, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ___factoryId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass29_0
class CORDL_TYPE FromBinder___c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  static inline ::Zenject::FromBinder___c__DisplayClass29_0* New_ctor();

  /// @brief Method <FromComponentsOn>b__0, addr 0x72f2ffc, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method __zenCreate, addr 0x72f3060, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f30a4, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72efd0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass29_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass29_0(FromBinder___c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass29_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass29_0(FromBinder___c__DisplayClass29_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14475 };

  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass29_0, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass29_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass30_0
class CORDL_TYPE FromBinder___c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  static inline ::Zenject::FromBinder___c__DisplayClass30_0* New_ctor();

  /// @brief Method <FromComponentOn>b__0, addr 0x72f3238, size 0x68, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method __zenCreate, addr 0x72f32a0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f32e4, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72efe5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass30_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass30_0(FromBinder___c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass30_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass30_0(FromBinder___c__DisplayClass30_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14476 };

  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass30_0, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass30_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass31_0
class CORDL_TYPE FromBinder___c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectGetter,
                      put = __cordl_internal_set_gameObjectGetter)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter;

  static inline ::Zenject::FromBinder___c__DisplayClass31_0* New_ctor();

  /// @brief Method <FromComponentsOn>b__0, addr 0x72f3478, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gameObjectGetter() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjectGetter();

  constexpr void __cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method __zenCreate, addr 0x72f34dc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f3520, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72eff9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass31_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass31_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass31_0(FromBinder___c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass31_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass31_0(FromBinder___c__DisplayClass31_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14477 };

  /// @brief Field gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ___gameObjectGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass31_0, ___gameObjectGetter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass31_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass32_0
class CORDL_TYPE FromBinder___c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectGetter,
                      put = __cordl_internal_set_gameObjectGetter)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter;

  static inline ::Zenject::FromBinder___c__DisplayClass32_0* New_ctor();

  /// @brief Method <FromComponentOn>b__0, addr 0x72f36b4, size 0x68, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gameObjectGetter() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjectGetter();

  constexpr void __cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method __zenCreate, addr 0x72f371c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f3760, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f00dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass32_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass32_0(FromBinder___c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass32_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass32_0(FromBinder___c__DisplayClass32_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14478 };

  /// @brief Field gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ___gameObjectGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass32_0, ___gameObjectGetter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass32_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass35_0
class CORDL_TYPE FromBinder___c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FromBinder* __4__this;

  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  static inline ::Zenject::FromBinder___c__DisplayClass35_0* New_ctor();

  /// @brief Method <FromNewComponentOn>b__0, addr 0x72f38f4, size 0xa8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::Zenject::FromBinder* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method __zenCreate, addr 0x72f399c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f39e0, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f0404, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass35_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass35_0(FromBinder___c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass35_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass35_0(FromBinder___c__DisplayClass35_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14479 };

  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass35_0, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass35_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass35_0) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass36_0
class CORDL_TYPE FromBinder___c__DisplayClass36_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FromBinder* __4__this;

  /// @brief Field gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectGetter,
                      put = __cordl_internal_set_gameObjectGetter)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter;

  static inline ::Zenject::FromBinder___c__DisplayClass36_0* New_ctor();

  /// @brief Method <FromNewComponentOn>b__0, addr 0x72f3b74, size 0xa8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOn_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::Zenject::FromBinder* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gameObjectGetter() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjectGetter();

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  constexpr void __cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method __zenCreate, addr 0x72f3c1c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f3c60, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f0548, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass36_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass36_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass36_0(FromBinder___c__DisplayClass36_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass36_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass36_0(FromBinder___c__DisplayClass36_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14480 };

  /// @brief Field gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ___gameObjectGetter;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass36_0, ___gameObjectGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass36_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass36_0) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass40_0
class CORDL_TYPE FromBinder___c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FromBinder* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  static inline ::Zenject::FromBinder___c__DisplayClass40_0* New_ctor();

  /// @brief Method <FromNewComponentOnNewGameObject>b__0, addr 0x72f3df4, size 0xa8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewGameObject_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::Zenject::FromBinder* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  /// @brief Method __zenCreate, addr 0x72f3e9c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f3ee0, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f08dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass40_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass40_0(FromBinder___c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass40_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass40_0(FromBinder___c__DisplayClass40_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14481 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass40_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass40_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass40_0) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass55_0
class CORDL_TYPE FromBinder___c__DisplayClass55_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FromBinder* __4__this;

  /// @brief Field createNew, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_createNew, put = __cordl_internal_set_createNew)) bool createNew;

  /// @brief Field resource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resource, put = __cordl_internal_set_resource)) ::UnityW<::UnityEngine::ScriptableObject> resource;

  static inline ::Zenject::FromBinder___c__DisplayClass55_0* New_ctor();

  /// @brief Method <FromScriptableObjectInternal>b__0, addr 0x72f4074, size 0xc4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromScriptableObjectInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::Zenject::FromBinder* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_createNew() const;

  constexpr bool& __cordl_internal_get_createNew();

  constexpr ::UnityW<::UnityEngine::ScriptableObject> const& __cordl_internal_get_resource() const;

  constexpr ::UnityW<::UnityEngine::ScriptableObject>& __cordl_internal_get_resource();

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  constexpr void __cordl_internal_set_createNew(bool value);

  constexpr void __cordl_internal_set_resource(::UnityW<::UnityEngine::ScriptableObject> value);

  /// @brief Method __zenCreate, addr 0x72f4138, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f417c, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f15a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass55_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass55_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass55_0(FromBinder___c__DisplayClass55_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass55_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass55_0(FromBinder___c__DisplayClass55_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14482 };

  /// @brief Field resource, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ScriptableObject> ___resource;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  /// @brief Field createNew, offset: 0x20, size: 0x1, def value: None
  bool ___createNew;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass55_0, ___resource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass55_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass55_0, ___createNew) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass55_0) == 0x28, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass58_0
class CORDL_TYPE FromBinder___c__DisplayClass58_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FromBinder* __4__this;

  /// @brief Field createNew, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_createNew, put = __cordl_internal_set_createNew)) bool createNew;

  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FromBinder___c__DisplayClass58_0* New_ctor();

  /// @brief Method <FromScriptableObjectResourceInternal>b__0, addr 0x72f4310, size 0xc4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromScriptableObjectResourceInternal_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::Zenject::FromBinder* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FromBinder*& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_createNew() const;

  constexpr bool& __cordl_internal_get_createNew();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FromBinder* value);

  constexpr void __cordl_internal_set_createNew(bool value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x72f43d4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f4418, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f1700, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass58_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass58_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass58_0(FromBinder___c__DisplayClass58_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass58_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass58_0(FromBinder___c__DisplayClass58_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14483 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder* _____4__this;

  /// @brief Field createNew, offset: 0x20, size: 0x1, def value: None
  bool ___createNew;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass58_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass58_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass58_0, ___createNew) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass58_0) == 0x28, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass59_0
class CORDL_TYPE FromBinder___c__DisplayClass59_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FromBinder___c__DisplayClass59_0* New_ctor();

  /// @brief Method <FromResource>b__0, addr 0x72f45ac, size 0x68, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResource_b__0(::Zenject::DiContainer* _, ::System::Type* type);

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x72f4614, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f4658, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f1830, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass59_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass59_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass59_0(FromBinder___c__DisplayClass59_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass59_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass59_0(FromBinder___c__DisplayClass59_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14484 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass59_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass59_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass60_0
class CORDL_TYPE FromBinder___c__DisplayClass60_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FromBinder___c__DisplayClass60_0* New_ctor();

  /// @brief Method <FromResources>b__0, addr 0x72f47ec, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResources_b__0(::Zenject::DiContainer* _, ::System::Type* type);

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x72f4850, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f4894, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f1960, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass60_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass60_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass60_0(FromBinder___c__DisplayClass60_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass60_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass60_0(FromBinder___c__DisplayClass60_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14485 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass60_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass60_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass61_0
class CORDL_TYPE FromBinder___c__DisplayClass61_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  static inline ::Zenject::FromBinder___c__DisplayClass61_0* New_ctor();

  /// @brief Method <FromComponentInChildren>b__0, addr 0x72f4a28, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInChildren_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr void __cordl_internal_set_includeInactive(bool value);

  /// @brief Method __zenCreate, addr 0x72f4b08, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f4b4c, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f1a74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass61_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass61_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass61_0(FromBinder___c__DisplayClass61_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass61_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass61_0(FromBinder___c__DisplayClass61_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14486 };

  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass61_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass61_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass61_1
class CORDL_TYPE FromBinder___c__DisplayClass61_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::FromBinder___c__DisplayClass61_0* CS$__8__locals1;

  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  static inline ::Zenject::FromBinder___c__DisplayClass61_1* New_ctor();

  /// @brief Method <FromComponentInChildren>b__1, addr 0x72f4ce0, size 0x270, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentInChildren_b__1(::Zenject::InjectContext* ctx);

  constexpr ::Zenject::FromBinder___c__DisplayClass61_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::FromBinder___c__DisplayClass61_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass61_0* value);

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x72f4f50, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f4f94, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f4b04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass61_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass61_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass61_1(FromBinder___c__DisplayClass61_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass61_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass61_1(FromBinder___c__DisplayClass61_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14487 };

  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder___c__DisplayClass61_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass61_1, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass61_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass61_1) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass62_0
class CORDL_TYPE FromBinder___c__DisplayClass62_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field excludeSelf, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_excludeSelf, put = __cordl_internal_set_excludeSelf)) bool excludeSelf;

  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  /// @brief Field predicate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate;

  static inline ::Zenject::FromBinder___c__DisplayClass62_0* New_ctor();

  /// @brief Method <FromComponentsInChildrenBase>b__0, addr 0x72f5128, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInChildrenBase_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  constexpr bool const& __cordl_internal_get_excludeSelf() const;

  constexpr bool& __cordl_internal_get_excludeSelf();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*& __cordl_internal_get_predicate();

  constexpr void __cordl_internal_set_excludeSelf(bool value);

  constexpr void __cordl_internal_set_includeInactive(bool value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* value);

  /// @brief Method __zenCreate, addr 0x72f5208, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f524c, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f1ba4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass62_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass62_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass62_0(FromBinder___c__DisplayClass62_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass62_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass62_0(FromBinder___c__DisplayClass62_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14488 };

  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field excludeSelf, offset: 0x11, size: 0x1, def value: None
  bool ___excludeSelf;

  /// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass62_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass62_0, ___excludeSelf) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass62_0, ___predicate) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass62_0) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass62_1
class CORDL_TYPE FromBinder___c__DisplayClass62_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::FromBinder___c__DisplayClass62_0* CS$__8__locals1;

  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  static inline ::Zenject::FromBinder___c__DisplayClass62_1* New_ctor();

  /// @brief Method <FromComponentsInChildrenBase>b__1, addr 0x72f53e0, size 0x2b0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentsInChildrenBase_b__1(::Zenject::InjectContext* ctx);

  constexpr ::Zenject::FromBinder___c__DisplayClass62_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::FromBinder___c__DisplayClass62_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass62_0* value);

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x72f5694, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f56d8, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f5204, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass62_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass62_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass62_1(FromBinder___c__DisplayClass62_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass62_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass62_1(FromBinder___c__DisplayClass62_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14489 };

  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder___c__DisplayClass62_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass62_1, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass62_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass62_1) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass62_2
class CORDL_TYPE FromBinder___c__DisplayClass62_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx)) ::Zenject::InjectContext* ctx;

  /// @brief Field monoBehaviour, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_monoBehaviour, put = __cordl_internal_set_monoBehaviour)) ::UnityW<::UnityEngine::MonoBehaviour> monoBehaviour;

  static inline ::Zenject::FromBinder___c__DisplayClass62_2* New_ctor();

  /// @brief Method <FromComponentsInChildrenBase>b__2, addr 0x72f586c, size 0x20, virtual false, abstract: false, final false
  inline bool _FromComponentsInChildrenBase_b__2(::UnityEngine::Component* x);

  /// @brief Method <FromComponentsInChildrenBase>b__3, addr 0x72f588c, size 0xa0, virtual false, abstract: false, final false
  inline bool _FromComponentsInChildrenBase_b__3(::UnityEngine::Component* x);

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_ctx() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_monoBehaviour() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_monoBehaviour();

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value);

  /// @brief Method __zenCreate, addr 0x72f592c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f5970, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f5690, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass62_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass62_2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass62_2(FromBinder___c__DisplayClass62_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass62_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass62_2(FromBinder___c__DisplayClass62_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14490 };

  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  /// @brief Field monoBehaviour, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___monoBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass62_2, ___ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass62_2, ___monoBehaviour) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass62_2) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass63_0
class CORDL_TYPE FromBinder___c__DisplayClass63_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field excludeSelf, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_excludeSelf, put = __cordl_internal_set_excludeSelf)) bool excludeSelf;

  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  static inline ::Zenject::FromBinder___c__DisplayClass63_0* New_ctor();

  /// @brief Method <FromComponentInParents>b__0, addr 0x72f5b04, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInParents_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  constexpr bool const& __cordl_internal_get_excludeSelf() const;

  constexpr bool& __cordl_internal_get_excludeSelf();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr void __cordl_internal_set_excludeSelf(bool value);

  constexpr void __cordl_internal_set_includeInactive(bool value);

  /// @brief Method __zenCreate, addr 0x72f5be4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f5c28, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f1cc4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass63_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass63_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass63_0(FromBinder___c__DisplayClass63_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass63_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass63_0(FromBinder___c__DisplayClass63_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14491 };

  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field excludeSelf, offset: 0x11, size: 0x1, def value: None
  bool ___excludeSelf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass63_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass63_0, ___excludeSelf) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass63_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass63_1
class CORDL_TYPE FromBinder___c__DisplayClass63_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::FromBinder___c__DisplayClass63_0* CS$__8__locals1;

  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  static inline ::Zenject::FromBinder___c__DisplayClass63_1* New_ctor();

  /// @brief Method <FromComponentInParents>b__1, addr 0x72f5dbc, size 0x3e0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentInParents_b__1(::Zenject::InjectContext* ctx);

  constexpr ::Zenject::FromBinder___c__DisplayClass63_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::FromBinder___c__DisplayClass63_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass63_0* value);

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x72f61a0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f61e4, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f5be0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass63_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass63_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass63_1(FromBinder___c__DisplayClass63_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass63_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass63_1(FromBinder___c__DisplayClass63_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14492 };

  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder___c__DisplayClass63_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass63_1, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass63_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass63_1) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass63_2
class CORDL_TYPE FromBinder___c__DisplayClass63_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx)) ::Zenject::InjectContext* ctx;

  /// @brief Field monoBehaviour, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_monoBehaviour, put = __cordl_internal_set_monoBehaviour)) ::UnityW<::UnityEngine::MonoBehaviour> monoBehaviour;

  static inline ::Zenject::FromBinder___c__DisplayClass63_2* New_ctor();

  /// @brief Method <FromComponentInParents>b__2, addr 0x72f6378, size 0x20, virtual false, abstract: false, final false
  inline bool _FromComponentInParents_b__2(::UnityEngine::Component* x);

  /// @brief Method <FromComponentInParents>b__3, addr 0x72f6398, size 0xa0, virtual false, abstract: false, final false
  inline bool _FromComponentInParents_b__3(::UnityEngine::Component* x);

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_ctx() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_monoBehaviour() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_monoBehaviour();

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value);

  /// @brief Method __zenCreate, addr 0x72f6438, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f647c, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f619c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass63_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass63_2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass63_2(FromBinder___c__DisplayClass63_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass63_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass63_2(FromBinder___c__DisplayClass63_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14493 };

  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  /// @brief Field monoBehaviour, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___monoBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass63_2, ___ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass63_2, ___monoBehaviour) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass63_2) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass64_0
class CORDL_TYPE FromBinder___c__DisplayClass64_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field excludeSelf, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_excludeSelf, put = __cordl_internal_set_excludeSelf)) bool excludeSelf;

  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  static inline ::Zenject::FromBinder___c__DisplayClass64_0* New_ctor();

  /// @brief Method <FromComponentsInParents>b__0, addr 0x72f6610, size 0xdc, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInParents_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  constexpr bool const& __cordl_internal_get_excludeSelf() const;

  constexpr bool& __cordl_internal_get_excludeSelf();

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr void __cordl_internal_set_excludeSelf(bool value);

  constexpr void __cordl_internal_set_includeInactive(bool value);

  /// @brief Method __zenCreate, addr 0x72f66f0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f6734, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f1de4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass64_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass64_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass64_0(FromBinder___c__DisplayClass64_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass64_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass64_0(FromBinder___c__DisplayClass64_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14494 };

  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field excludeSelf, offset: 0x11, size: 0x1, def value: None
  bool ___excludeSelf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass64_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass64_0, ___excludeSelf) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass64_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass64_1
class CORDL_TYPE FromBinder___c__DisplayClass64_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::FromBinder___c__DisplayClass64_0* CS$__8__locals1;

  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  static inline ::Zenject::FromBinder___c__DisplayClass64_1* New_ctor();

  /// @brief Method <FromComponentsInParents>b__1, addr 0x72f68c8, size 0x290, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentsInParents_b__1(::Zenject::InjectContext* ctx);

  constexpr ::Zenject::FromBinder___c__DisplayClass64_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::FromBinder___c__DisplayClass64_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass64_0* value);

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x72f6b5c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f6ba0, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f66ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass64_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass64_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass64_1(FromBinder___c__DisplayClass64_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass64_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass64_1(FromBinder___c__DisplayClass64_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14495 };

  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FromBinder___c__DisplayClass64_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass64_1, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass64_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass64_1) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass64_2
class CORDL_TYPE FromBinder___c__DisplayClass64_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx)) ::Zenject::InjectContext* ctx;

  /// @brief Field monoBehaviour, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_monoBehaviour, put = __cordl_internal_set_monoBehaviour)) ::UnityW<::UnityEngine::MonoBehaviour> monoBehaviour;

  static inline ::Zenject::FromBinder___c__DisplayClass64_2* New_ctor();

  /// @brief Method <FromComponentsInParents>b__2, addr 0x72f6d34, size 0x20, virtual false, abstract: false, final false
  inline bool _FromComponentsInParents_b__2(::UnityEngine::Component* x);

  /// @brief Method <FromComponentsInParents>b__3, addr 0x72f6d54, size 0xa0, virtual false, abstract: false, final false
  inline bool _FromComponentsInParents_b__3(::UnityEngine::Component* x);

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_ctx() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_monoBehaviour() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_monoBehaviour();

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value);

  /// @brief Method __zenCreate, addr 0x72f6df4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f6e38, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f6b58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass64_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass64_2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass64_2(FromBinder___c__DisplayClass64_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass64_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass64_2(FromBinder___c__DisplayClass64_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14496 };

  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  /// @brief Field monoBehaviour, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___monoBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass64_2, ___ctx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass64_2, ___monoBehaviour) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass64_2) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass65_0
class CORDL_TYPE FromBinder___c__DisplayClass65_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  static inline ::Zenject::FromBinder___c__DisplayClass65_0* New_ctor();

  /// @brief Method <FromComponentSibling>b__1, addr 0x72f6fcc, size 0x25c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentSibling_b__1(::Zenject::InjectContext* ctx);

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x72f7228, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f726c, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f2af0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass65_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass65_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass65_0(FromBinder___c__DisplayClass65_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass65_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass65_0(FromBinder___c__DisplayClass65_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14497 };

  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass65_0, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass65_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass66_0
class CORDL_TYPE FromBinder___c__DisplayClass66_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  static inline ::Zenject::FromBinder___c__DisplayClass66_0* New_ctor();

  /// @brief Method <FromComponentsSibling>b__1, addr 0x72f7400, size 0x208, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentsSibling_b__1(::Zenject::InjectContext* ctx);

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x72f760c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f7650, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f2bcc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass66_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass66_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass66_0(FromBinder___c__DisplayClass66_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass66_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass66_0(FromBinder___c__DisplayClass66_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14498 };

  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass66_0, ___concreteType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass66_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass66_1
class CORDL_TYPE FromBinder___c__DisplayClass66_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field monoBehaviour, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_monoBehaviour, put = __cordl_internal_set_monoBehaviour)) ::UnityW<::UnityEngine::MonoBehaviour> monoBehaviour;

  static inline ::Zenject::FromBinder___c__DisplayClass66_1* New_ctor();

  /// @brief Method <FromComponentsSibling>b__2, addr 0x72f77e4, size 0x10, virtual false, abstract: false, final false
  inline bool _FromComponentsSibling_b__2(::UnityEngine::Component* x);

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_monoBehaviour() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_monoBehaviour();

  constexpr void __cordl_internal_set_monoBehaviour(::UnityW<::UnityEngine::MonoBehaviour> value);

  /// @brief Method __zenCreate, addr 0x72f77f4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f7838, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f7608, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass66_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass66_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass66_1(FromBinder___c__DisplayClass66_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass66_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass66_1(FromBinder___c__DisplayClass66_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14499 };

  /// @brief Field monoBehaviour, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ___monoBehaviour;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass66_1, ___monoBehaviour) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass66_1) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass67_0
class CORDL_TYPE FromBinder___c__DisplayClass67_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  static inline ::Zenject::FromBinder___c__DisplayClass67_0* New_ctor();

  /// @brief Method <FromComponentInHierarchy>b__0, addr 0x72f7b38, size 0xe4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInHierarchy_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr void __cordl_internal_set_includeInactive(bool value);

  /// @brief Method __zenCreate, addr 0x72f7c20, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f7c64, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f7b34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass67_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass67_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass67_0(FromBinder___c__DisplayClass67_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass67_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass67_0(FromBinder___c__DisplayClass67_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14500 };

  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass67_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass67_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass67_1
class CORDL_TYPE FromBinder___c__DisplayClass67_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::FromBinder___c__DisplayClass67_0* CS$__8__locals1;

  /// @brief Field <>9__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* __9__2;

  /// @brief Field concreteType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  /// @brief Field container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::FromBinder___c__DisplayClass67_1* New_ctor();

  /// @brief Method <FromComponentInHierarchy>b__1, addr 0x72f7df8, size 0x310, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentInHierarchy_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method <FromComponentInHierarchy>b__2, addr 0x72f810c, size 0x30, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> _FromComponentInHierarchy_b__2(::UnityEngine::GameObject* x);

  constexpr ::Zenject::FromBinder___c__DisplayClass67_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::FromBinder___c__DisplayClass67_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* const& __cordl_internal_get___9__2() const;

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>*& __cordl_internal_get___9__2();

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass67_0* value);

  constexpr void __cordl_internal_set___9__2(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* value);

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x72f813c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f8180, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f7c1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass67_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass67_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass67_1(FromBinder___c__DisplayClass67_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass67_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass67_1(FromBinder___c__DisplayClass67_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14501 };

  /// @brief Field container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief Field concreteType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
  ::Zenject::FromBinder___c__DisplayClass67_0* ___CS$__8__locals1;

  /// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Component>>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass67_1, ___container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass67_1, ___concreteType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass67_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass67_1, _____9__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass67_1) == 0x30, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass67_2
class CORDL_TYPE FromBinder___c__DisplayClass67_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx)) ::Zenject::InjectContext* ctx;

  static inline ::Zenject::FromBinder___c__DisplayClass67_2* New_ctor();

  /// @brief Method <FromComponentInHierarchy>b__3, addr 0x72f8314, size 0x94, virtual false, abstract: false, final false
  inline bool _FromComponentInHierarchy_b__3(::UnityEngine::Component* x);

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_ctx() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  /// @brief Method __zenCreate, addr 0x72f83a8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f83ec, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f8108, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass67_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass67_2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass67_2(FromBinder___c__DisplayClass67_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass67_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass67_2(FromBinder___c__DisplayClass67_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14502 };

  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass67_2, ___ctx) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass67_2) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass68_0
class CORDL_TYPE FromBinder___c__DisplayClass68_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field includeInactive, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_includeInactive, put = __cordl_internal_set_includeInactive)) bool includeInactive;

  /// @brief Field predicate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate)) ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate;

  static inline ::Zenject::FromBinder___c__DisplayClass68_0* New_ctor();

  /// @brief Method <FromComponentsInHierarchyBase>b__0, addr 0x72f8584, size 0xe4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentsInHierarchyBase_b__0(::Zenject::DiContainer* container, ::System::Type* concreteType);

  constexpr bool const& __cordl_internal_get_includeInactive() const;

  constexpr bool& __cordl_internal_get_includeInactive();

  constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* const& __cordl_internal_get_predicate() const;

  constexpr ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>*& __cordl_internal_get_predicate();

  constexpr void __cordl_internal_set_includeInactive(bool value);

  constexpr void __cordl_internal_set_predicate(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* value);

  /// @brief Method __zenCreate, addr 0x72f866c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f86b0, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f8580, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass68_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass68_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass68_0(FromBinder___c__DisplayClass68_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass68_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass68_0(FromBinder___c__DisplayClass68_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14503 };

  /// @brief Field includeInactive, offset: 0x10, size: 0x1, def value: None
  bool ___includeInactive;

  /// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass68_0, ___includeInactive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass68_0, ___predicate) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass68_0) == 0x20, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass68_1
class CORDL_TYPE FromBinder___c__DisplayClass68_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::FromBinder___c__DisplayClass68_0* CS$__8__locals1;

  /// @brief Field <>9__2, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get___9__2,
      put = __cordl_internal_set___9__2)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* __9__2;

  /// @brief Field concreteType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  /// @brief Field container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::FromBinder___c__DisplayClass68_1* New_ctor();

  /// @brief Method <FromComponentsInHierarchyBase>b__1, addr 0x72f8844, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* _FromComponentsInHierarchyBase_b__1(::Zenject::InjectContext* ctx);

  /// @brief Method <FromComponentsInHierarchyBase>b__2, addr 0x72f8a1c, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>* _FromComponentsInHierarchyBase_b__2(::UnityEngine::GameObject* x);

  constexpr ::Zenject::FromBinder___c__DisplayClass68_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::FromBinder___c__DisplayClass68_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* const& __cordl_internal_get___9__2() const;

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>*& __cordl_internal_get___9__2();

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::FromBinder___c__DisplayClass68_0* value);

  constexpr void __cordl_internal_set___9__2(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* value);

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x72f8a4c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f8a90, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f8668, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass68_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass68_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass68_1(FromBinder___c__DisplayClass68_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass68_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass68_1(FromBinder___c__DisplayClass68_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14504 };

  /// @brief Field container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief Field concreteType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  /// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
  ::Zenject::FromBinder___c__DisplayClass68_0* ___CS$__8__locals1;

  /// @brief Field <>9__2, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Component>>*>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass68_1, ___container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass68_1, ___concreteType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass68_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass68_1, _____9__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass68_1) == 0x30, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass68_2
class CORDL_TYPE FromBinder___c__DisplayClass68_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field ctx, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ctx, put = __cordl_internal_set_ctx)) ::Zenject::InjectContext* ctx;

  static inline ::Zenject::FromBinder___c__DisplayClass68_2* New_ctor();

  /// @brief Method <FromComponentsInHierarchyBase>b__3, addr 0x72f8c24, size 0x20, virtual false, abstract: false, final false
  inline bool _FromComponentsInHierarchyBase_b__3(::UnityEngine::Component* x);

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_ctx() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_ctx();

  constexpr void __cordl_internal_set_ctx(::Zenject::InjectContext* value);

  /// @brief Method __zenCreate, addr 0x72f8c44, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f8c88, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f8a18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass68_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass68_2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass68_2(FromBinder___c__DisplayClass68_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass68_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass68_2(FromBinder___c__DisplayClass68_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14505 };

  /// @brief Field ctx, offset: 0x10, size: 0x8, def value: None
  ::Zenject::InjectContext* ___ctx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass68_2, ___ctx) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass68_2) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass69_0
class CORDL_TYPE FromBinder___c__DisplayClass69_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* method;

  static inline ::Zenject::FromBinder___c__DisplayClass69_0* New_ctor();

  /// @brief Method <FromMethodUntyped>b__0, addr 0x72f8e20, size 0x60, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethodUntyped_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* const& __cordl_internal_get_method() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get_method();

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* value);

  /// @brief Method __zenCreate, addr 0x72f8e80, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f8ec4, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f8e1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass69_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass69_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass69_0(FromBinder___c__DisplayClass69_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass69_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass69_0(FromBinder___c__DisplayClass69_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14506 };

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass69_0, ___method) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass69_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass70_0
class CORDL_TYPE FromBinder___c__DisplayClass70_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method,
                      put = __cordl_internal_set_method)) ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method;

  static inline ::Zenject::FromBinder___c__DisplayClass70_0* New_ctor();

  /// @brief Method <FromMethodMultipleUntyped>b__0, addr 0x72f905c, size 0x60, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethodMultipleUntyped_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* const& __cordl_internal_get_method() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*& __cordl_internal_get_method();

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* value);

  /// @brief Method __zenCreate, addr 0x72f90bc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f9100, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f9058, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass70_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass70_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass70_0(FromBinder___c__DisplayClass70_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass70_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass70_0(FromBinder___c__DisplayClass70_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14507 };

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass70_0, ___method) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass70_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TConcrete>
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass71_0`1<TConcrete>
class CORDL_TYPE FromBinder___c__DisplayClass71_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::Func_2<::Zenject::InjectContext*, TConcrete>* method;

  static inline ::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>* New_ctor();

  /// @brief Method <FromMethodBase>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethodBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Func_2<::Zenject::InjectContext*, TConcrete>* const& __cordl_internal_get_method() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, TConcrete>*& __cordl_internal_get_method();

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, TConcrete>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass71_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass71_0_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass71_0_1(FromBinder___c__DisplayClass71_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass71_0_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass71_0_1(FromBinder___c__DisplayClass71_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14508 };

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, TConcrete>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TConcrete>
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass72_0`1<TConcrete>
class CORDL_TYPE FromBinder___c__DisplayClass72_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method,
                      put = __cordl_internal_set_method)) ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* method;

  static inline ::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>* New_ctor();

  /// @brief Method <FromMethodMultipleBase>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromMethodMultipleBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* const& __cordl_internal_get_method() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>*& __cordl_internal_get_method();

  constexpr void __cordl_internal_set_method(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass72_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass72_0_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass72_0_1(FromBinder___c__DisplayClass72_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass72_0_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass72_0_1(FromBinder___c__DisplayClass72_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14509 };

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* ___method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// [CompilerGenerated]
// Dependencies System.Object, Zenject.InjectSources
namespace Zenject {
// cpp template
template <typename TObj, typename TResult>
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass73_0`2<TObj,TResult>
class CORDL_TYPE FromBinder___c__DisplayClass73_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field identifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_identifier, put = __cordl_internal_set_identifier)) ::System::Object* identifier;

  /// @brief Field matchMultiple, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_matchMultiple, put = __cordl_internal_set_matchMultiple)) bool matchMultiple;

  /// @brief Field method, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method)) ::System::Func_2<TObj, TResult>* method;

  /// @brief Field source, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::Zenject::InjectSources source;

  static inline ::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>* New_ctor();

  /// @brief Method <FromResolveGetterBase>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResolveGetterBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Object* const& __cordl_internal_get_identifier() const;

  constexpr ::System::Object*& __cordl_internal_get_identifier();

  constexpr bool const& __cordl_internal_get_matchMultiple() const;

  constexpr bool& __cordl_internal_get_matchMultiple();

  constexpr ::System::Func_2<TObj, TResult>* const& __cordl_internal_get_method() const;

  constexpr ::System::Func_2<TObj, TResult>*& __cordl_internal_get_method();

  constexpr ::Zenject::InjectSources const& __cordl_internal_get_source() const;

  constexpr ::Zenject::InjectSources& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_identifier(::System::Object* value);

  constexpr void __cordl_internal_set_matchMultiple(bool value);

  constexpr void __cordl_internal_set_method(::System::Func_2<TObj, TResult>* value);

  constexpr void __cordl_internal_set_source(::Zenject::InjectSources value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass73_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass73_0_2", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass73_0_2(FromBinder___c__DisplayClass73_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass73_0_2", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass73_0_2(FromBinder___c__DisplayClass73_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14510 };

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
// [CompilerGenerated]
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder/<>c__DisplayClass74_0
class CORDL_TYPE FromBinder___c__DisplayClass74_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance)) ::System::Object* instance;

  static inline ::Zenject::FromBinder___c__DisplayClass74_0* New_ctor();

  /// @brief Method <FromInstanceBase>b__0, addr 0x72f9298, size 0x68, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromInstanceBase_b__0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::System::Object* const& __cordl_internal_get_instance() const;

  constexpr ::System::Object*& __cordl_internal_get_instance();

  constexpr void __cordl_internal_set_instance(::System::Object* value);

  /// @brief Method __zenCreate, addr 0x72f9300, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x72f9344, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x72f9294, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder___c__DisplayClass74_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass74_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder___c__DisplayClass74_0(FromBinder___c__DisplayClass74_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder___c__DisplayClass74_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder___c__DisplayClass74_0(FromBinder___c__DisplayClass74_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14511 };

  /// @brief Field instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder___c__DisplayClass74_0, ___instance) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder___c__DisplayClass74_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// Dependencies Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FromBinder
class CORDL_TYPE FromBinder : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  using __c = ::Zenject::FromBinder___c;

  using __c__DisplayClass22_0 = ::Zenject::FromBinder___c__DisplayClass22_0;

  template <typename TContract> using __c__DisplayClass28_0_1 = ::Zenject::FromBinder___c__DisplayClass28_0_1<TContract>;

  using __c__DisplayClass29_0 = ::Zenject::FromBinder___c__DisplayClass29_0;

  using __c__DisplayClass30_0 = ::Zenject::FromBinder___c__DisplayClass30_0;

  using __c__DisplayClass31_0 = ::Zenject::FromBinder___c__DisplayClass31_0;

  using __c__DisplayClass32_0 = ::Zenject::FromBinder___c__DisplayClass32_0;

  using __c__DisplayClass35_0 = ::Zenject::FromBinder___c__DisplayClass35_0;

  using __c__DisplayClass36_0 = ::Zenject::FromBinder___c__DisplayClass36_0;

  using __c__DisplayClass40_0 = ::Zenject::FromBinder___c__DisplayClass40_0;

  using __c__DisplayClass55_0 = ::Zenject::FromBinder___c__DisplayClass55_0;

  using __c__DisplayClass58_0 = ::Zenject::FromBinder___c__DisplayClass58_0;

  using __c__DisplayClass59_0 = ::Zenject::FromBinder___c__DisplayClass59_0;

  using __c__DisplayClass60_0 = ::Zenject::FromBinder___c__DisplayClass60_0;

  using __c__DisplayClass61_0 = ::Zenject::FromBinder___c__DisplayClass61_0;

  using __c__DisplayClass61_1 = ::Zenject::FromBinder___c__DisplayClass61_1;

  using __c__DisplayClass62_0 = ::Zenject::FromBinder___c__DisplayClass62_0;

  using __c__DisplayClass62_1 = ::Zenject::FromBinder___c__DisplayClass62_1;

  using __c__DisplayClass62_2 = ::Zenject::FromBinder___c__DisplayClass62_2;

  using __c__DisplayClass63_0 = ::Zenject::FromBinder___c__DisplayClass63_0;

  using __c__DisplayClass63_1 = ::Zenject::FromBinder___c__DisplayClass63_1;

  using __c__DisplayClass63_2 = ::Zenject::FromBinder___c__DisplayClass63_2;

  using __c__DisplayClass64_0 = ::Zenject::FromBinder___c__DisplayClass64_0;

  using __c__DisplayClass64_1 = ::Zenject::FromBinder___c__DisplayClass64_1;

  using __c__DisplayClass64_2 = ::Zenject::FromBinder___c__DisplayClass64_2;

  using __c__DisplayClass65_0 = ::Zenject::FromBinder___c__DisplayClass65_0;

  using __c__DisplayClass66_0 = ::Zenject::FromBinder___c__DisplayClass66_0;

  using __c__DisplayClass66_1 = ::Zenject::FromBinder___c__DisplayClass66_1;

  using __c__DisplayClass67_0 = ::Zenject::FromBinder___c__DisplayClass67_0;

  using __c__DisplayClass67_1 = ::Zenject::FromBinder___c__DisplayClass67_1;

  using __c__DisplayClass67_2 = ::Zenject::FromBinder___c__DisplayClass67_2;

  using __c__DisplayClass68_0 = ::Zenject::FromBinder___c__DisplayClass68_0;

  using __c__DisplayClass68_1 = ::Zenject::FromBinder___c__DisplayClass68_1;

  using __c__DisplayClass68_2 = ::Zenject::FromBinder___c__DisplayClass68_2;

  using __c__DisplayClass69_0 = ::Zenject::FromBinder___c__DisplayClass69_0;

  using __c__DisplayClass70_0 = ::Zenject::FromBinder___c__DisplayClass70_0;

  template <typename TConcrete> using __c__DisplayClass71_0_1 = ::Zenject::FromBinder___c__DisplayClass71_0_1<TConcrete>;

  template <typename TConcrete> using __c__DisplayClass72_0_1 = ::Zenject::FromBinder___c__DisplayClass72_0_1<TConcrete>;

  template <typename TObj, typename TResult> using __c__DisplayClass73_0_2 = ::Zenject::FromBinder___c__DisplayClass73_0_2<TObj, TResult>;

  using __c__DisplayClass74_0 = ::Zenject::FromBinder___c__DisplayClass74_0;

  __declspec(property(get = get_AllParentTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* AllParentTypes;

  __declspec(property(get = get_BindContainer, put = set_BindContainer)) ::Zenject::DiContainer* BindContainer;

  __declspec(property(get = get_BindStatement, put = set_BindStatement)) ::Zenject::BindStatement* BindStatement;

  __declspec(property(get = get_ConcreteTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ConcreteTypes;

  __declspec(property(put = set_SubFinalizer)) ::Zenject::IBindingFinalizer* SubFinalizer;

  /// @brief Field <BindContainer>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BindContainer_k__BackingField, put = __cordl_internal_set__BindContainer_k__BackingField)) ::Zenject::DiContainer* _BindContainer_k__BackingField;

  /// @brief Field <BindStatement>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__BindStatement_k__BackingField, put = __cordl_internal_set__BindStatement_k__BackingField)) ::Zenject::BindStatement* _BindStatement_k__BackingField;

  /// @brief Method FromComponentInChildren, addr 0x72f1964, size 0x110, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInChildren(bool includeInactive);

  /// @brief Method FromComponentInHierarchy, addr 0x72f2058, size 0x114, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInHierarchy(bool includeInactive);

  /// @brief Method FromComponentInNewPrefab, addr 0x72f0cc8, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromComponentInNewPrefab, addr 0x72f0d2c, size 0x180, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromComponentInNewPrefabResource, addr 0x72f1090, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromComponentInNewPrefabResource, addr 0x72f10f4, size 0x180, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromComponentInParents, addr 0x72f1ba8, size 0x11c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInParents(bool excludeSelf, bool includeInactive);

  /// @brief Method FromComponentOn, addr 0x72efd10, size 0x14c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromComponentOn, addr 0x72effa0, size 0x13c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter);

  /// @brief Method FromComponentOnRoot, addr 0x72f01cc, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentOnRoot();

  /// @brief Method FromComponentSibling, addr 0x72f1de8, size 0x138, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentSibling();

  /// @brief Method FromComponentsInChildrenBase, addr 0x72f1a78, size 0x12c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInChildrenBase(bool excludeSelf, ::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate,
                                                                                               bool includeInactive);

  /// @brief Method FromComponentsInHierarchyBase, addr 0x72f216c, size 0x11c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInHierarchyBase(::System::Func_2<::UnityW<::UnityEngine::Component>, bool>* predicate, bool includeInactive);

  /// @brief Method FromComponentsInNewPrefab, addr 0x72f0eac, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromComponentsInNewPrefab, addr 0x72f0f10, size 0x180, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromComponentsInNewPrefabResource, addr 0x72f1274, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromComponentsInNewPrefabResource, addr 0x72f12d8, size 0x180, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInNewPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromComponentsInParents, addr 0x72f1cc8, size 0x11c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsInParents(bool excludeSelf, bool includeInactive);

  /// @brief Method FromComponentsOn, addr 0x72efbc0, size 0x14c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromComponentsOn, addr 0x72efe60, size 0x13c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter);

  /// @brief Method FromComponentsOnRoot, addr 0x72f00e0, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsOnRoot();

  /// @brief Method FromComponentsSibling, addr 0x72f1f20, size 0x138, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentsSibling();

  /// @brief Method FromIFactoryBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContract>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromIFactoryBase(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<::Zenject::IFactory_1<TContract>*>*>* factoryBindGenerator);

  /// @brief Method FromInstanceBase, addr 0x72f2480, size 0x138, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromInstanceBase(::System::Object* instance);

  /// @brief Method FromMethodBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodBase(::System::Func_2<::Zenject::InjectContext*, TConcrete>* method);

  /// @brief Method FromMethodMultipleBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
  FromMethodMultipleBase(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<TConcrete>*>* method);

  /// @brief Method FromMethodMultipleUntyped, addr 0x72f2384, size 0xfc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*
  FromMethodMultipleUntyped(::System::Func_2<::Zenject::InjectContext*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* method);

  /// @brief Method FromMethodUntyped, addr 0x72f2288, size 0xfc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMethodUntyped(::System::Func_2<::Zenject::InjectContext*, ::System::Object*>* method);

  /// @brief Method FromNew, addr 0x72ef948, size 0x30, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNew();

  /// @brief Method FromNewComponentOn, addr 0x72f02b8, size 0x14c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromNewComponentOn, addr 0x72f0408, size 0x140, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter);

  /// @brief Method FromNewComponentOnNewGameObject, addr 0x72f0740, size 0x54, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewGameObject();

  /// @brief Method FromNewComponentOnNewGameObject, addr 0x72f0794, size 0x148, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewGameObject(::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromNewComponentOnNewPrefab, addr 0x72f0ad4, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromNewComponentOnNewPrefab, addr 0x72f0b38, size 0x190, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(::UnityEngine::Object* prefab, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromNewComponentOnNewPrefabResource, addr 0x72f08e0, size 0x64, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromNewComponentOnNewPrefabResource, addr 0x72f0944, size 0x190, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::StringW resourcePath, ::Zenject::GameObjectCreationParameters* gameObjectInfo);

  /// @brief Method FromNewComponentOnRoot, addr 0x72f0654, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnRoot();

  /// @brief Method FromNewComponentSibling, addr 0x72f054c, size 0x108, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentSibling();

  /// @brief Method FromNewScriptableObject, addr 0x72f1458, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewScriptableObject(::UnityEngine::ScriptableObject* resource);

  /// @brief Method FromNewScriptableObjectResource, addr 0x72f15a8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewScriptableObjectResource(::StringW resourcePath);

  /// @brief Method FromResolve, addr 0x72ef978, size 0x10, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve();

  /// @brief Method FromResolve, addr 0x72ef988, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve(::System::Object* subIdentifier);

  /// @brief Method FromResolve, addr 0x72ef994, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolve(::System::Object* subIdentifier, ::Zenject::InjectSources source);

  /// @brief Method FromResolveAll, addr 0x72efadc, size 0x10, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll();

  /// @brief Method FromResolveAll, addr 0x72efaec, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll(::System::Object* subIdentifier);

  /// @brief Method FromResolveAll, addr 0x72efaf8, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveAll(::System::Object* subIdentifier, ::Zenject::InjectSources source);

  /// @brief Method FromResolveGetterBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObj, typename TResult>
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveGetterBase(::System::Object* identifier, ::System::Func_2<TObj, TResult>* method, ::Zenject::InjectSources source,
                                                                                        bool matchMultiple);

  /// @brief Method FromResolveInternal, addr 0x72ef9a0, size 0x13c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResolveInternal(::System::Object* subIdentifier, bool matchAll, ::Zenject::InjectSources source);

  /// @brief Method FromResource, addr 0x72f1704, size 0x12c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResource(::StringW resourcePath);

  /// @brief Method FromResources, addr 0x72f1834, size 0x12c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromResources(::StringW resourcePath);

  /// @brief Method FromScriptableObject, addr 0x72f159c, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObject(::UnityEngine::ScriptableObject* resource);

  /// @brief Method FromScriptableObjectInternal, addr 0x72f1460, size 0x13c, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectInternal(::UnityEngine::ScriptableObject* resource, bool createNew);

  /// @brief Method FromScriptableObjectResource, addr 0x72f16f8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectResource(::StringW resourcePath);

  /// @brief Method FromScriptableObjectResourceInternal, addr 0x72f15b0, size 0x148, virtual false, abstract: false, final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromScriptableObjectResourceInternal(::StringW resourcePath, bool createNew);

  /// @brief Method FromSubContainerResolve, addr 0x72efbac, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolve();

  /// @brief Method FromSubContainerResolve, addr 0x72efbb8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolve(::System::Object* subIdentifier);

  /// @brief Method FromSubContainerResolveAll, addr 0x72efb08, size 0xc, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolveAll();

  /// @brief Method FromSubContainerResolveAll, addr 0x72efb14, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolveAll(::System::Object* subIdentifier);

  /// @brief Method FromSubContainerResolveInternal, addr 0x72efb1c, size 0x90, virtual false, abstract: false, final false
  inline ::Zenject::SubContainerBinder* FromSubContainerResolveInternal(::System::Object* subIdentifier, bool resolveAll);

  static inline ::Zenject::FromBinder* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// [CompilerGenerated]
  /// @brief Method <FromNewComponentSibling>b__37_0, addr 0x72f25b8, size 0x9c, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentSibling_b__37_0(::Zenject::DiContainer* container, ::System::Type* type);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__BindContainer_k__BackingField() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__BindContainer_k__BackingField();

  constexpr ::Zenject::BindStatement* const& __cordl_internal_get__BindStatement_k__BackingField() const;

  constexpr ::Zenject::BindStatement*& __cordl_internal_get__BindStatement_k__BackingField();

  constexpr void __cordl_internal_set__BindContainer_k__BackingField(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__BindStatement_k__BackingField(::Zenject::BindStatement* value);

  /// @brief Method .ctor, addr 0x72ef828, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method get_AllParentTypes, addr 0x72ef854, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_AllParentTypes();

  /// [CompilerGenerated]
  /// @brief Method get_BindContainer, addr 0x72ef834, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_BindContainer();

  /// [CompilerGenerated]
  /// @brief Method get_BindStatement, addr 0x72ef844, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::BindStatement* get_BindStatement();

  /// @brief Method get_ConcreteTypes, addr 0x72ef8b0, size 0x98, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_ConcreteTypes();

  /// [CompilerGenerated]
  /// @brief Method set_BindContainer, addr 0x72ef83c, size 0x8, virtual false, abstract: false, final false
  inline void set_BindContainer(::Zenject::DiContainer* value);

  /// [CompilerGenerated]
  /// @brief Method set_BindStatement, addr 0x72ef84c, size 0x8, virtual false, abstract: false, final false
  inline void set_BindStatement(::Zenject::BindStatement* value);

  /// @brief Method set_SubFinalizer, addr 0x72e732c, size 0x18, virtual false, abstract: false, final false
  inline void set_SubFinalizer(::Zenject::IBindingFinalizer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FromBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FromBinder", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FromBinder(FromBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FromBinder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FromBinder(FromBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14512 };

  /// [CompilerGenerated]
  /// @brief Field <BindContainer>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____BindContainer_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <BindStatement>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Zenject::BindStatement* ____BindStatement_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FromBinder, ____BindContainer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::FromBinder, ____BindStatement_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Zenject::FromBinder) == 0x30, "Size mismatch!");

} // namespace Zenject
