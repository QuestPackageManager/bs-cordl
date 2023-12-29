#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Func_2)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_2);
// Type: System::Func`2
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T, typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2332))
// CS Name: ::System::Func`2<T,TResult>*
class CORDL_TYPE Func_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Func_2<T, TResult>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TResult Invoke(T arg);

  // Ctor Parameters [CppParam { name: "", ty: "Func_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Func_2(Func_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Func_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Func_2(Func_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Func_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_2, "System", "Func`2");
