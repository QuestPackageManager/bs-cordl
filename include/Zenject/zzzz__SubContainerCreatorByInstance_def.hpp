#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByInstance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByInstance)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstance;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByInstance);
// Type: Zenject::SubContainerCreatorByInstance
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::SubContainerCreatorByInstance*
class CORDL_TYPE SubContainerCreatorByInstance : public ::System::Object {
public:
  // Declarations
  /// @brief Field _subcontainer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__subcontainer, put = __cordl_internal_set__subcontainer)) ::Zenject::DiContainer* _subcontainer;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  /// @brief Method CreateSubContainer, addr 0x4ada67c, size 0x68, virtual true, abstract: false, final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  static inline ::Zenject::SubContainerCreatorByInstance* New_ctor(::Zenject::DiContainer* subcontainer);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__subcontainer();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__subcontainer() const;

  constexpr void __cordl_internal_set__subcontainer(::Zenject::DiContainer* value);

  /// @brief Method .ctor, addr 0x4ada654, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* subcontainer);

  /// @brief Convert to "::Zenject::ISubContainerCreator"
  constexpr ::Zenject::ISubContainerCreator* i___Zenject__ISubContainerCreator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByInstance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByInstance(SubContainerCreatorByInstance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByInstance(SubContainerCreatorByInstance const&) = delete;

  /// @brief Field _subcontainer, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____subcontainer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12548 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByInstance, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByInstance, ____subcontainer) == 0x10, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByInstance);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByInstance*, "Zenject", "SubContainerCreatorByInstance");
