#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__ZenjectBinding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZenjectBinding)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class Context;
}
namespace UnityEngine {
class Component;
}
namespace Zenject {
struct __ZenjectBinding__BindTypes;
}
// Forward declare root types
namespace Zenject {
struct __ZenjectBinding__BindTypes;
}
namespace Zenject {
class ZenjectBinding;
}
// Write type traits
MARK_VAL_T(::Zenject::__ZenjectBinding__BindTypes);
MARK_REF_PTR_T(::Zenject::ZenjectBinding);
// Type: ::BindTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11155))
// CS Name: ::ZenjectBinding::BindTypes
struct CORDL_TYPE __ZenjectBinding__BindTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ZenjectBinding__BindTypes_Unwrapped
  enum struct ____ZenjectBinding__BindTypes_Unwrapped : int32_t {
    __E_Self = static_cast<int32_t>(0x0),
    __E_AllInterfaces = static_cast<int32_t>(0x1),
    __E_AllInterfacesAndSelf = static_cast<int32_t>(0x2),
    __E_BaseType = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ZenjectBinding__BindTypes_Unwrapped() const noexcept {
    return static_cast<____ZenjectBinding__BindTypes_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ZenjectBinding__BindTypes(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ZenjectBinding__BindTypes();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Self value: static_cast<int32_t>(0x0)
  static ::Zenject::__ZenjectBinding__BindTypes const Self;

  /// @brief Field AllInterfaces value: static_cast<int32_t>(0x1)
  static ::Zenject::__ZenjectBinding__BindTypes const AllInterfaces;

  /// @brief Field AllInterfacesAndSelf value: static_cast<int32_t>(0x2)
  static ::Zenject::__ZenjectBinding__BindTypes const AllInterfacesAndSelf;

  /// @brief Field BaseType value: static_cast<int32_t>(0x3)
  static ::Zenject::__ZenjectBinding__BindTypes const BaseType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ZenjectBinding__BindTypes, 0x4>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::ZenjectBinding
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(11155))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11156))
// CS Name: ::Zenject::ZenjectBinding*
class CORDL_TYPE ZenjectBinding : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BindTypes = ::Zenject::__ZenjectBinding__BindTypes;

  /// @brief Field _components, offset 0x18, size 0x8
  __declspec(property(get = __get__components, put = __set__components))::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> _components;

  /// @brief Field _identifier, offset 0x20, size 0x8
  __declspec(property(get = __get__identifier, put = __set__identifier))::StringW _identifier;

  /// @brief Field _useSceneContext, offset 0x28, size 0x1
  __declspec(property(get = __get__useSceneContext, put = __set__useSceneContext)) bool _useSceneContext;

  /// @brief Field _ifNotBound, offset 0x29, size 0x1
  __declspec(property(get = __get__ifNotBound, put = __set__ifNotBound)) bool _ifNotBound;

  /// @brief Field _context, offset 0x30, size 0x8
  __declspec(property(get = __get__context, put = __set__context))::Zenject::Context* _context;

  /// @brief Field _bindType, offset 0x38, size 0x4
  __declspec(property(get = __get__bindType, put = __set__bindType))::Zenject::__ZenjectBinding__BindTypes _bindType;

  __declspec(property(get = get_UseSceneContext)) bool UseSceneContext;

  __declspec(property(get = get_IfNotBound)) bool IfNotBound;

  __declspec(property(get = get_Context, put = set_Context))::Zenject::Context* Context;

  __declspec(property(get = get_Components))::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> Components;

  __declspec(property(get = get_Identifier))::StringW Identifier;

  __declspec(property(get = get_BindType))::Zenject::__ZenjectBinding__BindTypes BindType;

  constexpr ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*>& __get__components();

  constexpr ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> const& __get__components() const;

  constexpr void __set__components(::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> value);

  constexpr ::StringW& __get__identifier();

  constexpr ::StringW const& __get__identifier() const;

  constexpr void __set__identifier(::StringW value);

  constexpr bool& __get__useSceneContext();

  constexpr bool const& __get__useSceneContext() const;

  constexpr void __set__useSceneContext(bool value);

  constexpr bool& __get__ifNotBound();

  constexpr bool const& __get__ifNotBound() const;

  constexpr void __set__ifNotBound(bool value);

  constexpr ::Zenject::Context*& __get__context();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::Context*> const& __get__context() const;

  constexpr void __set__context(::Zenject::Context* value);

  constexpr ::Zenject::__ZenjectBinding__BindTypes& __get__bindType();

  constexpr ::Zenject::__ZenjectBinding__BindTypes const& __get__bindType() const;

  constexpr void __set__bindType(::Zenject::__ZenjectBinding__BindTypes value);

  /// @brief Method get_UseSceneContext addr 0x2ef5c18 size 0x8 virtual false final false
  inline bool get_UseSceneContext();

  /// @brief Method get_IfNotBound addr 0x2ef5c20 size 0x8 virtual false final false
  inline bool get_IfNotBound();

  /// @brief Method get_Context addr 0x2ef5c28 size 0x8 virtual false final false
  inline ::Zenject::Context* get_Context();

  /// @brief Method set_Context addr 0x2ef5c30 size 0x8 virtual false final false
  inline void set_Context(::Zenject::Context* value);

  /// @brief Method get_Components addr 0x2ef5c38 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> get_Components();

  /// @brief Method get_Identifier addr 0x2ef5c40 size 0x8 virtual false final false
  inline ::StringW get_Identifier();

  /// @brief Method get_BindType addr 0x2ef5c48 size 0x8 virtual false final false
  inline ::Zenject::__ZenjectBinding__BindTypes get_BindType();

  /// @brief Method Start addr 0x2ef5c50 size 0x4 virtual false final false
  inline void Start();

  static inline ::Zenject::ZenjectBinding* New_ctor();

  /// @brief Method .ctor addr 0x2ef5c54 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ef5cac size 0x178 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectBinding(ZenjectBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectBinding(ZenjectBinding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectBinding();

public:
  /// @brief Field _components, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Component*, ::Array<::UnityEngine::Component*>*> ____components;

  /// @brief Field _identifier, offset: 0x20, size: 0x8, def value: None
  ::StringW ____identifier;

  /// @brief Field _useSceneContext, offset: 0x28, size: 0x1, def value: None
  bool ____useSceneContext;

  /// @brief Field _ifNotBound, offset: 0x29, size: 0x1, def value: None
  bool ____ifNotBound;

  /// @brief Field _context, offset: 0x30, size: 0x8, def value: None
  ::Zenject::Context* ____context;

  /// @brief Field _bindType, offset: 0x38, size: 0x4, def value: None
  ::Zenject::__ZenjectBinding__BindTypes ____bindType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectBinding, 0x40>, "Size mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ZenjectBinding__BindTypes, "Zenject", "ZenjectBinding/BindTypes");
NEED_NO_BOX(::Zenject::ZenjectBinding);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectBinding*, "Zenject", "ZenjectBinding");
