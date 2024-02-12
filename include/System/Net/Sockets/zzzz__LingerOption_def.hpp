#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LingerOption)
// Forward declare root types
namespace System::Net::Sockets {
class LingerOption;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::LingerOption);
// Type: System.Net.Sockets::LingerOption
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7351))
// CS Name: ::System.Net.Sockets::LingerOption*
class CORDL_TYPE LingerOption : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  /// @brief Field lingerTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_lingerTime, put = __cordl_internal_set_lingerTime)) int32_t lingerTime;

  __declspec(property(put = set_Enabled)) bool Enabled;

  __declspec(property(put = set_LingerTime)) int32_t LingerTime;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr void __cordl_internal_set_enabled(bool value);

  constexpr int32_t& __cordl_internal_get_lingerTime();

  constexpr int32_t const& __cordl_internal_get_lingerTime() const;

  constexpr void __cordl_internal_set_lingerTime(int32_t value);

  static inline ::System::Net::Sockets::LingerOption* New_ctor(bool enable, int32_t seconds);

  /// @brief Method .ctor, addr 0x2900c98, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool enable, int32_t seconds);

  /// @brief Method set_Enabled, addr 0x2900ccc, size 0xc, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

  /// @brief Method set_LingerTime, addr 0x2900cd8, size 0x8, virtual false, abstract: false, final false
  inline void set_LingerTime(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "LingerOption", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LingerOption(LingerOption&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LingerOption", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LingerOption(LingerOption const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LingerOption();

public:
  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field lingerTime, offset: 0x14, size: 0x4, def value: None
  int32_t ___lingerTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::LingerOption, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::LingerOption, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::LingerOption, ___lingerTime) == 0x14, "Offset mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::LingerOption);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::LingerOption*, "System.Net.Sockets", "LingerOption");
