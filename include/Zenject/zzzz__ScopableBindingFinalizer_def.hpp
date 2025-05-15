#pragma once
// IWYU pragma private; include "Zenject/ScopableBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(ScopableBindingFinalizer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
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
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class ScopableBindingFinalizer___c__DisplayClass3_0;
}
namespace Zenject {
class ScopableBindingFinalizer___c__DisplayClass4_0;
}
// Forward declare root types
namespace Zenject {
class ScopableBindingFinalizer;
}
namespace Zenject {
class ScopableBindingFinalizer___c__DisplayClass3_0;
}
namespace Zenject {
class ScopableBindingFinalizer___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ScopableBindingFinalizer);
MARK_REF_PTR_T(::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0);
MARK_REF_PTR_T(::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ScopableBindingFinalizer/<>c__DisplayClass3_0
class CORDL_TYPE ScopableBindingFinalizer___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::ScopableBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0* New_ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0, addr 0x4b1dbb4, size 0x34, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  constexpr ::Zenject::ScopableBindingFinalizer* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::ScopableBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___4__this(::Zenject::ScopableBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b1dbe8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1dc3c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1dba4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopableBindingFinalizer___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScopableBindingFinalizer___c__DisplayClass3_0(ScopableBindingFinalizer___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScopableBindingFinalizer___c__DisplayClass3_0(ScopableBindingFinalizer___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12309 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ScopableBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0, ___container) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ScopableBindingFinalizer/<>c__DisplayClass4_0
class CORDL_TYPE ScopableBindingFinalizer___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::ScopableBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  static inline ::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0* New_ctor();

  /// @brief Method <FinalizeBindingSelf>b__0, addr 0x4b1ddf4, size 0x34, virtual false, abstract: false, final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  constexpr ::Zenject::ScopableBindingFinalizer* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::ScopableBindingFinalizer*& __cordl_internal_get___4__this();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr void __cordl_internal_set___4__this(::Zenject::ScopableBindingFinalizer* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  /// @brief Method __zenCreate, addr 0x4b1de28, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b1de7c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b1dbac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopableBindingFinalizer___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScopableBindingFinalizer___c__DisplayClass4_0(ScopableBindingFinalizer___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScopableBindingFinalizer___c__DisplayClass4_0(ScopableBindingFinalizer___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12310 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ScopableBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0, ___container) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies Zenject.ProviderBindingFinalizer
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ScopableBindingFinalizer
class CORDL_TYPE ScopableBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0;

  /// @brief Field _providerFactory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__providerFactory,
                      put = __cordl_internal_set__providerFactory)) ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* _providerFactory;

  /// @brief Method FinalizeBindingConcrete, addr 0x4b1da64, size 0x140, virtual false, abstract: false, final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf, addr 0x4b1d958, size 0x10c, virtual false, abstract: false, final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  static inline ::Zenject::ScopableBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method OnFinalizeBinding, addr 0x4b1d8d4, size 0x84, virtual true, abstract: false, final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  constexpr ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* const& __cordl_internal_get__providerFactory() const;

  constexpr ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*& __cordl_internal_get__providerFactory();

  constexpr void __cordl_internal_set__providerFactory(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value);

  /// @brief Method .ctor, addr 0x4b1d8a8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopableBindingFinalizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScopableBindingFinalizer(ScopableBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScopableBindingFinalizer(ScopableBindingFinalizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12311 };

  /// @brief Field _providerFactory, offset: 0x18, size: 0x8, def value: None
  ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* ____providerFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ScopableBindingFinalizer, ____providerFactory) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ScopableBindingFinalizer, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ScopableBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScopableBindingFinalizer*, "Zenject", "ScopableBindingFinalizer");
NEED_NO_BOX(::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScopableBindingFinalizer___c__DisplayClass3_0*, "Zenject", "ScopableBindingFinalizer/<>c__DisplayClass3_0");
NEED_NO_BOX(::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScopableBindingFinalizer___c__DisplayClass4_0*, "Zenject", "ScopableBindingFinalizer/<>c__DisplayClass4_0");
