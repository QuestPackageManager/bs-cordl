#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Func_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename TResult> class Func_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Func_1);
// Type: System::Func`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: ::System::Func`1<TResult>*
class CORDL_TYPE Func_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TResult Invoke();

  static inline ::System::Func_1<TResult>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Func_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Func_1(Func_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Func_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Func_1(Func_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_1, "System", "Func`1");
