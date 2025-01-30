#pragma once
// IWYU pragma private; include "Zenject/SubContainerDependencyProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
CORDL_MODULE_EXPORT(SubContainerDependencyProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
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
class SubContainerDependencyProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerDependencyProvider);
// Dependencies System.Object, Zenject.IProvider
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerDependencyProvider
class CORDL_TYPE SubContainerDependencyProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _dependencyType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dependencyType, put = __cordl_internal_set__dependencyType)) ::System::Type* _dependencyType;

  /// @brief Field _identifier, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__identifier, put = __cordl_internal_set__identifier)) ::System::Object* _identifier;

  /// @brief Field _resolveAll, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__resolveAll, put = __cordl_internal_set__resolveAll)) bool _resolveAll;

  /// @brief Field _subContainerCreator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__subContainerCreator, put = __cordl_internal_set__subContainerCreator)) ::Zenject::ISubContainerCreator* _subContainerCreator;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method CreateSubContext, addr 0x4b441bc, size 0x3c, virtual false, abstract: false, final false
  inline ::Zenject::InjectContext* CreateSubContext(::Zenject::InjectContext* parent, ::Zenject::DiContainer* subContainer);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4b441f8, size 0x1a4, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4b441b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::SubContainerDependencyProvider* New_ctor(::System::Type* dependencyType, ::System::Object* identifier, ::Zenject::ISubContainerCreator* subContainerCreator,
                                                                    bool resolveAll);

  constexpr ::System::Type* const& __cordl_internal_get__dependencyType() const;

  constexpr ::System::Type*& __cordl_internal_get__dependencyType();

  constexpr ::System::Object* const& __cordl_internal_get__identifier() const;

  constexpr ::System::Object*& __cordl_internal_get__identifier();

  constexpr bool const& __cordl_internal_get__resolveAll() const;

  constexpr bool& __cordl_internal_get__resolveAll();

  constexpr ::Zenject::ISubContainerCreator* const& __cordl_internal_get__subContainerCreator() const;

  constexpr ::Zenject::ISubContainerCreator*& __cordl_internal_get__subContainerCreator();

  constexpr void __cordl_internal_set__dependencyType(::System::Type* value);

  constexpr void __cordl_internal_set__identifier(::System::Object* value);

  constexpr void __cordl_internal_set__resolveAll(bool value);

  constexpr void __cordl_internal_set__subContainerCreator(::Zenject::ISubContainerCreator* value);

  /// @brief Method .ctor, addr 0x4b44160, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* dependencyType, ::System::Object* identifier, ::Zenject::ISubContainerCreator* subContainerCreator, bool resolveAll);

  /// @brief Method get_IsCached, addr 0x4b441a4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4b441ac, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerDependencyProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerDependencyProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerDependencyProvider(SubContainerDependencyProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerDependencyProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerDependencyProvider(SubContainerDependencyProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12637 };

  /// @brief Field _subContainerCreator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ISubContainerCreator* ____subContainerCreator;

  /// @brief Field _dependencyType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____dependencyType;

  /// @brief Field _identifier, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____identifier;

  /// @brief Field _resolveAll, offset: 0x28, size: 0x1, def value: None
  bool ____resolveAll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerDependencyProvider, ____subContainerCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerDependencyProvider, ____dependencyType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerDependencyProvider, ____identifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerDependencyProvider, ____resolveAll) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerDependencyProvider, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerDependencyProvider*, "Zenject", "SubContainerDependencyProvider");
