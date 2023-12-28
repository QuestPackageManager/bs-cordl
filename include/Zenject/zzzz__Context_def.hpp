#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Context)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class ZenjectBinding;
}
namespace System {
class Type;
}
namespace Zenject {
class MonoInstaller;
}
namespace Zenject {
class __Context____c;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class InstallerBase;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class Context;
}
namespace Zenject {
class __Context____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Context);
MARK_REF_PTR_T(::Zenject::__Context____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11118))
// CS Name: ::Context::<>c*
class CORDL_TYPE __Context____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__Context____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0))::System::Func_2<::System::Type*, bool>* __9__16_0;

  static inline void setStaticF___9(::Zenject::__Context____c* value);

  static inline ::Zenject::__Context____c* getStaticF___9();

  static inline void setStaticF___9__16_0(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__16_0();

  static inline ::Zenject::__Context____c* New_ctor();

  /// @brief Method .ctor addr 0x2eedd08 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <set_NormalInstallerTypes>b__16_0 addr 0x2eedd10 size 0xb4 virtual false final false
  inline bool _set_NormalInstallerTypes_b__16_0(::System::Type* x);

  /// @brief Method __zenCreate addr 0x2eeddc4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2eede20 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__Context____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Context____c(__Context____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Context____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Context____c(__Context____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Context____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__Context____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::Context
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11119))
// CS Name: ::Zenject::Context*
class CORDL_TYPE Context : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::Zenject::__Context____c;

  /// @brief Field _scriptableObjectInstallers, offset 0x18, size 0x8
  __declspec(property(get = __get__scriptableObjectInstallers,
                      put = __set__scriptableObjectInstallers))::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* _scriptableObjectInstallers;

  /// @brief Field _monoInstallers, offset 0x20, size 0x8
  __declspec(property(get = __get__monoInstallers, put = __set__monoInstallers))::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* _monoInstallers;

  /// @brief Field _installerPrefabs, offset 0x28, size 0x8
  __declspec(property(get = __get__installerPrefabs, put = __set__installerPrefabs))::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* _installerPrefabs;

  /// @brief Field _normalInstallers, offset 0x30, size 0x8
  __declspec(property(get = __get__normalInstallers, put = __set__normalInstallers))::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* _normalInstallers;

  /// @brief Field _normalInstallerTypes, offset 0x38, size 0x8
  __declspec(property(get = __get__normalInstallerTypes, put = __set__normalInstallerTypes))::System::Collections::Generic::List_1<::System::Type*>* _normalInstallerTypes;

  __declspec(property(get = get_Installers, put = set_Installers))::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* Installers;

  __declspec(property(get = get_InstallerPrefabs, put = set_InstallerPrefabs))::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* InstallerPrefabs;

  __declspec(property(get = get_ScriptableObjectInstallers,
                      put = set_ScriptableObjectInstallers))::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* ScriptableObjectInstallers;

  __declspec(property(get = get_NormalInstallerTypes, put = set_NormalInstallerTypes))::System::Collections::Generic::IEnumerable_1<::System::Type*>* NormalInstallerTypes;

  __declspec(property(get = get_NormalInstallers, put = set_NormalInstallers))::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* NormalInstallers;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  constexpr ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*& __get__scriptableObjectInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*> const& __get__scriptableObjectInstallers() const;

  constexpr void __set__scriptableObjectInstallers(::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& __get__monoInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*> const& __get__monoInstallers() const;

  constexpr void __set__monoInstallers(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*& __get__installerPrefabs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*> const& __get__installerPrefabs() const;

  constexpr void __set__installerPrefabs(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*& __get__normalInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::InstallerBase*>*> const& __get__normalInstallers() const;

  constexpr void __set__normalInstallers(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __get__normalInstallerTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __get__normalInstallerTypes() const;

  constexpr void __set__normalInstallerTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  /// @brief Method get_Installers addr 0x2eebd88 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* get_Installers();

  /// @brief Method set_Installers addr 0x2eebd90 size 0x90 virtual false final false
  inline void set_Installers(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value);

  /// @brief Method get_InstallerPrefabs addr 0x2eebe20 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* get_InstallerPrefabs();

  /// @brief Method set_InstallerPrefabs addr 0x2eebe28 size 0x90 virtual false final false
  inline void set_InstallerPrefabs(::System::Collections::Generic::IEnumerable_1<::Zenject::MonoInstaller*>* value);

  /// @brief Method get_ScriptableObjectInstallers addr 0x2eebeb8 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* get_ScriptableObjectInstallers();

  /// @brief Method set_ScriptableObjectInstallers addr 0x2eebec0 size 0x90 virtual false final false
  inline void set_ScriptableObjectInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::ScriptableObjectInstaller*>* value);

  /// @brief Method get_NormalInstallerTypes addr 0x2eebf50 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_NormalInstallerTypes();

  /// @brief Method set_NormalInstallerTypes addr 0x2eebf58 size 0x168 virtual false final false
  inline void set_NormalInstallerTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  /// @brief Method get_NormalInstallers addr 0x2eec0c0 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* get_NormalInstallers();

  /// @brief Method set_NormalInstallers addr 0x2eec0c8 size 0x90 virtual false final false
  inline void set_NormalInstallers(::System::Collections::Generic::IEnumerable_1<::Zenject::InstallerBase*>* value);

  /// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method GetRootGameObjects addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* GetRootGameObjects();

  /// @brief Method AddNormalInstallerType addr 0x2eec158 size 0x110 virtual false final false
  inline void AddNormalInstallerType(::System::Type* installerType);

  /// @brief Method AddNormalInstaller addr 0x2eec268 size 0xa8 virtual false final false
  inline void AddNormalInstaller(::Zenject::InstallerBase* installer);

  /// @brief Method CheckInstallerPrefabTypes addr 0x2eec310 size 0x304 virtual false final false
  inline void CheckInstallerPrefabTypes(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* installers,
                                        ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* installerPrefabs);

  /// @brief Method InstallInstallers addr 0x2eec614 size 0x10 virtual true final false
  inline void InstallInstallers();

  /// @brief Method InstallInstallers addr 0x2eec624 size 0x78c virtual false final false
  inline void InstallInstallers(::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* normalInstallers, ::System::Collections::Generic::List_1<::System::Type*>* normalInstallerTypes,
                                ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* scriptableObjectInstallers,
                                ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* installers, ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* installerPrefabs);

  /// @brief Method InstallSceneBindings addr 0x2eece7c size 0x554 virtual false final false
  inline void InstallSceneBindings(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);

  /// @brief Method InstallZenjectBinding addr 0x2eed3d0 size 0x564 virtual false final false
  inline void InstallZenjectBinding(::Zenject::ZenjectBinding* binding);

  /// @brief Method GetInjectableMonoBehaviours addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetInjectableMonoBehaviours(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* components);

  static inline ::Zenject::Context* New_ctor();

  /// @brief Method .ctor addr 0x2eed9c0 size 0x16c virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2eedb2c size 0x178 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Context(Context&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Context(Context const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Context();

public:
  /// @brief Field _scriptableObjectInstallers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* ____scriptableObjectInstallers;

  /// @brief Field _monoInstallers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* ____monoInstallers;

  /// @brief Field _installerPrefabs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* ____installerPrefabs;

  /// @brief Field _normalInstallers, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::InstallerBase*>* ____normalInstallers;

  /// @brief Field _normalInstallerTypes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ____normalInstallerTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Context, 0x40>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::Context);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Context*, "Zenject", "Context");
NEED_NO_BOX(::Zenject::__Context____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__Context____c*, "Zenject", "Context/<>c");
