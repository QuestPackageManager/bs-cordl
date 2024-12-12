#pragma once
// IWYU pragma private; include "Zenject/ConcreteBinderGeneric_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FromBinderGeneric_1_def.hpp"
CORDL_MODULE_EXPORT(ConcreteBinderGeneric_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1___c__DisplayClass5_0;
}
namespace Zenject {
class ConventionSelectTypesBinder;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template <typename TContract> class FromBinderGeneric_1;
}
namespace Zenject {
class FromBinderNonGeneric;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1___c__DisplayClass5_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ConcreteBinderGeneric_1);
MARK_GEN_REF_PTR_T(::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.ConcreteBinderGeneric`1/<>c__DisplayClass5_0<TContract>
class CORDL_TYPE ConcreteBinderGeneric_1___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field concreteType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_concreteType, put = __cordl_internal_set_concreteType)) ::System::Type* concreteType;

  static inline ::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>* New_ctor();

  /// @brief Method <To>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _To_b__1(::System::Type* contractType);

  constexpr ::System::Type* const& __cordl_internal_get_concreteType() const;

  constexpr ::System::Type*& __cordl_internal_get_concreteType();

  constexpr void __cordl_internal_set_concreteType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteBinderGeneric_1___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteBinderGeneric_1___c__DisplayClass5_0(ConcreteBinderGeneric_1___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteBinderGeneric_1___c__DisplayClass5_0(ConcreteBinderGeneric_1___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12007 };

  /// @brief Field concreteType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___concreteType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies Zenject.FromBinderGeneric`1<TContract>
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.ConcreteBinderGeneric`1<TContract>
class CORDL_TYPE ConcreteBinderGeneric_1 : public ::Zenject::FromBinderGeneric_1<TContract> {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0<TContract>;

  static inline ::Zenject::ConcreteBinderGeneric_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline ::Zenject::FromBinderGeneric_1<TConcrete>* To();

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* To(::ArrayW<::System::Type*, ::Array<::System::Type*>*> concreteTypes);

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* To(::System::Collections::Generic::IEnumerable_1<::System::Type*>* concreteTypes);

  /// @brief Method To, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderNonGeneric* To(::System::Action_1<::Zenject::ConventionSelectTypesBinder*>* generator);

  /// @brief Method ToSelf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::FromBinderGeneric_1<TContract>* ToSelf();

  /// @brief Method <ToSelf>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _ToSelf_b__1_0(::Zenject::DiContainer* container, ::System::Type* type);

  /// @brief Method <To>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _To_b__5_0(::System::Type* concreteType);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcreteBinderGeneric_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcreteBinderGeneric_1(ConcreteBinderGeneric_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcreteBinderGeneric_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcreteBinderGeneric_1(ConcreteBinderGeneric_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12008 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ConcreteBinderGeneric_1, "Zenject", "ConcreteBinderGeneric`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ConcreteBinderGeneric_1___c__DisplayClass5_0, "Zenject", "ConcreteBinderGeneric`1/<>c__DisplayClass5_0");
