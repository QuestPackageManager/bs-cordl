#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByMethodBase)
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByMethodBase;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByMethodBase);
// Type: Zenject::SubContainerCreatorByMethodBase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11246))
// CS Name: ::Zenject::SubContainerCreatorByMethodBase*
class CORDL_TYPE SubContainerCreatorByMethodBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _containerBindInfo, offset 0x18, size 0x8
  __declspec(property(get = __get__containerBindInfo, put = __set__containerBindInfo))::Zenject::SubContainerCreatorBindInfo* _containerBindInfo;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __get__containerBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& __get__containerBindInfo() const;

  constexpr void __set__containerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  static inline ::Zenject::SubContainerCreatorByMethodBase* New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo);

  /// @brief Method .ctor, addr 0x2f0b764, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo);

  /// @brief Method CreateSubContainer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  /// @brief Method CreateEmptySubContainer, addr 0x2f0b790, size 0x3c, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* CreateEmptySubContainer();

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethodBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByMethodBase(SubContainerCreatorByMethodBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByMethodBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByMethodBase(SubContainerCreatorByMethodBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByMethodBase();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _containerBindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ____containerBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByMethodBase, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByMethodBase, ____container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByMethodBase, ____containerBindInfo) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByMethodBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByMethodBase*, "Zenject", "SubContainerCreatorByMethodBase");
