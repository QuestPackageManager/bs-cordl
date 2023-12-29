#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ResolveProvider)
namespace System {
class Action;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
struct InjectSources;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Zenject {
class ResolveProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ResolveProvider);
// Type: Zenject::ResolveProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15662)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11163))
// CS Name: ::Zenject::ResolveProvider*
class CORDL_TYPE ResolveProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _identifier, offset 0x10, size 0x8
  __declspec(property(get = __get__identifier, put = __set__identifier))::System::Object* _identifier;

  /// @brief Field _container, offset 0x18, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _contractType, offset 0x20, size 0x8
  __declspec(property(get = __get__contractType, put = __set__contractType))::System::Type* _contractType;

  /// @brief Field _isOptional, offset 0x28, size 0x1
  __declspec(property(get = __get__isOptional, put = __set__isOptional)) bool _isOptional;

  /// @brief Field _source, offset 0x2c, size 0x4
  __declspec(property(get = __get__source, put = __set__source))::Zenject::InjectSources _source;

  /// @brief Field _matchAll, offset 0x30, size 0x1
  __declspec(property(get = __get__matchAll, put = __set__matchAll)) bool _matchAll;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::System::Object*& __get__identifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__identifier() const;

  constexpr void __set__identifier(::System::Object* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Type*& __get__contractType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__contractType() const;

  constexpr void __set__contractType(::System::Type* value);

  constexpr bool& __get__isOptional();

  constexpr bool const& __get__isOptional() const;

  constexpr void __set__isOptional(bool value);

  constexpr ::Zenject::InjectSources& __get__source();

  constexpr ::Zenject::InjectSources const& __get__source() const;

  constexpr void __set__source(::Zenject::InjectSources value);

  constexpr bool& __get__matchAll();

  constexpr bool const& __get__matchAll() const;

  constexpr void __set__matchAll(bool value);

  static inline ::Zenject::ResolveProvider* New_ctor(::System::Type* contractType, ::Zenject::DiContainer* container, ::System::Object* identifier, bool isOptional, ::Zenject::InjectSources source,
                                                     bool matchAll);

  /// @brief Method .ctor addr 0x2da2024 size 0x5c virtual false final false
  inline void _ctor(::System::Type* contractType, ::Zenject::DiContainer* container, ::System::Object* identifier, bool isOptional, ::Zenject::InjectSources source, bool matchAll);

  /// @brief Method get_IsCached addr 0x2da2080 size 0x8 virtual true final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType addr 0x2da2088 size 0x8 virtual true final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType addr 0x2da2090 size 0x8 virtual true final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x2da2098 size 0x1a0 virtual true final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetSubContext addr 0x2da2238 size 0x44 virtual false final false
  inline ::Zenject::InjectContext* GetSubContext(::Zenject::InjectContext* parent);

  // Ctor Parameters [CppParam { name: "", ty: "ResolveProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResolveProvider(ResolveProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResolveProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResolveProvider(ResolveProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResolveProvider();

public:
  /// @brief Field _identifier, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____identifier;

  /// @brief Field _container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _contractType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____contractType;

  /// @brief Field _isOptional, offset: 0x28, size: 0x1, def value: None
  bool ____isOptional;

  /// @brief Field _source, offset: 0x2c, size: 0x4, def value: None
  ::Zenject::InjectSources ____source;

  /// @brief Field _matchAll, offset: 0x30, size: 0x1, def value: None
  bool ____matchAll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ResolveProvider, 0x38>, "Size mismatch!");

static_assert(offsetof(::Zenject::ResolveProvider, ____identifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ResolveProvider, ____container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::ResolveProvider, ____contractType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::ResolveProvider, ____isOptional) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::ResolveProvider, ____source) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Zenject::ResolveProvider, ____matchAll) == 0x30, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ResolveProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ResolveProvider*, "Zenject", "ResolveProvider");
