#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::System::Numerics::ConstantHelper);
// Type: System.Numerics::ConstantHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// CS Name: ::System.Numerics::ConstantHelper*
class CORDL_TYPE ConstantHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetByteWithAllBitsSet, addr 0x277bad4, size 0x8, virtual false, abstract: false, final false
  static inline uint8_t GetByteWithAllBitsSet();

  /// @brief Method GetDoubleWithAllBitsSet, addr 0x277bb20, size 0x8, virtual false, abstract: false, final false
  static inline double_t GetDoubleWithAllBitsSet();

  /// @brief Method GetInt16WithAllBitsSet, addr 0x277baec, size 0x8, virtual false, abstract: false, final false
  static inline int16_t GetInt16WithAllBitsSet();

  /// @brief Method GetInt32WithAllBitsSet, addr 0x277bafc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetInt32WithAllBitsSet();

  /// @brief Method GetInt64WithAllBitsSet, addr 0x277bb0c, size 0x8, virtual false, abstract: false, final false
  static inline int64_t GetInt64WithAllBitsSet();

  /// @brief Method GetSByteWithAllBitsSet, addr 0x277badc, size 0x8, virtual false, abstract: false, final false
  static inline int8_t GetSByteWithAllBitsSet();

  /// @brief Method GetSingleWithAllBitsSet, addr 0x277bb14, size 0xc, virtual false, abstract: false, final false
  static inline float_t GetSingleWithAllBitsSet();

  /// @brief Method GetUInt16WithAllBitsSet, addr 0x277bae4, size 0x8, virtual false, abstract: false, final false
  static inline uint16_t GetUInt16WithAllBitsSet();

  /// @brief Method GetUInt32WithAllBitsSet, addr 0x277baf4, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t GetUInt32WithAllBitsSet();

  /// @brief Method GetUInt64WithAllBitsSet, addr 0x277bb04, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::ConstantHelper, 0x10>, "Size mismatch!");

} // namespace System::Numerics
NEED_NO_BOX(::System::Numerics::ConstantHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::ConstantHelper*, "System.Numerics", "ConstantHelper");
