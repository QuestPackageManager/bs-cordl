#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyInstanceInjector)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class LazyInstanceInjector;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::LazyInstanceInjector);
// Type: Zenject::LazyInstanceInjector
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11168))
// CS Name: ::Zenject::LazyInstanceInjector*
class CORDL_TYPE LazyInstanceInjector : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _instancesToInject, offset 0x18, size 0x8
  __declspec(property(get = __get__instancesToInject, put = __set__instancesToInject))::System::Collections::Generic::HashSet_1<::System::Object*>* _instancesToInject;

  __declspec(property(get = get_Instances))::System::Collections::Generic::IEnumerable_1<::System::Object*>* Instances;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& __get__instancesToInject();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Object*>*> const& __get__instancesToInject() const;

  constexpr void __set__instancesToInject(::System::Collections::Generic::HashSet_1<::System::Object*>* value);

  static inline ::Zenject::LazyInstanceInjector* New_ctor(::Zenject::DiContainer* container);

  /// @brief Method .ctor, addr 0x2f04158, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container);

  /// @brief Method get_Instances, addr 0x2f041e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Instances();

  /// @brief Method AddInstance, addr 0x2f041f0, size 0x58, virtual false, abstract: false, final false
  inline void AddInstance(::System::Object* instance);

  /// @brief Method AddInstances, addr 0x2f04248, size 0x58, virtual false, abstract: false, final false
  inline void AddInstances(::System::Collections::Generic::IEnumerable_1<::System::Object*>* instances);

  /// @brief Method LazyInject, addr 0x2f042a0, size 0x7c, virtual false, abstract: false, final false
  inline void LazyInject(::System::Object* instance);

  /// @brief Method LazyInjectAll, addr 0x2f0431c, size 0x21c, virtual false, abstract: false, final false
  inline void LazyInjectAll();

  // Ctor Parameters [CppParam { name: "", ty: "LazyInstanceInjector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyInstanceInjector(LazyInstanceInjector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyInstanceInjector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyInstanceInjector(LazyInstanceInjector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyInstanceInjector();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _instancesToInject, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Object*>* ____instancesToInject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::LazyInstanceInjector, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::LazyInstanceInjector, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::LazyInstanceInjector, ____instancesToInject) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::LazyInstanceInjector);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::LazyInstanceInjector*, "Zenject", "LazyInstanceInjector");
