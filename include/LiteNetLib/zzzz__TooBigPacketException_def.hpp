#pragma once
// IWYU pragma private; include "LiteNetLib\TooBigPacketException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__InvalidPacketException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TooBigPacketException)
namespace System {
class Exception;
}
// Forward declare root types
namespace LiteNetLib {
class TooBigPacketException;
}
// Write type traits
MARK_REF_T(::LiteNetLib::TooBigPacketException*);
DEFINE_IL2CPP_CLASS(::LiteNetLib::TooBigPacketException*, "LiteNetLib", "TooBigPacketException");
// Dependencies LiteNetLib.InvalidPacketException
namespace LiteNetLib {
// Is value type: false
// CS Name: LiteNetLib.TooBigPacketException
class CORDL_TYPE TooBigPacketException : public ::LiteNetLib::InvalidPacketException {
public:
  // Declarations
  static inline ::LiteNetLib::TooBigPacketException* New_ctor();

  static inline ::LiteNetLib::TooBigPacketException* New_ctor(::StringW message);

  static inline ::LiteNetLib::TooBigPacketException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x589d9f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x589d9fc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x589da20, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TooBigPacketException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TooBigPacketException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TooBigPacketException(TooBigPacketException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TooBigPacketException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TooBigPacketException(TooBigPacketException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20059 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LiteNetLib::TooBigPacketException) == 0x98, "Size mismatch!");

} // namespace LiteNetLib
