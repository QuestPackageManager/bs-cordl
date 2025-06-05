#pragma once
// IWYU pragma private; include "System/Net/Sockets/LingerOption.hpp"
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
// Dependencies System.Object
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.LingerOption
class CORDL_TYPE LingerOption : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_Enabled)) bool Enabled;

  __declspec(property(put = set_LingerTime)) int32_t LingerTime;

  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  /// @brief Field lingerTime, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_lingerTime, put = __cordl_internal_set_lingerTime)) int32_t lingerTime;

  static inline ::System::Net::Sockets::LingerOption* New_ctor(bool enable, int32_t seconds);

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr int32_t const& __cordl_internal_get_lingerTime() const;

  constexpr int32_t& __cordl_internal_get_lingerTime();

  constexpr void __cordl_internal_set_enabled(bool value);

  constexpr void __cordl_internal_set_lingerTime(int32_t value);

  /// @brief Method .ctor, addr 0x44006c8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(bool enable, int32_t seconds);

  /// @brief Method set_Enabled, addr 0x44006fc, size 0xc, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

  /// @brief Method set_LingerTime, addr 0x4400708, size 0x8, virtual false, abstract: false, final false
  inline void set_LingerTime(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LingerOption();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LingerOption", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LingerOption(LingerOption&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LingerOption", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LingerOption(LingerOption const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9862 };

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  /// @brief Field lingerTime, offset: 0x14, size: 0x4, def value: None
  int32_t ___lingerTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::LingerOption, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::LingerOption, ___lingerTime) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::LingerOption, 0x18>, "Size mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::LingerOption);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::LingerOption*, "System.Net.Sockets", "LingerOption");
