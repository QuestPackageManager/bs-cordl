#pragma once
// IWYU pragma private; include "Zenject/FactoryFromBinderBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FactoryFromBinderBase)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct Guid;
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
class BindInfo;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
class ConditionCopyNonLazyBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass20_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass21_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass23_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass24_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass26_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass27_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass28_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass29_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass30_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass31_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass32_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass33_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass34_0;
}
namespace Zenject {
class FactoryFromBinderBase__get_AllParentTypes_d__17;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class FactoryFromBinderBase;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass20_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass21_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass23_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass24_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass26_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass27_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass28_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass29_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass30_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass31_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass32_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass33_0;
}
namespace Zenject {
class FactoryFromBinderBase___c__DisplayClass34_0;
}
namespace Zenject {
class FactoryFromBinderBase__get_AllParentTypes_d__17;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass20_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass21_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass23_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass24_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass26_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass27_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass28_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass29_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass30_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass31_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass32_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass33_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase___c__DisplayClass34_0);
MARK_REF_PTR_T(::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass20_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field instance, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance)) ::System::Object* instance;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass20_0* New_ctor();

  /// @brief Method <FromInstance>b__0, addr 0x4b062dc, size 0x84, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromInstance_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::System::Object* const& __cordl_internal_get_instance() const;

  constexpr ::System::Object*& __cordl_internal_get_instance();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_instance(::System::Object* value);

  /// @brief Method __zenCreate, addr 0x4b06360, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b063b4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b055c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass20_0(FactoryFromBinderBase___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass20_0(FactoryFromBinderBase___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12172 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field instance, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass20_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass20_0, ___instance) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass20_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass21_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field subIdentifier, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subIdentifier, put = __cordl_internal_set_subIdentifier)) ::System::Object* subIdentifier;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass21_0* New_ctor();

  /// @brief Method <FromResolve>b__0, addr 0x4b0656c, size 0x90, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResolve_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::System::Object* const& __cordl_internal_get_subIdentifier() const;

  constexpr ::System::Object*& __cordl_internal_get_subIdentifier();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_subIdentifier(::System::Object* value);

  /// @brief Method __zenCreate, addr 0x4b065fc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b06650, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b055cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass21_0(FactoryFromBinderBase___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass21_0(FactoryFromBinderBase___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12173 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field subIdentifier, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___subIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass21_0, ___subIdentifier) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass21_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass23_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass23_0* New_ctor();

  /// @brief Method <FromComponentOn>b__0, addr 0x4b06808, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentOn_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method __zenCreate, addr 0x4b06880, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b068d4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b056b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass23_0(FactoryFromBinderBase___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass23_0(FactoryFromBinderBase___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12174 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass23_0, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass23_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass24_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectGetter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectGetter,
                      put = __cordl_internal_set_gameObjectGetter)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass24_0* New_ctor();

  /// @brief Method <FromComponentOn>b__0, addr 0x4b06a8c, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentOn_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gameObjectGetter() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjectGetter();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method __zenCreate, addr 0x4b06b04, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b06b58, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b05798, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass24_0(FactoryFromBinderBase___c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass24_0(FactoryFromBinderBase___c__DisplayClass24_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12175 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectGetter, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ___gameObjectGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass24_0, ___gameObjectGetter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass24_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass26_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass26_0* New_ctor();

  /// @brief Method <FromNewComponentOn>b__0, addr 0x4b06d10, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOn_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method __zenCreate, addr 0x4b06dfc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b06e50, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b05904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass26_0(FactoryFromBinderBase___c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass26_0(FactoryFromBinderBase___c__DisplayClass26_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12176 };

  /// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass26_0, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass26_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass26_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass27_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectGetter,
                      put = __cordl_internal_set_gameObjectGetter)) ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass27_0* New_ctor();

  /// @brief Method <FromNewComponentOn>b__0, addr 0x4b07008, size 0xec, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOn_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gameObjectGetter() const;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gameObjectGetter();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_gameObjectGetter(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method __zenCreate, addr 0x4b070f4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b07148, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b059e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass27_0(FactoryFromBinderBase___c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass27_0(FactoryFromBinderBase___c__DisplayClass27_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12177 };

  /// @brief Field gameObjectGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* ___gameObjectGetter;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass27_0, ___gameObjectGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass27_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass27_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass28_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field prefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass28_0* New_ctor();

  /// @brief Method <FromNewComponentOnNewPrefab>b__0, addr 0x4b07300, size 0x1c4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewPrefab_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value);

  /// @brief Method __zenCreate, addr 0x4b074c4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b07518, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b05b40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass28_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass28_0(FactoryFromBinderBase___c__DisplayClass28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass28_0(FactoryFromBinderBase___c__DisplayClass28_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12178 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass28_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass28_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass28_0, ___prefab) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass28_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass29_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field prefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prefab, put = __cordl_internal_set_prefab)) ::UnityW<::UnityEngine::Object> prefab;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass29_0* New_ctor();

  /// @brief Method <FromComponentInNewPrefab>b__0, addr 0x4b076d0, size 0x1c8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInNewPrefab_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_prefab() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_prefab();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::Object> value);

  /// @brief Method __zenCreate, addr 0x4b07898, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b078ec, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b05c98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass29_0(FactoryFromBinderBase___c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass29_0(FactoryFromBinderBase___c__DisplayClass29_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12179 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___prefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass29_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass29_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass29_0, ___prefab) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass29_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass30_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass30_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field resourcePath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass30_0* New_ctor();

  /// @brief Method <FromComponentInNewPrefabResource>b__0, addr 0x4b07aa4, size 0x1c8, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromComponentInNewPrefabResource_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x4b07c6c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b07cc0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b05de8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass30_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass30_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass30_0(FactoryFromBinderBase___c__DisplayClass30_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass30_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass30_0(FactoryFromBinderBase___c__DisplayClass30_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12180 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field resourcePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass30_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass30_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass30_0, ___resourcePath) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass30_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass31_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObjectInfo, put = __cordl_internal_set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field resourcePath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass31_0* New_ctor();

  /// @brief Method <FromNewComponentOnNewPrefabResource>b__0, addr 0x4b07e78, size 0x1c4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewComponentOnNewPrefabResource_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::Zenject::GameObjectCreationParameters* const& __cordl_internal_get_gameObjectInfo() const;

  constexpr ::Zenject::GameObjectCreationParameters*& __cordl_internal_get_gameObjectInfo();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x4b0803c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b08090, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b05f44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass31_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass31_0(FactoryFromBinderBase___c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass31_0(FactoryFromBinderBase___c__DisplayClass31_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12181 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field resourcePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___resourcePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass31_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass31_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass31_0, ___resourcePath) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass31_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass32_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass32_0* New_ctor();

  /// @brief Method <FromNewScriptableObjectResource>b__0, addr 0x4b08248, size 0xf4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromNewScriptableObjectResource_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x4b0833c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b08390, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b06024, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass32_0(FactoryFromBinderBase___c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass32_0(FactoryFromBinderBase___c__DisplayClass32_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12182 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass32_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass32_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass32_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass33_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass33_0* New_ctor();

  /// @brief Method <FromScriptableObjectResource>b__0, addr 0x4b08548, size 0xf4, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromScriptableObjectResource_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x4b0863c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b08690, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b06104, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass33_0(FactoryFromBinderBase___c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass33_0(FactoryFromBinderBase___c__DisplayClass33_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12183 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass33_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass33_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass33_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<>c__DisplayClass34_0
class CORDL_TYPE FactoryFromBinderBase___c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_resourcePath, put = __cordl_internal_set_resourcePath)) ::StringW resourcePath;

  static inline ::Zenject::FactoryFromBinderBase___c__DisplayClass34_0* New_ctor();

  /// @brief Method <FromResource>b__0, addr 0x4b08848, size 0x78, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FromResource_b__0(::Zenject::DiContainer* container);

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_resourcePath() const;

  constexpr ::StringW& __cordl_internal_get_resourcePath();

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set_resourcePath(::StringW value);

  /// @brief Method __zenCreate, addr 0x4b088c0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b08914, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b061d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase___c__DisplayClass34_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase___c__DisplayClass34_0(FactoryFromBinderBase___c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase___c__DisplayClass34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase___c__DisplayClass34_0(FactoryFromBinderBase___c__DisplayClass34_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12184 };

  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass34_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase___c__DisplayClass34_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase___c__DisplayClass34_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerable,
