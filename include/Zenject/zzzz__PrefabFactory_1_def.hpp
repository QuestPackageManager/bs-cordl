#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PrefabFactory_1)
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template <typename TParam1, typename TValue> class IFactory_2;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename T> class PrefabFactory_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PrefabFactory_1);
// Type: Zenject::PrefabFactory`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11100))
// CS Name: ::Zenject::PrefabFactory`1<T>*
class CORDL_TYPE PrefabFactory_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  /// @brief Convert operator to "::Zenject::IFactory_2<::UnityW<::UnityEngine::Object>,T>"
  constexpr operator ::Zenject::IFactory_2<::UnityW<::UnityEngine::Object>, T>*() noexcept;

  /// @brief Convert to "::Zenject::IFactory_2<::UnityW<::UnityEngine::Object>,T>"
  constexpr ::Zenject::IFactory_2<::UnityW<::UnityEngine::Object>, T>* i___Zenject__IFactory_2___UnityW___UnityEngine__Object__T_() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  /// @brief Method get_Container, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Create(::UnityEngine::Object* prefab);

  static inline ::Zenject::PrefabFactory_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenFieldSetter0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabFactory_1(PrefabFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabFactory_1(PrefabFactory_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabFactory_1();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PrefabFactory_1, "Zenject", "PrefabFactory`1");
