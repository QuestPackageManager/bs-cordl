#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/zzzz__InvalidPacketException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TooBigPacketException)
namespace System {
class Exception;
}
// Forward declare root types
namespace LiteNetLib {
class TooBigPacketException;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::TooBigPacketException);
// Type: LiteNetLib::TooBigPacketException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14499))
// CS Name: ::LiteNetLib::TooBigPacketException*
class CORDL_TYPE TooBigPacketException : public ::LiteNetLib::InvalidPacketException {
public:
  // Declarations
  static inline ::LiteNetLib::TooBigPacketException* New_ctor();

  /// @brief Method .ctor addr 0x209a4f4 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::LiteNetLib::TooBigPacketException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x209a4fc size 0x8 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::LiteNetLib::TooBigPacketException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x209a504 size 0x8 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  // Ctor Parameters [CppParam { name: "", ty: "TooBigPacketException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TooBigPacketException(TooBigPacketException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TooBigPacketException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TooBigPacketException(TooBigPacketException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TooBigPacketException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::TooBigPacketException, 0x98>, "Size mismatch!");

} // namespace LiteNetLib
NEED_NO_BOX(::LiteNetLib::TooBigPacketException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::TooBigPacketException*, "LiteNetLib", "TooBigPacketException");