// System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase/<get_AllParentTypes>d__17
class CORDL_TYPE FactoryFromBinderBase__get_AllParentTypes_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Type__get_Current)) ::System::Type* System_Collections_Generic_IEnumerator_System_Type__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Type* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::FactoryFromBinderBase* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::List_1_Enumerator<::System::Type*> __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Type*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4b08ae8, size 0x1dc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator, addr 0x4b08d5c, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Type>.get_Current, addr 0x4b08d14, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4b08df8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4b08d1c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4b08d54, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4b08acc, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Type* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Type*& __cordl_internal_get___2__current();

  constexpr ::Zenject::FactoryFromBinderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::FactoryFromBinderBase*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::System::Type*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::System::Type*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Type* value);

  constexpr void __cordl_internal_set___4__this(::Zenject::FactoryFromBinderBase* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::List_1_Enumerator<::System::Type*> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x4b08cc4, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method __zenCreate, addr 0x4b08dfc, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b08ec4, size 0x268, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b053c4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Type*>* i___System__Collections__Generic__IEnumerable_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Type*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Type*>* i___System__Collections__Generic__IEnumerator_1___System__Type__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase__get_AllParentTypes_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase__get_AllParentTypes_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase__get_AllParentTypes_d__17(FactoryFromBinderBase__get_AllParentTypes_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase__get_AllParentTypes_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase__get_AllParentTypes_d__17(FactoryFromBinderBase__get_AllParentTypes_d__17 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12185 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Type* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::FactoryFromBinderBase* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::System::Type*> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17, 0x48>, "Size mismatch!");

} // namespace Zenject
// Dependencies Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// CS Name: Zenject.FactoryFromBinderBase
class CORDL_TYPE FactoryFromBinderBase : public ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
public:
  // Declarations
  using __c__DisplayClass20_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass20_0;

  using __c__DisplayClass21_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass21_0;

  using __c__DisplayClass23_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass23_0;

  using __c__DisplayClass24_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass24_0;

  using __c__DisplayClass26_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass26_0;

  using __c__DisplayClass27_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass27_0;

  using __c__DisplayClass28_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass28_0;

  using __c__DisplayClass29_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass29_0;

  using __c__DisplayClass30_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass30_0;

  using __c__DisplayClass31_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass31_0;

  using __c__DisplayClass32_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass32_0;

  using __c__DisplayClass33_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass33_0;

  using __c__DisplayClass34_0 = ::Zenject::FactoryFromBinderBase___c__DisplayClass34_0;

  using _get_AllParentTypes_d__17 = ::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17;

  __declspec(property(get = get_AllParentTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* AllParentTypes;

  __declspec(property(get = get_BindContainer, put = set_BindContainer)) ::Zenject::DiContainer* BindContainer;

  __declspec(property(get = get_ContractType, put = set_ContractType)) ::System::Type* ContractType;

  __declspec(property(get = get_FactoryBindInfo, put = set_FactoryBindInfo)) ::Zenject::FactoryBindInfo* FactoryBindInfo;

  __declspec(property(get = get_ProviderFunc, put = set_ProviderFunc)) ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* ProviderFunc;

  /// @brief Field <BindContainer>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__BindContainer_k__BackingField, put = __cordl_internal_set__BindContainer_k__BackingField)) ::Zenject::DiContainer* _BindContainer_k__BackingField;

  /// @brief Field <ContractType>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ContractType_k__BackingField, put = __cordl_internal_set__ContractType_k__BackingField)) ::System::Type* _ContractType_k__BackingField;

  /// @brief Field <FactoryBindInfo>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__FactoryBindInfo_k__BackingField,
                      put = __cordl_internal_set__FactoryBindInfo_k__BackingField)) ::Zenject::FactoryBindInfo* _FactoryBindInfo_k__BackingField;

  /// @brief Method CreateIFactoryBinder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConcreteBinderGeneric_1<T>* CreateIFactoryBinder(::ByRef<::System::Guid> factoryId);

  /// @brief Method FromComponentInNewPrefab, addr 0x4b05b50, size 0x148, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromComponentInNewPrefabResource, addr 0x4b05ca0, size 0x148, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromComponentOn, addr 0x4b055d4, size 0xe4, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromComponentOn, addr 0x4b056c0, size 0xd8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter);

  /// @brief Method FromComponentOnRoot, addr 0x4b057a0, size 0x80, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromComponentOnRoot();

  /// @brief Method FromInstance, addr 0x4b054ec, size 0xd8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromInstance(::System::Object* instance);

  /// @brief Method FromNew, addr 0x4b053f8, size 0x2c, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromNew();

  /// @brief Method FromNewComponentOn, addr 0x4b05820, size 0xe4, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(::UnityEngine::GameObject* gameObject);

  /// @brief Method FromNewComponentOn, addr 0x4b0590c, size 0xd8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(::System::Func_2<::Zenject::InjectContext*, ::UnityW<::UnityEngine::GameObject>>* gameObjectGetter);

  /// @brief Method FromNewComponentOnNewPrefab, addr 0x4b059ec, size 0x154, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method FromNewComponentOnNewPrefabResource, addr 0x4b05df0, size 0x154, virtual false, abstract: false, final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::StringW resourcePath);

  /// @brief Method FromNewScriptableObjectResource, addr 0x4b05f4c, size 0xd8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromNewScriptableObjectResource(::StringW resourcePath);

  /// @brief Method FromResolve, addr 0x4b05424, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromResolve();

  /// @brief Method FromResolve, addr 0x4b0542c, size 0xc0, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromResolve(::System::Object* subIdentifier);

  /// @brief Method FromResource, addr 0x4b0610c, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromResource(::StringW resourcePath);

  /// @brief Method FromScriptableObjectResource, addr 0x4b0602c, size 0xd8, virtual false, abstract: false, final false
  inline ::Zenject::ConditionCopyNonLazyBinder* FromScriptableObjectResource(::StringW resourcePath);

  static inline ::Zenject::FactoryFromBinderBase* New_ctor(::Zenject::DiContainer* bindContainer, ::System::Type* contractType, ::Zenject::BindInfo* bindInfo,
                                                           ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method <FromComponentOnRoot>b__25_0, addr 0x4b06280, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> _FromComponentOnRoot_b__25_0(::Zenject::InjectContext* ctx);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__BindContainer_k__BackingField() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__BindContainer_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__ContractType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__ContractType_k__BackingField();

  constexpr ::Zenject::FactoryBindInfo* const& __cordl_internal_get__FactoryBindInfo_k__BackingField() const;

  constexpr ::Zenject::FactoryBindInfo*& __cordl_internal_get__FactoryBindInfo_k__BackingField();

  constexpr void __cordl_internal_set__BindContainer_k__BackingField(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__ContractType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__FactoryBindInfo_k__BackingField(::Zenject::FactoryBindInfo* value);

  /// @brief Method <.ctor>b__0_0, addr 0x4b061e0, size 0xa0, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* __ctor_b__0_0(::Zenject::DiContainer* container);

  /// @brief Method .ctor, addr 0x4b05230, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::System::Type* contractType, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method get_AllParentTypes, addr 0x4b05354, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_AllParentTypes();

  /// @brief Method get_BindContainer, addr 0x4b052ec, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_BindContainer();

  /// @brief Method get_ContractType, addr 0x4b05344, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ContractType();

  /// @brief Method get_FactoryBindInfo, addr 0x4b052fc, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::FactoryBindInfo* get_FactoryBindInfo();

  /// @brief Method get_ProviderFunc, addr 0x4b0530c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* get_ProviderFunc();

  /// @brief Method set_BindContainer, addr 0x4b052f4, size 0x8, virtual false, abstract: false, final false
  inline void set_BindContainer(::Zenject::DiContainer* value);

  /// @brief Method set_ContractType, addr 0x4b0534c, size 0x8, virtual false, abstract: false, final false
  inline void set_ContractType(::System::Type* value);

  /// @brief Method set_FactoryBindInfo, addr 0x4b05304, size 0x8, virtual false, abstract: false, final false
  inline void set_FactoryBindInfo(::Zenject::FactoryBindInfo* value);

  /// @brief Method set_ProviderFunc, addr 0x4b05328, size 0x1c, virtual false, abstract: false, final false
  inline void set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*, ::Zenject::IProvider*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FactoryFromBinderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FactoryFromBinderBase(FactoryFromBinderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FactoryFromBinderBase(FactoryFromBinderBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12186 };

  /// @brief Field <BindContainer>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____BindContainer_k__BackingField;

  /// @brief Field <FactoryBindInfo>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Zenject::FactoryBindInfo* ____FactoryBindInfo_k__BackingField;

  /// @brief Field <ContractType>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Type* ____ContractType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::FactoryFromBinderBase, ____BindContainer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase, ____FactoryBindInfo_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::FactoryFromBinderBase, ____ContractType_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderBase, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::FactoryFromBinderBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase*, "Zenject", "FactoryFromBinderBase");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass20_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass20_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass21_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass21_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass23_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass23_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass24_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass24_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass26_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass26_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass27_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass27_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass28_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass28_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass29_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass29_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass30_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass30_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass31_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass31_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass32_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass32_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass33_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass33_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase___c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase___c__DisplayClass34_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass34_0");
NEED_NO_BOX(::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderBase__get_AllParentTypes_d__17*, "Zenject", "FactoryFromBinderBase/<get_AllParentTypes>d__17");
