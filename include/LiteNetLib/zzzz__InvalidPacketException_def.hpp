#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidPacketException)
namespace System {
class Exception;
}
// Forward declare root types
namespace LiteNetLib {
class InvalidPacketException;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::InvalidPacketException);
// Type: LiteNetLib::InvalidPacketException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// CS Name: ::LiteNetLib::InvalidPacketException*
class CORDL_TYPE InvalidPacketException : public ::System::ArgumentException {
public:
  // Declarations
  static inline ::LiteNetLib::InvalidPacketException* New_ctor();

  static inline ::LiteNetLib::InvalidPacketException* New_ctor(::StringW message);

  static inline ::LiteNetLib::InvalidPacketException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x25e122c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25e1234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25e123c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidPacketException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidPacketException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidPacketException(InvalidPacketException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidPacketException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidPacketException(InvalidPacketException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::InvalidPacketException, 0x98>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::InvalidPacketException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::InvalidPacketException*, "LiteNetLib", "InvalidPacketException");
