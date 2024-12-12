#pragma once
// IWYU pragma private; include "System/Data/Operators.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Operators)
// Forward declare root types
namespace System::Data {
class Operators;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Operators);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.Operators
class CORDL_TYPE Operators : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_looks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_looks, put = setStaticF_s_looks)) ::ArrayW<::StringW, ::Array<::StringW>*> s_looks;

  /// @brief Field s_priority, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_priority, put = setStaticF_s_priority)) ::ArrayW<int32_t, ::Array<int32_t>*> s_priority;

  /// @brief Method IsArithmetical, addr 0x417b804, size 0x24, virtual false, abstract: false, final false
  static inline bool IsArithmetical(int32_t op);

  /// @brief Method IsLogical, addr 0x417b828, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsLogical(int32_t op);

  /// @brief Method IsRelational, addr 0x417b854, size 0x10, virtual false, abstract: false, final false
  static inline bool IsRelational(int32_t op);

  /// @brief Method Priority, addr 0x417b864, size 0xac, virtual false, abstract: false, final false
  static inline int32_t Priority(int32_t op);

  /// @brief Method ToString, addr 0x417b910, size 0xc0, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t op);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_looks();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_priority();

  static inline void setStaticF_s_looks(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_priority(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Operators();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Operators", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Operators(Operators&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Operators", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Operators(Operators const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Operators, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::Operators);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Operators*, "System.Data", "Operators");
