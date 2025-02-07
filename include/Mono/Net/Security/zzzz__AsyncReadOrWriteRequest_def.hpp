#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncReadOrWriteRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReadOrWriteRequest)
namespace Mono::Net::Security {
class BufferOffsetSize;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncReadOrWriteRequest;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::AsyncReadOrWriteRequest);
// Dependencies Mono.Net.Security.AsyncProtocolRequest
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.AsyncReadOrWriteRequest
class CORDL_TYPE AsyncReadOrWriteRequest : public ::Mono::Net::Security::AsyncProtocolRequest {
public:
  // Declarations
  __declspec(property(get = get_CurrentSize, put = set_CurrentSize)) int32_t CurrentSize;

  __declspec(property(get = get_UserBuffer)) ::Mono::Net::Security::BufferOffsetSize* UserBuffer;

  /// @brief Field <CurrentSize>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__CurrentSize_k__BackingField, put = __cordl_internal_set__CurrentSize_k__BackingField)) int32_t _CurrentSize_k__BackingField;

  /// @brief Field <UserBuffer>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__UserBuffer_k__BackingField,
                      put = __cordl_internal_set__UserBuffer_k__BackingField)) ::Mono::Net::Security::BufferOffsetSize* _UserBuffer_k__BackingField;

  static inline ::Mono::Net::Security::AsyncReadOrWriteRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer,
                                                                         int32_t offset, int32_t size);

  /// @brief Method ToString, addr 0x41169e8, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get__CurrentSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__CurrentSize_k__BackingField();

  constexpr ::Mono::Net::Security::BufferOffsetSize* const& __cordl_internal_get__UserBuffer_k__BackingField() const;

  constexpr ::Mono::Net::Security::BufferOffsetSize*& __cordl_internal_get__UserBuffer_k__BackingField();

  constexpr void __cordl_internal_set__CurrentSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__UserBuffer_k__BackingField(::Mono::Net::Security::BufferOffsetSize* value);

  /// @brief Method .ctor, addr 0x411694c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method get_CurrentSize, addr 0x411693c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CurrentSize();

  /// @brief Method get_UserBuffer, addr 0x4116934, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Net::Security::BufferOffsetSize* get_UserBuffer();

  /// @brief Method set_CurrentSize, addr 0x4116944, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncReadOrWriteRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadOrWriteRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncReadOrWriteRequest(AsyncReadOrWriteRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadOrWriteRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncReadOrWriteRequest(AsyncReadOrWriteRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9143 };

  /// @brief Field <UserBuffer>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Mono::Net::Security::BufferOffsetSize* ____UserBuffer_k__BackingField;

  /// @brief Field <CurrentSize>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____CurrentSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::AsyncReadOrWriteRequest, ____UserBuffer_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::AsyncReadOrWriteRequest, ____CurrentSize_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncReadOrWriteRequest, 0x48>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::AsyncReadOrWriteRequest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncReadOrWriteRequest*, "Mono.Net.Security", "AsyncReadOrWriteRequest");
