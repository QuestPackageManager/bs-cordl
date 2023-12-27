#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PrefabFactory_3)
namespace UnityEngine {
class Object;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> class IFactory_4;
}
namespace System {
class Object;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template <typename P1, typename P2, typename T> class PrefabFactory_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PrefabFactory_3);
// Type: Zenject::PrefabFactory`3
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename P1, typename P2, typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11102))
// CS Name: ::Zenject::PrefabFactory`3<P1,P2,T>*
class CORDL_TYPE PrefabFactory_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  __declspec(property(get = get_Container))::Zenject::DiContainer* Container;

  /// @brief Convert operator to "::Zenject::IFactory_4<::UnityEngine::Object*,P1,P2,T>"
  constexpr operator ::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>*() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  /// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T Create(::UnityEngine::Object* prefab, P1 param, P2 param2);

  static inline ::Zenject::PrefabFactory_3<P1, P2, T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenFieldSetter0 addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabFactory_3(PrefabFactory_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabFactory_3(PrefabFactory_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabFactory_3();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PrefabFactory_3, "Zenject", "PrefabFactory`3");
