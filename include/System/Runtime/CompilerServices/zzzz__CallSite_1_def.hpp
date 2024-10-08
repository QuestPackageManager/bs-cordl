#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallSite_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__CallSite_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallSite_1)
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::CompilerServices {
class CallSiteBinder;
}
namespace System::Runtime::CompilerServices {
template <typename T> class __CallSite_1____c;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename T> class CallSite_1;
}
namespace System::Runtime::CompilerServices {
template <typename T> class __CallSite_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::CallSite_1);
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::__CallSite_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::CallSite`1::<>c<T>*
class CORDL_TYPE __CallSite_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Runtime::CompilerServices::__CallSite_1____c<T>* __9;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_0,
                             put = setStaticF___9__20_0)) ::System::Converter_2<::System::Reflection::ParameterInfo*, ::System::Linq::Expressions::ParameterExpression*>* __9__20_0;

  /// @brief Field <>9__20_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_1,
                             put = setStaticF___9__20_1)) ::System::Converter_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*>* __9__20_1;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__21_0,
                             put = setStaticF___9__21_0)) ::System::Converter_2<::System::Reflection::ParameterInfo*, ::System::Linq::Expressions::ParameterExpression*>* __9__21_0;

  static inline ::System::Runtime::CompilerServices::__CallSite_1____c<T>* New_ctor();

  /// @brief Method <CreateCustomNoMatchDelegate>b__21_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::ParameterExpression* _CreateCustomNoMatchDelegate_b__21_0(::System::Reflection::ParameterInfo* p);

  /// @brief Method <CreateCustomUpdateDelegate>b__20_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::ParameterExpression* _CreateCustomUpdateDelegate_b__20_0(::System::Reflection::ParameterInfo* p);

  /// @brief Method <CreateCustomUpdateDelegate>b__20_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* _CreateCustomUpdateDelegate_b__20_1(::System::Linq::Expressions::ParameterExpression* p);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::CompilerServices::__CallSite_1____c<T>* getStaticF___9();

  static inline ::System::Converter_2<::System::Reflection::ParameterInfo*, ::System::Linq::Expressions::ParameterExpression*>* getStaticF___9__20_0();

  static inline ::System::Converter_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*>* getStaticF___9__20_1();

  static inline ::System::Converter_2<::System::Reflection::ParameterInfo*, ::System::Linq::Expressions::ParameterExpression*>* getStaticF___9__21_0();

  static inline void setStaticF___9(::System::Runtime::CompilerServices::__CallSite_1____c<T>* value);

  static inline void setStaticF___9__20_0(::System::Converter_2<::System::Reflection::ParameterInfo*, ::System::Linq::Expressions::ParameterExpression*>* value);

  static inline void setStaticF___9__20_1(::System::Converter_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*>* value);

  static inline void setStaticF___9__21_0(::System::Converter_2<::System::Reflection::ParameterInfo*, ::System::Linq::Expressions::ParameterExpression*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CallSite_1____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CallSite_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CallSite_1____c(__CallSite_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CallSite_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CallSite_1____c(__CallSite_1____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14087 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::CallSite`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::CallSite`1<T>*
class CORDL_TYPE CallSite_1 : public ::System::Runtime::CompilerServices::CallSite {
public:
  // Declarations
  using __c = ::System::Runtime::CompilerServices::__CallSite_1____c<T>;

  /// @brief Field Rules, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Rules, put = __cordl_internal_set_Rules)) ::ArrayW<T, ::Array<T>*> Rules;

  /// @brief Field Target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) T Target;

  __declspec(property(get = get_Update)) T Update;

  /// @brief Field s_cachedNoMatch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedNoMatch, put = setStaticF_s_cachedNoMatch)) T s_cachedNoMatch;

  /// @brief Field s_cachedUpdate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedUpdate, put = setStaticF_s_cachedUpdate)) T s_cachedUpdate;

  /// @brief Method AddRule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRule(T newRule);

  /// @brief Method Convert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Expression* Convert(::System::Linq::Expressions::Expression* arg, ::System::Type* type);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::CallSite_1<T>* Create(::System::Runtime::CompilerServices::CallSiteBinder* binder);

  /// @brief Method CreateCustomNoMatchDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T CreateCustomNoMatchDelegate(::System::Reflection::MethodInfo* invoke);

  /// @brief Method CreateCustomUpdateDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T CreateCustomUpdateDelegate(::System::Reflection::MethodInfo* invoke);

  /// @brief Method CreateMatchMaker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::CallSite_1<T>* CreateMatchMaker();

  /// @brief Method GetUpdateDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetUpdateDelegate();

  /// @brief Method GetUpdateDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetUpdateDelegate(ByRef<T> addr);

  /// @brief Method MakeUpdateDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T MakeUpdateDelegate();

  /// @brief Method MoveRule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MoveRule(int32_t i);

  static inline ::System::Runtime::CompilerServices::CallSite_1<T>* New_ctor();

  static inline ::System::Runtime::CompilerServices::CallSite_1<T>* New_ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder);

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get_Rules() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get_Rules();

  constexpr T const& __cordl_internal_get_Target() const;

  constexpr T& __cordl_internal_get_Target();

  constexpr void __cordl_internal_set_Rules(::ArrayW<T, ::Array<T>*> value);

  constexpr void __cordl_internal_set_Target(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder);

  static inline T getStaticF_s_cachedNoMatch();

  static inline T getStaticF_s_cachedUpdate();

  /// @brief Method get_Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Update();

  static inline void setStaticF_s_cachedNoMatch(T value);

  static inline void setStaticF_s_cachedUpdate(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallSite_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallSite_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallSite_1(CallSite_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallSite_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallSite_1(CallSite_1 const&) = delete;

  /// @brief Field Target, offset: 0x20, size: 0x8, def value: None
  T ___Target;

  /// @brief Field Rules, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ___Rules;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14088 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::CallSite_1, "System.Runtime.CompilerServices", "CallSite`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::__CallSite_1____c, "System.Runtime.CompilerServices", "CallSite`1/<>c");
