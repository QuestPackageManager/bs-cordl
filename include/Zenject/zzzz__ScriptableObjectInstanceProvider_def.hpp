#pragma once
// IWYU pragma private; include "Zenject/ScriptableObjectInstanceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectInstanceProvider)
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
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class ScriptableObjectInstanceProvider___c__DisplayClass13_0;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectInstanceProvider;
}
namespace Zenject {
class ScriptableObjectInstanceProvider___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ScriptableObjectInstanceProvider);
MARK_REF_PTR_T(::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ScriptableObjectInstanceProvider/<>c__DisplayClass13_0
class CORDL_TYPE ScriptableObjectInstanceProvider___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::ScriptableObjectInstanceProvider* __4__this;

  /// @brief Field args, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::System::Collections::Generic::List_1<::System::Object*>* buffer;

  /// @brief Field context, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::Zenject::InjectContext* context;

  static inline ::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0* New_ctor();

  /// @brief Method <GetAllInstancesWithInjectSplit>b__0, addr 0x4b40600, size 0x190, virtual false, abstract: false, final false
  inline void _GetAllInstancesWithInjectSplit_b__0();

  constexpr ::Zenject::ScriptableObjectInstanceProvider* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::ScriptableObjectInstanceProvider*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get_args() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_args();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_buffer() const;

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_buffer();

  constexpr ::Zenject::InjectContext* const& __cordl_internal_get_context() const;

  constexpr ::Zenject::InjectContext*& __cordl_internal_get_context();

  constexpr void __cordl_internal_set___4__this(::Zenject::ScriptableObjectInstanceProvider* value);

  constexpr void __cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set_buffer(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_context(::Zenject::InjectContext* value);

  /// @brief Method __zenCreate, addr 0x4b40790, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b407e4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b405f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectInstanceProvider___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstanceProvider___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectInstanceProvider___c__DisplayClass13_0(ScriptableObjectInstanceProvider___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstanceProvider___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectInstanceProvider___c__DisplayClass13_0(ScriptableObjectInstanceProvider___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12579 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___buffer;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::ScriptableObjectInstanceProvider* _____4__this;

  /// @brief Field args, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  /// @brief Field context, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectContext* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0, ___args) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0, ___context) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0, 0x30>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object, Zenject.IProvider
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ScriptableObjectInstanceProvider
class CORDL_TYPE ScriptableObjectInstanceProvider : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass13_0 = ::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _concreteIdentifier, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__concreteIdentifier, put = __cordl_internal_set__concreteIdentifier)) ::System::Object* _concreteIdentifier;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _createNew, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__createNew, put = __cordl_internal_set__createNew)) bool _createNew;

  /// @brief Field _extraArguments, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__extraArguments, put = __cordl_internal_set__extraArguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArguments;

  /// @brief Field _instantiateCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateCallback,
                      put = __cordl_internal_set__instantiateCallback)) ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* _instantiateCallback;

  /// @brief Field _resource, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__resource, put = __cordl_internal_set__resource)) ::UnityW<::UnityEngine::Object> _resource;

  /// @brief Field _resourceType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__resourceType, put = __cordl_internal_set__resourceType)) ::System::Type* _resourceType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4b40450, size 0x1a8, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4b40448, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::ScriptableObjectInstanceProvider* New_ctor(::UnityEngine::Object* resource, ::System::Type* resourceType, ::Zenject::DiContainer* container,
                                                                      ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, bool createNew,
                                                                      ::System::Object* concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  constexpr ::System::Object* const& __cordl_internal_get__concreteIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get__concreteIdentifier();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr bool const& __cordl_internal_get__createNew() const;

  constexpr bool& __cordl_internal_get__createNew();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get__extraArguments() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get__extraArguments();

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* const& __cordl_internal_get__instantiateCallback() const;

  constexpr ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>*& __cordl_internal_get__instantiateCallback();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__resource() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__resource();

  constexpr ::System::Type* const& __cordl_internal_get__resourceType() const;

  constexpr ::System::Type*& __cordl_internal_get__resourceType();

  constexpr void __cordl_internal_set__concreteIdentifier(::System::Object* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__createNew(bool value);

  constexpr void __cordl_internal_set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* value);

  constexpr void __cordl_internal_set__resource(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set__resourceType(::System::Type* value);

  /// @brief Method .ctor, addr 0x4b4036c, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Object* resource, ::System::Type* resourceType, ::Zenject::DiContainer* container,
                    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArguments, bool createNew, ::System::Object* concreteIdentifier,
                    ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* instantiateCallback);

  /// @brief Method get_IsCached, addr 0x4b40438, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4b40440, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectInstanceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstanceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectInstanceProvider(ScriptableObjectInstanceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstanceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectInstanceProvider(ScriptableObjectInstanceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12580 };

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _resourceType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____resourceType;

  /// @brief Field _extraArguments, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ____extraArguments;

  /// @brief Field _createNew, offset: 0x28, size: 0x1, def value: None
  bool ____createNew;

  /// @brief Field _concreteIdentifier, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ____concreteIdentifier;

  /// @brief Field _instantiateCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::Zenject::InjectContext*, ::System::Object*>* ____instantiateCallback;

  /// @brief Field _resource, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ____resource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider, ____resourceType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider, ____extraArguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider, ____createNew) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider, ____concreteIdentifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider, ____instantiateCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScriptableObjectInstanceProvider, ____resource) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ScriptableObjectInstanceProvider, 0x48>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ScriptableObjectInstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectInstanceProvider*, "Zenject", "ScriptableObjectInstanceProvider");
NEED_NO_BOX(::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectInstanceProvider___c__DisplayClass13_0*, "Zenject", "ScriptableObjectInstanceProvider/<>c__DisplayClass13_0");
