#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Action_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T> class Action_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Action_1);
// Type: System::Action`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2323))
// CS Name: ::System::Action`1<T>*
class CORDL_TYPE Action_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Action_1<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Invoke(T obj);

  // Ctor Parameters [CppParam { name: "", ty: "Action_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Action_1(Action_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Action_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Action_1(Action_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Action_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_1, "System", "Action`1");
