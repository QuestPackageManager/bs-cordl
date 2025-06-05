#pragma once
// IWYU pragma private; include "Zenject/LazyInstanceInjector.hpp"
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
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.LazyInstanceInjector
class CORDL_TYPE LazyInstanceInjector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Instances)) ::System::Collections::Generic::IEnumerable_1<::System::Object*>* Instances;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _instancesToInject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instancesToInject, put = __cordl_internal_set__instancesToInject)) ::System::Collections::Generic::HashSet_1<::System::Object*>* _instancesToInject;

  /// @brief Method AddInstance, addr 0x4b3a748, size 0x58, virtual false, abstract: false, final false
  inline void AddInstance(::System::Object* instance);

  /// @brief Method AddInstances, addr 0x4b3a7a0, size 0x58, virtual false, abstract: false, final false
  inline void AddInstances(::System::Collections::Generic::IEnumerable_1<::System::Object*>* instances);

  /// @brief Method LazyInject, addr 0x4b3a7f8, size 0x7c, virtual false, abstract: false, final false
  inline void LazyInject(::System::Object* instance);

  /// @brief Method LazyInjectAll, addr 0x4b3a874, size 0x21c, virtual false, abstract: false, final false
  inline void LazyInjectAll();

  static inline ::Zenject::LazyInstanceInjector* New_ctor(::Zenject::DiContainer* container);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>* const& __cordl_internal_get__instancesToInject() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Object*>*& __cordl_internal_get__instancesToInject();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__instancesToInject(::System::Collections::Generic::HashSet_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x4b3a6b8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container);

  /// @brief Method get_Instances, addr 0x4b3a740, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Object*>* get_Instances();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyInstanceInjector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyInstanceInjector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyInstanceInjector(LazyInstanceInjector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyInstanceInjector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyInstanceInjector(LazyInstanceInjector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12510 };

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _instancesToInject, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Object*>* ____instancesToInject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::LazyInstanceInjector, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::LazyInstanceInjector, ____instancesToInject) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::LazyInstanceInjector, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::LazyInstanceInjector);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::LazyInstanceInjector*, "Zenject", "LazyInstanceInjector");
