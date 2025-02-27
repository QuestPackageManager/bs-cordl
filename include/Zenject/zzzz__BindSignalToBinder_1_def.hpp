#pragma once
// IWYU pragma private; include "Zenject/BindSignalToBinder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BindSignalToBinder_1)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace Zenject {
template <typename TObject, typename TSignal> class BindSignalFromBinder_2;
}
namespace Zenject {
template <typename TSignal> class BindSignalToBinder_1___c__DisplayClass6_0;
}
namespace Zenject {
template <typename TSignal> class BindSignalToBinder_1___c__DisplayClass7_0;
}
namespace Zenject {
template <typename TSignal, typename TObject> class BindSignalToBinder_1___c__DisplayClass8_0_1;
}
namespace Zenject {
template <typename TSignal, typename TObject> class BindSignalToBinder_1___c__DisplayClass8_1_1;
}
namespace Zenject {
template <typename TSignal, typename TObject> class BindSignalToBinder_1___c__DisplayClass9_0_1;
}
namespace Zenject {
template <typename TSignal, typename TObject> class BindSignalToBinder_1___c__DisplayClass9_1_1;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace Zenject {
class SignalCopyBinder;
}
// Forward declare root types
namespace Zenject {
template <typename TSignal> class BindSignalToBinder_1;
}
namespace Zenject {
template <typename TSignal> class BindSignalToBinder_1___c__DisplayClass6_0;
}
namespace Zenject {
template <typename TSignal> class BindSignalToBinder_1___c__DisplayClass7_0;
}
namespace Zenject {
template <typename TSignal, typename TObject> class BindSignalToBinder_1___c__DisplayClass8_0_1;
}
namespace Zenject {
template <typename TSignal, typename TObject> class BindSignalToBinder_1___c__DisplayClass8_1_1;
}
namespace Zenject {
template <typename TSignal, typename TObject> class BindSignalToBinder_1___c__DisplayClass9_0_1;
}
namespace Zenject {
template <typename TSignal, typename TObject> class BindSignalToBinder_1___c__DisplayClass9_1_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::BindSignalToBinder_1);
MARK_GEN_REF_PTR_T(::Zenject::BindSignalToBinder_1___c__DisplayClass6_0);
MARK_GEN_REF_PTR_T(::Zenject::BindSignalToBinder_1___c__DisplayClass7_0);
MARK_GEN_REF_PTR_T(::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1);
MARK_GEN_REF_PTR_T(::Zenject::BindSignalToBinder_1___c__DisplayClass8_1_1);
MARK_GEN_REF_PTR_T(::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1);
MARK_GEN_REF_PTR_T(::Zenject::BindSignalToBinder_1___c__DisplayClass9_1_1);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TSignal>
// Is value type: false
// CS Name: Zenject.BindSignalToBinder`1/<>c__DisplayClass6_0<TSignal>
class CORDL_TYPE BindSignalToBinder_1___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_1<TSignal>* callback;

  static inline ::Zenject::BindSignalToBinder_1___c__DisplayClass6_0<TSignal>* New_ctor();

  /// @brief Method <ToMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ToMethod_b__0(::System::Object* o);

