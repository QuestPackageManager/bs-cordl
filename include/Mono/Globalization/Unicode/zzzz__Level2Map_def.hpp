#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Level2Map)
// Forward declare root types
namespace Mono::Globalization::Unicode {
class Level2Map;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::Level2Map);
// Type: Mono.Globalization.Unicode::Level2Map
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: ::Mono.Globalization.Unicode::Level2Map*
class CORDL_TYPE Level2Map : public ::System::Object {
public:
  // Declarations
  /// @brief Field Replace, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_Replace, put = __cordl_internal_set_Replace)) uint8_t Replace;

  /// @brief Field Source, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Source, put = __cordl_internal_set_Source)) uint8_t Source;

  static inline ::Mono::Globalization::Unicode::Level2Map* New_ctor(uint8_t source, uint8_t replace);

  constexpr uint8_t const& __cordl_internal_get_Replace() const;

  constexpr uint8_t& __cordl_internal_get_Replace();

  constexpr uint8_t const& __cordl_internal_get_Source() const;

  constexpr uint8_t& __cordl_internal_get_Source();

  constexpr void __cordl_internal_set_Replace(uint8_t value);

  constexpr void __cordl_internal_set_Source(uint8_t value);

  /// @brief Method .ctor, addr 0x2690504, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(uint8_t source, uint8_t replace);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Level2Map();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Level2Map", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Level2Map(Level2Map&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Level2Map", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Level2Map(Level2Map const&) = delete;

  /// @brief Field Source, offset: 0x10, size: 0x1, def value: None
  uint8_t ___Source;

  /// @brief Field Replace, offset: 0x11, size: 0x1, def value: None
  uint8_t ___Replace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::Level2Map, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::Level2Map, ___Source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Globalization::Unicode::Level2Map, ___Replace) == 0x11, "Offset mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::Level2Map);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::Level2Map*, "Mono.Globalization.Unicode", "Level2Map");
