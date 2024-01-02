#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(BindSignalFromBinder_2)
namespace Zenject {
class BindStatement;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template <typename TObject, typename TSignal> class __BindSignalFromBinder_2____c__DisplayClass8_0;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template <typename TObject, typename TSignal> class __BindSignalFromBinder_2____c;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
template <typename TContract> class ConcreteBinderGeneric_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Zenject {
template <typename TObject, typename TSignal> class BindSignalFromBinder_2;
}
namespace Zenject {
template <typename TObject, typename TSignal> class __BindSignalFromBinder_2____c;
}
namespace Zenject {
template <typename TObject, typename TSignal> class __BindSignalFromBinder_2____c__DisplayClass8_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::BindSignalFromBinder_2);
MARK_GEN_REF_PTR_T(::Zenject::__BindSignalFromBinder_2____c);
MARK_GEN_REF_PTR_T(::Zenject::__BindSignalFromBinder_2____c__DisplayClass8_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TObject, typename TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10637))
// CS Name: ::BindSignalFromBinder`2::<>c<TObject,TSignal>*
class CORDL_TYPE __BindSignalFromBinder_2____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__BindSignalFromBinder_2____c<TObject, TSignal>* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* __9__7_0;

  static inline void setStaticF___9(::Zenject::__BindSignalFromBinder_2____c<TObject, TSignal>* value);

  static inline ::Zenject::__BindSignalFromBinder_2____c<TObject, TSignal>* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* value);

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* getStaticF___9__5_0();

  static inline void setStaticF___9__6_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* value);

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* getStaticF___9__6_0();

  static inline void setStaticF___9__7_0(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* value);

  static inline ::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* getStaticF___9__7_0();

  static inline ::Zenject::__BindSignalFromBinder_2____c<TObject, TSignal>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <FromResolve>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromResolve_b__5_0(::Zenject::ConcreteBinderGeneric_1<TObject>* x);

  /// @brief Method <FromResolveAll>b__6_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromResolveAll_b__6_0(::Zenject::ConcreteBinderGeneric_1<TObject>* x);

  /// @brief Method <FromNew>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _FromNew_b__7_0(::Zenject::ConcreteBinderGeneric_1<TObject>* x);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__BindSignalFromBinder_2____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindSignalFromBinder_2____c(__BindSignalFromBinder_2____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindSignalFromBinder_2____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindSignalFromBinder_2____c(__BindSignalFromBinder_2____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindSignalFromBinder_2____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TObject, typename TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10638))
// CS Name: ::BindSignalFromBinder`2::<>c__DisplayClass8_0<TObject,TSignal>*
class CORDL_TYPE __BindSignalFromBinder_2____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::System::Object* obj;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::BindSignalFromBinder_2<TObject, TSignal>* __4__this;

  constexpr ::System::Object*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_obj() const;

  constexpr void __set_obj(::System::Object* value);

  constexpr ::Zenject::BindSignalFromBinder_2<TObject, TSignal>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindSignalFromBinder_2<TObject, TSignal>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::BindSignalFromBinder_2<TObject, TSignal>* value);

  static inline ::Zenject::__BindSignalFromBinder_2____c__DisplayClass8_0<TObject, TSignal>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <From>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _From_b__1(::System::Object* s);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__BindSignalFromBinder_2____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindSignalFromBinder_2____c__DisplayClass8_0(__BindSignalFromBinder_2____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindSignalFromBinder_2____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindSignalFromBinder_2____c__DisplayClass8_0(__BindSignalFromBinder_2____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindSignalFromBinder_2____c__DisplayClass8_0();

public:
  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___obj;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::BindSignalFromBinder`2
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TObject, typename TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10639))
// CS Name: ::Zenject::BindSignalFromBinder`2<TObject,TSignal>*
class CORDL_TYPE BindSignalFromBinder_2 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass8_0 = ::Zenject::__BindSignalFromBinder_2____c__DisplayClass8_0<TObject, TSignal>;

  using __c = ::Zenject::__BindSignalFromBinder_2____c<TObject, TSignal>;

  /// @brief Field _bindStatement, offset 0x10, size 0x8
  __declspec(property(get = __get__bindStatement, put = __set__bindStatement))::Zenject::BindStatement* _bindStatement;

  /// @brief Field _methodGetter, offset 0x18, size 0x8
  __declspec(property(get = __get__methodGetter, put = __set__methodGetter))::System::Func_2<TObject, ::System::Action_1<TSignal>*>* _methodGetter;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _signalBindInfo, offset 0x28, size 0x8
  __declspec(property(get = __get__signalBindInfo, put = __set__signalBindInfo))::Zenject::SignalBindingBindInfo* _signalBindInfo;

  constexpr ::Zenject::BindStatement*& __get__bindStatement();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindStatement*> const& __get__bindStatement() const;

  constexpr void __set__bindStatement(::Zenject::BindStatement* value);

  constexpr ::System::Func_2<TObject, ::System::Action_1<TSignal>*>*& __get__methodGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TObject, ::System::Action_1<TSignal>*>*> const& __get__methodGetter() const;

  constexpr void __set__methodGetter(::System::Func_2<TObject, ::System::Action_1<TSignal>*>* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::Zenject::SignalBindingBindInfo*& __get__signalBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalBindingBindInfo*> const& __get__signalBindInfo() const;

  constexpr void __set__signalBindInfo(::Zenject::SignalBindingBindInfo* value);

  static inline ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* New_ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::Zenject::BindStatement* bindStatement,
                                                                              ::System::Func_2<TObject, ::System::Action_1<TSignal>*>* methodGetter, ::Zenject::DiContainer* container);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::Zenject::BindStatement* bindStatement, ::System::Func_2<TObject, ::System::Action_1<TSignal>*>* methodGetter,
                    ::Zenject::DiContainer* container);

  /// @brief Method FromResolve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::SignalCopyBinder* FromResolve();

  /// @brief Method FromResolveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::SignalCopyBinder* FromResolveAll();

  /// @brief Method FromNew, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::SignalCopyBinder* FromNew();

  /// @brief Method From, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::SignalCopyBinder* From(::System::Action_1<::Zenject::ConcreteBinderGeneric_1<TObject>*>* objectBindCallback);

  /// @brief Method <From>b__8_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<::System::Object*>* _From_b__8_0(::System::Object* obj);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalFromBinder_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalFromBinder_2(BindSignalFromBinder_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalFromBinder_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalFromBinder_2(BindSignalFromBinder_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalFromBinder_2();

public:
  /// @brief Field _bindStatement, offset: 0x10, size: 0x8, def value: None
  ::Zenject::BindStatement* ____bindStatement;

  /// @brief Field _methodGetter, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TObject, ::System::Action_1<TSignal>*>* ____methodGetter;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _signalBindInfo, offset: 0x28, size: 0x8, def value: None
  ::Zenject::SignalBindingBindInfo* ____signalBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalFromBinder_2, "Zenject", "BindSignalFromBinder`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__BindSignalFromBinder_2____c, "Zenject", "BindSignalFromBinder`2/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__BindSignalFromBinder_2____c__DisplayClass8_0, "Zenject", "BindSignalFromBinder`2/<>c__DisplayClass8_0");
