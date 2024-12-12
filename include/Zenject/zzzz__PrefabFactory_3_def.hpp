#pragma once
// IWYU pragma private; include "Zenject/PrefabFactory_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
CORDL_MODULE_EXPORT(PrefabFactory_3)
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
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename P1, typename P2, typename T> class PrefabFactory_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PrefabFactory_3);
// Dependencies System.Object, Zenject.IFactory, Zenject.IFactory`4<TParam1, TParam2, TParam3, TValue>
namespace Zenject {
// cpp template
template <typename P1, typename P2, typename T>
// Is value type: false
// CS Name: Zenject.PrefabFactory`3<P1,P2,T>
class CORDL_TYPE PrefabFactory_3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Convert operator to "::Zenject::IFactory"
  constexpr operator ::Zenject::IFactory*() noexcept;

  /// @brief Convert operator to "::Zenject::IFactory_4<::UnityEngine::Object*,P1,P2,T>"
  constexpr operator ::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>*() noexcept;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Create(::UnityEngine::Object* prefab, P1 param, P2 param2);

  static inline ::Zenject::PrefabFactory_3<P1, P2, T>* New_ctor();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenFieldSetter0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Container, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Convert to "::Zenject::IFactory"
  constexpr ::Zenject::IFactory* i___Zenject__IFactory() noexcept;

  /// @brief Convert to "::Zenject::IFactory_4<::UnityEngine::Object*,P1,P2,T>"
  constexpr ::Zenject::IFactory_4<::UnityEngine::Object*, P1, P2, T>* i___Zenject__IFactory_4___UnityEngine__Object__P1_P2_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabFactory_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabFactory_3(PrefabFactory_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabFactory_3(PrefabFactory_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12439 };

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PrefabFactory_3, "Zenject", "PrefabFactory`3");
