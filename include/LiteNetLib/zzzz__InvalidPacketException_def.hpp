#pragma once
// IWYU pragma private; include "LiteNetLib\InvalidPacketException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InvalidPacketException)
namespace System {
class Exception;
}
// Forward declare root types
namespace LiteNetLib {
class InvalidPacketException;
}
// Write type traits
MARK_REF_T(::LiteNetLib::InvalidPacketException*);
DEFINE_IL2CPP_CLASS(::LiteNetLib::InvalidPacketException*, "LiteNetLib", "InvalidPacketException");
// Dependencies System.ArgumentException
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.InvalidPacketException
class CORDL_TYPE InvalidPacketException : public ::System::ArgumentException {
public:
  // Declarations
  static inline ::LiteNetLib::InvalidPacketException* New_ctor();

  static inline ::LiteNetLib::InvalidPacketException* New_ctor(::StringW message);

  static inline ::LiteNetLib::InvalidPacketException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x589d9a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x589d9ac, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x589d9d0, size 0x24, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20058 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LiteNetLib::InvalidPacketException) == 0x98, "Size mismatch!");

} // namespace LiteNetLib
