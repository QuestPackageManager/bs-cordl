#pragma once
// IWYU pragma private; include "System/Collections/Specialized/BitVector32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitVector32)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
struct BitVector32;
}
// Write type traits
MARK_VAL_T(::System::Collections::Specialized::BitVector32);
// Dependencies
namespace System::Collections::Specialized {
// Is value type: true
// CS Name: System.Collections.Specialized.BitVector32
struct CORDL_TYPE BitVector32 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  /// @brief Method CreateMask, addr 0x447fa70, size 0x8, virtual false, abstract: false, final false
  static inline int32_t CreateMask();

  /// @brief Method CreateMask, addr 0x447fa78, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t CreateMask(int32_t previous);

  /// @brief Method Equals, addr 0x447fae4, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x447fb5c, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x447fc90, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x447fbc0, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Collections::Specialized::BitVector32 value);

  /// @brief Method get_Item, addr 0x447fa44, size 0x10, virtual false, abstract: false, final false
  inline bool get_Item(int32_t bit);

  /// @brief Method set_Item, addr 0x447fa54, size 0x1c, virtual false, abstract: false, final false
  inline void set_Item(int32_t bit, bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitVector32();

  // Ctor Parameters [CppParam { name: "_data", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BitVector32(uint32_t _data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9485 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field _data, offset: 0x0, size: 0x4, def value: None
  uint32_t _data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::Specialized::BitVector32, _data) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::BitVector32, 0x4>, "Size mismatch!");

} // namespace System::Collections::Specialized
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::BitVector32, "System.Collections.Specialized", "BitVector32");
