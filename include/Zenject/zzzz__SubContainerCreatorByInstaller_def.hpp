#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByInstaller)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
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
class SubContainerCreatorBindInfo;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByInstaller;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByInstaller);
// Type: Zenject::SubContainerCreatorByInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10385))
// CS Name: ::Zenject::SubContainerCreatorByInstaller*
class CORDL_TYPE SubContainerCreatorByInstaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field _installerType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__installerType, put = __cordl_internal_set__installerType))::System::Type* _installerType;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container))::Zenject::DiContainer* _container;

  /// @brief Field _extraArgs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__extraArgs, put = __cordl_internal_set__extraArgs))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArgs;

  /// @brief Field _containerBindInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__containerBindInfo, put = __cordl_internal_set__containerBindInfo))::Zenject::SubContainerCreatorBindInfo* _containerBindInfo;

  /// @brief Convert operator to "::Zenject::ISubContainerCreator"
  constexpr operator ::Zenject::ISubContainerCreator*() noexcept;

  /// @brief Convert to "::Zenject::ISubContainerCreator"
  constexpr ::Zenject::ISubContainerCreator* i___Zenject__ISubContainerCreator() noexcept;

  constexpr ::System::Type*& __cordl_internal_get__installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__installerType() const;

  constexpr void __cordl_internal_set__installerType(::System::Type* value);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get__extraArgs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __cordl_internal_get__extraArgs() const;

  constexpr void __cordl_internal_set__extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __cordl_internal_get__containerBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& __cordl_internal_get__containerBindInfo() const;

  constexpr void __cordl_internal_set__containerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  static inline ::Zenject::SubContainerCreatorByInstaller* New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Type* installerType,
                                                                    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs);

  /// @brief Method .ctor, addr 0x2f27134, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Type* installerType,
                    ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs);

  static inline ::Zenject::SubContainerCreatorByInstaller* New_ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Type* installerType);

  /// @brief Method .ctor, addr 0x2f27224, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SubContainerCreatorBindInfo* containerBindInfo, ::System::Type* installerType);

  /// @brief Method CreateSubContainer, addr 0x2f272c4, size 0x1a8, virtual true, abstract: false, final true
  inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::InjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByInstaller(SubContainerCreatorByInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByInstaller(SubContainerCreatorByInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByInstaller();

public:
  /// @brief Field _installerType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____installerType;

  /// @brief Field _container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _extraArgs, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ____extraArgs;

  /// @brief Field _containerBindInfo, offset: 0x28, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ____containerBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByInstaller, ____installerType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByInstaller, ____container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByInstaller, ____extraArgs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByInstaller, ____containerBindInfo) == 0x28, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByInstaller*, "Zenject", "SubContainerCreatorByInstaller");
