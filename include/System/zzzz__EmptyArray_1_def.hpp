#pragma once
// IWYU pragma private; include "System\EmptyArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(EmptyArray_1)
// Forward declare root types
namespace System {
template <typename T> class EmptyArray_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::EmptyArray_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::EmptyArray_1, "System", "EmptyArray`1");
// Dependencies System.Object
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.EmptyArray`1<T>
class CORDL_TYPE EmptyArray_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Value, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Value, put = setStaticF_Value)) ::ArrayW<T> Value;

  static inline ::ArrayW<T> getStaticF_Value();

  static inline void setStaticF_Value(::ArrayW<T> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyArray_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyArray_1(EmptyArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyArray_1(EmptyArray_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2603 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
