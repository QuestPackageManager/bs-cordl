#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DelegateHelpers)
namespace System::Linq::Expressions::Interpreter {
class __DelegateHelpers____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class DelegateHelpers;
}
namespace System::Linq::Expressions::Interpreter {
class __DelegateHelpers____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::DelegateHelpers);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__DelegateHelpers____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::DelegateHelpers::<>c*
class CORDL_TYPE __DelegateHelpers____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Linq::Expressions::Interpreter::__DelegateHelpers____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Func_2<::System::Type*, bool>* __9__1_0;

  static inline ::System::Linq::Expressions::Interpreter::__DelegateHelpers____c* New_ctor();

  /// @brief Method <MakeDelegate>b__1_0, addr 0x2b4e910, size 0x18, virtual false, abstract: false, final false
  inline bool _MakeDelegate_b__1_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x2b4e908, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::Interpreter::__DelegateHelpers____c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__1_0();

  static inline void setStaticF___9(::System::Linq::Expressions::Interpreter::__DelegateHelpers____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DelegateHelpers____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DelegateHelpers____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DelegateHelpers____c(__DelegateHelpers____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DelegateHelpers____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DelegateHelpers____c(__DelegateHelpers____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__DelegateHelpers____c, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
// Type: System.Linq.Expressions.Interpreter::DelegateHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::DelegateHelpers*
class CORDL_TYPE DelegateHelpers : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Linq::Expressions::Interpreter::__DelegateHelpers____c;

  /// @brief Method MakeDelegate, addr 0x2b3b71c, size 0x668, virtual false, abstract: false, final false
  static inline ::System::Type* MakeDelegate(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateHelpers(DelegateHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateHelpers(DelegateHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::DelegateHelpers, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::DelegateHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::DelegateHelpers*, "System.Linq.Expressions.Interpreter", "DelegateHelpers");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__DelegateHelpers____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__DelegateHelpers____c*, "System.Linq.Expressions.Interpreter", "DelegateHelpers/<>c");
