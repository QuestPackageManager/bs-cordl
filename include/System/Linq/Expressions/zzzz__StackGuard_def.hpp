#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StackGuard)
namespace System::Linq::Expressions {
template <typename T1, typename T2> class __StackGuard____c__3_2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class StackGuard;
}
namespace System::Linq::Expressions {
template <typename T1, typename T2> class __StackGuard____c__3_2;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::StackGuard);
MARK_GEN_REF_PTR_T(::System::Linq::Expressions::__StackGuard____c__3_2);
// Type: ::<>c__3`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// cpp template
template <typename T1, typename T2>
// Is value type: false
// CS Name: ::StackGuard::<>c__3`2<T1,T2>*
class CORDL_TYPE __StackGuard____c__3_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Linq::Expressions::__StackGuard____c__3_2<T1, T2>* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::System::Object*, ::System::Object*>* __9__3_0;

  static inline ::System::Linq::Expressions::__StackGuard____c__3_2<T1, T2>* New_ctor();

  /// @brief Method <RunOnEmptyStack>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* _RunOnEmptyStack_b__3_0(::System::Object* s);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Linq::Expressions::__StackGuard____c__3_2<T1, T2>* getStaticF___9();

  static inline ::System::Func_2<::System::Object*, ::System::Object*>* getStaticF___9__3_0();

  static inline void setStaticF___9(::System::Linq::Expressions::__StackGuard____c__3_2<T1, T2>* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::System::Object*, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StackGuard____c__3_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StackGuard____c__3_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StackGuard____c__3_2(__StackGuard____c__3_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StackGuard____c__3_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StackGuard____c__3_2(__StackGuard____c__3_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq::Expressions
// Type: System.Linq.Expressions::StackGuard
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::StackGuard*
class CORDL_TYPE StackGuard : public ::System::Object {
public:
  // Declarations
  template <typename T1, typename T2> using __c__3_2 = ::System::Linq::Expressions::__StackGuard____c__3_2<T1, T2>;

  /// @brief Field _executionStackCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__executionStackCount, put = __cordl_internal_set__executionStackCount)) int32_t _executionStackCount;

  static inline ::System::Linq::Expressions::StackGuard* New_ctor();

  /// @brief Method RunOnEmptyStack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> inline void RunOnEmptyStack(::System::Action_2<T1, T2>* action, T1 arg1, T2 arg2);

  /// @brief Method RunOnEmptyStackCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename R> inline R RunOnEmptyStackCore(::System::Func_2<::System::Object*, R>* action, ::System::Object* state);

  /// @brief Method TryEnterOnCurrentStack, addr 0x2b0ee9c, size 0x70, virtual false, abstract: false, final false
  inline bool TryEnterOnCurrentStack();

  constexpr int32_t const& __cordl_internal_get__executionStackCount() const;

  constexpr int32_t& __cordl_internal_get__executionStackCount();

  constexpr void __cordl_internal_set__executionStackCount(int32_t value);

  /// @brief Method .ctor, addr 0x2b0ef0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackGuard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackGuard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackGuard(StackGuard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackGuard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackGuard(StackGuard const&) = delete;

  /// @brief Field _executionStackCount, offset: 0x10, size: 0x4, def value: None
  int32_t ____executionStackCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::StackGuard, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::StackGuard, ____executionStackCount) == 0x10, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::StackGuard);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::StackGuard*, "System.Linq.Expressions", "StackGuard");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::__StackGuard____c__3_2, "System.Linq.Expressions", "StackGuard/<>c__3`2");
