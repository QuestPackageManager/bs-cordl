#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IdentityFunction_1)
namespace System::Linq {
template <typename TElement> class __IdentityFunction_1____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement> class IdentityFunction_1;
}
namespace System::Linq {
template <typename TElement> class __IdentityFunction_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::IdentityFunction_1);
MARK_GEN_REF_PTR_T(::System::Linq::__IdentityFunction_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14279))
// CS Name: ::IdentityFunction`1::<>c<TElement>*
class CORDL_TYPE __IdentityFunction_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Linq::__IdentityFunction_1____c<TElement>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Func_2<TElement, TElement>* __9__1_0;

  static inline void setStaticF___9(::System::Linq::__IdentityFunction_1____c<TElement>* value);

  static inline ::System::Linq::__IdentityFunction_1____c<TElement>* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Func_2<TElement, TElement>* value);

  static inline ::System::Func_2<TElement, TElement>* getStaticF___9__1_0();

  static inline ::System::Linq::__IdentityFunction_1____c<TElement>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_Instance>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TElement _get_Instance_b__1_0(TElement x);

  // Ctor Parameters [CppParam { name: "", ty: "__IdentityFunction_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IdentityFunction_1____c(__IdentityFunction_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IdentityFunction_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IdentityFunction_1____c(__IdentityFunction_1____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IdentityFunction_1____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Type: System.Linq::IdentityFunction`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14280))
// CS Name: ::System.Linq::IdentityFunction`1<TElement>*
class CORDL_TYPE IdentityFunction_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Linq::__IdentityFunction_1____c<TElement>;

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Func_2<TElement, TElement>* get_Instance();

  // Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdentityFunction_1(IdentityFunction_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdentityFunction_1(IdentityFunction_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdentityFunction_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IdentityFunction_1, "System.Linq", "IdentityFunction`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::__IdentityFunction_1____c, "System.Linq", "IdentityFunction`1/<>c");
