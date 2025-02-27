#pragma once
// IWYU pragma private; include "System/Net/Sockets/SendPacketsElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SendPacketsElement)
// Forward declare root types
namespace System::Net::Sockets {
class SendPacketsElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Sockets::SendPacketsElement);
// Dependencies System.Object
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.SendPacketsElement
class CORDL_TYPE SendPacketsElement : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Buffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Buffer, put = __cordl_internal_set_m_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_Buffer;

  /// @brief Field m_Count, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Count, put = __cordl_internal_set_m_Count)) int32_t m_Count;

  /// @brief Field m_FilePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FilePath, put = __cordl_internal_set_m_FilePath)) ::StringW m_FilePath;

  /// @brief Field m_Offset, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Offset, put = __cordl_internal_set_m_Offset)) int32_t m_Offset;

  /// @brief Field m_endOfPacket, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_endOfPacket, put = __cordl_internal_set_m_endOfPacket)) bool m_endOfPacket;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_Buffer();

  constexpr int32_t const& __cordl_internal_get_m_Count() const;

  constexpr int32_t& __cordl_internal_get_m_Count();

  constexpr ::StringW const& __cordl_internal_get_m_FilePath() const;

  constexpr ::StringW& __cordl_internal_get_m_FilePath();

  constexpr int32_t const& __cordl_internal_get_m_Offset() const;

  constexpr int32_t& __cordl_internal_get_m_Offset();

  constexpr bool const& __cordl_internal_get_m_endOfPacket() const;

  constexpr bool& __cordl_internal_get_m_endOfPacket();

  constexpr void __cordl_internal_set_m_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_Count(int32_t value);

  constexpr void __cordl_internal_set_m_FilePath(::StringW value);

  constexpr void __cordl_internal_set_m_Offset(int32_t value);

  constexpr void __cordl_internal_set_m_endOfPacket(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SendPacketsElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SendPacketsElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SendPacketsElement(SendPacketsElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SendPacketsElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SendPacketsElement(SendPacketsElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9867 };

  /// @brief Field m_FilePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_FilePath;

  /// @brief Field m_Buffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_Buffer;

  /// @brief Field m_Offset, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_Offset;

  /// @brief Field m_Count, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_Count;

  /// @brief Field m_endOfPacket, offset: 0x28, size: 0x1, def value: None
  bool ___m_endOfPacket;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::SendPacketsElement, ___m_FilePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SendPacketsElement, ___m_Buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SendPacketsElement, ___m_Offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SendPacketsElement, ___m_Count) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::SendPacketsElement, ___m_endOfPacket) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SendPacketsElement, 0x30>, "Size mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::System::Net::Sockets::SendPacketsElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SendPacketsElement*, "System.Net.Sockets", "SendPacketsElement");
