#pragma once
// IWYU pragma private; include "Zenject/IFactoryProviderBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
CORDL_MODULE_EXPORT(IFactoryProviderBase_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class IFactoryProviderBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactoryProviderBase_1);
// Dependencies System.Guid, System.Object, Zenject.IProvider
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.IFactoryProviderBase`1<TContract>
class CORDL_TYPE IFactoryProviderBase_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Container, put = set_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_FactoryId, put = set_FactoryId)) ::System::Guid FactoryId;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field <Container>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Container_k__BackingField, put = __cordl_internal_set__Container_k__BackingField)) ::Zenject::DiContainer* _Container_k__BackingField;

  /// @brief Field <FactoryId>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__FactoryId_k__BackingField, put = __cordl_internal_set__FactoryId_k__BackingField)) ::System::Guid _FactoryId_k__BackingField;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::IFactoryProviderBase_1<TContract>* New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__Container_k__BackingField() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__Container_k__BackingField();

  constexpr ::System::Guid const& __cordl_internal_get__FactoryId_k__BackingField() const;

  constexpr ::System::Guid& __cordl_internal_get__FactoryId_k__BackingField();

  constexpr void __cordl_internal_set__Container_k__BackingField(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__FactoryId_k__BackingField(::System::Guid value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  /// @brief Method get_Container, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_FactoryId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Guid get_FactoryId();

  /// @brief Method get_IsCached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

  /// @brief Method set_Container, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Container(::Zenject::DiContainer* value);

  /// @brief Method set_FactoryId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_FactoryId(::System::Guid value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IFactoryProviderBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProviderBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFactoryProviderBase_1(IFactoryProviderBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProviderBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactoryProviderBase_1(IFactoryProviderBase_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12536 };

  /// @brief Field <FactoryId>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::System::Guid ____FactoryId_k__BackingField;

  /// @brief Field <Container>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____Container_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProviderBase_1, "Zenject", "IFactoryProviderBase`1");
