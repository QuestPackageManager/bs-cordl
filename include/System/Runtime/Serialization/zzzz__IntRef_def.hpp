#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IntRef.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntRef)
// Forward declare root types
namespace System::Runtime::Serialization {
class IntRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IntRef);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IntRef
class CORDL_TYPE IntRef : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value)) int32_t Value;

  /// @brief Field value, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::System::Runtime::Serialization::IntRef* New_ctor(int32_t value);

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x5f93e38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method get_Value, addr 0x5f969c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntRef();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntRef(IntRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntRef(IntRef const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16989 };

  /// @brief Field value, offset: 0x10, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::IntRef, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::IntRef, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IntRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IntRef*, "System.Runtime.Serialization", "IntRef");
