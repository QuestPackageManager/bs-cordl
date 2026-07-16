#pragma once
// IWYU pragma private; include "System/Numerics/ConstantHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantHelper)
// Forward declare root types
namespace System::Numerics {
class ConstantHelper;
}
// Write type traits
MARK_REF_T(::System::Numerics::ConstantHelper*);
DEFINE_IL2CPP_CLASS(::System::Numerics::ConstantHelper*, "System.Numerics", "ConstantHelper");
// Dependencies System.Object
namespace System::Numerics {
// Is value type: false
// CS Name: System.Numerics.ConstantHelper
class CORDL_TYPE ConstantHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetByteWithAllBitsSet, addr 0x5b91ce8, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t GetByteWithAllBitsSet();

  /// @brief Method GetDoubleWithAllBitsSet, addr 0x5b91d34, size 0x8, virtual false, abstract: false, final false
  static inline double_t GetDoubleWithAllBitsSet();

  /// @brief Method GetInt16WithAllBitsSet, addr 0x5b91d00, size 0x8, virtual false, abstract: false, final false
  static inline int16_t GetInt16WithAllBitsSet();

  /// @brief Method GetInt32WithAllBitsSet, addr 0x5b91d10, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetInt32WithAllBitsSet();

  /// @brief Method GetInt64WithAllBitsSet, addr 0x5b91d20, size 0x8, virtual false, abstract: false, final false
  static inline int64_t GetInt64WithAllBitsSet();

  /// @brief Method GetSByteWithAllBitsSet, addr 0x5b91cf0, size 0x8, virtual false, abstract: false, final false
  static inline int8_t GetSByteWithAllBitsSet();

  /// @brief Method GetSingleWithAllBitsSet, addr 0x5b91d28, size 0xc, virtual false, abstract: false, final false
  static inline float_t GetSingleWithAllBitsSet();

  /// @brief Method GetUInt16WithAllBitsSet, addr 0x5b91cf8, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t GetUInt16WithAllBitsSet();

  /// @brief Method GetUInt32WithAllBitsSet, addr 0x5b91d08, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t GetUInt32WithAllBitsSet();

  /// @brief Method GetUInt64WithAllBitsSet, addr 0x5b91d18, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t GetUInt64WithAllBitsSet();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstantHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstantHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstantHelper(ConstantHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstantHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstantHelper(ConstantHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Numerics::ConstantHelper) == 0x10, "Size mismatch!");

} // namespace System::Numerics
