#pragma once
// IWYU pragma private; include "System/Func_11.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(Func_11)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename TResult> class Func_11;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_11);
// Dependencies System.MulticastDelegate
namespace System {
// cpp template
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename TResult>
// Is value type: false
// CS Name: System.Func`11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,TResult>
class CORDL_TYPE Func_11 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10);

  static inline ::System::Func_11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TResult>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Func_11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Func_11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Func_11(Func_11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Func_11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Func_11(Func_11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_11, "System", "Func`11");