  constexpr ::System::Action_1<TSignal>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_1<TSignal>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_1<TSignal>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalToBinder_1___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalToBinder_1___c__DisplayClass6_0(BindSignalToBinder_1___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalToBinder_1___c__DisplayClass6_0(BindSignalToBinder_1___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11983 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TSignal>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TSignal>
// Is value type: false
// CS Name: Zenject.BindSignalToBinder`1/<>c__DisplayClass7_0<TSignal>
class CORDL_TYPE BindSignalToBinder_1___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action* callback;

  static inline ::Zenject::BindSignalToBinder_1___c__DisplayClass7_0<TSignal>* New_ctor();

  /// @brief Method <ToMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ToMethod_b__0(TSignal signal);

  constexpr ::System::Action* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalToBinder_1___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalToBinder_1___c__DisplayClass7_0(BindSignalToBinder_1___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalToBinder_1___c__DisplayClass7_0(BindSignalToBinder_1___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11984 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TSignal, typename TObject>
// Is value type: false
// CS Name: Zenject.BindSignalToBinder`1/<>c__DisplayClass8_0`1<TSignal,TObject>
class CORDL_TYPE BindSignalToBinder_1___c__DisplayClass8_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field handler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handler, put = __cordl_internal_set_handler)) ::System::Action_2<TObject, TSignal>* handler;

  static inline ::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1<TSignal, TObject>* New_ctor();

  /// @brief Method <ToMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<TSignal>* _ToMethod_b__0(TObject x);

  constexpr ::System::Action_2<TObject, TSignal>* const& __cordl_internal_get_handler() const;

  constexpr ::System::Action_2<TObject, TSignal>*& __cordl_internal_get_handler();

  constexpr void __cordl_internal_set_handler(::System::Action_2<TObject, TSignal>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalToBinder_1___c__DisplayClass8_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass8_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalToBinder_1___c__DisplayClass8_0_1(BindSignalToBinder_1___c__DisplayClass8_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass8_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalToBinder_1___c__DisplayClass8_0_1(BindSignalToBinder_1___c__DisplayClass8_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11985 };

  /// @brief Field handler, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<TObject, TSignal>* ___handler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TSignal, typename TObject>
// Is value type: false
// CS Name: Zenject.BindSignalToBinder`1/<>c__DisplayClass8_1`1<TSignal,TObject>
class CORDL_TYPE BindSignalToBinder_1___c__DisplayClass8_1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1<TSignal, TObject>* CS$__8__locals1;

  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) TObject x;

  static inline ::Zenject::BindSignalToBinder_1___c__DisplayClass8_1_1<TSignal, TObject>* New_ctor();

  /// @brief Method <ToMethod>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ToMethod_b__1(TSignal s);

  constexpr ::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1<TSignal, TObject>* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1<TSignal, TObject>*& __cordl_internal_get_CS$__8__locals1();

  constexpr TObject const& __cordl_internal_get_x() const;

  constexpr TObject& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1<TSignal, TObject>* value);

  constexpr void __cordl_internal_set_x(TObject value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalToBinder_1___c__DisplayClass8_1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass8_1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalToBinder_1___c__DisplayClass8_1_1(BindSignalToBinder_1___c__DisplayClass8_1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass8_1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalToBinder_1___c__DisplayClass8_1_1(BindSignalToBinder_1___c__DisplayClass8_1_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11986 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  TObject ___x;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1<TSignal, TObject>* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TSignal, typename TObject>
// Is value type: false
// CS Name: Zenject.BindSignalToBinder`1/<>c__DisplayClass9_0`1<TSignal,TObject>
class CORDL_TYPE BindSignalToBinder_1___c__DisplayClass9_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field handlerGetter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handlerGetter, put = __cordl_internal_set_handlerGetter)) ::System::Func_2<TObject, ::System::Action*>* handlerGetter;

  static inline ::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1<TSignal, TObject>* New_ctor();

  /// @brief Method <ToMethod>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<TSignal>* _ToMethod_b__0(TObject x);

  constexpr ::System::Func_2<TObject, ::System::Action*>* const& __cordl_internal_get_handlerGetter() const;

  constexpr ::System::Func_2<TObject, ::System::Action*>*& __cordl_internal_get_handlerGetter();

  constexpr void __cordl_internal_set_handlerGetter(::System::Func_2<TObject, ::System::Action*>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalToBinder_1___c__DisplayClass9_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass9_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalToBinder_1___c__DisplayClass9_0_1(BindSignalToBinder_1___c__DisplayClass9_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass9_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalToBinder_1___c__DisplayClass9_0_1(BindSignalToBinder_1___c__DisplayClass9_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11987 };

  /// @brief Field handlerGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TObject, ::System::Action*>* ___handlerGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TSignal, typename TObject>
// Is value type: false
// CS Name: Zenject.BindSignalToBinder`1/<>c__DisplayClass9_1`1<TSignal,TObject>
class CORDL_TYPE BindSignalToBinder_1___c__DisplayClass9_1_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1<TSignal, TObject>* CS$__8__locals1;

  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) TObject x;

  static inline ::Zenject::BindSignalToBinder_1___c__DisplayClass9_1_1<TSignal, TObject>* New_ctor();

  /// @brief Method <ToMethod>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ToMethod_b__1(TSignal s);

  constexpr ::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1<TSignal, TObject>* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1<TSignal, TObject>*& __cordl_internal_get_CS$__8__locals1();

  constexpr TObject const& __cordl_internal_get_x() const;

  constexpr TObject& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1<TSignal, TObject>* value);

  constexpr void __cordl_internal_set_x(TObject value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalToBinder_1___c__DisplayClass9_1_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass9_1_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalToBinder_1___c__DisplayClass9_1_1(BindSignalToBinder_1___c__DisplayClass9_1_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1___c__DisplayClass9_1_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalToBinder_1___c__DisplayClass9_1_1(BindSignalToBinder_1___c__DisplayClass9_1_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11988 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  TObject ___x;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1<TSignal, TObject>* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TSignal>
// Is value type: false
// CS Name: Zenject.BindSignalToBinder`1<TSignal>
class CORDL_TYPE BindSignalToBinder_1 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::Zenject::BindSignalToBinder_1___c__DisplayClass6_0<TSignal>;

  using __c__DisplayClass7_0 = ::Zenject::BindSignalToBinder_1___c__DisplayClass7_0<TSignal>;

  template <typename TObject> using __c__DisplayClass8_0_1 = ::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1<TSignal, TObject>;

  template <typename TObject> using __c__DisplayClass8_1_1 = ::Zenject::BindSignalToBinder_1___c__DisplayClass8_1_1<TSignal, TObject>;

  template <typename TObject> using __c__DisplayClass9_0_1 = ::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1<TSignal, TObject>;

  template <typename TObject> using __c__DisplayClass9_1_1 = ::Zenject::BindSignalToBinder_1___c__DisplayClass9_1_1<TSignal, TObject>;

  __declspec(property(get = get_SignalBindInfo)) ::Zenject::SignalBindingBindInfo* SignalBindInfo;

  /// @brief Field _bindStatement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bindStatement, put = __cordl_internal_set__bindStatement)) ::Zenject::BindStatement* _bindStatement;

  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _signalBindInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__signalBindInfo, put = __cordl_internal_set__signalBindInfo)) ::Zenject::SignalBindingBindInfo* _signalBindInfo;

  static inline ::Zenject::BindSignalToBinder_1<TSignal>* New_ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo);

  /// @brief Method ToMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* ToMethod(::System::Action_2<TObject, TSignal>* handler);

  /// @brief Method ToMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* ToMethod(::System::Func_2<TObject, ::System::Action*>* handlerGetter);

  /// @brief Method ToMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> inline ::Zenject::BindSignalFromBinder_2<TObject, TSignal>* ToMethod(::System::Func_2<TObject, ::System::Action_1<TSignal>*>* handlerGetter);

  /// @brief Method ToMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::SignalCopyBinder* ToMethod(::System::Action* callback);

  /// @brief Method ToMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::SignalCopyBinder* ToMethod(::System::Action_1<TSignal>* callback);

  constexpr ::Zenject::BindStatement* const& __cordl_internal_get__bindStatement() const;

  constexpr ::Zenject::BindStatement*& __cordl_internal_get__bindStatement();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::Zenject::SignalBindingBindInfo* const& __cordl_internal_get__signalBindInfo() const;

  constexpr ::Zenject::SignalBindingBindInfo*& __cordl_internal_get__signalBindInfo();

  constexpr void __cordl_internal_set__bindStatement(::Zenject::BindStatement* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__signalBindInfo(::Zenject::SignalBindingBindInfo* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo);

  /// @brief Method get_SignalBindInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::SignalBindingBindInfo* get_SignalBindInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalToBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalToBinder_1(BindSignalToBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalToBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalToBinder_1(BindSignalToBinder_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11989 };

  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _bindStatement, offset: 0x18, size: 0x8, def value: None
  ::Zenject::BindStatement* ____bindStatement;

  /// @brief Field _signalBindInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::SignalBindingBindInfo* ____signalBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalToBinder_1, "Zenject", "BindSignalToBinder`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalToBinder_1___c__DisplayClass6_0, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalToBinder_1___c__DisplayClass7_0, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalToBinder_1___c__DisplayClass8_0_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass8_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalToBinder_1___c__DisplayClass8_1_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass8_1`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalToBinder_1___c__DisplayClass9_0_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass9_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalToBinder_1___c__DisplayClass9_1_1, "Zenject", "BindSignalToBinder`1/<>c__DisplayClass9_1`1");
