#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ScopableBindingFinalizer)
namespace Zenject {
class __ScopableBindingFinalizer____c__DisplayClass3_0;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace Zenject {
class __ScopableBindingFinalizer____c__DisplayClass4_0;
}
namespace Zenject {
class IProvider;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class BindInfo;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ScopableBindingFinalizer;
}
namespace Zenject {
class __ScopableBindingFinalizer____c__DisplayClass3_0;
}
namespace Zenject {
class __ScopableBindingFinalizer____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ScopableBindingFinalizer);
MARK_REF_PTR_T(::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0);
MARK_REF_PTR_T(::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10967))
// CS Name: ::ScopableBindingFinalizer::<>c__DisplayClass3_0*
class CORDL_TYPE __ScopableBindingFinalizer____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::ScopableBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __get_container, put = __set_container))::Zenject::DiContainer* container;

  constexpr ::Zenject::ScopableBindingFinalizer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ScopableBindingFinalizer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::ScopableBindingFinalizer* value);

  constexpr ::Zenject::DiContainer*& __get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get_container() const;

  constexpr void __set_container(::Zenject::DiContainer* value);

  static inline ::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor addr 0x2ee629c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingConcrete>b__0 addr 0x2ee62ac size 0x34 virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingConcrete_b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);

  /// @brief Method __zenCreate addr 0x2ee62e0 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee633c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ScopableBindingFinalizer____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScopableBindingFinalizer____c__DisplayClass3_0(__ScopableBindingFinalizer____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScopableBindingFinalizer____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScopableBindingFinalizer____c__DisplayClass3_0(__ScopableBindingFinalizer____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScopableBindingFinalizer____c__DisplayClass3_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ScopableBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10968))
// CS Name: ::ScopableBindingFinalizer::<>c__DisplayClass4_0*
class CORDL_TYPE __ScopableBindingFinalizer____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::ScopableBindingFinalizer* __4__this;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __get_container, put = __set_container))::Zenject::DiContainer* container;

  constexpr ::Zenject::ScopableBindingFinalizer*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ScopableBindingFinalizer*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::ScopableBindingFinalizer* value);

  constexpr ::Zenject::DiContainer*& __get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get_container() const;

  constexpr void __set_container(::Zenject::DiContainer* value);

  static inline ::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0* New_ctor();

  /// @brief Method .ctor addr 0x2ee62a4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FinalizeBindingSelf>b__0 addr 0x2ee64fc size 0x34 virtual false final false
  inline ::Zenject::IProvider* _FinalizeBindingSelf_b__0(::Zenject::DiContainer* _, ::System::Type* contractType);

  /// @brief Method __zenCreate addr 0x2ee6530 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee658c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ScopableBindingFinalizer____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScopableBindingFinalizer____c__DisplayClass4_0(__ScopableBindingFinalizer____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScopableBindingFinalizer____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScopableBindingFinalizer____c__DisplayClass4_0(__ScopableBindingFinalizer____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScopableBindingFinalizer____c__DisplayClass4_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ScopableBindingFinalizer* _____4__this;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::ScopableBindingFinalizer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10969))
// CS Name: ::Zenject::ScopableBindingFinalizer*
class CORDL_TYPE ScopableBindingFinalizer : public ::Zenject::ProviderBindingFinalizer {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0;

  using __c__DisplayClass3_0 = ::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0;

  /// @brief Field _providerFactory, offset 0x18, size 0x8
  __declspec(property(get = __get__providerFactory, put = __set__providerFactory))::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* _providerFactory;

  constexpr ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*& __get__providerFactory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>*> const& __get__providerFactory() const;

  constexpr void __set__providerFactory(::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* value);

  static inline ::Zenject::ScopableBindingFinalizer* New_ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method .ctor addr 0x2ee5f98 size 0x2c virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* providerFactory);

  /// @brief Method OnFinalizeBinding addr 0x2ee5fc4 size 0x84 virtual true final false
  inline void OnFinalizeBinding(::Zenject::DiContainer* container);

  /// @brief Method FinalizeBindingConcrete addr 0x2ee6158 size 0x144 virtual false final false
  inline void FinalizeBindingConcrete(::Zenject::DiContainer* container, ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes);

  /// @brief Method FinalizeBindingSelf addr 0x2ee6048 size 0x110 virtual false final false
  inline void FinalizeBindingSelf(::Zenject::DiContainer* container);

  // Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScopableBindingFinalizer(ScopableBindingFinalizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScopableBindingFinalizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScopableBindingFinalizer(ScopableBindingFinalizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScopableBindingFinalizer();

public:
  /// @brief Field _providerFactory, offset: 0x18, size: 0x8, def value: None
  ::System::Func_3<::Zenject::DiContainer*, ::System::Type*, ::Zenject::IProvider*>* ____providerFactory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ScopableBindingFinalizer, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ScopableBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScopableBindingFinalizer*, "Zenject", "ScopableBindingFinalizer");
NEED_NO_BOX(::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ScopableBindingFinalizer____c__DisplayClass3_0*, "Zenject", "ScopableBindingFinalizer/<>c__DisplayClass3_0");
NEED_NO_BOX(::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ScopableBindingFinalizer____c__DisplayClass4_0*, "Zenject", "ScopableBindingFinalizer/<>c__DisplayClass4_0");
