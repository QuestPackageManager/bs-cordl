#pragma once
// IWYU pragma private; include "Zenject/PrefabInstantiator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
CORDL_MODULE_EXPORT(PrefabInstantiator)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class PrefabInstantiator___c__DisplayClass15_0;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class PrefabInstantiator;
}
namespace Zenject {
class PrefabInstantiator___c__DisplayClass15_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabInstantiator);
MARK_REF_PTR_T(::Zenject::PrefabInstantiator___c__DisplayClass15_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PrefabInstantiator/<>c__DisplayClass15_0
class CORDL_TYPE PrefabInstantiator___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::PrefabInstantiator* __4__this;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  /// @brief Field context, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::Zenject::InjectContext* context;

  /// @brief Field gameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field shouldMakeActive, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldMakeActive, put = __cordl_internal_set_shouldMakeActive)) bool shouldMakeActive;

  static inline ::Zenject::PrefabInstantiator___c__DisplayClass15_0* New_ctor();

  /// @brief Method <Instantiate>b__0, addr 0x4b3f4f4, size 0x5b0, virtual false, abstract: false, final false
  inline void _Instantiate_b__0();

  constexpr ::Zenject::PrefabInstantiator* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::PrefabInstantiator*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get_args() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_args();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_context() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_context();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr bool const& __cordl_internal_get_shouldMakeActive() const;

  constexpr bool& __cordl_internal_get_shouldMakeActive();

  constexpr void __cordl_internal_set___4__this(::Zenject::PrefabInstantiator* value);

  constexpr void __cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set_context(::Zenject::InjectContext* value);

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_shouldMakeActive(bool value);

  /// @brief Method __zenCreate, addr 0x4b3faa4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b3faf8, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b3f4ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabInstantiator___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiator___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabInstantiator___c__DisplayClass15_0(PrefabInstantiator___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiator___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabInstantiator___c__DisplayClass15_0(PrefabInstantiator___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12570 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::PrefabInstantiator* _____4__this;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  /// @brief Field gameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field context, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* ___context;

  /// @brief Field shouldMakeActive, offset: 0x30, size: 0x1, def value: None
  bool ___shouldMakeActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::PrefabInstantiator___c__DisplayClass15_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator___c__DisplayClass15_0, ___args) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator___c__DisplayClass15_0, ___gameObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator___c__DisplayClass15_0, ___context) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator___c__DisplayClass15_0, ___shouldMakeActive) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PrefabInstantiator___c__DisplayClass15_0, 0x38>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object, Zenject.IPrefabInstantiator
namespace Zenject {
// Is value type: false
// CS Name: Zenject.PrefabInstantiator
class CORDL_TYPE PrefabInstantiator : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass15_0 = ::Zenject::PrefabInstantiator___c__DisplayClass15_0;

  __declspec(property(get = get_ArgumentTarget)) ::System::Type* ArgumentTarget;

  __declspec(property(get = get_ExtraArguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ExtraArguments;

  __declspec(property(get = get_GameObjectCreationParameters)) ::Zenject::GameObjectCreationParameters* GameObjectCreationParameters;

  /// @brief Field _argumentTarget, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__argumentTarget, put = __cordl_internal_set__argumentTarget)) ::System::Type* _argumentTarget;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _extraArguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__extraArguments, put = __cordl_internal_set__extraArguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArguments;

  /// @brief Field _gameObjectBindInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectBindInfo, put = __cordl_internal_set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters* _gameObjectBindInfo;

  /// @brief Field _instantiateCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateCallback,
                      put = __cordl_internal_set__instantiateCallback)) ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* _instantiateCallback;

  /// @brief Field _instantiateCallbackTypes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateCallbackTypes,
                      put = __cordl_internal_set__instantiateCallbackTypes)) ::System::Collections::Generic::List_1<::System::Type*>* _instantiateCallbackTypes;

  /// @brief Field _prefabProvider, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__prefabProvider, put = __cordl_internal_set__prefabProvider)) ::Zenject::IPrefabProvider* _prefabProvider;

  /// @brief Convert operator to "::Zenject::IPrefabInstantiator"
  constexpr operator ::Zenject::IPrefabInstantiator*() noexcept;

  /// @brief Method GetPrefab, addr 0x4b3f2a8, size 0xa0, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Object> GetPrefab();

  /// @brief Method Instantiate, addr 0x4b3f348, size 0x1a4, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::GameObject> Instantiate(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args,
                                                         ::ByRef<::System::Action*> injectAction);

  static inline ::Zenject::PrefabInstantiator* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* argumentTarget,
                                                        ::System::Collections::Generic::IEnumerable_1<::System::Type*>* instantiateCallbackTypes,
                                                        ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, ::Zenject::IPrefabProvider* prefabProvider,
                                                        ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  constexpr ::System::Type* const& __cordl_internal_get__argumentTarget() const;

  constexpr ::System::Type*& __cordl_internal_get__argumentTarget();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get__extraArguments() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get__extraArguments();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get__gameObjectBindInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get__gameObjectBindInfo();

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* const& __cordl_internal_get__instantiateCallback() const;

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get__instantiateCallback();

  constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& __cordl_internal_get__instantiateCallbackTypes() const;

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get__instantiateCallbackTypes();

  constexpr ::Zenject::IPrefabProvider* const& __cordl_internal_get__prefabProvider() const;

  constexpr ::Zenject::IPrefabProvider*& __cordl_internal_get__prefabProvider();

  constexpr void __cordl_internal_set__argumentTarget(::System::Type* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__instantiateCallbackTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  constexpr void __cordl_internal_set__prefabProvider(::Zenject::IPrefabProvider* value);

  /// @brief Method .ctor, addr 0x4b3f1cc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* argumentTarget,
                    ::System::Collections::Generic::IEnumerable_1<::System::Type*>* instantiateCallbackTypes, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments,
                    ::Zenject::IPrefabProvider* prefabProvider, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_ArgumentTarget, addr 0x4b3f298, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* get_ArgumentTarget();

  /// @brief Method get_ExtraArguments, addr 0x4b3f2a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_ExtraArguments();

  /// @brief Method get_GameObjectCreationParameters, addr 0x4b3f290, size 0x8, virtual true, abstract: false, final true
  inline ::Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();

  /// @brief Convert to "::Zenject::IPrefabInstantiator"
  constexpr ::Zenject::IPrefabInstantiator* i___Zenject__IPrefabInstantiator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabInstantiator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabInstantiator(PrefabInstantiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabInstantiator(PrefabInstantiator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12571 };

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
static_assert(offsetof(::Zenject::PrefabInstantiator, ____prefabProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____extraArguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____gameObjectBindInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____argumentTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____instantiateCallbackTypes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::PrefabInstantiator, ____instantiateCallback) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::PrefabInstantiator, 0x48>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PrefabInstantiator);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabInstantiator*, "Zenject", "PrefabInstantiator");
NEED_NO_BOX(::Zenject::PrefabInstantiator___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabInstantiator___c__DisplayClass15_0*, "Zenject", "PrefabInstantiator/<>c__DisplayClass15_0");
