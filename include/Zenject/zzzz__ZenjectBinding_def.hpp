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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ZenjectBinding__BindTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ZenjectBinding__BindTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllInterfaces value: static_cast<int32_t>(0x1)
  static ::Zenject::__ZenjectBinding__BindTypes const AllInterfaces;

  /// @brief Field AllInterfacesAndSelf value: static_cast<int32_t>(0x2)
  static ::Zenject::__ZenjectBinding__BindTypes const AllInterfacesAndSelf;

  /// @brief Field BaseType value: static_cast<int32_t>(0x3)
  static ::Zenject::__ZenjectBinding__BindTypes const BaseType;

  /// @brief Field Self value: static_cast<int32_t>(0x0)
  static ::Zenject::__ZenjectBinding__BindTypes const Self;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ZenjectBinding__BindTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ZenjectBinding__BindTypes, value__) == 0x0, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::ZenjectBinding
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ZenjectBinding*
class CORDL_TYPE ZenjectBinding : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BindTypes = ::Zenject::__ZenjectBinding__BindTypes;

  __declspec(property(get = get_BindType))::Zenject::__ZenjectBinding__BindTypes BindType;

  __declspec(property(get = get_Components))::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> Components;

  __declspec(property(get = get_Context, put = set_Context))::UnityW<::Zenject::Context> Context;

  __declspec(property(get = get_Identifier))::StringW Identifier;

  __declspec(property(get = get_IfNotBound)) bool IfNotBound;

  __declspec(property(get = get_UseSceneContext)) bool UseSceneContext;

  /// @brief Field _bindType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__bindType, put = __cordl_internal_set__bindType))::Zenject::__ZenjectBinding__BindTypes _bindType;

  /// @brief Field _components, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__components,
                      put = __cordl_internal_set__components))::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> _components;

  /// @brief Field _context, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context))::UnityW<::Zenject::Context> _context;

  /// @brief Field _identifier, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__identifier, put = __cordl_internal_set__identifier))::StringW _identifier;

  /// @brief Field _ifNotBound, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__ifNotBound, put = __cordl_internal_set__ifNotBound)) bool _ifNotBound;

  /// @brief Field _useSceneContext, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__useSceneContext, put = __cordl_internal_set__useSceneContext)) bool _useSceneContext;

  static inline ::Zenject::ZenjectBinding* New_ctor();

  /// @brief Method Start, addr 0x305ccf8, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::Zenject::__ZenjectBinding__BindTypes const& __cordl_internal_get__bindType() const;

  constexpr ::Zenject::__ZenjectBinding__BindTypes& __cordl_internal_get__bindType();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> const& __cordl_internal_get__components() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*>& __cordl_internal_get__components();

  constexpr ::UnityW<::Zenject::Context> const& __cordl_internal_get__context() const;

  constexpr ::UnityW<::Zenject::Context>& __cordl_internal_get__context();

  constexpr ::StringW const& __cordl_internal_get__identifier() const;

  constexpr ::StringW& __cordl_internal_get__identifier();

  constexpr bool const& __cordl_internal_get__ifNotBound() const;

  constexpr bool& __cordl_internal_get__ifNotBound();

  constexpr bool const& __cordl_internal_get__useSceneContext() const;

  constexpr bool& __cordl_internal_get__useSceneContext();

  constexpr void __cordl_internal_set__bindType(::Zenject::__ZenjectBinding__BindTypes value);

  constexpr void __cordl_internal_set__components(::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> value);

  constexpr void __cordl_internal_set__context(::UnityW<::Zenject::Context> value);

  constexpr void __cordl_internal_set__identifier(::StringW value);

  constexpr void __cordl_internal_set__ifNotBound(bool value);

  constexpr void __cordl_internal_set__useSceneContext(bool value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x305cd54, size 0x178, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x305ccfc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindType, addr 0x305ccf0, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::__ZenjectBinding__BindTypes get_BindType();

  /// @brief Method get_Components, addr 0x305cce0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> get_Components();

  /// @brief Method get_Context, addr 0x305ccd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Zenject::Context> get_Context();

  /// @brief Method get_Identifier, addr 0x305cce8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Identifier();

  /// @brief Method get_IfNotBound, addr 0x305ccc8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IfNotBound();

  /// @brief Method get_UseSceneContext, addr 0x305ccc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseSceneContext();

  /// @brief Method set_Context, addr 0x305ccd8, size 0x8, virtual false, abstract: false, final false
  inline void set_Context(::Zenject::Context* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectBinding(ZenjectBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectBinding(ZenjectBinding const&) = delete;

  /// @brief Field _components, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Component>, ::Array<::UnityW<::UnityEngine::Component>>*> ____components;

  /// @brief Field _identifier, offset: 0x20, size: 0x8, def value: None
  ::StringW ____identifier;

  /// @brief Field _useSceneContext, offset: 0x28, size: 0x1, def value: None
  bool ____useSceneContext;

  /// @brief Field _ifNotBound, offset: 0x29, size: 0x1, def value: None
  bool ____ifNotBound;

  /// @brief Field _context, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::Zenject::Context> ____context;

  /// @brief Field _bindType, offset: 0x38, size: 0x4, def value: None
  ::Zenject::__ZenjectBinding__BindTypes ____bindType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ZenjectBinding, 0x40>, "Size mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____components) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____identifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____useSceneContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____ifNotBound) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____context) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::ZenjectBinding, ____bindType) == 0x38, "Offset mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ZenjectBinding__BindTypes, "Zenject", "ZenjectBinding/BindTypes");
NEED_NO_BOX(::Zenject::ZenjectBinding);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectBinding*, "Zenject", "ZenjectBinding");
