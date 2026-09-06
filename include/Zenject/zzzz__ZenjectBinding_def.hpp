#pragma once
// IWYU pragma private; include "Zenject/ZenjectBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZenjectBinding)
namespace UnityEngine {
class Component;
}
namespace Zenject {
class Context;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct ZenjectBinding_BindTypes;
}
// Forward declare root types
namespace Zenject {
struct ZenjectBinding_BindTypes;
}
namespace Zenject {
class ZenjectBinding;
}
// Write type traits
MARK_VAL_T(::Zenject::ZenjectBinding_BindTypes);
MARK_REF_T(::Zenject::ZenjectBinding*);
DEFINE_IL2CPP_CLASS(::Zenject::ZenjectBinding_BindTypes, "Zenject", "ZenjectBinding/BindTypes");
DEFINE_IL2CPP_CLASS(::Zenject::ZenjectBinding*, "Zenject", "ZenjectBinding");
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.ZenjectBinding/BindTypes
struct CORDL_TYPE ZenjectBinding_BindTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ZenjectBinding_BindTypes_Unwrapped
  enum struct __ZenjectBinding_BindTypes_Unwrapped : int32_t {
    __E_Self = static_cast<int32_t>(0x0),
    __E_AllInterfaces = static_cast<int32_t>(0x1),
    __E_AllInterfacesAndSelf = static_cast<int32_t>(0x2),
    __E_BaseType = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ZenjectBinding_BindTypes_Unwrapped() const noexcept {
    return static_cast<__ZenjectBinding_BindTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectBinding_BindTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ZenjectBinding_BindTypes(int32_t value__) noexcept;

  /// @brief Field AllInterfaces value: I32(1)
  static ::Zenject::ZenjectBinding_BindTypes const AllInterfaces;

  /// @brief Field AllInterfacesAndSelf value: I32(2)
  static ::Zenject::ZenjectBinding_BindTypes const AllInterfacesAndSelf;

  /// @brief Field BaseType value: I32(3)
  static ::Zenject::ZenjectBinding_BindTypes const BaseType;

  /// @brief Field Self value: I32(0)
  static ::Zenject::ZenjectBinding_BindTypes const Self;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14509 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ZenjectBinding_BindTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Zenject::ZenjectBinding_BindTypes) == 0x4, "Size mismatch!");

} // namespace Zenject
// Dependencies UnityEngine.Component, UnityEngine.MonoBehaviour, Zenject.ZenjectBinding::BindTypes
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ZenjectBinding
class CORDL_TYPE ZenjectBinding : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BindTypes = ::Zenject::ZenjectBinding_BindTypes;

  __declspec(property(get = get_BindType)) ::Zenject::ZenjectBinding_BindTypes BindType;

  __declspec(property(get = get_Components)) ::ArrayW<::UnityW<::UnityEngine::Component>> Components;

  __declspec(property(get = get_Context, put = set_Context)) ::UnityW<::Zenject::Context> Context;

  __declspec(property(get = get_Identifier)) ::StringW Identifier;

  __declspec(property(get = get_IfNotBound)) bool IfNotBound;

  __declspec(property(get = get_UseSceneContext)) bool UseSceneContext;

  /// @brief Field _bindType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__bindType, put = __cordl_internal_set__bindType)) ::Zenject::ZenjectBinding_BindTypes _bindType;

  /// @brief Field _components, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__components, put = __cordl_internal_set__components)) ::ArrayW<::UnityW<::UnityEngine::Component>> _components;

  /// @brief Field _context, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::UnityW<::Zenject::Context> _context;

  /// @brief Field _identifier, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__identifier, put = __cordl_internal_set__identifier)) ::StringW _identifier;

  /// @brief Field _ifNotBound, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__ifNotBound, put = __cordl_internal_set__ifNotBound)) bool _ifNotBound;

  /// @brief Field _useSceneContext, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__useSceneContext, put = __cordl_internal_set__useSceneContext)) bool _useSceneContext;

  static inline ::Zenject::ZenjectBinding* New_ctor();

  /// @brief Method Start, addr 0x6e76a30, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::ZenjectBinding_BindTypes const& __cordl_internal_get__bindType() const;

  constexpr ::Zenject::ZenjectBinding_BindTypes& __cordl_internal_get__bindType();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& __cordl_internal_get__components() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& __cordl_internal_get__components();

  constexpr ::UnityW<::Zenject::Context> const& __cordl_internal_get__context() const;

  constexpr ::UnityW<::Zenject::Context>& __cordl_internal_get__context();

  constexpr ::StringW const& __cordl_internal_get__identifier() const;

  constexpr ::StringW& __cordl_internal_get__identifier();

  constexpr bool const& __cordl_internal_get__ifNotBound() const;

  constexpr bool& __cordl_internal_get__ifNotBound();

  constexpr bool const& __cordl_internal_get__useSceneContext() const;

  constexpr bool& __cordl_internal_get__useSceneContext();

  constexpr void __cordl_internal_set__bindType(::Zenject::ZenjectBinding_BindTypes value);

  constexpr void __cordl_internal_set__components(::ArrayW<::UnityW<::UnityEngine::Component>> value);

  constexpr void __cordl_internal_set__context(::UnityW<::Zenject::Context> value);

  constexpr void __cordl_internal_set__identifier(::StringW value);

  constexpr void __cordl_internal_set__ifNotBound(bool value);

  constexpr void __cordl_internal_set__useSceneContext(bool value);

  /// [Preserve]
  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e76a4c, size 0x148, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e76a34, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindType, addr 0x6e76a28, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ZenjectBinding_BindTypes get_BindType();

  /// @brief Method get_Components, addr 0x6e76a18, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>> get_Components();

  /// @brief Method get_Context, addr 0x6e76a08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Zenject::Context> get_Context();

  /// @brief Method get_Identifier, addr 0x6e76a20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Identifier();

  /// @brief Method get_IfNotBound, addr 0x6e76a00, size 0x8, virtual false, abstract: false, final false
  inline bool get_IfNotBound();

  /// @brief Method get_UseSceneContext, addr 0x6e769f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseSceneContext();

  /// @brief Method set_Context, addr 0x6e76a10, size 0x8, virtual false, abstract: false, final false
  inline void set_Context(::Zenject::Context* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectBinding", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectBinding(ZenjectBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectBinding", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectBinding(ZenjectBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14510 };

  /// [Tooltip("The component to add to the Zenject container")]
  /// [SerializeField]
  /// @brief Field _components, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Component>> ____components;

  /// [Tooltip("Note: This value is optional and can be ignored in most cases.  This can be useful to differentiate multiple bindings of the same type.  For example, if you have multiple cameras in
  /// your scene, you can \'name\' them by giving each one a different identifier.  For your main camera you might call it \'Main\' then any class can refer to it by using an attribute like [Inject(Id
  /// = \'Main\')]")] [SerializeField]
  /// @brief Field _identifier, offset: 0x28, size: 0x8, def value: None
  ::StringW ____identifier;

  /// [Tooltip("When set, this will bind the given components to the SceneContext.  It can be used as a shortcut to explicitly dragging the SceneContext into the Context field.  This is useful when
  /// using ZenjectBinding inside GameObjectContext.  If your ZenjectBinding is for a component that is not underneath GameObjectContext then it is not necessary to check this")] [SerializeField]
  /// @brief Field _useSceneContext, offset: 0x30, size: 0x1, def value: None
  bool ____useSceneContext;

  /// [SerializeField]
  /// @brief Field _ifNotBound, offset: 0x31, size: 0x1, def value: None
  bool ____ifNotBound;

  /// [FormerlySerializedAs("_compositionRoot")]
  /// [NullAllowed((NullAllowedContext)0)]
  /// [Tooltip("Note: This value is optional and can be ignored in most cases.  This value will determine what container the component gets added to.  If unset, the component will be bound on the most
  /// \'local\' context.  In most cases this will be the SceneContext, unless this component is underneath a GameObjectContext, or ProjectContext, in which case it will bind to that instead by
  /// default.  You can also override this default by providing the Context directly.  This can be useful if you want to bind something that is inside a GameObjectContext to the SceneContext
  /// container.")] [SerializeField]
  /// @brief Field _context, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Zenject::Context> ____context;

  /// [SerializeField]
  /// [Tooltip("This value is used to determine how to bind this component.  When set to \'Self\' is equivalent to calling Container.FromInstance inside an installer. When set to \'AllInterfaces\'
  /// this is equivalent to calling \'Container.BindInterfaces<MyMonoBehaviour>().ToInstance\', and similarly for InterfacesAndSelf")]
  /// @brief Field _bindType, offset: 0x40, size: 0x4, def value: None
  ::Zenject::ZenjectBinding_BindTypes ____bindType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ZenjectBinding, ____components) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____identifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____useSceneContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____ifNotBound) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____context) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____bindType) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Zenject::ZenjectBinding) == 0x48, "Size mismatch!");

} // namespace Zenject
