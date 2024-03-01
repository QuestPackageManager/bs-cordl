#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Action_6)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Action_6;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Action_6);
// Type: System::Action`6
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
// Is value type: false
// CS Name: ::System::Action`6<T1,T2,T3,T4,T5,T6>*
class CORDL_TYPE Action_6 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6);

  static inline ::System::Action_6<T1, T2, T3, T4, T5, T6>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Action_6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Action_6(Action_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Action_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Action_6(Action_6 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_6, "System", "Action`6");
