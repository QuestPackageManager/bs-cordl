#pragma once
// IWYU pragma private; include "GlobalNamespace/BitMaskUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitMaskUtil)
// Forward declare root types
namespace GlobalNamespace {
class BitMaskUtil;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BitMaskUtil);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitMaskUtil
class CORDL_TYPE BitMaskUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method NumberOfSetBits, addr 0x2242880, size 0x34, virtual false, abstract: false, final false
  static inline uint32_t NumberOfSetBits(uint32_t i);

  /// @brief Method NumberOfSetBits, addr 0x2249f04, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t NumberOfSetBits(uint64_t i);

  /// @brief Method ShiftLeft, addr 0x2249f68, size 0x44, virtual false, abstract: false, final false
  static inline uint64_t ShiftLeft(::ByRef<uint64_t> value, ::ByRef<int32_t> shift);

  /// @brief Method ShiftRight, addr 0x2249fac, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t ShiftRight(::ByRef<uint64_t> value, ::ByRef<int32_t> shift);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitMaskUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitMaskUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitMaskUtil(BitMaskUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitMaskUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitMaskUtil(BitMaskUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17099 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BitMaskUtil, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BitMaskUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BitMaskUtil*, "", "BitMaskUtil");
