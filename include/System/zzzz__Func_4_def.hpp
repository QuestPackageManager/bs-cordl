#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Func_4)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_4);
// Type: System::Func`4
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T1, typename T2, typename T3, typename TResult>
// Is value type: false
// CS Name: ::System::Func`4<T1,T2,T3,TResult>*
class CORDL_TYPE Func_4 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TResult Invoke(T1 arg1, T2 arg2, T3 arg3);

  static inline ::System::Func_4<T1, T2, T3, TResult>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Func_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Func_4(Func_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Func_4(Func_4 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_4, "System", "Func`4");
