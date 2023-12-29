#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PrefabInstantiator)
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class __PrefabInstantiator____c__DisplayClass15_0;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class PrefabInstantiator;
}
namespace Zenject {
class __PrefabInstantiator____c__DisplayClass15_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabInstantiator);
MARK_REF_PTR_T(::Zenject::__PrefabInstantiator____c__DisplayClass15_0);
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11156))
// CS Name: ::PrefabInstantiator::<>c__DisplayClass15_0*
class CORDL_TYPE __PrefabInstantiator____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::PrefabInstantiator* __4__this;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __get_args, put = __set_args))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  /// @brief Field gameObject, offset 0x20, size 0x8
  __declspec(property(get = __get_gameObject, put = __set_gameObject))::UnityEngine::GameObject* gameObject;

  /// @brief Field context, offset 0x28, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::Zenject::InjectContext* context;

  /// @brief Field shouldMakeActive, offset 0x30, size 0x1
  __declspec(property(get = __get_shouldMakeActive, put = __set_shouldMakeActive)) bool shouldMakeActive;

  constexpr ::Zenject::PrefabInstantiator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::PrefabInstantiator*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::PrefabInstantiator* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __get_args();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __get_args() const;

  constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr ::UnityEngine::GameObject*& __get_gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_gameObject() const;

  constexpr void __set_gameObject(::UnityEngine::GameObject* value);

  constexpr ::Zenject::InjectContext*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get_context() const;

  constexpr void __set_context(::Zenject::InjectContext* value);

  constexpr bool& __get_shouldMakeActive();

  constexpr bool const& __get_shouldMakeActive() const;

  constexpr void __set_shouldMakeActive(bool value);

  static inline ::Zenject::__PrefabInstantiator____c__DisplayClass15_0* New_ctor();

  /// @brief Method .ctor addr 0x2da1234 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Instantiate>b__0 addr 0x2da123c size 0x5a8 virtual false final false
  inline void _Instantiate_b__0();

  /// @brief Method __zenCreate addr 0x2da17e4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2da1840 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabInstantiator____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PrefabInstantiator____c__DisplayClass15_0(__PrefabInstantiator____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PrefabInstantiator____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PrefabInstantiator____c__DisplayClass15_0(__PrefabInstantiator____c__DisplayClass15_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PrefabInstantiator____c__DisplayClass15_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabInstantiator* _____4__this;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  /// @brief Field gameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___gameObject;

  /// @brief Field context, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* ___context;

  /// @brief Field shouldMakeActive, offset: 0x30, size: 0x1, def value: None
  bool ___shouldMakeActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PrefabInstantiator____c__DisplayClass15_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::__PrefabInstantiator____c__DisplayClass15_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabInstantiator____c__DisplayClass15_0, ___args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabInstantiator____c__DisplayClass15_0, ___gameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabInstantiator____c__DisplayClass15_0, ___context) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::__PrefabInstantiator____c__DisplayClass15_0, ___shouldMakeActive) == 0x30, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::PrefabInstantiator
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11157))
// CS Name: ::Zenject::PrefabInstantiator*
class CORDL_TYPE PrefabInstantiator : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass15_0 = ::Zenject::__PrefabInstantiator____c__DisplayClass15_0;

  /// @brief Field _prefabProvider, offset 0x10, size 0x8
  __declspec(property(get = __get__prefabProvider, put = __set__prefabProvider))::Zenject::IPrefabProvider* _prefabProvider;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _extraArguments, offset 0x20, size 0x8
  __declspec(property(get = __get__extraArguments, put = __set__extraArguments))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArguments;

  /// @brief Field _gameObjectBindInfo, offset 0x28, size 0x8
  __declspec(property(get = __get__gameObjectBindInfo, put = __set__gameObjectBindInfo))::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Field _argumentTarget, offset 0x30, size 0x8
  __declspec(property(get = __get__argumentTarget, put = __set__argumentTarget))::System::Type* _argumentTarget;

  /// @brief Field _instantiateCallbackTypes, offset 0x38, size 0x8
  __declspec(property(get = __get__instantiateCallbackTypes, put = __set__instantiateCallbackTypes))::System::Collections::Generic::List_1<::System::Type*>* _instantiateCallbackTypes;

  /// @brief Field _instantiateCallback, offset 0x40, size 0x8
  __declspec(property(get = __get__instantiateCallback, put = __set__instantiateCallback))::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* _instantiateCallback;

  __declspec(property(get = get_GameObjectCreationParameters))::Zenject::GameObjectCreationParameters* GameObjectCreationParameters;

  __declspec(property(get = get_ArgumentTarget))::System::Type* ArgumentTarget;

  __declspec(property(get = get_ExtraArguments))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ExtraArguments;

  /// @brief Convert operator to "::Zenject::IPrefabInstantiator"
  constexpr operator ::Zenject::IPrefabInstantiator*() noexcept;

  constexpr ::Zenject::IPrefabProvider*& __get__prefabProvider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabProvider*> const& __get__prefabProvider() const;

  constexpr void __set__prefabProvider(::Zenject::IPrefabProvider* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __get__extraArguments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __get__extraArguments() const;

  constexpr void __set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get__gameObjectBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get__gameObjectBindInfo() const;

  constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Type*& __get__argumentTarget();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__argumentTarget() const;

  constexpr void __set__argumentTarget(::System::Type* value);

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __get__instantiateCallbackTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __get__instantiateCallbackTypes() const;

  constexpr void __set__instantiateCallbackTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& __get__instantiateCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*> const& __get__instantiateCallback() const;

  constexpr void __set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value);

  static inline ::Zenject::PrefabInstantiator* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* argumentTarget,
                                                        ::System::Collections::Generic::IEnumerable_1<::System::Type*>* instantiateCallbackTypes,
                                                        ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::Zenject::IPrefabProvider* prefabProvider,
                                                        ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method .ctor addr 0x2da0f10 size 0xc4 virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* argumentTarget,
                    ::System::Collections::Generic::IEnumerable_1<::System::Type*>* instantiateCallbackTypes, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                    ::Zenject::IPrefabProvider* prefabProvider, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_GameObjectCreationParameters addr 0x2da0fd4 size 0x8 virtual true final true
  inline ::Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();

  /// @brief Method get_ArgumentTarget addr 0x2da0fdc size 0x8 virtual true final true
  inline ::System::Type* get_ArgumentTarget();

  /// @brief Method get_ExtraArguments addr 0x2da0fe4 size 0x8 virtual true final true
  inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_ExtraArguments();

  /// @brief Method GetPrefab addr 0x2da0fec size 0xa0 virtual true final true
  inline ::UnityEngine::Object* GetPrefab();

  /// @brief Method Instantiate addr 0x2da108c size 0x1a8 virtual true final true
  inline ::UnityEngine::GameObject* Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction);

  // Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabInstantiator(PrefabInstantiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabInstantiator(PrefabInstantiator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabInstantiator();

public:
  /// @brief Field _prefabProvider, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IPrefabProvider* ____prefabProvider;

  /// @brief Field _container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _extraArguments, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ____extraArguments;

  /// @brief Field _gameObjectBindInfo, offset: 0x28, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ____gameObjectBindInfo;

  /// @brief Field _argumentTarget, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ____argumentTarget;

  /// @brief Field _instantiateCallbackTypes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ____instantiateCallbackTypes;

  /// @brief Field _instantiateCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* ____instantiateCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabInstantiator, 0x48>, "Size mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____prefabProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____extraArguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____gameObjectBindInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____argumentTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____instantiateCallbackTypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____instantiateCallback) == 0x40, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabInstantiator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabInstantiator*, "Zenject", "PrefabInstantiator");
NEED_NO_BOX(::Zenject::__PrefabInstantiator____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PrefabInstantiator____c__DisplayClass15_0*, "Zenject", "PrefabInstantiator/<>c__DisplayClass15_0");
