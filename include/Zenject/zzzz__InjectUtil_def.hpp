#pragma once
// IWYU pragma private; include "Zenject/InjectUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InjectUtil)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class InjectUtil___c;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class InjectUtil;
}
namespace Zenject {
class InjectUtil___c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectUtil);
MARK_REF_PTR_T(::Zenject::InjectUtil___c);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectUtil/<>c
class CORDL_TYPE InjectUtil___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::InjectUtil___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::System::Object*, ::Zenject::TypeValuePair>* __9__0_0;

  static inline ::Zenject::InjectUtil___c* New_ctor();

  /// @brief Method <CreateArgList>b__0_0, addr 0x4b22eac, size 0x28, virtual false, abstract: false, final false
  inline ::Zenject::TypeValuePair _CreateArgList_b__0_0(::System::Object* x);

  /// @brief Method __zenCreate, addr 0x4b22ed4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b22f28, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b22ea4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::InjectUtil___c* getStaticF___9();

  static inline ::System::Func_2<::System::Object*, ::Zenject::TypeValuePair>* getStaticF___9__0_0();

  static inline void setStaticF___9(::Zenject::InjectUtil___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::System::Object*, ::Zenject::TypeValuePair>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectUtil___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectUtil___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectUtil___c(InjectUtil___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectUtil___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectUtil___c(InjectUtil___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectUtil___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectUtil
class CORDL_TYPE InjectUtil : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::InjectUtil___c;

  /// @brief Method CreateArgList, addr 0x4b22ba8, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateArgList(::System::Collections::Generic::IEnumerable_1<::System::Object*>* args);

  /// @brief Method CreateArgListExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateArgListExplicit(T param);

  /// @brief Method CreateArgListExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2> static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2);

  /// @brief Method CreateArgListExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3>
  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3);

  /// @brief Method CreateArgListExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4);

  /// @brief Method CreateArgListExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5);

  /// @brief Method CreateArgListExplicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
  static inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* CreateArgListExplicit(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6);

  /// @brief Method CreateTypePair, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Zenject::TypeValuePair CreateTypePair(T param);

  /// @brief Method PopValueWithType, addr 0x4b22d08, size 0x140, virtual false, abstract: false, final false
  static inline bool PopValueWithType(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgMap, ::System::Type* injectedFieldType, ::ByRef<::System::Object*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectUtil(InjectUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectUtil(InjectUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectUtil, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectUtil*, "Zenject", "InjectUtil");
NEED_NO_BOX(::Zenject::InjectUtil___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectUtil___c*, "Zenject", "InjectUtil/<>c");
