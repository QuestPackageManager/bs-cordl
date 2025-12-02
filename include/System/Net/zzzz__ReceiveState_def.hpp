#pragma once
// IWYU pragma private; include "System/Net/ReceiveState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiveState)
namespace System::Net {
class CommandStream;
}
namespace System::Net {
class ResponseDescription;
}
// Forward declare root types
namespace System::Net {
class ReceiveState;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ReceiveState);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ReceiveState
class CORDL_TYPE ReceiveState : public ::System::Object {
public:
  // Declarations
  /// @brief Field Buffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Connection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Connection, put = __cordl_internal_set_Connection)) ::System::Net::CommandStream* Connection;

  /// @brief Field Resp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Resp, put = __cordl_internal_set_Resp)) ::System::Net::ResponseDescription* Resp;

  /// @brief Field ValidThrough, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_ValidThrough, put = __cordl_internal_set_ValidThrough)) int32_t ValidThrough;

  static inline ::System::Net::ReceiveState* New_ctor(::System::Net::CommandStream* connection);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Buffer();

  constexpr ::System::Net::CommandStream* const& __cordl_internal_get_Connection() const;

  constexpr ::System::Net::CommandStream*& __cordl_internal_get_Connection();

  constexpr ::System::Net::ResponseDescription* const& __cordl_internal_get_Resp() const;

  constexpr ::System::Net::ResponseDescription*& __cordl_internal_get_Resp();

  constexpr int32_t const& __cordl_internal_get_ValidThrough() const;

  constexpr int32_t& __cordl_internal_get_ValidThrough();

  constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Connection(::System::Net::CommandStream* value);

  constexpr void __cordl_internal_set_Resp(::System::Net::ResponseDescription* value);

  constexpr void __cordl_internal_set_ValidThrough(int32_t value);

  /// @brief Method .ctor, addr 0x61e06e0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::CommandStream* connection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReceiveState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReceiveState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReceiveState(ReceiveState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReceiveState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReceiveState(ReceiveState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11433 };

  /// @brief Field Resp, offset: 0x10, size: 0x8, def value: None
  ::System::Net::ResponseDescription* ___Resp;

  /// @brief Field ValidThrough, offset: 0x18, size: 0x4, def value: None
  int32_t ___ValidThrough;

  /// @brief Field Buffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field Connection, offset: 0x28, size: 0x8, def value: None
  ::System::Net::CommandStream* ___Connection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ReceiveState, ___Resp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ReceiveState, ___ValidThrough) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ReceiveState, ___Buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ReceiveState, ___Connection) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::ReceiveState, 0x30>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ReceiveState);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ReceiveState*, "System.Net", "ReceiveState");
