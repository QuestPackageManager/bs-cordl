#pragma once
// IWYU pragma private; include "System/Linq/IdentityFunction_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IdentityFunction_1)
namespace System::Linq {
template <typename TElement> class IdentityFunction_1___c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement> class IdentityFunction_1;
}
namespace System::Linq {
template <typename TElement> class IdentityFunction_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::IdentityFunction_1);
MARK_GEN_REF_PTR_T(::System::Linq::IdentityFunction_1___c);
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// CS Name: System.Linq.IdentityFunction`1/<>c<TElement>
class CORDL_TYPE IdentityFunction_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Linq::IdentityFunction_1___c<TElement>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<TElement, TElement>* __9__1_0;

  static inline ::System::Linq::IdentityFunction_1___c<TElement>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_Instance>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TElement _get_Instance_b__1_0(TElement x);

  static inline ::System::Linq::IdentityFunction_1___c<TElement>* getStaticF___9();

  static inline ::System::Func_2<TElement, TElement>* getStaticF___9__1_0();

  static inline void setStaticF___9(::System::Linq::IdentityFunction_1___c<TElement>* value);

  static inline void setStaticF___9__1_0(::System::Func_2<TElement, TElement>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdentityFunction_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdentityFunction_1___c(IdentityFunction_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdentityFunction_1___c(IdentityFunction_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13593 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
// Dependencies System.Object
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// CS Name: System.Linq.IdentityFunction`1<TElement>
class CORDL_TYPE IdentityFunction_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Linq::IdentityFunction_1___c<TElement>;

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Func_2<TElement, TElement>* get_Instance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdentityFunction_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdentityFunction_1(IdentityFunction_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdentityFunction_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdentityFunction_1(IdentityFunction_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IdentityFunction_1, "System.Linq", "IdentityFunction`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IdentityFunction_1___c, "System.Linq", "IdentityFunction`1/<>c");
